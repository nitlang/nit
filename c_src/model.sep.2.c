#include "model.sep.0.h"
/* method model#MParameterType#resolve_for for (self: MParameterType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[MType] */;
val* var18 /* : Array[MType] */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
val* var_res /* var res: MType */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
val* var34 /* : MType */;
val* var_r2 /* var r2: MType */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
short int var_39 /* var : Bool */;
val* var40 /* : MClass */;
val* var42 /* : MClass */;
val* var43 /* : MClassKind */;
val* var45 /* : MClassKind */;
val* var46 /* : MClassKind */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : null */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MClass */;
val* var63 /* : MClass */;
val* var64 /* : MClassType */;
val* var66 /* : MClassType */;
short int var67 /* : Bool */;
val* var68 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
val* var72 /* : MType */;
val* var74 /* : MType */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
val* var78 /* : MClass */;
val* var80 /* : MClass */;
val* var81 /* : MClass */;
val* var83 /* : MClass */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : Array[MType] */;
val* var92 /* : Array[MType] */;
long var93 /* : Int */;
long var95 /* : Int */;
val* var96 /* : nullable Object */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
val* var100 /* : MType */;
val* var102 /* : MType */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
val* var106 /* : MClass */;
val* var108 /* : MClass */;
val* var109 /* : MClass */;
val* var111 /* : MClass */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : Array[MType] */;
val* var120 /* : Array[MType] */;
long var121 /* : Int */;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
val* var_res125 /* var res: MType */;
short int var126 /* : Bool */;
val* var127 /* : null */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : null */;
short int var135 /* : Bool */;
val* var136 /* : MType */;
val* var137 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var138 /* : MType */;
val* var_res139 /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = model__MParameterType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1313);
show_backtrace(1);
}
/* <var_mtype:MType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MGenericType)> */
var6 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MGenericType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var9 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var4,var7) on <var4:MClass> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClass> */
var15 = var4 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var2 = var10;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var18 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var21 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = array__Array___91d_93d(var16, var19);
}
var_res = var22;
var24 = NULL;
if (var_anchor == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var24) on <var_anchor:nullable MClassType> */
var_other28 = var24;
{
var30 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other28) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var29 = var30;
}
var31 = !var29;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var_32 = var25;
if (var25){
{
var33 = ((short int (*)(val*))(var_res->class->vft[COLOR_model__MType__need_anchor]))(var_res) /* need_anchor on <var_res:MType>*/;
}
var23 = var33;
} else {
var23 = var_32;
}
if (var23){
{
var34 = ((val* (*)(val*, val*, val*))(var_res->class->vft[COLOR_model__MType__anchor_to]))(var_res, var_mmodule, var_anchor) /* anchor_to on <var_res:MType>*/;
}
var_r2 = var34;
/* <var_r2:MType> isa MClassType */
cltype37 = type_model__MClassType.color;
idtype38 = type_model__MClassType.id;
if(cltype37 >= var_r2->type->table_size) {
var36 = 0;
} else {
var36 = var_r2->type->type_table[cltype37] == idtype38;
}
var_39 = var36;
if (var36){
{
{ /* Inline model#MClassType#mclass (var_r2) on <var_r2:MType(MClassType)> */
var42 = var_r2->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_r2:MType(MClassType)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var40) on <var40:MClass> */
var45 = var40->attrs[COLOR_model__MClass___kind].val; /* _kind on <var40:MClass> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var43,var46) on <var43:MClassKind> */
var_other = var46;
{
{ /* Inline kernel#Object#is_same_instance (var43,var_other) on <var43:MClassKind> */
var52 = var43 == var_other;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
var35 = var47;
} else {
var35 = var_39;
}
if (var35){
var = var_r2;
goto RET_LABEL;
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var53 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var53){
var54 = NULL;
if (var_anchor == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var54) on <var_anchor:nullable MClassType> */
var_other28 = var54;
{
var59 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other28) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var58 = var59;
}
var60 = !var58;
var56 = var60;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (unlikely(!var55)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1332);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var63 = var_anchor->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var61) on <var61:MClass> */
var66 = var61->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var61:MClass> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = 1;
{
var68 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var64, var_anchor, var_mmodule, var67) /* resolve_for on <var_mtype:MType>*/;
}
var_resolved_receiver = var68;
} else {
var_resolved_receiver = var_mtype;
}
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype70 = type_model__MNullableType.color;
idtype71 = type_model__MNullableType.id;
if(cltype70 >= var_resolved_receiver->type->table_size) {
var69 = 0;
} else {
var69 = var_resolved_receiver->type->type_table[cltype70] == idtype71;
}
if (var69){
{
{ /* Inline model#MNullableType#mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var74 = var_resolved_receiver->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_resolved_receiver = var72;
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MParameterType */
cltype76 = type_model__MParameterType.color;
idtype77 = type_model__MParameterType.id;
if(cltype76 >= var_resolved_receiver->type->table_size) {
var75 = 0;
} else {
var75 = var_resolved_receiver->type->type_table[cltype76] == idtype77;
}
if (var75){
{
{ /* Inline model#MParameterType#mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var80 = var_resolved_receiver->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MParameterType)> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1339);
show_backtrace(1);
} else {
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType> */
if (unlikely(var_anchor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var83 = var_anchor->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var78,var81) on <var78:MClass> */
var_other = var81;
{
{ /* Inline kernel#Object#is_same_instance (var78,var_other) on <var78:MClass> */
var89 = var78 == var_other;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (unlikely(!var84)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1339);
show_backtrace(1);
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1340);
show_backtrace(1);
} else {
{ /* Inline model#MClassType#arguments (var_anchor) on <var_anchor:nullable MClassType> */
if (unlikely(var_anchor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var92 = var_anchor->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_anchor:nullable MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var95 = var_resolved_receiver->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <var_resolved_receiver:nullable Object(MParameterType)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = array__Array___91d_93d(var90, var93);
}
var_resolved_receiver = var96;
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype98 = type_model__MNullableType.color;
idtype99 = type_model__MNullableType.id;
if(cltype98 >= var_resolved_receiver->type->table_size) {
var97 = 0;
} else {
var97 = var_resolved_receiver->type->type_table[cltype98] == idtype99;
}
if (var97){
{
{ /* Inline model#MNullableType#mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var102 = var_resolved_receiver->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_resolved_receiver = var100;
} else {
}
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MClassType */
cltype104 = type_model__MClassType.color;
idtype105 = type_model__MClassType.id;
if(cltype104 >= var_resolved_receiver->type->table_size) {
var103 = 0;
} else {
var103 = var_resolved_receiver->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1343);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MClassType)> */
var108 = var_resolved_receiver->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MClassType)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var111 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var106,var109) on <var106:MClass> */
var_other = var109;
{
{ /* Inline kernel#Object#is_same_instance (var106,var_other) on <var106:MClass> */
var117 = var106 == var_other;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
if (var112){
{
{ /* Inline model#MClassType#arguments (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MClassType)> */
var120 = var_resolved_receiver->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_resolved_receiver:nullable Object(MClassType)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var123 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = array__Array___91d_93d(var118, var121);
}
var_res125 = var124;
var = var_res125;
goto RET_LABEL;
} else {
}
{
var126 = ((short int (*)(val*))(var_resolved_receiver->class->vft[COLOR_model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:nullable Object(MClassType)>*/;
}
if (var126){
var127 = NULL;
if (var_anchor == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var127) on <var_anchor:nullable MClassType> */
var_other28 = var127;
{
var132 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other28) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var131 = var132;
}
var133 = !var131;
var129 = var133;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (unlikely(!var128)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1354);
show_backtrace(1);
}
var134 = NULL;
var135 = 0;
{
var136 = ((val* (*)(val*, val*, val*, val*, short int))(var_resolved_receiver->class->vft[COLOR_model__MType__resolve_for]))(var_resolved_receiver, var_anchor, var134, var_mmodule, var135) /* resolve_for on <var_resolved_receiver:nullable Object(MClassType)>*/;
}
var_resolved_receiver = var136;
} else {
}
{
var137 = model__MParameterType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var137;
{
var138 = ((val* (*)(val*, val*, val*, val*, short int))(var_verbatim_bound->class->vft[COLOR_model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
}
var_res139 = var138;
var = var_res139;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MParameterType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: MParameterType, MType, nullable MClassType, MModule): Bool */
short int model__MParameterType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
val* var10 /* : Set[MClassDef] */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
short int var17 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var1){
var2 = NULL;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var2) on <var_anchor:nullable MClassType> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_anchor->class->vft[COLOR_kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1370);
show_backtrace(1);
}
{
var9 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var9;
} else {
}
{
var10 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var_mmodule) /* collect_mclassdefs on <var_mtype:MType>*/;
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var13 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_model__MClass___intro].val; /* _intro on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__Collection__has]))(var10, var14) /* has on <var10:Set[MClassDef]>*/;
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MParameterType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MParameterType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameterType#init for (self: MParameterType, MClass, Int, String) */
void model__MParameterType__init(val* self, val* p0, long p1, val* p2) {
val* var_mclass /* var mclass: MClass */;
long var_rank /* var rank: Int */;
val* var_name /* var name: String */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MParameterType>*/;
}
var_mclass = p0;
var_rank = p1;
var_name = p2;
{
{ /* Inline model#MParameterType#mclass= (self,var_mclass) on <self:MParameterType> */
self->attrs[COLOR_model__MParameterType___mclass].val = var_mclass; /* _mclass on <self:MParameterType> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank= (self,var_rank) on <self:MParameterType> */
self->attrs[COLOR_model__MParameterType___rank].l = var_rank; /* _rank on <self:MParameterType> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MParameterType#name= (self,var_name) on <self:MParameterType> */
self->attrs[COLOR_model__MParameterType___name].val = var_name; /* _name on <self:MParameterType> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method model#MParameterType#init for (self: Object, MClass, Int, String) */
void VIRTUAL_model__MParameterType__init(val* self, val* p0, long p1, val* p2) {
model__MParameterType__init(self, p0, p1, p2); /* Direct call model#MParameterType#init on <self:Object(MParameterType)>*/
RET_LABEL:;
}
/* method model#MNullableType#mtype for (self: MNullableType): MType */
val* model__MNullableType__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#mtype for (self: Object): MType */
val* VIRTUAL_model__MNullableType__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline model#MNullableType#mtype (self) on <self:Object(MNullableType)> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:Object(MNullableType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#mtype= for (self: MNullableType, MType) */
void model__MNullableType__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullableType___mtype].val = p0; /* _mtype on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#mtype= for (self: Object, MType) */
void VIRTUAL_model__MNullableType__mtype_61d(val* self, val* p0) {
{ /* Inline model#MNullableType#mtype= (self,p0) on <self:Object(MNullableType)> */
self->attrs[COLOR_model__MNullableType___mtype].val = p0; /* _mtype on <self:Object(MNullableType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MNullableType#model for (self: MNullableType): Model */
val* model__MNullableType__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_model_base__MEntity__model]))(var1) /* model on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#model for (self: Object): Model */
val* VIRTUAL_model__MNullableType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MNullableType__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#init for (self: MNullableType, MType) */
void model__MNullableType__init(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MNullableType>*/;
}
var_mtype = p0;
{
{ /* Inline model#MNullableType#mtype= (self,var_mtype) on <self:MNullableType> */
self->attrs[COLOR_model__MNullableType___mtype].val = var_mtype; /* _mtype on <self:MNullableType> */
RET_LABEL1:(void)0;
}
}
if (varonce) {
var = varonce;
} else {
var2 = "nullable ";
var3 = 9;
var4 = string__NativeString__to_s_with_length(var2, var3);
var = var4;
varonce = var;
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
{ /* Inline model#MNullableType#to_s= (self,var8) on <self:MNullableType> */
self->attrs[COLOR_model__MNullableType___to_s].val = var8; /* _to_s on <self:MNullableType> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method model#MNullableType#init for (self: Object, MType) */
void VIRTUAL_model__MNullableType__init(val* self, val* p0) {
model__MNullableType__init(self, p0); /* Direct call model#MNullableType#init on <self:Object(MNullableType)>*/
RET_LABEL:;
}
/* method model#MNullableType#to_s for (self: MNullableType): String */
val* model__MNullableType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MNullableType___to_s].val; /* _to_s on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1399);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s for (self: Object): String */
val* VIRTUAL_model__MNullableType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MNullableType#to_s (self) on <self:Object(MNullableType)> */
var3 = self->attrs[COLOR_model__MNullableType___to_s].val; /* _to_s on <self:Object(MNullableType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1399);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s= for (self: MNullableType, String) */
void model__MNullableType__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullableType___to_s].val = p0; /* _to_s on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#to_s= for (self: Object, String) */
void VIRTUAL_model__MNullableType__to_s_61d(val* self, val* p0) {
{ /* Inline model#MNullableType#to_s= (self,p0) on <self:Object(MNullableType)> */
self->attrs[COLOR_model__MNullableType___to_s].val = p0; /* _to_s on <self:Object(MNullableType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MNullableType#need_anchor for (self: MNullableType): Bool */
short int model__MNullableType__need_anchor(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*))(var1->class->vft[COLOR_model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MNullableType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullableType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_nullable for (self: MNullableType): MType */
val* model__MNullableType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MNullableType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_notnullable for (self: MNullableType): MType */
val* model__MNullableType__as_notnullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
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
/* method model#MNullableType#as_notnullable for (self: Object): MType */
val* VIRTUAL_model__MNullableType__as_notnullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__as_notnullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#resolve_for for (self: MNullableType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MNullableType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_res /* var res: MType */;
val* var5 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*, val*, val*, val*, short int))(var1->class->vft[COLOR_model__MType__resolve_for]))(var1, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var1:MType>*/;
}
var_res = var4;
{
var5 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType>*/;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MNullableType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullableType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: MNullableType, MType, nullable MClassType, MModule): Bool */
short int model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullableType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: MNullableType): Int */
long model__MNullableType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
val* var3 /* : MType */;
long var4 /* : Int */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val*))(var1->class->vft[COLOR_model__MType__length]))(var1) /* length on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: Object): Int */
long VIRTUAL_model__MNullableType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MNullableType__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: MNullableType, MModule): Set[MClassDef] */
val* model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassDef] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1421);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclassdefs]))(var3, var_mmodule) /* collect_mclassdefs on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullableType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: MNullableType, MModule): Set[MClass] */
val* model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClass] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1427);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclasses]))(var3, var_mmodule) /* collect_mclasses on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullableType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: MNullableType, MModule): Set[MClassType] */
val* model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassType] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1433);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mtypes]))(var3, var_mmodule) /* collect_mtypes on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullableType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: MNullType): Model */
val* model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1443);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: Object): Model */
val* VIRTUAL_model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
val* var3 /* : Model */;
{ /* Inline model#MNullType#model (self) on <self:Object(MNullType)> */
var3 = self->attrs[COLOR_model__MNullType___model].val; /* _model on <self:Object(MNullType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1443);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model= for (self: MNullType, Model) */
void model__MNullType__model_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullType___model].val = p0; /* _model on <self:MNullType> */
RET_LABEL:;
}
/* method model#MNullType#model= for (self: Object, Model) */
void VIRTUAL_model__MNullType__model_61d(val* self, val* p0) {
{ /* Inline model#MNullType#model= (self,p0) on <self:Object(MNullType)> */
self->attrs[COLOR_model__MNullType___model].val = p0; /* _model on <self:Object(MNullType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MNullType#init for (self: MNullType, Model) */
void model__MNullType__init(val* self, val* p0) {
val* var_model /* var model: Model */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MNullType>*/;
}
var_model = p0;
{
{ /* Inline model#MNullType#model= (self,var_model) on <self:MNullType> */
self->attrs[COLOR_model__MNullType___model].val = var_model; /* _model on <self:MNullType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method model#MNullType#init for (self: Object, Model) */
void VIRTUAL_model__MNullType__init(val* self, val* p0) {
model__MNullType__init(self, p0); /* Direct call model#MNullType#init on <self:Object(MNullType)>*/
RET_LABEL:;
}
/* method model#MNullType#to_s for (self: MNullType): String */
val* model__MNullType__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "null";
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
/* method model#MNullType#to_s for (self: Object): String */
val* VIRTUAL_model__MNullType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MNullType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: MNullType): MType */
val* model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: MNullType): Bool */
short int model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassDef);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[MClassDef]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: MSignature): Array[MParameter] */
val* model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: Object): Array[MParameter] */
val* VIRTUAL_model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
{ /* Inline model#MSignature#mparameters (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:Object(MSignature)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters= for (self: MSignature, Array[MParameter]) */
void model__MSignature__mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___mparameters].val = p0; /* _mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#mparameters= for (self: Object, Array[MParameter]) */
void VIRTUAL_model__MSignature__mparameters_61d(val* self, val* p0) {
{ /* Inline model#MSignature#mparameters= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___mparameters].val = p0; /* _mparameters on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#return_mtype for (self: MSignature): nullable MType */
val* model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MSignature#return_mtype (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:Object(MSignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype= for (self: MSignature, nullable MType) */
void model__MSignature__return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#return_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MSignature__return_mtype_61d(val* self, val* p0) {
{ /* Inline model#MSignature#return_mtype= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#length for (self: MSignature): Int */
long model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : nullable MType */;
val* var4 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
val* var17 /* : Array[MParameter] */;
val* var19 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var20 /* : ArrayIterator[nullable Object] */;
val* var_21 /* var : ArrayIterator[MParameter] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var24 /* : MType */;
val* var26 /* : MType */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
var1 = 1;
var_res = var1;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_t = var2;
var5 = NULL;
if (var_t == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,var5) on <var_t:nullable MType> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable MType(MType)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var12 = ((long (*)(val*))(var_t->class->vft[COLOR_model__MType__length]))(var_t) /* length on <var_t:nullable MType(MType)>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var12) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var16 = var_res + var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_res = var13;
} else {
}
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var19 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
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
var_p = var23;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var26 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long (*)(val*))(var24->class->vft[COLOR_model__MType__length]))(var24) /* length on <var24:MType>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var27) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var34 = var_res + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_res = var28;
{
array__ArrayIterator__next(var_21); /* Direct call array#ArrayIterator#next on <var_21:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:ArrayIterator[MParameter]> */
RET_LABEL35:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#length for (self: Object): Int */
long VIRTUAL_model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#init for (self: MSignature, Array[MParameter], nullable MType) */
void model__MSignature__init(val* self, val* p0, val* p1) {
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var_return_mtype /* var return_mtype: nullable MType */;
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_ /* var : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MSignature>*/;
}
var_mparameters = p0;
var_return_mtype = p1;
var = 1;
{
{ /* Inline kernel#Int#unary - (var) on <var:Int> */
var3 = -var;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_vararg_rank = var1;
var4 = 0;
var_i = var4;
{
{ /* Inline array#AbstractArrayRead#length (var_mparameters) on <var_mparameters:Array[MParameter]> */
var7 = var_mparameters->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mparameters:Array[MParameter]> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var10 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var11 = var_i < var_;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var12 = array__Array___91d_93d(var_mparameters, var_i);
}
var_parameter = var12;
{
{ /* Inline model#MParameter#is_vararg (var_parameter) on <var_parameter:MParameter> */
var15 = var_parameter->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <var_parameter:MParameter> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
var16 = 1;
{
{ /* Inline kernel#Int#unary - (var16) on <var16:Int> */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var17) on <var_vararg_rank:Int> */
var23 = var_vararg_rank == var17;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1501);
show_backtrace(1);
}
var_vararg_rank = var_i;
} else {
}
var24 = 1;
{
var25 = kernel__Int__successor(var_i, var24);
}
var_i = var25;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#mparameters= (self,var_mparameters) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___mparameters].val = var_mparameters; /* _mparameters on <self:MSignature> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype= (self,var_return_mtype) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___return_mtype].val = var_return_mtype; /* _return_mtype on <self:MSignature> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank= (self,var_vararg_rank) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___vararg_rank].l = var_vararg_rank; /* _vararg_rank on <self:MSignature> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method model#MSignature#init for (self: Object, Array[MParameter], nullable MType) */
void VIRTUAL_model__MSignature__init(val* self, val* p0, val* p1) {
model__MSignature__init(self, p0, p1); /* Direct call model#MSignature#init on <self:Object(MSignature)>*/
RET_LABEL:;
}
/* method model#MSignature#vararg_rank for (self: MSignature): Int */
long model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank for (self: Object): Int */
long VIRTUAL_model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline model#MSignature#vararg_rank (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <self:Object(MSignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank= for (self: MSignature, Int) */
void model__MSignature__vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#vararg_rank= for (self: Object, Int) */
void VIRTUAL_model__MSignature__vararg_rank_61d(val* self, long p0) {
{ /* Inline model#MSignature#vararg_rank= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#arity for (self: MSignature): Int */
long model__MSignature__arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var3 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[MParameter]> */
var6 = var1->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var1:Array[MParameter]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#arity for (self: Object): Int */
long VIRTUAL_model__MSignature__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__arity(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: MSignature): String */
val* model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : Array[MParameter] */;
val* var4 /* : Array[MParameter] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
long var11 /* : Int */;
long var_i /* var i: Int */;
val* var12 /* : Array[MParameter] */;
val* var14 /* : Array[MParameter] */;
long var15 /* : Int */;
long var17 /* : Int */;
long var_ /* var : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
val* var22 /* : Array[MParameter] */;
val* var24 /* : Array[MParameter] */;
val* var25 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : MType */;
val* var49 /* : MType */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
long var59 /* : Int */;
long var60 /* : Int */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : nullable MType */;
val* var68 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var69 /* : null */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
var_b = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__is_empty(var2);
}
var6 = !var5;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "(";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
string__FlatBuffer__append(var_b, var7); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
var11 = 0;
var_i = var11;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var14 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var12) on <var12:Array[MParameter]> */
var17 = var12->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var12:Array[MParameter]> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ = var15;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var20 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var21 = var_i < var_;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var24 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = array__Array___91d_93d(var22, var_i);
}
var_mparameter = var25;
var26 = 0;
{
{ /* Inline kernel#Int#> (var_i,var26) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var33 = var_i > var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
if (varonce34) {
var35 = varonce34;
} else {
var36 = ", ";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
string__FlatBuffer__append(var_b, var35); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MParameter#name (var_mparameter) on <var_mparameter:MParameter> */
var41 = var_mparameter->attrs[COLOR_model__MParameter___name].val; /* _name on <var_mparameter:MParameter> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
string__FlatBuffer__append(var_b, var39); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = ": ";
var45 = 2;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
string__FlatBuffer__append(var_b, var43); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var49 = var_mparameter->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:MType>*/;
}
{
string__FlatBuffer__append(var_b, var50); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#is_vararg (var_mparameter) on <var_mparameter:MParameter> */
var53 = var_mparameter->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <var_mparameter:MParameter> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "...";
var57 = 3;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
string__FlatBuffer__append(var_b, var55); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
var59 = 1;
{
var60 = kernel__Int__successor(var_i, var59);
}
var_i = var60;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce61) {
var62 = varonce61;
} else {
var63 = ")";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
string__FlatBuffer__append(var_b, var62); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var68 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_ret = var66;
var69 = NULL;
if (var_ret == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var69) on <var_ret:nullable MType> */
var_other = var69;
{
var74 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var73 = var74;
}
var75 = !var73;
var71 = var75;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
if (varonce76) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = 2;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
string__FlatBuffer__append(var_b, var77); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
var81 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
{
string__FlatBuffer__append(var_b, var81); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
var82 = string__FlatBuffer__to_s(var_b);
}
var = var82;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: Object): String */
val* VIRTUAL_model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MSignature__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MSignature */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var2 /* : Array[MParameter] */;
val* var4 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[MParameter] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var9 /* : MParameter */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MType */;
val* var22 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[MParameter]>*/;
}
var_params = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = array__AbstractArrayRead__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var_6);
}
if (var7){
{
var8 = array__ArrayIterator__item(var_6);
}
var_p = var8;
{
var9 = model__MParameter__resolve_for(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual);
}
{
array__Array__add(var_params, var9); /* Direct call array#Array#add on <var_params:Array[MParameter]>*/
}
{
array__ArrayIterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[MParameter]> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var13 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ret = var11;
var14 = NULL;
if (var_ret == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var14) on <var_ret:nullable MType> */
var_other = var14;
{
var19 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var18 = var19;
}
var20 = !var18;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
var21 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var21;
} else {
}
var22 = NEW_model__MSignature(&type_model__MSignature);
{
model__MSignature__init(var22, var_params, var_ret); /* Direct call model#MSignature#init on <var22:MSignature>*/
}
var_res = var22;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MSignature */;
var1 = model__MSignature__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: MParameter): String */
val* model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: Object): String */
val* VIRTUAL_model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MParameter#name (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:Object(MParameter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name= for (self: MParameter, String) */
void model__MParameter__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___name].val = p0; /* _name on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#name= for (self: Object, String) */
void VIRTUAL_model__MParameter__name_61d(val* self, val* p0) {
{ /* Inline model#MParameter#name= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___name].val = p0; /* _name on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#mtype for (self: MParameter): MType */
val* model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype for (self: Object): MType */
val* VIRTUAL_model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline model#MParameter#mtype (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:Object(MParameter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype= for (self: MParameter, MType) */
void model__MParameter__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___mtype].val = p0; /* _mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#mtype= for (self: Object, MType) */
void VIRTUAL_model__MParameter__mtype_61d(val* self, val* p0) {
{ /* Inline model#MParameter#mtype= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___mtype].val = p0; /* _mtype on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#is_vararg for (self: MParameter): Bool */
short int model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg for (self: Object): Bool */
short int VIRTUAL_model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MParameter#is_vararg (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:Object(MParameter)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg= for (self: MParameter, Bool) */
void model__MParameter__is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_vararg= for (self: Object, Bool) */
void VIRTUAL_model__MParameter__is_vararg_61d(val* self, short int p0) {
{ /* Inline model#MParameter#is_vararg= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#init for (self: MParameter, String, MType, Bool) */
void model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
short int var_is_vararg /* var is_vararg: Bool */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MParameter>*/;
}
var_name = p0;
var_mtype = p1;
var_is_vararg = p2;
{
{ /* Inline model#MParameter#name= (self,var_name) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___name].val = var_name; /* _name on <self:MParameter> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype= (self,var_mtype) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___mtype].val = var_mtype; /* _mtype on <self:MParameter> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg= (self,var_is_vararg) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___is_vararg].s = var_is_vararg; /* _is_vararg on <self:MParameter> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method model#MParameter#init for (self: Object, String, MType, Bool) */
void VIRTUAL_model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
model__MParameter__init(self, p0, p1, p2); /* Direct call model#MParameter#init on <self:Object(MParameter)>*/
RET_LABEL:;
}
/* method model#MParameter#to_s for (self: MParameter): String */
val* model__MParameter__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : MType */;
val* var13 /* : MType */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
{
{ /* Inline model#MParameter#is_vararg (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var6 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = ": ";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var13 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "...";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 4;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var15;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var = var22;
goto RET_LABEL;
} else {
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var25 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ": ";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var33 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
var = var37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#MParameter#to_s for (self: Object): String */
val* VIRTUAL_model__MParameter__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MParameter__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var8 /* : MType */;
val* var9 /* : MType */;
val* var_newtype /* var newtype: MType */;
val* var10 /* : MParameter */;
val* var11 /* : String */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var_res /* var res: MParameter */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*))(var1->class->vft[COLOR_model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
}
var5 = !var4;
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var8 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var6->class->vft[COLOR_model__MType__resolve_for]))(var6, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var6:MType>*/;
}
var_newtype = var9;
var10 = NEW_model__MParameter(&type_model__MParameter);
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var13 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg (self) on <self:MParameter> */
var16 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
model__MParameter__init(var10, var11, var_newtype, var14); /* Direct call model#MParameter#init on <var10:MParameter>*/
}
var_res = var10;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MParameter */
val* VIRTUAL_model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var1 /* : MParameter */;
var1 = model__MParameter__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: MParameter): Model */
val* model__MParameter__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_model_base__MEntity__model]))(var1) /* model on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: Object): Model */
val* VIRTUAL_model__MParameter__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MParameter__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef for (self: MProperty): MClassDef */
val* model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef= for (self: MProperty, MClassDef) */
void model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
{ /* Inline model#MProperty#intro_mclassdef= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#name for (self: MProperty): String */
val* model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name for (self: Object): String */
val* VIRTUAL_model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MProperty#name (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name= for (self: MProperty, String) */
void model__MProperty__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___name].val = p0; /* _name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#name= for (self: Object, String) */
void VIRTUAL_model__MProperty__name_61d(val* self, val* p0) {
{ /* Inline model#MProperty#name= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___name].val = p0; /* _name on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#full_name for (self: MProperty): String */
val* model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var1) on <var1:MClassDef> */
var6 = var1->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var1:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = mmodule__MModule__full_name(var4);
}
if (varonce) {
var8 = varonce;
} else {
var9 = "::";
var10 = 2;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var14 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClass#name (var15) on <var15:MClass> */
var20 = var15->attrs[COLOR_model__MClass___name].val; /* _name on <var15:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "::";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var28 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var22;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var26;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#full_name for (self: Object): String */
val* VIRTUAL_model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: MProperty): MVisibility */
val* model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: Object): MVisibility */
val* VIRTUAL_model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
val* var3 /* : MVisibility */;
{ /* Inline model#MProperty#visibility (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility= for (self: MProperty, MVisibility) */
void model__MProperty__visibility_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___visibility].val = p0; /* _visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#visibility= for (self: Object, MVisibility) */
void VIRTUAL_model__MProperty__visibility_61d(val* self, val* p0) {
{ /* Inline model#MProperty#visibility= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___visibility].val = p0; /* _visibility on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#init for (self: MProperty, MClassDef, String, MVisibility) */
void model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
val* var /* : Array[MProperty] */;
val* var5 /* : Array[MProperty] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : Model */;
val* var11 /* : Model */;
val* var_model /* var model: Model */;
val* var12 /* : MultiHashMap[String, MProperty] */;
val* var14 /* : MultiHashMap[String, MProperty] */;
val* var15 /* : Array[MProperty] */;
val* var17 /* : Array[MProperty] */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MProperty>*/;
}
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
{ /* Inline model#MProperty#intro_mclassdef= (self,var_intro_mclassdef) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = var_intro_mclassdef; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MProperty#name= (self,var_name) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___name].val = var_name; /* _name on <self:MProperty> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility= (self,var_visibility) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___visibility].val = var_visibility; /* _visibility on <self:MProperty> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var5 = var_intro_mclassdef->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_intro_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 588);
show_backtrace(1);
}
var = var5;
RET_LABEL4:(void)0;
}
}
{
array__Array__add(var, self); /* Direct call array#Array#add on <var:Array[MProperty]>*/
}
{
{ /* Inline model#MClassDef#mmodule (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var8 = var_intro_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intro_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var6) on <var6:MModule> */
var11 = var6->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var6:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_model = var9;
{
{ /* Inline model#Model#mproperties_by_name (var_model) on <var_model:Model> */
var14 = var_model->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <var_model:Model> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 84);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
more_collections__MultiHashMap__add_one(var12, var_name, self); /* Direct call more_collections#MultiHashMap#add_one on <var12:MultiHashMap[String, MProperty]>*/
}
{
{ /* Inline model#Model#mproperties (var_model) on <var_model:Model> */
var17 = var_model->attrs[COLOR_model__Model___mproperties].val; /* _mproperties on <var_model:Model> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 37);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
array__Array__add(var15, self); /* Direct call array#Array#add on <var15:Array[MProperty]>*/
}
RET_LABEL:;
}
/* method model#MProperty#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:Object(MProperty)>*/
RET_LABEL:;
}
/* method model#MProperty#mpropdefs for (self: MProperty): Array[MPropDef] */
val* model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#mpropdefs for (self: Object): Array[MPropDef] */
val* VIRTUAL_model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
val* var3 /* : Array[MPropDef] */;
{ /* Inline model#MProperty#mpropdefs (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: MProperty): MPropDef */
val* model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: Object): MPropDef */
val* VIRTUAL_model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
{ /* Inline model#MProperty#intro (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___intro].val; /* _intro on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro= for (self: MProperty, MPropDef) */
void model__MProperty__intro_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (intro) <p0:MPropDef> isa MPROPDEF */
/* <p0:MPropDef> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_model__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
self->attrs[COLOR_model__MProperty___intro].val = p0; /* _intro on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#intro= for (self: Object, MPropDef) */
void VIRTUAL_model__MProperty__intro_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline model#MProperty#intro= (self,p0) on <self:Object(MProperty)> */
/* Covariant cast for argument 0 (intro) <p0:MPropDef> isa MPROPDEF */
/* <p0:MPropDef> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_model__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
self->attrs[COLOR_model__MProperty___intro].val = p0; /* _intro on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#model for (self: MProperty): Model */
val* model__MProperty__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : Model */;
{
{ /* Inline model#MProperty#intro (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MPropDef__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#model for (self: Object): Model */
val* VIRTUAL_model__MProperty__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MProperty__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: MProperty): String */
val* model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
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
/* method model#MProperty#to_s for (self: Object): String */
val* VIRTUAL_model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var6 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var7 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var16 /* : Array[MPropDef] */;
val* var18 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MPropDef] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var23 /* : POSetElement[MModule] */;
val* var25 /* : POSetElement[MModule] */;
val* var26 /* : MClassDef */;
val* var28 /* : MClassDef */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : null */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MClassType */;
val* var40 /* : MClassType */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var52 /* : Bool */;
val* var53 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var55 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var56 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1668);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1695);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections__HashMap2___91d_93d(var4, var_mmodule, var_mtype);
}
var_cache = var7;
var8 = NULL;
if (var_cache == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var8) on <var_cache:nullable Array[MPropDef]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_cache;
goto RET_LABEL;
} else {
}
var15 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
((void (*)(val*))(var15->class->vft[COLOR_kernel__Object__init]))(var15) /* init on <var15:Array[MPropDef]>*/;
}
var_candidates = var15;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var18 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = array__AbstractArrayRead__iterator(var_);
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
var_mpropdef = var22;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var25 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var28 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var26) on <var26:MClassDef> */
var31 = var26->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var26:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset__POSetElement___60d_61d(var23, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label;
} else {
}
var34 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var37 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = model__MType__is_subtype(var_mtype, var_mmodule, var34, var38);
}
var42 = !var41;
if (var42){
goto BREAK_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[MPropDef]> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidates) on <var_candidates:Array[MPropDef]> */
var47 = var_candidates->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = 1;
{
{ /* Inline kernel#Int#<= (var45,var48) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var52 = var45 <= var48;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var55 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1695);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var53, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var53:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var56 = model__MProperty__select_most_specific(self, var_mmodule, var_candidates);
}
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1695);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1695);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var5 /* : Array[MPropDef] */;
val* var7 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[MPropDef] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var12 /* : POSetElement[MModule] */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : null */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MClassType */;
val* var38 /* : MClassType */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var_45 /* var : Bool */;
val* var46 /* : MClassDef */;
val* var48 /* : MClassDef */;
val* var49 /* : MModule */;
val* var51 /* : MModule */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
long var60 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var67 /* : Bool */;
val* var68 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1707);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
var4 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[MPropDef]>*/;
}
var_candidates = var4;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var7 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = array__AbstractArrayRead__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var_9);
}
if (var10){
{
var11 = array__ArrayIterator__item(var_9);
}
var_mpropdef = var11;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var17 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset__POSetElement___60d_61d(var12, var18);
}
var22 = !var21;
if (var22){
goto BREAK_label;
} else {
}
var23 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var26 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = model__MType__is_subtype(var_mtype, var_mmodule, var23, var27);
}
var31 = !var30;
if (var31){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var35 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mtype,var36) on <var_mtype:MType> */
var_other = var36;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:MType> */
var44 = var_mtype == var_other;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
var_45 = var39;
if (var39){
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var48 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var46) on <var46:MClassDef> */
var51 = var46->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var46:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmodule,var49) on <var_mmodule:MModule> */
var_other = var49;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
var57 = var_mmodule == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
var32 = var52;
} else {
var32 = var_45;
}
if (var32){
goto BREAK_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:ArrayIterator[MPropDef]> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidates) on <var_candidates:Array[MPropDef]> */
var62 = var_candidates->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = 1;
{
{ /* Inline kernel#Int#<= (var60,var63) on <var60:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var66 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var67 = var60 <= var63;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var68 = model__MProperty__select_most_specific(self, var_mmodule, var_candidates);
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_super_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: MProperty, MModule, Array[MPropDef]): Array[MPropDef] */
val* model__MProperty__select_most_specific(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_res /* var res: Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : ArrayIterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var13 /* : Bool */;
short int var_keep /* var keep: Bool */;
val* var_14 /* var : Array[MPropDef] */;
val* var15 /* : ArrayIterator[nullable Object] */;
val* var_16 /* var : ArrayIterator[MPropDef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var31 /* : MClassType */;
val* var33 /* : MClassType */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : POSetElement[MModule] */;
val* var48 /* : POSetElement[MModule] */;
val* var49 /* : MModule */;
val* var51 /* : MModule */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MClassType */;
val* var58 /* : MClassType */;
val* var59 /* : null */;
val* var60 /* : MClassType */;
val* var62 /* : MClassType */;
short int var63 /* : Bool */;
short int var_64 /* var : Bool */;
val* var65 /* : MClassType */;
val* var67 /* : MClassType */;
val* var68 /* : MClassType */;
val* var70 /* : MClassType */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var_other74 /* var other: nullable Object */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var82 /* : Bool */;
static val* varonce;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : String */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
/* Covariant cast for argument 1 (candidates) <p1:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p1:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[MPROPDEF]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1729);
show_backtrace(1);
}
var_mmodule = p0;
var_candidates = p1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[MPropDef]>*/;
}
var_res = var2;
var_ = var_candidates;
{
var3 = array__AbstractArrayRead__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = array__ArrayIterator__is_ok(var_4);
}
if (var5){
{
var6 = array__ArrayIterator__item(var_4);
}
var_pd1 = var6;
{
{ /* Inline model#MPropDef#mclassdef (var_pd1) on <var_pd1:MPropDef> */
var9 = var_pd1->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd1:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_cd1 = var7;
{
{ /* Inline model#MClassDef#mclass (var_cd1) on <var_cd1:MClassDef> */
var12 = var_cd1->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd1:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_c1 = var10;
var13 = 1;
var_keep = var13;
var_14 = var_candidates;
{
var15 = array__AbstractArrayRead__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = array__ArrayIterator__is_ok(var_16);
}
if (var17){
{
var18 = array__ArrayIterator__item(var_16);
}
var_pd2 = var18;
{
{ /* Inline kernel#Object#== (var_pd2,var_pd1) on <var_pd2:MPropDef> */
var_other = var_pd1;
{
{ /* Inline kernel#Object#is_same_instance (var_pd2,var_other) on <var_pd2:MPropDef> */
var24 = var_pd2 == var_other;
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
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_pd2) on <var_pd2:MPropDef> */
var27 = var_pd2->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd2:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_cd2 = var25;
{
{ /* Inline model#MClassDef#mclass (var_cd2) on <var_cd2:MClassDef> */
var30 = var_cd2->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd2:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_c2 = var28;
{
{ /* Inline model#MClass#mclass_type (var_c2) on <var_c2:MClass> */
var33 = var_c2->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c2:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c1) on <var_c1:MClass> */
var36 = var_c1->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c1:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var31,var34) on <var31:MClassType> */
var_other = var34;
{
{ /* Inline kernel#Object#is_same_instance (var31,var_other) on <var31:MClassType> */
var42 = var31 == var_other;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline model#MClassDef#mmodule (var_cd2) on <var_cd2:MClassDef> */
var45 = var_cd2->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_cd2:MClassDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var43) on <var43:MModule> */
var48 = var43->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var43:MModule> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_cd1) on <var_cd1:MClassDef> */
var51 = var_cd1->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_cd1:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = poset__POSetElement___60d(var46, var49);
}
if (var52){
var53 = 0;
var_keep = var53;
goto BREAK_label54;
} else {
}
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var58 = var_cd2->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = NULL;
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var62 = var_cd1->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = model__MType__is_subtype(var56, var_mmodule, var59, var60);
}
var_64 = var63;
if (var63){
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var67 = var_cd2->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var70 = var_cd1->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var65,var68) on <var65:MClassType> */
var_other74 = var68;
{
var76 = ((short int (*)(val*, val*))(var65->class->vft[COLOR_kernel__Object___61d_61d]))(var65, var_other74) /* == on <var65:MClassType>*/;
var75 = var76;
}
var77 = !var75;
var72 = var77;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
var55 = var71;
} else {
var55 = var_64;
}
if (var55){
var78 = 0;
var_keep = var78;
goto BREAK_label54;
} else {
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_16); /* Direct call array#ArrayIterator#next on <var_16:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:ArrayIterator[MPropDef]> */
RET_LABEL79:(void)0;
}
}
if (var_keep){
{
array__Array__add(var_res, var_pd1); /* Direct call array#Array#add on <var_res:Array[MPropDef]>*/
}
} else {
}
{
array__ArrayIterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label80;
}
}
BREAK_label80: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:ArrayIterator[MPropDef]> */
RET_LABEL81:(void)0;
}
}
{
var82 = array__AbstractArrayRead__is_empty(var_res);
}
if (var82){
if (varonce) {
var83 = varonce;
} else {
var84 = "All lost! ";
var85 = 10;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = ", ";
var90 = 2;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
var92 = string__Collection__join(var_candidates, var88);
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 2;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var92;
{
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
}
{
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
}
{
file__Object__print(self, var96); /* Direct call file#Object#print on <self:MProperty>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: Object, MModule, Array[MPropDef]): Array[MPropDef] */
val* VIRTUAL_model__MProperty__select_most_specific(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__select_most_specific(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
val* var2 /* : Array[MPropDef] */;
val* var3 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = model__MType__has_mproperty(var_mtype, var_mmodule, self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1776);
show_backtrace(1);
}
{
var2 = model__MProperty__lookup_all_definitions(self, var_mmodule, var_mtype);
}
{
var3 = abstract_collection__SequenceRead__first(var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MProperty__lookup_first_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var6 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var7 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var16 /* : Array[MPropDef] */;
val* var18 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MPropDef] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var23 /* : POSetElement[MModule] */;
val* var25 /* : POSetElement[MModule] */;
val* var26 /* : MClassDef */;
val* var28 /* : MClassDef */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : null */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MClassType */;
val* var40 /* : MClassType */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var52 /* : Bool */;
val* var53 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var55 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var56 /* : Array[nullable Object] */;
val* var57 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var59 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1784);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1813);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections__HashMap2___91d_93d(var4, var_mmodule, var_mtype);
}
var_cache = var7;
var8 = NULL;
if (var_cache == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var8) on <var_cache:nullable Array[MPropDef]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_cache;
goto RET_LABEL;
} else {
}
var15 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
((void (*)(val*))(var15->class->vft[COLOR_kernel__Object__init]))(var15) /* init on <var15:Array[MPropDef]>*/;
}
var_candidates = var15;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var18 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = array__AbstractArrayRead__iterator(var_);
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
var_mpropdef = var22;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var25 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var28 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var26) on <var26:MClassDef> */
var31 = var26->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var26:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset__POSetElement___60d_61d(var23, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label;
} else {
}
var34 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var37 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = model__MType__is_subtype(var_mtype, var_mmodule, var34, var38);
}
var42 = !var41;
if (var42){
goto BREAK_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[MPropDef]> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidates) on <var_candidates:Array[MPropDef]> */
var47 = var_candidates->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = 1;
{
{ /* Inline kernel#Int#<= (var45,var48) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var52 = var45 <= var48;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var55 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1813);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var53, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var53:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
model__MModule__linearize_mpropdefs(var_mmodule, var_candidates); /* Direct call model#MModule#linearize_mpropdefs on <var_mmodule:MModule>*/
}
{
var56 = array__AbstractArrayRead__reversed(var_candidates);
}
var_candidates = var56;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var59 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1813);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var57, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var57:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_all_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1813);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1813);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#init for (self: MMethod, MClassDef, String, MVisibility) */
void model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MMethod>*/
}
RET_LABEL:;
}
/* method model#MMethod#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
model__MMethod__init(self, p0, p1, p2); /* Direct call model#MMethod#init on <self:Object(MMethod)>*/
RET_LABEL:;
}
/* method model#MMethod#is_toplevel for (self: MMethod): Bool */
short int model__MMethod__is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_toplevel (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel= for (self: MMethod, Bool) */
void model__MMethod__is_toplevel_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_toplevel= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_toplevel_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_toplevel= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_init for (self: MMethod): Bool */
short int model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_init (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init= for (self: MMethod, Bool) */
void model__MMethod__is_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_init].s = p0; /* _is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_init_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_init= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_init].s = p0; /* _is_init on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_root_init for (self: MMethod): Bool */
short int model__MMethod__is_root_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_root_init for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_root_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_root_init (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_root_init= for (self: MMethod, Bool) */
void model__MMethod__is_root_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_root_init].s = p0; /* _is_root_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_root_init= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_root_init_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_root_init= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_root_init].s = p0; /* _is_root_init on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_new for (self: MMethod): Bool */
short int model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_new (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new= for (self: MMethod, Bool) */
void model__MMethod__is_new_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_new].s = p0; /* _is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_new= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_new_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_new= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_new].s = p0; /* _is_new on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_init_for for (self: MMethod, MClass): Bool */
short int model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init_for for (self: Object, MClass): Bool */
short int VIRTUAL_model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethod__is_init_for(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttribute#init for (self: MAttribute, MClassDef, String, MVisibility) */
void model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MAttribute>*/
}
RET_LABEL:;
}
/* method model#MAttribute#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
model__MAttribute__init(self, p0, p1, p2); /* Direct call model#MAttribute#init on <self:Object(MAttribute)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: MVirtualTypeProp, MClassDef, String, MVisibility) */
void model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MVirtualTypeProp>*/
}
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeProp__init(self, p0, p1, p2); /* Direct call model#MVirtualTypeProp#init on <self:Object(MVirtualTypeProp)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:MVirtualTypeProp> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1874);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: Object): MVirtualType */
val* VIRTUAL_model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
val* var3 /* : MVirtualType */;
{ /* Inline model#MVirtualTypeProp#mvirtualtype (self) on <self:Object(MVirtualTypeProp)> */
var3 = self->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:Object(MVirtualTypeProp)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1874);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location for (self: MPropDef): Location */
val* model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_model__MPropDef___location].val; /* _location on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location for (self: Object): Location */
val* VIRTUAL_model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
val* var3 /* : Location */;
{ /* Inline model#MPropDef#location (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___location].val; /* _location on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location= for (self: MPropDef, Location) */
void model__MPropDef__location_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___location].val = p0; /* _location on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#location= for (self: Object, Location) */
void VIRTUAL_model__MPropDef__location_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#location= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___location].val = p0; /* _location on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#mclassdef for (self: MPropDef): MClassDef */
val* model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline model#MPropDef#mclassdef (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef= for (self: MPropDef, MClassDef) */
void model__MPropDef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MPropDef__mclassdef_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#mclassdef= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#mproperty for (self: MPropDef): MProperty */
val* model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty for (self: Object): MProperty */
val* VIRTUAL_model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
{ /* Inline model#MPropDef#mproperty (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty= for (self: MPropDef, MProperty) */
void model__MPropDef__mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = p0; /* _mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mproperty= for (self: Object, MProperty) */
void VIRTUAL_model__MPropDef__mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline model#MPropDef#mproperty= (self,p0) on <self:Object(MPropDef)> */
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = p0; /* _mproperty on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#init for (self: MPropDef, MClassDef, MProperty, Location) */
void model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_location /* var location: Location */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
val* var9 /* : Array[MPropDef] */;
val* var11 /* : Array[MPropDef] */;
val* var12 /* : Array[MPropDef] */;
val* var14 /* : Array[MPropDef] */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const struct type* type_struct30;
const char* var_class_name31;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
/* Covariant cast for argument 1 (mproperty) <p1:MProperty> isa MPROPERTY */
/* <p1:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1901);
show_backtrace(1);
}
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:MPropDef>*/;
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
{ /* Inline model#MPropDef#mclassdef= (self,var_mclassdef) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___mclassdef].val = var_mclassdef; /* _mclassdef on <self:MPropDef> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty= (self,var_mproperty) on <self:MPropDef> */
/* Covariant cast for argument 0 (mproperty) <var_mproperty:MProperty> isa MPROPERTY */
/* <var_mproperty:MProperty> isa MPROPERTY */
type_struct6 = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= var_mproperty->type->table_size) {
var3 = 0;
} else {
var3 = var_mproperty->type->type_table[cltype4] == idtype5;
}
if (unlikely(!var3)) {
var_class_name7 = var_mproperty == NULL ? "null" : var_mproperty->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = var_mproperty; /* _mproperty on <self:MPropDef> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#location= (self,var_location) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___location].val = var_location; /* _location on <self:MPropDef> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var11 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
array__Array__add(var9, self); /* Direct call array#Array#add on <var9:Array[MPropDef]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty> */
var14 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1644);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
array__Array__add(var12, self); /* Direct call array#Array#add on <var12:Array[MPropDef]>*/
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:MProperty> */
var17 = var_mproperty->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:MProperty> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var15,var_mclassdef) on <var15:MClassDef> */
var_other = var_mclassdef;
{
{ /* Inline kernel#Object#is_same_instance (var15,var_other) on <var15:MClassDef> */
var23 = var15 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
var24 = var_mproperty->attrs[COLOR_model__MProperty___intro].val != NULL; /* _intro on <var_mproperty:MProperty> */
var25 = !var24;
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1909);
show_backtrace(1);
}
{
{ /* Inline model#MProperty#intro= (var_mproperty,self) on <var_mproperty:MProperty> */
/* Covariant cast for argument 0 (intro) <self:MPropDef> isa MPROPDEF */
/* <self:MPropDef> isa MPROPDEF */
type_struct30 = var_mproperty->type->resolution_table->types[COLOR_model__MProperty_VTMPROPDEF];
cltype28 = type_struct30->color;
idtype29 = type_struct30->id;
if(cltype28 >= self->type->table_size) {
var27 = 0;
} else {
var27 = self->type->type_table[cltype28] == idtype29;
}
if (unlikely(!var27)) {
var_class_name31 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var_mproperty->attrs[COLOR_model__MProperty___intro].val = self; /* _intro on <var_mproperty:MProperty> */
RET_LABEL26:(void)0;
}
}
} else {
}
if (varonce) {
var32 = varonce;
} else {
var33 = "#";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var_mproperty;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
{
{ /* Inline model#MPropDef#to_s= (self,var39) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___to_s].val = var39; /* _to_s on <self:MPropDef> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method model#MPropDef#init for (self: Object, MClassDef, MProperty, Location) */
void VIRTUAL_model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:Object(MPropDef)>*/
RET_LABEL:;
}
/* method model#MPropDef#name for (self: MPropDef): String */
val* model__MPropDef__name(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_model__MProperty___name].val; /* _name on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#name for (self: Object): String */
val* VIRTUAL_model__MPropDef__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MPropDef__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#model for (self: MPropDef): Model */
val* model__MPropDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : Model */;
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MClassDef__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#model for (self: Object): Model */
val* VIRTUAL_model__MPropDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MPropDef__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: MPropDef): String */
val* model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1920);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: Object): String */
val* VIRTUAL_model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MPropDef#to_s (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1920);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s= for (self: MPropDef, String) */
void model__MPropDef__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#to_s= for (self: Object, String) */
void VIRTUAL_model__MPropDef__to_s_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#to_s= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___to_s].val = p0; /* _to_s on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#is_intro for (self: MPropDef): Bool */
short int model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : MPropDef */;
val* var6 /* : MPropDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var4,self) on <var4:MPropDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MPropDef> */
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
var7 = var8;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#is_intro for (self: Object): Bool */
short int VIRTUAL_model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MPropDef__is_intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_i /* var i: ArrayIterator[MPropDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1934);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var5 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__MProperty__lookup_all_definitions(var3, var_mmodule, var_mtype);
}
var_mpropdefs = var6;
{
var7 = array__AbstractArrayRead__iterator(var_mpropdefs);
}
var_i = var7;
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var_i);
}
var_ = var9;
if (var9){
{
var10 = array__ArrayIterator__item(var_i);
}
{
{ /* Inline kernel#Object#!= (var10,self) on <var10:nullable Object(MPropDef)> */
var_other = self;
{
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_other) /* == on <var10:nullable Object(MPropDef)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var8 = var11;
} else {
var8 = var_;
}
if (var8){
{
array__ArrayIterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var17 = array__ArrayIterator__is_ok(var_i);
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1939);
show_backtrace(1);
}
{
array__ArrayIterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
{
var18 = array__ArrayIterator__is_ok(var_i);
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1941);
show_backtrace(1);
}
{
var19 = array__ArrayIterator__item(var_i);
}
/* <var19:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype] == idtype;
}
if (unlikely(!var20)) {
var_class_name = var19 == NULL ? "null" : var19->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1942);
show_backtrace(1);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MPropDef__lookup_next_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#init for (self: MMethodDef, MClassDef, MMethod, Location) */
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MMethod> isa MPROPERTY */
/* <p1:MMethod> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1953);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MMethodDef>*/
}
RET_LABEL:;
}
/* method model#MMethodDef#init for (self: Object, MClassDef, MMethod, Location) */
void VIRTUAL_model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
model__MMethodDef__init(self, p0, p1, p2); /* Direct call model#MMethodDef#init on <self:Object(MMethodDef)>*/
RET_LABEL:;
}
/* method model#MMethodDef#msignature for (self: MMethodDef): nullable MSignature */
val* model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature for (self: Object): nullable MSignature */
val* VIRTUAL_model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
{ /* Inline model#MMethodDef#msignature (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature= for (self: MMethodDef, nullable MSignature) */
void model__MMethodDef__msignature_61d(val* self, val* p0) {
self->attrs[COLOR_model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#msignature= for (self: Object, nullable MSignature) */
void VIRTUAL_model__MMethodDef__msignature_61d(val* self, val* p0) {
{ /* Inline model#MMethodDef#msignature= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___msignature].val = p0; /* _msignature on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#new_msignature for (self: MMethodDef): nullable MSignature */
val* model__MMethodDef__new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#new_msignature for (self: Object): nullable MSignature */
val* VIRTUAL_model__MMethodDef__new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
{ /* Inline model#MMethodDef#new_msignature (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#new_msignature= for (self: MMethodDef, nullable MSignature) */
void model__MMethodDef__new_msignature_61d(val* self, val* p0) {
self->attrs[COLOR_model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#new_msignature= for (self: Object, nullable MSignature) */
void VIRTUAL_model__MMethodDef__new_msignature_61d(val* self, val* p0) {
{ /* Inline model#MMethodDef#new_msignature= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#initializers for (self: MMethodDef): Array[MProperty] */
val* model__MMethodDef__initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <self:MMethodDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#initializers for (self: Object): Array[MProperty] */
val* VIRTUAL_model__MMethodDef__initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
val* var3 /* : Array[MProperty] */;
{ /* Inline model#MMethodDef#initializers (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <self:Object(MMethodDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract for (self: MMethodDef): Bool */
short int model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_abstract (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_abstract_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_abstract= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#is_intern for (self: MMethodDef): Bool */
short int model__MMethodDef__is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_intern (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_intern= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_intern_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_intern= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#is_extern for (self: MMethodDef): Bool */
short int model__MMethodDef__is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_extern (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_extern= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_extern_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_extern= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#constant_value for (self: MMethodDef): nullable Object */
val* model__MMethodDef__constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#constant_value for (self: Object): nullable Object */
val* VIRTUAL_model__MMethodDef__constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{ /* Inline model#MMethodDef#constant_value (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___constant_value].val; /* _constant_value on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#constant_value= for (self: MMethodDef, nullable Object) */
void model__MMethodDef__constant_value_61d(val* self, val* p0) {
self->attrs[COLOR_model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#constant_value= for (self: Object, nullable Object) */
void VIRTUAL_model__MMethodDef__constant_value_61d(val* self, val* p0) {
{ /* Inline model#MMethodDef#constant_value= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: MAttributeDef, MClassDef, MAttribute, Location) */
void model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MAttribute> isa MPROPERTY */
/* <p1:MAttribute> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2001);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MAttributeDef>*/
}
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: Object, MClassDef, MAttribute, Location) */
void VIRTUAL_model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MAttributeDef__init(self, p0, p1, p2); /* Direct call model#MAttributeDef#init on <self:Object(MAttributeDef)>*/
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype for (self: MAttributeDef): nullable MType */
val* model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MAttributeDef#static_mtype (self) on <self:Object(MAttributeDef)> */
var3 = self->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:Object(MAttributeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype= for (self: MAttributeDef, nullable MType) */
void model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
{ /* Inline model#MAttributeDef#static_mtype= (self,p0) on <self:Object(MAttributeDef)> */
self->attrs[COLOR_model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:Object(MAttributeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: MVirtualTypeDef, MClassDef, MVirtualTypeProp, Location) */
void model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MVirtualTypeProp> isa MPROPERTY */
/* <p1:MVirtualTypeProp> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2017);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MVirtualTypeDef>*/
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: Object, MClassDef, MVirtualTypeProp, Location) */
void VIRTUAL_model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeDef__init(self, p0, p1, p2); /* Direct call model#MVirtualTypeDef#init on <self:Object(MVirtualTypeDef)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound for (self: MVirtualTypeDef): nullable MType */
val* model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound for (self: Object): nullable MType */
val* VIRTUAL_model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MVirtualTypeDef#bound (self) on <self:Object(MVirtualTypeDef)> */
var3 = self->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <self:Object(MVirtualTypeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound= for (self: MVirtualTypeDef, nullable MType) */
void model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound= for (self: Object, nullable MType) */
void VIRTUAL_model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
{ /* Inline model#MVirtualTypeDef#bound= (self,p0) on <self:Object(MVirtualTypeDef)> */
self->attrs[COLOR_model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:Object(MVirtualTypeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed for (self: MVirtualTypeDef): Bool */
short int model__MVirtualTypeDef__is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed for (self: Object): Bool */
short int VIRTUAL_model__MVirtualTypeDef__is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MVirtualTypeDef#is_fixed (self) on <self:Object(MVirtualTypeDef)> */
var3 = self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:Object(MVirtualTypeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: MVirtualTypeDef, Bool) */
void model__MVirtualTypeDef__is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: Object, Bool) */
void VIRTUAL_model__MVirtualTypeDef__is_fixed_61d(val* self, short int p0) {
{ /* Inline model#MVirtualTypeDef#is_fixed= (self,p0) on <self:Object(MVirtualTypeDef)> */
self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:Object(MVirtualTypeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#to_s for (self: MClassKind): String */
val* model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2040);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s for (self: Object): String */
val* VIRTUAL_model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MClassKind#to_s (self) on <self:Object(MClassKind)> */
var3 = self->attrs[COLOR_model__MClassKind___to_s].val; /* _to_s on <self:Object(MClassKind)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2040);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s= for (self: MClassKind, String) */
void model__MClassKind__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#to_s= for (self: Object, String) */
void VIRTUAL_model__MClassKind__to_s_61d(val* self, val* p0) {
{ /* Inline model#MClassKind#to_s= (self,p0) on <self:Object(MClassKind)> */
self->attrs[COLOR_model__MClassKind___to_s].val = p0; /* _to_s on <self:Object(MClassKind)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#need_init for (self: MClassKind): Bool */
short int model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init for (self: Object): Bool */
short int VIRTUAL_model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MClassKind#need_init (self) on <self:Object(MClassKind)> */
var3 = self->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <self:Object(MClassKind)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init= for (self: MClassKind, Bool) */
void model__MClassKind__need_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#need_init= for (self: Object, Bool) */
void VIRTUAL_model__MClassKind__need_init_61d(val* self, short int p0) {
{ /* Inline model#MClassKind#need_init= (self,p0) on <self:Object(MClassKind)> */
self->attrs[COLOR_model__MClassKind___need_init].s = p0; /* _need_init on <self:Object(MClassKind)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#init for (self: MClassKind, String, Bool) */
void model__MClassKind__init(val* self, val* p0, short int p1) {
val* var_s /* var s: String */;
short int var_need_init /* var need_init: Bool */;
var_s = p0;
var_need_init = p1;
{
{ /* Inline model#MClassKind#to_s= (self,var_s) on <self:MClassKind> */
self->attrs[COLOR_model__MClassKind___to_s].val = var_s; /* _to_s on <self:MClassKind> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init= (self,var_need_init) on <self:MClassKind> */
self->attrs[COLOR_model__MClassKind___need_init].s = var_need_init; /* _need_init on <self:MClassKind> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassKind#init for (self: Object, String, Bool) */
void VIRTUAL_model__MClassKind__init(val* self, val* p0, short int p1) {
model__MClassKind__init(self, p0, p1); /* Direct call model#MClassKind#init on <self:Object(MClassKind)>*/
RET_LABEL:;
}
/* method model#MClassKind#can_specialize for (self: MClassKind, MClassKind): Bool */
short int model__MClassKind__can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : MClassKind */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other5 /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MClassKind */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MClassKind */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MClassKind */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : MClassKind */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_other = p0;
{
var1 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var1) on <var_other:MClassKind> */
var_other5 = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var8 = var_other == var_other5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var9 = 1;
var = var9;
goto RET_LABEL;
} else {
}
{
var11 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var11) on <self:MClassKind> */
var_other5 = var11;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var17 = self == var_other5;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
var10 = var_;
} else {
{
var18 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var18) on <self:MClassKind> */
var_other5 = var18;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var24 = self == var_other5;
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
var10 = var19;
}
if (var10){
var25 = 0;
var = var25;
goto RET_LABEL;
} else {
{
var26 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var26) on <self:MClassKind> */
var_other5 = var26;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var32 = self == var_other5;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline kernel#Object#== (self,var_other) on <self:MClassKind> */
var_other5 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var38 = self == var_other5;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
var = var33;
goto RET_LABEL;
} else {
{
var40 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var40) on <var_other:MClassKind> */
var_other5 = var40;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var46 = var_other == var_other5;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
var_47 = var41;
if (var41){
var39 = var_47;
} else {
{
var48 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var48) on <var_other:MClassKind> */
var_other5 = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var54 = var_other == var_other5;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
var39 = var49;
}
if (var39){
var55 = 0;
var = var55;
goto RET_LABEL;
} else {
}
}
}
var56 = 1;
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassKind#can_specialize for (self: Object, MClassKind): Bool */
short int VIRTUAL_model__MClassKind__can_specialize(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassKind__can_specialize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = 14;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__abstract_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "class";
var6 = 5;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__concrete_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__interface_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__enum_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = 12;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__extern_kind(self);
var = var1;
RET_LABEL:;
return var;
}
