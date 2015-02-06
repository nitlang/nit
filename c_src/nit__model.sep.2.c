#include "nit__model.sep.0.h"
/* method model#MParameterType#resolve_for for (self: MParameterType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MParameterType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MType] */;
val* var17 /* : Array[MType] */;
long var18 /* : Int */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
val* var_res /* var res: MType */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MType */;
val* var_r2 /* var r2: MType */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var_37 /* var : Bool */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var41 /* : MClassKind */;
val* var43 /* : MClassKind */;
val* var44 /* : MClassKind */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : null */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MClass */;
val* var59 /* : MClass */;
val* var60 /* : MClassType */;
val* var62 /* : MClassType */;
short int var63 /* : Bool */;
val* var64 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
val* var74 /* : MClass */;
val* var76 /* : MClass */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : Array[MType] */;
long var86 /* : Int */;
long var88 /* : Int */;
val* var89 /* : nullable Object */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
val* var93 /* : MType */;
val* var95 /* : MType */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : MClass */;
val* var104 /* : MClass */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : Array[MType] */;
long var111 /* : Int */;
long var113 /* : Int */;
val* var114 /* : nullable Object */;
val* var_res115 /* var res: MType */;
short int var116 /* : Bool */;
val* var117 /* : null */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : null */;
short int var124 /* : Bool */;
val* var125 /* : MType */;
val* var126 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var127 /* : MType */;
val* var_res128 /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = nit___nit__MParameterType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1438);
show_backtrace(1);
}
/* <var_mtype:MType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MGenericType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MGenericType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var9 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
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
var14 = var4 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var2 = var10;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var17 = var_mtype->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var20 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var15, var18);
}
var_res = var21;
var23 = NULL;
if (var_anchor == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var23) on <var_anchor:nullable MClassType> */
var_other27 = var23;
{
var28 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other27) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var_30 = var24;
if (var24){
{
var31 = ((short int (*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__need_anchor]))(var_res) /* need_anchor on <var_res:MType>*/;
}
var22 = var31;
} else {
var22 = var_30;
}
if (var22){
{
var32 = ((val* (*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nit__model__MType__anchor_to]))(var_res, var_mmodule, var_anchor) /* anchor_to on <var_res:MType>*/;
}
var_r2 = var32;
/* <var_r2:MType> isa MClassType */
cltype35 = type_nit__MClassType.color;
idtype36 = type_nit__MClassType.id;
if(cltype35 >= var_r2->type->table_size) {
var34 = 0;
} else {
var34 = var_r2->type->type_table[cltype35] == idtype36;
}
var_37 = var34;
if (var34){
{
{ /* Inline model#MClassType#mclass (var_r2) on <var_r2:MType(MClassType)> */
var40 = var_r2->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_r2:MType(MClassType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var38) on <var38:MClass> */
var43 = var38->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var38:MClass> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var41,var44) on <var41:MClassKind> */
var_other = var44;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:MClassKind> */
var49 = var41 == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var33 = var45;
} else {
var33 = var_37;
}
if (var33){
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
var50 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var50){
var51 = NULL;
if (var_anchor == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var51) on <var_anchor:nullable MClassType> */
var_other27 = var51;
{
var55 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other27) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1457);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var59 = var_anchor->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var57) on <var57:MClass> */
var62 = var57->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var57:MClass> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = 1;
{
var64 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var60, var_anchor, var_mmodule, var63) /* resolve_for on <var_mtype:MType>*/;
}
var_resolved_receiver = var64;
} else {
var_resolved_receiver = var_mtype;
}
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype66 = type_nit__MNullableType.color;
idtype67 = type_nit__MNullableType.id;
if(cltype66 >= var_resolved_receiver->type->table_size) {
var65 = 0;
} else {
var65 = var_resolved_receiver->type->type_table[cltype66] == idtype67;
}
if (var65){
{
{ /* Inline model#MNullableType#mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var70 = var_resolved_receiver->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_resolved_receiver = var68;
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MParameterType */
cltype72 = type_nit__MParameterType.color;
idtype73 = type_nit__MParameterType.id;
if(cltype72 >= var_resolved_receiver->type->table_size) {
var71 = 0;
} else {
var71 = var_resolved_receiver->type->type_table[cltype72] == idtype73;
}
if (var71){
{
{ /* Inline model#MParameterType#mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var76 = var_resolved_receiver->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MParameterType)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1464);
show_backtrace(1);
} else {
{ /* Inline model#MClassType#mclass (var_anchor) on <var_anchor:nullable MClassType> */
if (unlikely(var_anchor == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var79 = var_anchor->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var74,var77) on <var74:MClass> */
var_other = var77;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:MClass> */
var84 = var74 == var_other;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
if (unlikely(!var80)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1464);
show_backtrace(1);
}
if (var_anchor == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1465);
show_backtrace(1);
} else {
var85 = ((val* (*)(val* self))(var_anchor->class->vft[COLOR_nit__model__MClassType__arguments]))(var_anchor) /* arguments on <var_anchor:nullable MClassType>*/;
}
{
{ /* Inline model#MParameterType#rank (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var88 = var_resolved_receiver->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <var_resolved_receiver:nullable Object(MParameterType)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var85, var86);
}
var_resolved_receiver = var89;
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype91 = type_nit__MNullableType.color;
idtype92 = type_nit__MNullableType.id;
if(cltype91 >= var_resolved_receiver->type->table_size) {
var90 = 0;
} else {
var90 = var_resolved_receiver->type->type_table[cltype91] == idtype92;
}
if (var90){
{
{ /* Inline model#MNullableType#mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var95 = var_resolved_receiver->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_resolved_receiver = var93;
} else {
}
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MClassType */
cltype97 = type_nit__MClassType.color;
idtype98 = type_nit__MClassType.id;
if(cltype97 >= var_resolved_receiver->type->table_size) {
var96 = 0;
} else {
var96 = var_resolved_receiver->type->type_table[cltype97] == idtype98;
}
if (unlikely(!var96)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1468);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MClassType)> */
var101 = var_resolved_receiver->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MClassType)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var104 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var99,var102) on <var99:MClass> */
var_other = var102;
{
{ /* Inline kernel#Object#is_same_instance (var99,var_other) on <var99:MClass> */
var109 = var99 == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
if (var105){
{
var110 = ((val* (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MClassType__arguments]))(var_resolved_receiver) /* arguments on <var_resolved_receiver:nullable Object(MClassType)>*/;
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var113 = self->attrs[COLOR_nit__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var110, var111);
}
var_res115 = var114;
var = var_res115;
goto RET_LABEL;
} else {
}
{
var116 = ((short int (*)(val* self))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__need_anchor]))(var_resolved_receiver) /* need_anchor on <var_resolved_receiver:nullable Object(MClassType)>*/;
}
if (var116){
var117 = NULL;
if (var_anchor == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,var117) on <var_anchor:nullable MClassType> */
var_other27 = var117;
{
var121 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other27) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (unlikely(!var118)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1479);
show_backtrace(1);
}
var123 = NULL;
var124 = 0;
{
var125 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_resolved_receiver->class->vft[COLOR_nit__model__MType__resolve_for]))(var_resolved_receiver, var_anchor, var123, var_mmodule, var124) /* resolve_for on <var_resolved_receiver:nullable Object(MClassType)>*/;
}
var_resolved_receiver = var125;
} else {
}
{
var126 = nit___nit__MParameterType___MType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var126;
{
var127 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nit__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_verbatim_bound:MType>*/;
}
var_res128 = var127;
var = var_res128;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#can_resolve_for for (self: MParameterType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MParameterType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
val* var8 /* : MType */;
val* var9 /* : Set[MClassDef] */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
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
var6 = ((short int (*)(val* self, val* p0))(var_anchor->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_anchor, var_other) /* == on <var_anchor:nullable MClassType(MClassType)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1495);
show_backtrace(1);
}
{
var8 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var_mtype = var8;
} else {
}
{
var9 = ((val* (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var_mtype, var_mmodule) /* collect_mclassdefs on <var_mtype:MType>*/;
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var12 = self->attrs[COLOR_nit__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1382);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int (*)(val* self, val* p0))(var9->class->vft[COLOR_standard__abstract_collection__Collection__has]))(var9, var13) /* has on <var9:Set[MClassDef]>*/;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameterType#init for (self: MParameterType) */
void nit___nit__MParameterType___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MParameterType___standard__kernel__Object__init]))(self) /* init on <self:MParameterType>*/;
}
RET_LABEL:;
}
/* method model#MNullableType#mtype for (self: MNullableType): MType */
val* nit___nit__MNullableType___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#mtype= for (self: MNullableType, MType) */
void nit___nit__MNullableType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullableType___mtype].val = p0; /* _mtype on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#model for (self: MNullableType): Model */
val* nit___nit__MNullableType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1) /* model on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#init for (self: MNullableType) */
void nit___nit__MNullableType___standard__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : MType */;
val* var6 /* : MType */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MNullableType___standard__kernel__Object__init]))(self) /* init on <self:MNullableType>*/;
}
if (varonce) {
var = varonce;
} else {
var1 = "nullable ";
var2 = 9;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var6 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_standard__NativeArray(var8, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var9)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var9)->values[1] = (val*) var4;
{
((void (*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_standard__array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
{
{ /* Inline model#MNullableType#to_s= (self,var10) on <self:MNullableType> */
self->attrs[COLOR_nit__model__MNullableType___to_s].val = var10; /* _to_s on <self:MNullableType> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method model#MNullableType#to_s for (self: MNullableType): String */
val* nit___nit__MNullableType___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___to_s].val; /* _to_s on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1516);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#to_s= for (self: MNullableType, String) */
void nit___nit__MNullableType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullableType___to_s].val = p0; /* _to_s on <self:MNullableType> */
RET_LABEL:;
}
/* method model#MNullableType#full_name for (self: MNullableType): String */
val* nit___nit__MNullableType___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MType */;
val* var11 /* : MType */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___full_name].val != NULL; /* _full_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNullableType___full_name].val; /* _full_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1518);
show_backtrace(1);
}
} else {
{
if (varonce) {
var5 = varonce;
} else {
var6 = "nullable ";
var7 = 9;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var11 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__full_name]))(var9) /* full_name on <var9:MType>*/;
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 2;
var15 = NEW_standard__NativeArray(var14, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var15)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var15)->values[1] = (val*) var12;
{
((void (*)(val* self, val* p0, long p1))(var13->class->vft[COLOR_standard__array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var13->class->vft[COLOR_standard__string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
var3 = var16;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNullableType___full_name].val = var3; /* _full_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNullableType#c_name for (self: MNullableType): String */
val* nit___nit__MNullableType___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MType */;
val* var11 /* : MType */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
var1 = self->attrs[COLOR_nit__model__MNullableType___c_name].val != NULL; /* _c_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MNullableType___c_name].val; /* _c_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1520);
show_backtrace(1);
}
} else {
{
if (varonce) {
var5 = varonce;
} else {
var6 = "nullable__";
var7 = 10;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var11 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var9) /* c_name on <var9:MType>*/;
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 2;
var15 = NEW_standard__NativeArray(var14, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var15)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var15)->values[1] = (val*) var12;
{
((void (*)(val* self, val* p0, long p1))(var13->class->vft[COLOR_standard__array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val* self))(var13->class->vft[COLOR_standard__string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
var3 = var16;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MNullableType___c_name].val = var3; /* _c_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MNullableType#need_anchor for (self: MNullableType): Bool */
short int nit___nit__MNullableType___MType__need_anchor(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self))(var1->class->vft[COLOR_nit__model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_nullable for (self: MNullableType): MType */
val* nit___nit__MNullableType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#as_notnullable for (self: MNullableType): MType */
val* nit___nit__MNullableType___MType__as_notnullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
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
/* method model#MNullableType#resolve_for for (self: MNullableType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MNullableType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var1->class->vft[COLOR_nit__model__MType__resolve_for]))(var1, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var1:MType>*/;
}
var_res = var4;
{
var5 = ((val* (*)(val* self))(var_res->class->vft[COLOR_nit__model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType>*/;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: MNullableType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MNullableType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nit__model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#lookup_fixed for (self: MNullableType, MModule, MType): MType */
val* nit___nit__MNullableType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
val* var5 /* : MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nit__model__MType__lookup_fixed]))(var1, var_mmodule, var_resolved_receiver) /* lookup_fixed on <var1:MType>*/;
}
var_t = var4;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var7 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_t,var5) on <var_t:MType> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MType> */
var12 = var_t == var_other;
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
var = self;
goto RET_LABEL;
} else {
}
{
var13 = ((val* (*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t) /* as_nullable on <var_t:MType>*/;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: MNullableType): Int */
long nit___nit__MNullableType___MType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
val* var3 /* : MType */;
long var4 /* : Int */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val* self))(var1->class->vft[COLOR_nit__model__MType__length]))(var1) /* length on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: MNullableType, MModule): Set[MClassDef] */
val* nit___nit__MNullableType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassDef] */;
var_mmodule = p0;
{
var1 = nit___nit__MNullableType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1550);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mclassdefs]))(var3, var_mmodule) /* collect_mclassdefs on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: MNullableType, MModule): Set[MClass] */
val* nit___nit__MNullableType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClass] */;
var_mmodule = p0;
{
var1 = nit___nit__MNullableType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1556);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mclasses]))(var3, var_mmodule) /* collect_mclasses on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: MNullableType, MModule): Set[MClassType] */
val* nit___nit__MNullableType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassType] */;
var_mmodule = p0;
{
var1 = nit___nit__MNullableType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1562);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__model__MType__collect_mtypes]))(var3, var_mmodule) /* collect_mtypes on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: MNullType): Model */
val* nit___nit__MNullType___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1572);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model= for (self: MNullType, Model) */
void nit___nit__MNullType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MNullType___model].val = p0; /* _model on <self:MNullType> */
RET_LABEL:;
}
/* method model#MNullType#to_s for (self: MNullType): String */
val* nit___nit__MNullType___standard__string__Object__to_s(val* self) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#full_name for (self: MNullType): String */
val* nit___nit__MNullType___nit__model_base__MEntity__full_name(val* self) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#c_name for (self: MNullType): String */
val* nit___nit__MNullType___nit__model_base__MEntity__c_name(val* self) {
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: MNullType): MType */
val* nit___nit__MNullType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: MNullType): Bool */
short int nit___nit__MNullType___MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* nit___nit__MNullType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
/* method model#MNullType#can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int nit___nit__MNullType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
/* method model#MNullType#collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* nit___nit__MNullType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassDef);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* nit___nit__MNullType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* nit___nit__MNullType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#init for (self: MNullType) */
void nit___nit__MNullType___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MNullType___standard__kernel__Object__init]))(self) /* init on <self:MNullType>*/;
}
RET_LABEL:;
}
/* method model#MSignature#mparameters for (self: MSignature): Array[MParameter] */
val* nit___nit__MSignature___mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters= for (self: MSignature, Array[MParameter]) */
void nit___nit__MSignature___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MSignature___mparameters].val = p0; /* _mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#return_mtype for (self: MSignature): nullable MType */
val* nit___nit__MSignature___return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype= for (self: MSignature, nullable MType) */
void nit___nit__MSignature___return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#length for (self: MSignature): Int */
long nit___nit__MSignature___MType__length(val* self) {
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
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
val* var16 /* : Array[MParameter] */;
val* var18 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[MParameter] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var23 /* : MType */;
val* var25 /* : MType */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var1 = 1;
var_res = var1;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var4 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
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
var9 = ((short int (*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable MType(MType)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var11 = ((long (*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__length]))(var_t) /* length on <var_t:nullable MType(MType)>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var11) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var15 = var_res + var11;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_res = var12;
} else {
}
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var18 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
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
var_p = var22;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var25 = var_p->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((long (*)(val* self))(var23->class->vft[COLOR_nit__model__MType__length]))(var23) /* length on <var23:MType>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var26) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var33 = var_res + var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_res = var27;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[MParameter]> */
RET_LABEL34:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#init for (self: MSignature) */
void nit___nit__MSignature___standard__kernel__Object__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var4 /* : Int */;
long var_i /* var i: Int */;
val* var5 /* : Array[MParameter] */;
val* var7 /* : Array[MParameter] */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_ /* var : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
val* var15 /* : Array[MParameter] */;
val* var17 /* : Array[MParameter] */;
val* var18 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MSignature___standard__kernel__Object__init]))(self) /* init on <self:MSignature>*/;
}
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
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var7 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var5) on <var5:Array[MParameter]> */
var10 = var5->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var5:Array[MParameter]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var13 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var14 = var_i < var_;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var17 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var15, var_i);
}
var_parameter = var18;
{
{ /* Inline model#MParameter#is_vararg (var_parameter) on <var_parameter:MParameter> */
var21 = var_parameter->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <var_parameter:MParameter> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
var22 = 1;
{
{ /* Inline kernel#Int#unary - (var22) on <var22:Int> */
var25 = -var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var23) on <var_vararg_rank:Int> */
var28 = var_vararg_rank == var23;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1628);
show_backtrace(1);
}
var_vararg_rank = var_i;
} else {
}
var29 = 1;
{
var30 = standard___standard__Int___Discrete__successor(var_i, var29);
}
var_i = var30;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#vararg_rank= (self,var_vararg_rank) on <self:MSignature> */
self->attrs[COLOR_nit__model__MSignature___vararg_rank].l = var_vararg_rank; /* _vararg_rank on <self:MSignature> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method model#MSignature#vararg_rank for (self: MSignature): Int */
long nit___nit__MSignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank= for (self: MSignature, Int) */
void nit___nit__MSignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#arity for (self: MSignature): Int */
long nit___nit__MSignature___arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var3 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[MParameter]> */
var6 = var1->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var1:Array[MParameter]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: MSignature): String */
val* nit___nit__MSignature___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var3 /* : Array[MParameter] */;
val* var5 /* : Array[MParameter] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
long var12 /* : Int */;
long var_i /* var i: Int */;
val* var13 /* : Array[MParameter] */;
val* var15 /* : Array[MParameter] */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_ /* var : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
val* var23 /* : Array[MParameter] */;
val* var25 /* : Array[MParameter] */;
val* var26 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : MType */;
val* var50 /* : MType */;
val* var51 /* : String */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
long var60 /* : Int */;
long var61 /* : Int */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void (*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var5 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var3);
}
var7 = !var6;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "(";
var10 = 1;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var8); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
var12 = 0;
var_i = var12;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var15 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var13) on <var13:Array[MParameter]> */
var18 = var13->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var13:Array[MParameter]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var21 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var22 = var_i < var_;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var25 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var23, var_i);
}
var_mparameter = var26;
var27 = 0;
{
{ /* Inline kernel#Int#> (var_i,var27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var34 = var_i > var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
if (varonce35) {
var36 = varonce35;
} else {
var37 = ", ";
var38 = 2;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var36); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MParameter#name (var_mparameter) on <var_mparameter:MParameter> */
var42 = var_mparameter->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_mparameter:MParameter> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var40); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = ": ";
var46 = 2;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var44); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var50 = var_mparameter->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val* (*)(val* self))(var48->class->vft[COLOR_standard__string__Object__to_s]))(var48) /* to_s on <var48:MType>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var51); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#is_vararg (var_mparameter) on <var_mparameter:MParameter> */
var54 = var_mparameter->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <var_mparameter:MParameter> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52){
if (varonce55) {
var56 = varonce55;
} else {
var57 = "...";
var58 = 3;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var56); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
var60 = 1;
{
var61 = standard___standard__Int___Discrete__successor(var_i, var60);
}
var_i = var61;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce62) {
var63 = varonce62;
} else {
var64 = ")";
var65 = 1;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var63); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var69 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_ret = var67;
var70 = NULL;
if (var_ret == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var70) on <var_ret:nullable MType> */
var_other = var70;
{
var74 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var75 = !var74;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
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
standard___standard__FlatBuffer___Buffer__append(var_b, var77); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
var81 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_b, var81); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
var82 = standard___standard__FlatBuffer___Object__to_s(var_b);
}
var = var82;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* nit___nit__MSignature___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
val* var20 /* : MType */;
val* var21 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MParameter]>*/
}
var_params = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_6);
}
if (var7){
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_6);
}
var_p = var8;
{
var9 = nit___nit__MParameter___resolve_for(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_params, var9); /* Direct call array#Array#add on <var_params:Array[MParameter]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[MParameter]>*/
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
var13 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
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
var18 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
var20 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var20;
} else {
}
var21 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var21, var_params) /* mparameters= on <var21:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var21, var_ret) /* return_mtype= on <var21:MSignature>*/;
}
{
((void (*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21) /* init on <var21:MSignature>*/;
}
var_res = var21;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: MParameter): String */
val* nit___nit__MParameter___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name= for (self: MParameter, String) */
void nit___nit__MParameter___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameter___name].val = p0; /* _name on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#mtype for (self: MParameter): MType */
val* nit___nit__MParameter___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype= for (self: MParameter, MType) */
void nit___nit__MParameter___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MParameter___mtype].val = p0; /* _mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_vararg for (self: MParameter): Bool */
short int nit___nit__MParameter___is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg= for (self: MParameter, Bool) */
void nit___nit__MParameter___is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#to_s for (self: MParameter): String */
val* nit___nit__MParameter___standard__string__Object__to_s(val* self) {
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
var3 = self->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var6 = self->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
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
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var13 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
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
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 4;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var4;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var7;
((struct instance_standard__NativeArray*)var21)->values[2] = (val*) var11;
((struct instance_standard__NativeArray*)var21)->values[3] = (val*) var15;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var = var22;
goto RET_LABEL;
} else {
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var25 = self->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
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
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var33 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var23;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var27;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var31;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
var = var37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* nit___nit__MParameter___resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
var3 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val* self))(var1->class->vft[COLOR_nit__model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
}
var5 = !var4;
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var8 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var6->class->vft[COLOR_nit__model__MType__resolve_for]))(var6, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var6:MType>*/;
}
var_newtype = var9;
var10 = NEW_nit__MParameter(&type_nit__MParameter);
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var13 = self->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg (self) on <self:MParameter> */
var16 = self->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__model__MParameter__name_61d]))(var10, var11) /* name= on <var10:MParameter>*/;
}
{
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var10, var_newtype) /* mtype= on <var10:MParameter>*/;
}
{
((void (*)(val* self, short int p0))(var10->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var10, var14) /* is_vararg= on <var10:MParameter>*/;
}
{
((void (*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10) /* init on <var10:MParameter>*/;
}
var_res = var10;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: MParameter): Model */
val* nit___nit__MParameter___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_nit__model_base__MEntity__model]))(var1) /* model on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#init for (self: MParameter) */
void nit___nit__MParameter___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MParameter___standard__kernel__Object__init]))(self) /* init on <self:MParameter>*/;
}
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef for (self: MProperty): MClassDef */
val* nit___nit__MProperty___intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef= for (self: MProperty, MClassDef) */
void nit___nit__MProperty___intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name= for (self: MProperty, String) */
void nit___nit__MProperty___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___name].val = p0; /* _name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#full_name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var11 /* : MVisibility */;
val* var13 /* : MVisibility */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var22 /* : MClass */;
val* var24 /* : MClass */;
val* var25 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___full_name].val != NULL; /* _full_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MProperty___full_name].val; /* _full_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1744);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var7 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (self) on <self:MProperty> */
var13 = self->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit___nit__MModule___namespace_for(var8, var11);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "::";
var17 = 2;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var21 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#name (var22) on <var22:MClass> */
var27 = var22->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var22:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "::";
var31 = 2;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var35 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 5;
var38 = NEW_standard__NativeArray(var37, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var38)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var38)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var38)->values[2] = (val*) var25;
((struct instance_standard__NativeArray*)var38)->values[3] = (val*) var29;
((struct instance_standard__NativeArray*)var38)->values[4] = (val*) var33;
{
((void (*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_standard__array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val* self))(var36->class->vft[COLOR_standard__string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
var3 = var39;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MProperty___full_name].val = var3; /* _full_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MProperty#c_name for (self: MProperty): String */
val* nit___nit__MProperty___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : MClassDef */;
val* var18 /* : MClassDef */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
var1 = self->attrs[COLOR_nit__model__MProperty___c_name].val != NULL; /* _c_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MProperty___c_name].val; /* _c_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1752);
show_backtrace(1);
}
} else {
{
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var7 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MModule___nit__model_base__MEntity__c_name(var8);
}
if (varonce) {
var12 = varonce;
} else {
var13 = "__";
var14 = 2;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var18 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var16) on <var16:MClassDef> */
var21 = var16->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var16:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = standard___standard__Text___to_cmangle(var22);
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "__";
var29 = 2;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var33 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__Text___to_cmangle(var31);
}
var35 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 5;
var37 = NEW_standard__NativeArray(var36, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var37)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var37)->values[1] = (val*) var12;
((struct instance_standard__NativeArray*)var37)->values[2] = (val*) var25;
((struct instance_standard__NativeArray*)var37)->values[3] = (val*) var27;
((struct instance_standard__NativeArray*)var37)->values[4] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var35->class->vft[COLOR_standard__array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
}
{
var38 = ((val* (*)(val* self))(var35->class->vft[COLOR_standard__string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
}
var3 = var38;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MProperty___c_name].val = var3; /* _c_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: MProperty): MVisibility */
val* nit___nit__MProperty___visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility= for (self: MProperty, MVisibility) */
void nit___nit__MProperty___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MProperty___visibility].val = p0; /* _visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#init for (self: MProperty) */
void nit___nit__MProperty___standard__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : Array[MProperty] */;
val* var5 /* : Array[MProperty] */;
val* var6 /* : MClassDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var_model /* var model: Model */;
val* var15 /* : MultiHashMap[String, MProperty] */;
val* var17 /* : MultiHashMap[String, MProperty] */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : Array[MProperty] */;
val* var23 /* : Array[MProperty] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MProperty___standard__kernel__Object__init]))(self) /* init on <self:MProperty>*/;
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var2 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#intro_mproperties (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 620);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[MProperty]>*/
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var8 = self->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var6) on <var6:MClassDef> */
var11 = var6->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var6:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var9) on <var9:MModule> */
var14 = var9->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var9:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model#Model#mproperties_by_name (var_model) on <var_model:Model> */
var17 = var_model->attrs[COLOR_nit__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <var_model:Model> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 80);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var20 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var15, var18, self); /* Direct call more_collections#MultiHashMap#add_one on <var15:MultiHashMap[String, MProperty]>*/
}
{
{ /* Inline model#Model#mproperties (var_model) on <var_model:Model> */
var23 = var_model->attrs[COLOR_nit__model__Model___mproperties].val; /* _mproperties on <var_model:Model> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 37);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var21, self); /* Direct call array#Array#add on <var21:Array[MProperty]>*/
}
RET_LABEL:;
}
/* method model#MProperty#mpropdefs for (self: MProperty): Array[MPropDef] */
val* nit___nit__MProperty___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: MProperty): MPropDef */
val* nit___nit__MProperty___intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro= for (self: MProperty, MPropDef) */
void nit___nit__MProperty___intro_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (intro) <p0:MPropDef> isa MPROPDEF */
/* <p0:MPropDef> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MProperty__MPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
self->attrs[COLOR_nit__model__MProperty___intro].val = p0; /* _intro on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#model for (self: MProperty): Model */
val* nit___nit__MProperty___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : Model */;
{
{ /* Inline model#MProperty#intro (self) on <self:MProperty> */
var3 = self->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MPropDef___nit__model_base__MEntity__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: MProperty): String */
val* nit___nit__MProperty___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var3 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
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
/* method model#MProperty#lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_definitions(val* self, val* p0, val* p1) {
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
val* var14 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var15 /* : Array[MPropDef] */;
val* var17 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var18 /* : ArrayIterator[nullable Object] */;
val* var_19 /* var : ArrayIterator[MPropDef] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var22 /* : POSetElement[MModule] */;
val* var24 /* : POSetElement[MModule] */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : null */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var51 /* : Bool */;
val* var52 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var54 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var55 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1795);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1822);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections___more_collections__HashMap2____91d_93d(var4, var_mmodule, var_mtype);
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
var12 = ((short int (*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
}
var13 = !var12;
var10 = var13;
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
var14 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[MPropDef]>*/
}
var_candidates = var14;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var17 = self->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ = var15;
{
var18 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_19 = var18;
for(;;) {
{
var20 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_19);
}
if (var20){
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_19);
}
var_mpropdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var27 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset___poset__POSetElement____60d_61d(var22, var28);
}
var32 = !var31;
if (var32){
goto BREAK_label;
} else {
}
var33 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var36 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nit___nit__MType___is_subtype(var_mtype, var_mmodule, var33, var37);
}
var41 = !var40;
if (var41){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_19); /* Direct call array#ArrayIterator#next on <var_19:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:ArrayIterator[MPropDef]> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidates) on <var_candidates:Array[MPropDef]> */
var46 = var_candidates->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = 1;
{
{ /* Inline kernel#Int#<= (var44,var47) on <var44:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var51 = var44 <= var47;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var54 = self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1822);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var52, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var52:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var55 = nit___nit__MProperty___select_most_specific(self, var_mmodule, var_candidates);
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nit___nit__MProperty___lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1822);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_super_definitions(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var65 /* : Bool */;
val* var66 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1835);
show_backtrace(1);
}
{
var3 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
var4 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[MPropDef]>*/
}
var_candidates = var4;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var7 = self->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_9);
}
if (var10){
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_9);
}
var_mpropdef = var11;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var17 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset___poset__POSetElement____60d_61d(var12, var18);
}
var22 = !var21;
if (var22){
goto BREAK_label;
} else {
}
var23 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var26 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nit___nit__MType___is_subtype(var_mtype, var_mmodule, var23, var27);
}
var31 = !var30;
if (var31){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var35 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
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
var43 = var_mtype == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_44 = var39;
if (var39){
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var47 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmodule,var48) on <var_mmodule:MModule> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
var55 = var_mmodule == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var32 = var51;
} else {
var32 = var_44;
}
if (var32){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:ArrayIterator[MPropDef]> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_candidates) on <var_candidates:Array[MPropDef]> */
var60 = var_candidates->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 1;
{
{ /* Inline kernel#Int#<= (var58,var61) on <var58:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var65 = var58 <= var61;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
if (var62){
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var66 = nit___nit__MProperty___select_most_specific(self, var_mmodule, var_candidates);
}
var = var66;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: MProperty, MModule, Array[MPropDef]): Array[MPropDef] */
val* nit___nit__MProperty___select_most_specific(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var30 /* : MClassType */;
val* var32 /* : MClassType */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
val* var44 /* : POSetElement[MModule] */;
val* var46 /* : POSetElement[MModule] */;
val* var47 /* : MModule */;
val* var49 /* : MModule */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MClassType */;
val* var56 /* : MClassType */;
val* var57 /* : null */;
val* var58 /* : MClassType */;
val* var60 /* : MClassType */;
short int var61 /* : Bool */;
short int var_62 /* var : Bool */;
val* var63 /* : MClassType */;
val* var65 /* : MClassType */;
val* var66 /* : MClassType */;
val* var68 /* : MClassType */;
short int var69 /* : Bool */;
val* var_other71 /* var other: nullable Object */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : String */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var91 /* : NativeArray[Object] */;
val* var92 /* : String */;
/* Covariant cast for argument 1 (candidates) <p1:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p1:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1857);
show_backtrace(1);
}
var_mmodule = p0;
var_candidates = p1;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MPropDef]>*/
}
var_res = var2;
var_ = var_candidates;
{
var3 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_4);
}
if (var5){
{
var6 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_4);
}
var_pd1 = var6;
{
{ /* Inline model#MPropDef#mclassdef (var_pd1) on <var_pd1:MPropDef> */
var9 = var_pd1->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd1:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_cd1 = var7;
{
{ /* Inline model#MClassDef#mclass (var_cd1) on <var_cd1:MClassDef> */
var12 = var_cd1->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd1:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
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
var15 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_16);
}
if (var17){
{
var18 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_16);
}
var_pd2 = var18;
{
{ /* Inline kernel#Object#== (var_pd2,var_pd1) on <var_pd2:MPropDef> */
var_other = var_pd1;
{
{ /* Inline kernel#Object#is_same_instance (var_pd2,var_other) on <var_pd2:MPropDef> */
var23 = var_pd2 == var_other;
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
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_pd2) on <var_pd2:MPropDef> */
var26 = var_pd2->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd2:MPropDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_cd2 = var24;
{
{ /* Inline model#MClassDef#mclass (var_cd2) on <var_cd2:MClassDef> */
var29 = var_cd2->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_cd2:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_c2 = var27;
{
{ /* Inline model#MClass#mclass_type (var_c2) on <var_c2:MClass> */
var32 = var_c2->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c2:MClass> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c1) on <var_c1:MClass> */
var35 = var_c1->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_c1:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var30,var33) on <var30:MClassType> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:MClassType> */
var40 = var30 == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline model#MClassDef#mmodule (var_cd2) on <var_cd2:MClassDef> */
var43 = var_cd2->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_cd2:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var41) on <var41:MModule> */
var46 = var41->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var41:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_cd1) on <var_cd1:MClassDef> */
var49 = var_cd1->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_cd1:MClassDef> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = poset___poset__POSetElement____60d(var44, var47);
}
if (var50){
var51 = 0;
var_keep = var51;
goto BREAK_label52;
} else {
}
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var56 = var_cd2->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var57 = NULL;
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var60 = var_cd1->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit___nit__MType___is_subtype(var54, var_mmodule, var57, var58);
}
var_62 = var61;
if (var61){
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var65 = var_cd2->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var68 = var_cd1->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var63,var66) on <var63:MClassType> */
var_other71 = var66;
{
var72 = ((short int (*)(val* self, val* p0))(var63->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var63, var_other71) /* == on <var63:MClassType>*/;
}
var73 = !var72;
var69 = var73;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var53 = var69;
} else {
var53 = var_62;
}
if (var53){
var74 = 0;
var_keep = var74;
goto BREAK_label52;
} else {
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_16); /* Direct call array#ArrayIterator#next on <var_16:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:ArrayIterator[MPropDef]> */
RET_LABEL75:(void)0;
}
}
if (var_keep){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_pd1); /* Direct call array#Array#add on <var_res:Array[MPropDef]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label76;
}
}
BREAK_label76: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:ArrayIterator[MPropDef]> */
RET_LABEL77:(void)0;
}
}
{
var78 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_res);
}
if (var78){
if (varonce) {
var79 = varonce;
} else {
var80 = "All lost! ";
var81 = 10;
var82 = standard___standard__NativeString___to_s_with_length(var80, var81);
var79 = var82;
varonce = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = ", ";
var86 = 2;
var87 = standard___standard__NativeString___to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
var88 = standard__string___Collection___join(var_candidates, var84);
}
var89 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var89 = array_instance Array[Object] */
var90 = 2;
var91 = NEW_standard__NativeArray(var90, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var91)->values[0] = (val*) var79;
((struct instance_standard__NativeArray*)var91)->values[1] = (val*) var88;
{
((void (*)(val* self, val* p0, long p1))(var89->class->vft[COLOR_standard__array__Array__with_native]))(var89, var91, var90) /* with_native on <var89:Array[Object]>*/;
}
}
{
var92 = ((val* (*)(val* self))(var89->class->vft[COLOR_standard__string__Object__to_s]))(var89) /* to_s on <var89:Array[Object]>*/;
}
{
standard__file___Object___print(self, var92); /* Direct call file#Object#print on <self:MProperty>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* nit___nit__MProperty___lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = nit___nit__MProperty___lookup_all_definitions(self, var_mmodule, var_mtype);
}
{
var2 = standard___standard__SequenceRead___Collection__first(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nit___nit__MProperty___lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var5 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
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
var1 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var1;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var4 = self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1945);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = more_collections___more_collections__HashMap2____91d_93d(var2, var_mmodule, var_mtype);
}
var_cache = var5;
var6 = NULL;
if (var_cache == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var6) on <var_cache:nullable Array[MPropDef]> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var = var_cache;
goto RET_LABEL;
} else {
}
{
var12 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var13 = !var12;
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1919);
show_backtrace(1);
}
{
var14 = nit___nit__MType___has_mproperty(var_mtype, var_mmodule, self);
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1920);
show_backtrace(1);
}
var15 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[MPropDef]>*/
}
var_candidates = var15;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var18 = self->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
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
var_mpropdef = var22;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var25 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var28 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var26) on <var26:MClassDef> */
var31 = var26->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var26:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement____60d_61d(var23, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label;
} else {
}
var34 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var37 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nit___nit__MType___is_subtype(var_mtype, var_mmodule, var34, var38);
}
var42 = !var41;
if (var42){
goto BREAK_label;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[MPropDef]>*/
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
var47 = var_candidates->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
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
var55 = self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1945);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var53, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var53:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
nit__model___MModule___linearize_mpropdefs(var_mmodule, var_candidates); /* Direct call model#MModule#linearize_mpropdefs on <var_mmodule:MModule>*/
}
{
var56 = standard___standard__AbstractArrayRead___reversed(var_candidates);
}
var_candidates = var56;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var59 = self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1945);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var57, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var57:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nit___nit__MProperty___lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1945);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel for (self: MMethod): Bool */
short int nit___nit__MMethod___is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_toplevel_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init for (self: MMethod): Bool */
short int nit___nit__MMethod___is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_init].s = p0; /* _is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_root_init for (self: MMethod): Bool */
short int nit___nit__MMethod___is_root_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_root_init= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_root_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_root_init].s = p0; /* _is_root_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_new for (self: MMethod): Bool */
short int nit___nit__MMethod___is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new= for (self: MMethod, Bool) */
void nit___nit__MMethod___is_new_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethod___is_new].s = p0; /* _is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init_for for (self: MMethod, MClass): Bool */
short int nit___nit__MMethod___is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* nit___nit__MVirtualTypeProp___mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:MVirtualTypeProp> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1992);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef for (self: MPropDef): MClassDef */
val* nit___nit__MPropDef___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef= for (self: MPropDef, MClassDef) */
void nit___nit__MPropDef___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mproperty for (self: MPropDef): MProperty */
val* nit___nit__MPropDef___mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty= for (self: MPropDef, MProperty) */
void nit___nit__MPropDef___mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MPropDef__MPROPERTY];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
self->attrs[COLOR_nit__model__MPropDef___mproperty].val = p0; /* _mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#location for (self: MPropDef): Location */
val* nit___nit__MPropDef___location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2016);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location= for (self: MPropDef, Location) */
void nit___nit__MPropDef___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___location].val = p0; /* _location on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#init for (self: MPropDef) */
void nit___nit__MPropDef___standard__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : Array[MPropDef] */;
val* var5 /* : Array[MPropDef] */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var9 /* : Array[MPropDef] */;
val* var11 /* : Array[MPropDef] */;
val* var12 /* : MProperty */;
val* var14 /* : MProperty */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClassDef */;
val* var20 /* : MClassDef */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MProperty */;
val* var28 /* : MProperty */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var36 /* : MClassDef */;
val* var38 /* : MClassDef */;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MPropDef___standard__kernel__Object__init]))(self) /* init on <self:MPropDef>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var2 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mpropdefs (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 623);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[MPropDef]>*/
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var8 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MProperty#mpropdefs (var6) on <var6:MProperty> */
var11 = var6->attrs[COLOR_nit__model__MProperty___mpropdefs].val; /* _mpropdefs on <var6:MProperty> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var9, self); /* Direct call array#Array#add on <var9:Array[MPropDef]>*/
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var14 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var12) on <var12:MProperty> */
var17 = var12->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var12:MProperty> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var20 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var15,var18) on <var15:MClassDef> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var15,var_other) on <var15:MClassDef> */
var25 = var15 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var28 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = var26->attrs[COLOR_nit__model__MProperty___intro].val != NULL; /* _intro on <var26:MProperty> */
var30 = !var29;
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2024);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var33 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MProperty#intro= (var31,self) on <var31:MProperty> */
/* Covariant cast for argument 0 (intro) <self:MPropDef> isa MPROPDEF */
/* <self:MPropDef> isa MPROPDEF */
type_struct = var31->type->resolution_table->types[COLOR_nit__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var35 = 0;
} else {
var35 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var35)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var31->attrs[COLOR_nit__model__MProperty___intro].val = self; /* _intro on <var31:MProperty> */
RET_LABEL34:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var38 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (varonce) {
var39 = varonce;
} else {
var40 = "#";
var41 = 1;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce = var39;
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var45 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_standard__NativeArray(var47, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var48)->values[0] = (val*) var36;
((struct instance_standard__NativeArray*)var48)->values[1] = (val*) var39;
((struct instance_standard__NativeArray*)var48)->values[2] = (val*) var43;
{
((void (*)(val* self, val* p0, long p1))(var46->class->vft[COLOR_standard__array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val* self))(var46->class->vft[COLOR_standard__string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
{ /* Inline model#MPropDef#to_s= (self,var49) on <self:MPropDef> */
self->attrs[COLOR_nit__model__MPropDef___to_s].val = var49; /* _to_s on <self:MPropDef> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method model#MPropDef#name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
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
/* method model#MPropDef#full_name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : String */;
val* var36 /* : MClassDef */;
val* var38 /* : MClassDef */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : nullable MProject */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
val* var46 /* : MClassDef */;
val* var48 /* : MClassDef */;
val* var49 /* : MModule */;
val* var51 /* : MModule */;
val* var52 /* : nullable MProject */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other56 /* var other: nullable Object */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : MProperty */;
val* var61 /* : MProperty */;
val* var62 /* : MClassDef */;
val* var64 /* : MClassDef */;
val* var65 /* : MModule */;
val* var67 /* : MModule */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : MProperty */;
val* var76 /* : MProperty */;
val* var77 /* : MVisibility */;
val* var79 /* : MVisibility */;
val* var80 /* : MVisibility */;
short int var81 /* : Bool */;
val* var82 /* : MClassDef */;
val* var84 /* : MClassDef */;
val* var85 /* : MModule */;
val* var87 /* : MModule */;
val* var88 /* : MClassDef */;
val* var90 /* : MClassDef */;
val* var91 /* : MClass */;
val* var93 /* : MClass */;
val* var94 /* : MVisibility */;
val* var96 /* : MVisibility */;
val* var97 /* : String */;
val* var98 /* : MProperty */;
val* var100 /* : MProperty */;
val* var101 /* : MClassDef */;
val* var103 /* : MClassDef */;
val* var104 /* : MModule */;
val* var106 /* : MModule */;
val* var107 /* : nullable MProject */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : MProperty */;
val* var119 /* : MProperty */;
val* var120 /* : MClassDef */;
val* var122 /* : MClassDef */;
val* var123 /* : MModule */;
val* var125 /* : MModule */;
val* var126 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : MClassDef */;
val* var136 /* : MClassDef */;
val* var137 /* : MClass */;
val* var139 /* : MClass */;
val* var140 /* : MProperty */;
val* var142 /* : MProperty */;
val* var143 /* : MClassDef */;
val* var145 /* : MClassDef */;
val* var146 /* : MClass */;
val* var148 /* : MClass */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
val* var153 /* : MProperty */;
val* var155 /* : MProperty */;
val* var156 /* : MClassDef */;
val* var158 /* : MClassDef */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : MProperty */;
val* var167 /* : MProperty */;
val* var168 /* : String */;
val* var170 /* : String */;
val* var171 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___full_name].val != NULL; /* _full_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MPropDef___full_name].val; /* _full_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2033);
show_backtrace(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void (*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5) /* init on <var5:FlatBuffer>*/;
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__MClassDef___nit__model_base__MEntity__full_name(var7);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var10); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce) {
var11 = varonce;
} else {
var12 = "#";
var13 = 1;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var11); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var17 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var23 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var21) on <var21:MProperty> */
var26 = var21->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var21:MProperty> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var18,var27) on <var18:MClass> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:MClass> */
var34 = var18 == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var35 = nit___nit__MPropDef___nit__model_base__MEntity__name(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var35); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var38 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var36) on <var36:MClassDef> */
var41 = var36->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var36:MClassDef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nit___nit__MModule___mproject(var39);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var45 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var43) on <var43:MProperty> */
var48 = var43->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var43:MProperty> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var46) on <var46:MClassDef> */
var51 = var46->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var46:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = nit___nit__MModule___mproject(var49);
}
if (var42 == NULL) {
var53 = (var52 != NULL);
} else {
{ /* Inline kernel#Object#!= (var42,var52) on <var42:nullable MProject> */
var_other56 = var52;
{
var57 = ((short int (*)(val* self, val* p0))(var42->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var42, var_other56) /* == on <var42:nullable MProject(MProject)>*/;
}
var58 = !var57;
var54 = var58;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var61 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var59) on <var59:MProperty> */
var64 = var59->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var59:MProperty> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var62) on <var62:MClassDef> */
var67 = var62->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var62:MClassDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nit___nit__MModule___nit__model_base__MEntity__full_name(var65);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var68); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "::";
var72 = 2;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var70); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var76 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var74) on <var74:MProperty> */
var79 = var74->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var74:MProperty> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nit__model_base___standard__Object___private_visibility(self);
}
{
var81 = standard___standard__Comparable____60d_61d(var77, var80);
}
if (var81){
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var84 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var82) on <var82:MClassDef> */
var87 = var82->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var82:MClassDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var90 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var88) on <var88:MClassDef> */
var93 = var88->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var88:MClassDef> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var91) on <var91:MClass> */
var96 = var91->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var91:MClass> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nit___nit__MModule___namespace_for(var85, var94);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var100 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var98) on <var98:MProperty> */
var103 = var98->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var98:MProperty> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var101) on <var101:MClassDef> */
var106 = var101->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var101:MClassDef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = nit___nit__MModule___mproject(var104);
}
{
{ /* Inline kernel#Object#!= (var97,var107) on <var97:String> */
var_other56 = var107;
{
var110 = ((short int (*)(val* self, val* p0))(var97->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var97, var_other56) /* == on <var97:String>*/;
}
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
if (varonce112) {
var113 = varonce112;
} else {
var114 = "::";
var115 = 2;
var116 = standard___standard__NativeString___to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var113); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var119 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var117) on <var117:MProperty> */
var122 = var117->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var117:MProperty> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var120) on <var120:MClassDef> */
var125 = var120->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var120:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var123) on <var123:MModule> */
var128 = var123->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var123:MModule> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var126); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "::";
var132 = 2;
var133 = standard___standard__NativeString___to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var130); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
}
} else {
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var136 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var134) on <var134:MClassDef> */
var139 = var134->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var134:MClassDef> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var142 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var140) on <var140:MProperty> */
var145 = var140->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var140:MProperty> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var143) on <var143:MClassDef> */
var148 = var143->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var143:MClassDef> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var137,var146) on <var137:MClass> */
var_other56 = var146;
{
var151 = ((short int (*)(val* self, val* p0))(var137->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var137, var_other56) /* == on <var137:MClass>*/;
}
var152 = !var151;
var149 = var152;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var155 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var153) on <var153:MProperty> */
var158 = var153->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var153:MProperty> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
var159 = nit___nit__MClassDef___nit__model_base__MEntity__name(var156);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var159); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = "::";
var163 = 2;
var164 = standard___standard__NativeString___to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var161); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var167 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var165) on <var165:MProperty> */
var170 = var165->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var165:MProperty> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var168); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
}
{
var171 = standard___standard__FlatBuffer___Object__to_s(var_res);
}
var3 = var171;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MPropDef___full_name].val = var3; /* _full_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MPropDef#c_name for (self: MPropDef): String */
val* nit___nit__MPropDef___nit__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : MClassDef */;
val* var39 /* : MClassDef */;
val* var40 /* : MModule */;
val* var42 /* : MModule */;
val* var43 /* : MProperty */;
val* var45 /* : MProperty */;
val* var46 /* : MClassDef */;
val* var48 /* : MClassDef */;
val* var49 /* : MModule */;
val* var51 /* : MModule */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MProperty */;
val* var59 /* : MProperty */;
val* var60 /* : MClassDef */;
val* var62 /* : MClassDef */;
val* var63 /* : MModule */;
val* var65 /* : MModule */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MClassDef */;
val* var74 /* : MClassDef */;
val* var75 /* : MClass */;
val* var77 /* : MClass */;
val* var78 /* : MProperty */;
val* var80 /* : MProperty */;
val* var81 /* : MClassDef */;
val* var83 /* : MClassDef */;
val* var84 /* : MClass */;
val* var86 /* : MClass */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : MProperty */;
val* var93 /* : MProperty */;
val* var94 /* : MClassDef */;
val* var96 /* : MClassDef */;
val* var97 /* : String */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : MProperty */;
val* var106 /* : MProperty */;
val* var107 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___c_name].val != NULL; /* _c_name on <self:MPropDef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__model__MPropDef___c_name].val; /* _c_name on <self:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2082);
show_backtrace(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void (*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5) /* init on <var5:FlatBuffer>*/;
}
RET_LABEL6:(void)0;
}
}
var_res = var5;
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var9 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__MClassDef___nit__model_base__MEntity__c_name(var7);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var10); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce) {
var11 = varonce;
} else {
var12 = "___";
var13 = 3;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var11); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var17 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var23 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var21) on <var21:MProperty> */
var26 = var21->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var21:MProperty> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var18,var27) on <var18:MClass> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:MClass> */
var34 = var18 == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var35 = nit___nit__MPropDef___nit__model_base__MEntity__name(self);
}
{
var36 = standard___standard__Text___to_cmangle(var35);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var36); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var39 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var37) on <var37:MClassDef> */
var42 = var37->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var37:MClassDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var45 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var43) on <var43:MProperty> */
var48 = var43->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var43:MProperty> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var46) on <var46:MClassDef> */
var51 = var46->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var46:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var40,var49) on <var40:MModule> */
var_other54 = var49;
{
var55 = ((short int (*)(val* self, val* p0))(var40->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var40, var_other54) /* == on <var40:MModule>*/;
}
var56 = !var55;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var59 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var57) on <var57:MProperty> */
var62 = var57->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var57:MProperty> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var60) on <var60:MClassDef> */
var65 = var60->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var60:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = nit___nit__MModule___nit__model_base__MEntity__c_name(var63);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var66); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "__";
var70 = 2;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var68); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var74 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var72) on <var72:MClassDef> */
var77 = var72->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var72:MClassDef> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var80 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var78) on <var78:MProperty> */
var83 = var78->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var78:MProperty> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var81) on <var81:MClassDef> */
var86 = var81->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var81:MClassDef> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var75,var84) on <var75:MClass> */
var_other54 = var84;
{
var89 = ((short int (*)(val* self, val* p0))(var75->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var75, var_other54) /* == on <var75:MClass>*/;
}
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var93 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var91) on <var91:MProperty> */
var96 = var91->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var91:MProperty> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nit___nit__MClassDef___nit__model_base__MEntity__name(var94);
}
{
var98 = standard___standard__Text___to_cmangle(var97);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var98); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "__";
var102 = 2;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var100); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var106 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var104) on <var104:MProperty> */
var109 = var104->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var104:MProperty> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = standard___standard__Text___to_cmangle(var107);
}
{
standard___standard__FlatBuffer___Buffer__append(var_res, var110); /* Direct call string#FlatBuffer#append on <var_res:FlatBuffer>*/
}
}
{
var111 = standard___standard__FlatBuffer___Object__to_s(var_res);
}
var3 = var111;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__model__MPropDef___c_name].val = var3; /* _c_name on <self:MPropDef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model#MPropDef#model for (self: MPropDef): Model */
val* nit___nit__MPropDef___nit__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : Model */;
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__MClassDef___nit__model_base__MEntity__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: MPropDef): String */
val* nit___nit__MPropDef___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2104);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s= for (self: MPropDef, String) */
void nit___nit__MPropDef___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#is_intro for (self: MPropDef): Bool */
short int nit___nit__MPropDef___is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : MPropDef */;
val* var6 /* : MPropDef */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
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
var11 = var4 == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* nit___nit__MPropDef___lookup_next_definition(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2118);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var5 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit___nit__MProperty___lookup_all_definitions(var3, var_mmodule, var_mtype);
}
var_mpropdefs = var6;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_mpropdefs);
}
var_i = var7;
for(;;) {
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_i);
}
var_ = var9;
if (var9){
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_i);
}
{
{ /* Inline kernel#Object#!= (var10,self) on <var10:nullable Object(MPropDef)> */
var_other = self;
{
var13 = ((short int (*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_other) /* == on <var10:nullable Object(MPropDef)>*/;
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var8 = var11;
} else {
var8 = var_;
}
if (var8){
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_i);
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2123);
show_backtrace(1);
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_i);
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2125);
show_backtrace(1);
}
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_i);
}
/* <var17:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nit__model__MPropDef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (unlikely(!var18)) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2126);
show_backtrace(1);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature for (self: MMethodDef): nullable MSignature */
val* nit___nit__MMethodDef___msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature= for (self: MMethodDef, nullable MSignature) */
void nit___nit__MMethodDef___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#new_msignature for (self: MMethodDef): nullable MSignature */
val* nit___nit__MMethodDef___new_msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#new_msignature= for (self: MMethodDef, nullable MSignature) */
void nit___nit__MMethodDef___new_msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = p0; /* _new_msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#initializers for (self: MMethodDef): Array[MProperty] */
val* nit___nit__MMethodDef___initializers(val* self) {
val* var /* : Array[MProperty] */;
val* var1 /* : Array[MProperty] */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <self:MMethodDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_intern for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_extern for (self: MMethodDef): Bool */
short int nit___nit__MMethodDef___is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern= for (self: MMethodDef, Bool) */
void nit___nit__MMethodDef___is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#constant_value for (self: MMethodDef): nullable Object */
val* nit___nit__MMethodDef___constant_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_nit__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#constant_value= for (self: MMethodDef, nullable Object) */
void nit___nit__MMethodDef___constant_value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MMethodDef___constant_value].val = p0; /* _constant_value on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype for (self: MAttributeDef): nullable MType */
val* nit___nit__MAttributeDef___static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype= for (self: MAttributeDef, nullable MType) */
void nit___nit__MAttributeDef___static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound for (self: MVirtualTypeDef): nullable MType */
val* nit___nit__MVirtualTypeDef___bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound= for (self: MVirtualTypeDef, nullable MType) */
void nit___nit__MVirtualTypeDef___bound_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed for (self: MVirtualTypeDef): Bool */
short int nit___nit__MVirtualTypeDef___is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: MVirtualTypeDef, Bool) */
void nit___nit__MVirtualTypeDef___is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MClassKind#to_s for (self: MClassKind): String */
val* nit___nit__MClassKind___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s= for (self: MClassKind, String) */
void nit___nit__MClassKind___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nit__model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#need_init for (self: MClassKind): Bool */
short int nit___nit__MClassKind___need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init= for (self: MClassKind, Bool) */
void nit___nit__MClassKind___need_init_61d(val* self, short int p0) {
self->attrs[COLOR_nit__model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#can_specialize for (self: MClassKind, MClassKind): Bool */
short int nit___nit__MClassKind___can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : MClassKind */;
short int var2 /* : Bool */;
val* var_other4 /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : MClassKind */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MClassKind */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : MClassKind */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
val* var42 /* : MClassKind */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
var_other = p0;
{
var1 = nit__model___standard__Object___interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var1) on <var_other:MClassKind> */
var_other4 = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other4) on <var_other:MClassKind> */
var7 = var_other == var_other4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
{
var10 = nit__model___standard__Object___interface_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var10) on <self:MClassKind> */
var_other4 = var10;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other4) on <self:MClassKind> */
var15 = self == var_other4;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
var9 = var_;
} else {
{
var16 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var16) on <self:MClassKind> */
var_other4 = var16;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other4) on <self:MClassKind> */
var21 = self == var_other4;
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
var9 = var17;
}
if (var9){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
{
var23 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var23) on <self:MClassKind> */
var_other4 = var23;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other4) on <self:MClassKind> */
var28 = self == var_other4;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline kernel#Object#== (self,var_other) on <self:MClassKind> */
var_other4 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other4) on <self:MClassKind> */
var33 = self == var_other4;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var = var29;
goto RET_LABEL;
} else {
{
var35 = nit__model___standard__Object___enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var35) on <var_other:MClassKind> */
var_other4 = var35;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other4) on <var_other:MClassKind> */
var40 = var_other == var_other4;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_41 = var36;
if (var36){
var34 = var_41;
} else {
{
var42 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var42) on <var_other:MClassKind> */
var_other4 = var42;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other4) on <var_other:MClassKind> */
var47 = var_other == var_other4;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var34 = var43;
}
if (var34){
var48 = 0;
var = var48;
goto RET_LABEL;
} else {
}
}
}
var49 = 1;
var = var49;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassKind#init for (self: MClassKind) */
void nit___nit__MClassKind___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__MClassKind___standard__kernel__Object__init]))(self) /* init on <self:MClassKind>*/;
}
RET_LABEL:;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* nit__model___standard__Object___abstract_kind(val* self) {
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
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = 14;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4) /* to_s= on <var2:MClassKind>*/;
}
{
((void (*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, var8) /* need_init= on <var2:MClassKind>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:MClassKind>*/;
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
val* nit__model___standard__Object___concrete_kind(val* self) {
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
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "class";
var6 = 5;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4) /* to_s= on <var2:MClassKind>*/;
}
{
((void (*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, var8) /* need_init= on <var2:MClassKind>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:MClassKind>*/;
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
val* nit__model___standard__Object___interface_kind(val* self) {
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
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = 9;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4) /* to_s= on <var2:MClassKind>*/;
}
{
((void (*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, var8) /* need_init= on <var2:MClassKind>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:MClassKind>*/;
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
val* nit__model___standard__Object___enum_kind(val* self) {
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
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = 4;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4) /* to_s= on <var2:MClassKind>*/;
}
{
((void (*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, var8) /* need_init= on <var2:MClassKind>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:MClassKind>*/;
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
val* nit__model___standard__Object___extern_kind(val* self) {
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
var2 = NEW_nit__MClassKind(&type_nit__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = 12;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__model__MClassKind__to_s_61d]))(var2, var4) /* to_s= on <var2:MClassKind>*/;
}
{
((void (*)(val* self, short int p0))(var2->class->vft[COLOR_nit__model__MClassKind__need_init_61d]))(var2, var8) /* need_init= on <var2:MClassKind>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:MClassKind>*/;
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
