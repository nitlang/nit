#include "nit__coloring.sep.0.h"
/* method coloring#POSetConflictGraph#core for (self: POSetConflictGraph[nullable Object]): HashSet[nullable Object] */
val* nit___nit__POSetConflictGraph___core(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#border for (self: POSetConflictGraph[nullable Object]): HashSet[nullable Object] */
val* nit___nit__POSetConflictGraph___border(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#crown for (self: POSetConflictGraph[nullable Object]): HashSet[nullable Object] */
val* nit___nit__POSetConflictGraph___crown(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#conflicts for (self: POSetConflictGraph[nullable Object]): HashMap[nullable Object, Set[nullable Object]] */
val* nit___nit__POSetConflictGraph___conflicts(val* self) {
val* var /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var1 /* : HashMap[nullable Object, Set[nullable Object]] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset for (self: POSetConflictGraph[nullable Object]): POSet[nullable Object] */
val* nit___nit__POSetConflictGraph___poset(val* self) {
val* var /* : POSet[nullable Object] */;
val* var1 /* : POSet[nullable Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset= for (self: POSetConflictGraph[nullable Object], POSet[nullable Object]) */
void nit___nit__POSetConflictGraph___poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[nullable Object]> isa POSet[E] */
/* <p0:POSet[nullable Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val = p0; /* _poset on <self:POSetConflictGraph[nullable Object]> */
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#order for (self: POSetConflictGraph[nullable Object]): Array[nullable Object] */
val* nit___nit__POSetConflictGraph___order(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___order].val; /* _order on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _order");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#order= for (self: POSetConflictGraph[nullable Object], Array[nullable Object]) */
void nit___nit__POSetConflictGraph___order_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (order) <p0:Array[nullable Object]> isa Array[E] */
/* <p0:Array[nullable Object]> isa Array[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 51);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___order].val = p0; /* _order on <self:POSetConflictGraph[nullable Object]> */
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#init for (self: POSetConflictGraph[nullable Object]) */
void nit___nit__POSetConflictGraph___standard__kernel__Object__init(val* self) {
val* var /* : POSet[nullable Object] */;
val* var2 /* : POSet[nullable Object] */;
val* var3 /* : POSet[nullable Object] */;
val* var5 /* : POSet[nullable Object] */;
val* var6 /* : Array[nullable Object] */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
nit___nit__POSetConflictGraph___extract_core(self); /* Direct call coloring#POSetConflictGraph#extract_core on <self:POSetConflictGraph[nullable Object]>*/
}
{
nit___nit__POSetConflictGraph___extract_border(self); /* Direct call coloring#POSetConflictGraph#extract_border on <self:POSetConflictGraph[nullable Object]>*/
}
{
nit___nit__POSetConflictGraph___extract_crown(self); /* Direct call coloring#POSetConflictGraph#extract_crown on <self:POSetConflictGraph[nullable Object]>*/
}
{
nit___nit__POSetConflictGraph___compute_conflicts(self); /* Direct call coloring#POSetConflictGraph#compute_conflicts on <self:POSetConflictGraph[nullable Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset___poset__POSet___linearize(var, var3);
}
{
{ /* Inline coloring#POSetConflictGraph#order= (self,var6) on <self:POSetConflictGraph[nullable Object]> */
/* Covariant cast for argument 0 (order) <var6:Array[nullable Object]> isa Array[E] */
/* <var6:Array[nullable Object]> isa Array[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Array__nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var6->type->table_size) {
var8 = 0;
} else {
var8 = var6->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 51);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___order].val = var6; /* _order on <self:POSetConflictGraph[nullable Object]> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_core for (self: POSetConflictGraph[nullable Object]) */
void nit___nit__POSetConflictGraph___extract_core(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : POSet[nullable Object] */;
val* var5 /* : POSet[nullable Object] */;
val* var_ /* var : POSet[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : POSet[nullable Object] */;
val* var12 /* : POSet[nullable Object] */;
val* var13 /* : POSetElement[nullable Object] */;
val* var14 /* : Collection[nullable Object] */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
val* var20 /* : HashSet[nullable Object] */;
val* var22 /* : HashSet[nullable Object] */;
val* var23 /* : POSet[nullable Object] */;
val* var25 /* : POSet[nullable Object] */;
val* var26 /* : POSetElement[nullable Object] */;
val* var27 /* : Collection[nullable Object] */;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[nullable Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = poset___poset__POSet___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var12 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset___poset__POSet____91d_93d(var10, var_e);
}
{
var14 = poset___poset__POSetElement___direct_greaters(var13);
}
{
var15 = ((long(*)(val* self))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__Collection__length]))(var14); /* length on <var14:Collection[nullable Object]>*/
}
{
{ /* Inline kernel#Int#> (var15,1l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var19 = var15 > 1l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var22 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var25 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = poset___poset__POSet____91d_93d(var23, var_e);
}
{
var27 = poset___poset__POSetElement___greaters(var26);
}
{
standard___standard__SimpleCollection___add_all(var20, var27); /* Direct call abstract_collection#SimpleCollection#add_all on <var20:HashSet[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_border for (self: POSetConflictGraph[nullable Object]) */
void nit___nit__POSetConflictGraph___extract_border(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
val* var5 /* : HashSet[nullable Object] */;
val* var_ /* var : HashSet[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashSet[nullable Object] */;
val* var14 /* : HashSet[nullable Object] */;
val* var16 /* : HashSet[nullable Object] */;
val* var18 /* : HashSet[nullable Object] */;
val* var_19 /* var : HashSet[nullable Object] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_e24 /* var e: nullable Object */;
val* var25 /* : HashSet[nullable Object] */;
val* var27 /* : HashSet[nullable Object] */;
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[nullable Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[nullable Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
{
var10 = nit___nit__POSetConflictGraph___is_border(self, var_e);
}
var11 = !var10;
if (var11){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[nullable Object]> */
var14 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var12, var_e); /* Direct call hash_collection#HashSet#add on <var12:HashSet[nullable Object]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[nullable Object]> */
var18 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_19 = var16;
{
var20 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_19);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[nullable Object]>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[nullable Object]>*/
}
var_e24 = var23;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var27 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(var25, var_e24); /* Direct call hash_collection#HashSet#remove on <var25:HashSet[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#is_border for (self: POSetConflictGraph[nullable Object], nullable Object): Bool */
short int nit___nit__POSetConflictGraph___is_border(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var2 /* : POSet[nullable Object] */;
val* var4 /* : POSet[nullable Object] */;
val* var5 /* : POSetElement[nullable Object] */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_child /* var child: nullable Object */;
val* var11 /* : HashSet[nullable Object] */;
val* var13 /* : HashSet[nullable Object] */;
short int var14 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 83);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var4 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSet____91d_93d(var2, var_e);
}
{
var6 = poset___poset__POSetElement___direct_smallers(var5);
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[nullable Object]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[nullable Object]>*/
}
var_child = var10;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var13 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var11, var_child);
}
if (var14){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#extract_crown for (self: POSetConflictGraph[nullable Object]) */
void nit___nit__POSetConflictGraph___extract_crown(val* self) {
val* var /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : POSet[nullable Object] */;
val* var5 /* : POSet[nullable Object] */;
val* var_ /* var : POSet[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[nullable Object] */;
val* var13 /* : HashSet[nullable Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : HashSet[nullable Object] */;
val* var19 /* : HashSet[nullable Object] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : HashSet[nullable Object] */;
val* var24 /* : HashSet[nullable Object] */;
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[nullable Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 34);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[nullable Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = poset___poset__POSet___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[nullable Object]> */
var13 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var11, var_e);
}
var15 = !var14;
var_16 = var15;
if (var15){
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[nullable Object]> */
var19 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var17, var_e);
}
var21 = !var20;
var10 = var21;
} else {
var10 = var_16;
}
if (var10){
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[nullable Object]> */
var24 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 34);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var22, var_e); /* Direct call hash_collection#HashSet#add on <var22:HashSet[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#compute_conflicts for (self: POSetConflictGraph[nullable Object]) */
void nit___nit__POSetConflictGraph___compute_conflicts(val* self) {
val* var /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var2 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var3 /* : HashSet[nullable Object] */;
val* var5 /* : HashSet[nullable Object] */;
val* var_ /* var : HashSet[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : POSet[nullable Object] */;
val* var12 /* : POSet[nullable Object] */;
val* var13 /* : POSetElement[nullable Object] */;
val* var14 /* : Collection[nullable Object] */;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[nullable Object, Set[nullable Object]]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[nullable Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[nullable Object]> */
var12 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset___poset__POSet____91d_93d(var10, var_e);
}
{
var14 = poset___poset__POSetElement___greaters(var13);
}
{
nit___nit__POSetConflictGraph___add_conflicts(self, var14); /* Direct call coloring#POSetConflictGraph#add_conflicts on <self:POSetConflictGraph[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflict for (self: POSetConflictGraph[nullable Object], nullable Object, nullable Object) */
void nit___nit__POSetConflictGraph___add_conflict(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_e /* var e: nullable Object */;
val* var_o /* var o: nullable Object */;
val* var7 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var9 /* : HashMap[nullable Object, Set[nullable Object]] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var14 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var15 /* : HashSet[nullable Object] */;
val* var16 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var18 /* : HashMap[nullable Object, Set[nullable Object]] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var23 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var24 /* : HashSet[nullable Object] */;
val* var25 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var27 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var28 /* : nullable Object */;
val* var29 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var31 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var32 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 105);
fatal_exit(1);
}
/* Covariant cast for argument 1 (o) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 105);
fatal_exit(1);
}
var_e = p0;
var_o = p1;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var9 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var7, var_e);
}
var11 = !var10;
if (var11){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var14 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var15); /* Direct call hash_collection#HashSet#init on <var15:HashSet[nullable Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var12, var_e, var15); /* Direct call hash_collection#HashMap#[]= on <var12:HashMap[nullable Object, Set[nullable Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var18 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var16, var_o);
}
var20 = !var19;
if (var20){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var23 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var24); /* Direct call hash_collection#HashSet#init on <var24:HashSet[nullable Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var21, var_o, var24); /* Direct call hash_collection#HashMap#[]= on <var21:HashMap[nullable Object, Set[nullable Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var27 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var25, var_e);
}
{
((void(*)(val* self, val* p0))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var28, var_o); /* add on <var28:nullable Object(Set[nullable Object])>*/
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[nullable Object]> */
var31 = self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[nullable Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var29, var_o);
}
{
((void(*)(val* self, val* p0))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var32, var_e); /* add on <var32:nullable Object(Set[nullable Object])>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflicts for (self: POSetConflictGraph[nullable Object], Collection[nullable Object]) */
void nit___nit__POSetConflictGraph___add_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e1 /* var e1: nullable Object */;
val* var_5 /* var : Collection[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e2 /* var e2: nullable Object */;
/* Covariant cast for argument 0 (es) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__nit__POSetConflictGraph___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 112);
fatal_exit(1);
}
var_es = p0;
var_ = var_es;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_e1 = var4;
var_5 = var_es;
{
var6 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_5); /* iterator on <var_5:Collection[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e2 = var9;
{
nit___nit__POSetConflictGraph___add_conflict(self, var_e1, var_e2); /* Direct call coloring#POSetConflictGraph#add_conflict on <self:POSetConflictGraph[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label10;
}
}
BREAK_label10: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSet#to_conflict_graph for (self: POSet[nullable Object]): POSetConflictGraph[nullable Object] */
val* nit__coloring___poset__POSet___to_conflict_graph(val* self) {
val* var /* : POSetConflictGraph[nullable Object] */;
val* var1 /* : POSetConflictGraph[nullable Object] */;
var1 = NEW_nit__POSetConflictGraph(self->type->resolution_table->types[COLOR_nit__POSetConflictGraph__poset__POSet___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__coloring__POSetConflictGraph__poset_61d]))(var1, self); /* poset= on <var1:POSetConflictGraph[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:POSetConflictGraph[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored for (self: POSetColorer[Object]): Bool */
short int nit___nit__POSetColorer___is_colored(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored= for (self: POSetColorer[Object], Bool) */
void nit___nit__POSetColorer___is_colored_61d(val* self, short int p0) {
self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s = p0; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#ids for (self: POSetColorer[Object]): Map[Object, Int] */
val* nit___nit__POSetColorer___ids(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 176);
fatal_exit(1);
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 179);
fatal_exit(1);
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
/* method coloring#POSetColorer#ids_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* nit___nit__POSetColorer___ids_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors for (self: POSetColorer[Object]): Map[Object, Int] */
val* nit___nit__POSetColorer___colors(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 184);
fatal_exit(1);
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
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
/* method coloring#POSetColorer#colors_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* nit___nit__POSetColorer___colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache for (self: POSetColorer[Object]): POSet[Object] */
val* nit___nit__POSetColorer___poset_cache(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache= for (self: POSetColorer[Object], POSet[Object]) */
void nit___nit__POSetColorer___poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val = p0; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#conflicts for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* nit___nit__POSetColorer___conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Map[Object, Set[Object]] */;
val* var6 /* : Map[Object, Set[Object]] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 198);
fatal_exit(1);
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_nit__coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 201);
fatal_exit(1);
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
/* method coloring#POSetColorer#conflicts_cache for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* nit___nit__POSetColorer___conflicts_cache(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 201);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache= for (self: POSetColorer[Object], Map[Object, Set[Object]]) */
void nit___nit__POSetColorer___conflicts_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts_cache) <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetColorer___35dE__standard__Set__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[E, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 201);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___conflicts_cache].val = p0; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#graph for (self: POSetColorer[Object]): POSetConflictGraph[Object] */
val* nit___nit__POSetColorer___graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#graph= for (self: POSetColorer[Object], POSetConflictGraph[Object]) */
void nit___nit__POSetColorer___graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___graph].val = p0; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize for (self: POSetColorer[Object], POSet[Object]) */
void nit___nit__POSetColorer___colorize(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_poset /* var poset: POSet[Object] */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var7 /* : POSetConflictGraph[Object] */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
val* var14 /* : POSetConflictGraph[Object] */;
val* var16 /* : POSetConflictGraph[Object] */;
val* var17 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var19 /* : HashMap[nullable Object, Set[nullable Object]] */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 205);
fatal_exit(1);
}
var_poset = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache= (self,var_poset) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (poset_cache) <var_poset:POSet[Object]> isa POSet[E] */
/* <var_poset:POSet[Object]> isa POSet[E] */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSet__nit__POSetColorer___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= var_poset->type->table_size) {
var2 = 0;
} else {
var2 = var_poset->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = var_poset == NULL ? "null" : var_poset->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[E]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val = var_poset; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL1:(void)0;
}
}
var7 = NEW_nit__POSetConflictGraph(self->type->resolution_table->types[COLOR_nit__POSetConflictGraph__nit__POSetColorer___35dE]);
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_nit__coloring__POSetConflictGraph__poset_61d]))(var7, var_poset); /* poset= on <var7:POSetConflictGraph[Object]>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7); /* init on <var7:POSetConflictGraph[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph= (self,var7) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (graph) <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
/* <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
type_struct12 = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph__nit__POSetColorer___35dE];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(cltype10 >= var7->type->table_size) {
var9 = 0;
} else {
var9 = var7->type->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name13 = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[E]", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___graph].val = var7; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL8:(void)0;
}
}
{
nit___nit__POSetColorer___allocate_ids(self); /* Direct call coloring#POSetColorer#allocate_ids on <self:POSetColorer[Object]>*/
}
{
nit___nit__POSetColorer___compute_colors(self); /* Direct call coloring#POSetColorer#compute_colors on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var14) on <var14:POSetConflictGraph[Object]> */
var19 = var14->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var14:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache= (self,var17) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (conflicts_cache) <var17:HashMap[nullable Object, Set[nullable Object]](HashMap[Object, Set[Object]])> isa Map[E, Set[E]] */
/* <var17:HashMap[nullable Object, Set[nullable Object]](HashMap[Object, Set[Object]])> isa Map[E, Set[E]] */
type_struct24 = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetColorer___35dE__standard__Set__nit__POSetColorer___35dE];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(cltype22 >= var17->type->table_size) {
var21 = 0;
} else {
var21 = var17->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name25 = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[E, Set[E]]", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 201);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetColorer___conflicts_cache].val = var17; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#is_colored= (self,1) on <self:POSetColorer[Object]> */
self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s = 1; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#allocate_ids for (self: POSetColorer[Object]) */
void nit___nit__POSetColorer___allocate_ids(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : HashSet[Object] */;
val* var4 /* : POSet[Object] */;
val* var6 /* : POSet[Object] */;
val* var7 /* : Array[nullable Object] */;
val* var_elements /* var elements: HashSet[Object] */;
val* var8 /* : POSet[Object] */;
val* var10 /* : POSet[Object] */;
val* var11 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var16 /* : HashMap[Object, Int] */;
val* var18 /* : HashMap[Object, Int] */;
val* var19 /* : HashMap[Object, Int] */;
val* var21 /* : HashMap[Object, Int] */;
long var22 /* : Int */;
val* var23 /* : nullable Object */;
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 179);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
var3 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetColorer___35dE]);
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard__array___Collection___to_a(var4);
}
{
standard___standard__HashSet___from(var3, var7); /* Direct call hash_collection#HashSet#from on <var3:HashSet[Object]>*/
}
var_elements = var3;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var10 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = poset___poset__POSet___linearize(var8, var_elements);
}
var_ = var11;
{
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_13);
}
if (var14){
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_13);
}
var_e = var15;
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var18 = self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 179);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var21 = self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 179);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var19);
}
{
var23 = (val*)(var22<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var16, var_e, var23); /* Direct call hash_collection#HashMap#[]= on <var16:HashMap[Object, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_13); /* Direct call array#ArrayIterator#finish on <var_13:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#compute_colors for (self: POSetColorer[Object]) */
void nit___nit__POSetColorer___compute_colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[nullable Object] */;
val* var8 /* : HashSet[nullable Object] */;
val* var9 /* : POSetConflictGraph[Object] */;
val* var11 /* : POSetConflictGraph[Object] */;
val* var12 /* : HashSet[nullable Object] */;
val* var14 /* : HashSet[nullable Object] */;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
{
nit___nit__POSetColorer___colorize_core(self); /* Direct call coloring#POSetColorer#colorize_core on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#border (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit___nit__POSetColorer___colorize_set(self, var6); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var11 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#crown (var9) on <var9:POSetConflictGraph[Object]> */
var14 = var9->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val; /* _crown on <var9:POSetConflictGraph[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 34);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
nit___nit__POSetColorer___colorize_set(self, var12); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_core for (self: POSetColorer[Object]) */
void nit___nit__POSetColorer___colorize_core(val* self) {
val* var /* : POSet[Object] */;
val* var2 /* : POSet[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[nullable Object] */;
val* var8 /* : HashSet[nullable Object] */;
val* var9 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_e /* var e: Object */;
long var14 /* : Int */;
long var_color /* var color: Int */;
val* var15 /* : POSetConflictGraph[Object] */;
val* var17 /* : POSetConflictGraph[Object] */;
val* var18 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var20 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var21 /* : nullable Object */;
val* var_conflicts /* var conflicts: Set[Object] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var27 /* : Int */;
val* var28 /* : HashMap[Object, Int] */;
val* var30 /* : HashMap[Object, Int] */;
val* var31 /* : nullable Object */;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#core (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset___poset__POSet___linearize(var, var6);
}
var_ = var9;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_e = var13;
{
var14 = nit___nit__POSetColorer___min_color(self, var_e);
}
var_color = var14;
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var17 = self->attrs[COLOR_nit__coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 203);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var15) on <var15:POSetConflictGraph[Object]> */
var20 = var15->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var15:POSetConflictGraph[Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var18, var_e);
}
var_conflicts = var21;
for(;;) {
{
var22 = nit___nit__POSetColorer___is_color_free(self, var_color, var_conflicts);
}
var23 = !var22;
if (var23){
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var27 = var_color + 1l;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_color = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var30 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = (val*)(var_color<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var28, var_e, var31); /* Direct call hash_collection#HashMap#[]= on <var28:HashMap[Object, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label32;
}
}
BREAK_label32: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_set for (self: POSetColorer[Object], Set[Object]) */
void nit___nit__POSetColorer___colorize_set(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: Set[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var9 /* : HashMap[Object, Int] */;
val* var11 /* : HashMap[Object, Int] */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
/* Covariant cast for argument 0 (set) <p0:Set[Object]> isa Set[E] */
/* <p0:Set[Object]> isa Set[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Set__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 245);
fatal_exit(1);
}
var_set = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = poset___poset__POSet___linearize(var1, var_set);
}
var_ = var4;
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
var_e = var8;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var11 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__POSetColorer___min_color(self, var_e);
}
{
var13 = (val*)(var12<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var9, var_e, var13); /* Direct call hash_collection#HashMap#[]= on <var9:HashMap[Object, Int]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_6); /* Direct call array#ArrayIterator#finish on <var_6:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#min_color for (self: POSetColorer[Object], Object): Int */
long nit___nit__POSetColorer___min_color(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_max_color /* var max_color: Int */;
val* var5 /* : POSet[Object] */;
val* var7 /* : POSet[Object] */;
val* var8 /* : POSetElement[nullable Object] */;
val* var9 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[Object] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_p /* var p: Object */;
val* var14 /* : HashMap[Object, Int] */;
val* var16 /* : HashMap[Object, Int] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : HashMap[Object, Int] */;
val* var21 /* : HashMap[Object, Int] */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
long var_color /* var color: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 250);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var4 = -1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_max_color = var2;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var7 = self->attrs[COLOR_nit__coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 194);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = poset___poset__POSet____91d_93d(var5, var_e);
}
{
var9 = poset___poset__POSetElement___direct_greaters(var8);
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Object]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Object]>*/
}
var_p = var13;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var14, var_p);
}
var18 = !var17;
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var21 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var19, var_p);
}
var23 = (long)(var22)>>2;
var_color = var23;
{
{ /* Inline kernel#Int#> (var_color,var_max_color) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max_color:Int> isa OTHER */
/* <var_max_color:Int> isa OTHER */
var26 = 1; /* easy <var_max_color:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var30 = var_color > var_max_color;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var_max_color = var_color;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Object]>*/
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_max_color,1l) on <var_max_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var38 = var_max_color + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_color_free for (self: POSetColorer[Object], Int, Collection[Object]): Bool */
short int nit___nit__POSetColorer___is_color_free(val* self, long p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_color /* var color: Int */;
val* var_set /* var set: Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[Object, Int] */;
val* var9 /* : HashMap[Object, Int] */;
short int var10 /* : Bool */;
short int var_11 /* var : Bool */;
val* var12 /* : HashMap[Object, Int] */;
val* var14 /* : HashMap[Object, Int] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
/* Covariant cast for argument 1 (set) <p1:Collection[Object]> isa Collection[E] */
/* <p1:Collection[Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__nit__POSetColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 261);
fatal_exit(1);
}
var_color = p0;
var_set = p1;
var_ = var_set;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[Object]>*/
}
var_e = var5;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var9 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var7, var_e);
}
var_11 = var10;
if (var10){
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var14 = self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 187);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var12, var_e);
}
{
{ /* Inline kernel#Int#== (var15,var_color) on <var15:nullable Object(Int)> */
var19 = (long)(var15)>>2;
var18 = (var15 != NULL) && (var19 == var_color);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_11;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#graph for (self: POSetGroupColorer[Object, Object]): POSetConflictGraph[Object] */
val* nit___nit__POSetGroupColorer___graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#graph= for (self: POSetGroupColorer[Object, Object], POSetConflictGraph[Object]) */
void nit___nit__POSetGroupColorer___graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[H] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[H] */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetConflictGraph__nit__POSetGroupColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val = p0; /* _graph on <self:POSetGroupColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetGroupColorer#buckets for (self: POSetGroupColorer[Object, Object]): Map[Object, Collection[Object]] */
val* nit___nit__POSetGroupColorer___buckets(val* self) {
val* var /* : Map[Object, Collection[Object]] */;
val* var1 /* : Map[Object, Collection[Object]] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___buckets].val; /* _buckets on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _buckets");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 288);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#buckets= for (self: POSetGroupColorer[Object, Object], Map[Object, Collection[Object]]) */
void nit___nit__POSetGroupColorer___buckets_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Collection[Object]]> isa Map[H, Collection[E]] */
/* <p0:Map[Object, Collection[Object]]> isa Map[H, Collection[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetGroupColorer___35dH__standard__Collection__nit__POSetGroupColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Collection[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 288);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___buckets].val = p0; /* _buckets on <self:POSetGroupColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetGroupColorer#poset for (self: POSetGroupColorer[Object, Object]): POSet[Object] */
val* nit___nit__POSetGroupColorer___poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var4 /* : POSet[nullable Object] */;
val* var6 /* : POSet[nullable Object] */;
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (var1) on <var1:POSetConflictGraph[Object]> */
var6 = var1->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <var1:POSetConflictGraph[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
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
/* method coloring#POSetGroupColorer#colors for (self: POSetGroupColorer[Object, Object]): Map[Object, Int] */
val* nit___nit__POSetGroupColorer___colors(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
val* var2 /* : Map[Object, Int] */;
val* var3 /* : Map[Object, Int] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var7 /* : POSetConflictGraph[Object] */;
val* var8 /* : POSet[nullable Object] */;
val* var10 /* : POSet[nullable Object] */;
val* var_ /* var : POSet[Object] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var15 /* : HashMap[Object, HashSet[Int]] */;
val* var17 /* : HashMap[Object, HashSet[Int]] */;
val* var18 /* : HashSet[Int] */;
val* var19 /* : HashMap[Object, Int] */;
val* var21 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors].val != NULL; /* _colors on <self:POSetGroupColorer[Object, Object]> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors].val; /* _colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 300);
fatal_exit(1);
}
} else {
{
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var7 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (var5) on <var5:POSetConflictGraph[Object]> */
var10 = var5->attrs[COLOR_nit__coloring__POSetConflictGraph___poset].val; /* _poset on <var5:POSetConflictGraph[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 48);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = poset___poset__POSet___standard__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[Object]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[Object]>*/
}
var_h = var14;
{
{ /* Inline coloring#POSetGroupColorer#used_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var17 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val; /* _used_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _used_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 314);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = NEW_standard__HashSet(&type_standard__HashSet__standard__Int);
{
standard___standard__HashSet___standard__kernel__Object__init(var18); /* Direct call hash_collection#HashSet#init on <var18:HashSet[Int]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var15, var_h, var18); /* Direct call hash_collection#HashMap#[]= on <var15:HashMap[Object, HashSet[Int]]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[Object]>*/
}
{
nit___nit__POSetGroupColorer___compute_colors(self); /* Direct call coloring#POSetGroupColorer#compute_colors on <self:POSetGroupColorer[Object, Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#colors_cache (self) on <self:POSetGroupColorer[Object, Object]> */
var21 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val; /* _colors_cache on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 311);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var3 = var19;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors].val = var3; /* _colors on <self:POSetGroupColorer[Object, Object]> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#colors_cache for (self: POSetGroupColorer[Object, Object]): HashMap[Object, Int] */
val* nit___nit__POSetGroupColorer___colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val; /* _colors_cache on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 311);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#used_colors for (self: POSetGroupColorer[Object, Object]): HashMap[Object, HashSet[Int]] */
val* nit___nit__POSetGroupColorer___used_colors(val* self) {
val* var /* : HashMap[Object, HashSet[Int]] */;
val* var1 /* : HashMap[Object, HashSet[Int]] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val; /* _used_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _used_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 314);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#build_layout for (self: POSetGroupColorer[Object, Object], Object): Array[nullable Object] */
val* nit___nit__POSetGroupColorer___build_layout(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_h /* var h: Object */;
val* var2 /* : Array[nullable Object] */;
val* var_table /* var table: Array[nullable Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : POSetElement[nullable Object] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_s /* var s: Object */;
val* var10 /* : Map[Object, Collection[Object]] */;
val* var12 /* : Map[Object, Collection[Object]] */;
val* var13 /* : nullable Object */;
val* var_bucket /* var bucket: nullable Collection[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_16 /* var : Collection[Object] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var21 /* : Map[Object, Int] */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
long var_color /* var color: Int */;
long var24 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_i /* var i: Int */;
long var_37 /* var : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
long var45 /* : Int */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Sys */;
val* var51 /* : NativeArray[String] */;
static val* varonce;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : Object */;
val* var71 /* : nullable Object */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : String */;
/* Covariant cast for argument 0 (h) <p0:Object> isa H */
/* <p0:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetGroupColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 317);
fatal_exit(1);
}
var_h = p0;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nullable__nit__POSetGroupColorer___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[nullable Object]>*/
}
var_table = var2;
{
var3 = nit___nit__POSetGroupColorer___poset(self);
}
{
var4 = poset___poset__POSet____91d_93d(var3, var_h);
}
{
var5 = poset___poset__POSetElement___greaters(var4);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[Object]>*/
}
if (var8){
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[Object]>*/
}
var_s = var9;
{
{ /* Inline coloring#POSetGroupColorer#buckets (self) on <self:POSetGroupColorer[Object, Object]> */
var12 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___buckets].val; /* _buckets on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _buckets");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 288);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var10, var_s); /* get_or_null on <var10:Map[Object, Collection[Object]]>*/
}
var_bucket = var13;
if (var_bucket == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))((((long)var_bucket&3)?class_info[((long)var_bucket&3)]:var_bucket->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bucket, ((val*)NULL)); /* == on <var_bucket:nullable Collection[Object]>*/
var14 = var15;
}
if (var14){
goto BREAK_label;
} else {
}
var_16 = var_bucket;
{
var17 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_16); /* iterator on <var_16:Collection[Object]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[Object]>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[Object]>*/
}
var_e = var20;
{
var21 = nit___nit__POSetGroupColorer___colors(self);
}
{
var22 = ((val*(*)(val* self, val* p0))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var21, var_e); /* [] on <var21:Map[Object, Int]>*/
}
var23 = (long)(var22)>>2;
var_color = var23;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable Object]> */
var26 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable Object]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var24,var_color) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var29 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var33 = var24 <= var_color;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable Object]> */
var36 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable Object]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_i = var34;
var_37 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_37) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_37:Int> isa OTHER */
/* <var_37:Int> isa OTHER */
var40 = 1; /* easy <var_37:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var44 = var_i < var_37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_i, ((val*)NULL)); /* Direct call array#Array#[]= on <var_table:Array[nullable Object]>*/
}
{
var45 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var45;
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
} else {
{
var47 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_table, var_color);
}
if (var47 == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
var49 = ((short int(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var47, ((val*)NULL)); /* == on <var47:nullable Object>*/
var48 = var49;
}
if (unlikely(!var48)) {
var50 = glob_sys;
if (unlikely(varonce==NULL)) {
var51 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "in ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 3l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = ", for ";
var59 = standard___standard__NativeString___to_s_with_length(var58, 6l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var51)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ": ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var51)->values[4]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " vs ";
var67 = standard___standard__NativeString___to_s_with_length(var66, 4l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var51)->values[6]=var65;
} else {
var51 = varonce;
varonce = NULL;
}
{
var68 = ((val*(*)(val* self))((((long)var_h&3)?class_info[((long)var_h&3)]:var_h->class)->vft[COLOR_standard__string__Object__to_s]))(var_h); /* to_s on <var_h:Object>*/
}
((struct instance_standard__NativeArray*)var51)->values[1]=var68;
var69 = standard__string___Int___Object__to_s(var_color);
((struct instance_standard__NativeArray*)var51)->values[3]=var69;
{
var71 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_table, var_color);
}
if (var71!=NULL) {
var70 = var71;
} else {
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "";
var75 = standard___standard__NativeString___to_s_with_length(var74, 0l);
var73 = var75;
varonce72 = var73;
}
var70 = var73;
}
{
var76 = ((val*(*)(val* self))((((long)var70&3)?class_info[((long)var70&3)]:var70->class)->vft[COLOR_standard__string__Object__to_s]))(var70); /* to_s on <var70:Object>*/
}
((struct instance_standard__NativeArray*)var51)->values[5]=var76;
{
var77 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:Object>*/
}
((struct instance_standard__NativeArray*)var51)->values[7]=var77;
{
var78 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce = var51;
{
standard__file___Sys___print(var50, var78); /* Direct call file#Sys#print on <var50:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 333);
fatal_exit(1);
}
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_table, var_color, var_e); /* Direct call array#Array#[]= on <var_table:Array[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[Object]>*/
}
} else {
goto BREAK_label79;
}
}
BREAK_label79: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[Object]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[Object]>*/
}
} else {
goto BREAK_label80;
}
}
BREAK_label80: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[Object]>*/
}
var = var_table;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#compute_colors for (self: POSetGroupColorer[Object, Object]) */
void nit___nit__POSetGroupColorer___compute_colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[nullable Object] */;
val* var8 /* : HashSet[nullable Object] */;
val* var9 /* : POSetConflictGraph[Object] */;
val* var11 /* : POSetConflictGraph[Object] */;
val* var12 /* : HashSet[nullable Object] */;
val* var14 /* : HashSet[nullable Object] */;
{
{ /* Inline coloring#POSetGroupColorer#colors_cache (self) on <self:POSetGroupColorer[Object, Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val; /* _colors_cache on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 311);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
{
nit___nit__POSetGroupColorer___colorize_core(self); /* Direct call coloring#POSetGroupColorer#colorize_core on <self:POSetGroupColorer[Object, Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var5 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#border (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val; /* _border on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 28);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit___nit__POSetGroupColorer___colorize_set(self, var6); /* Direct call coloring#POSetGroupColorer#colorize_set on <self:POSetGroupColorer[Object, Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var11 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#crown (var9) on <var9:POSetConflictGraph[Object]> */
var14 = var9->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val; /* _crown on <var9:POSetConflictGraph[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 34);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
nit___nit__POSetGroupColorer___colorize_set(self, var12); /* Direct call coloring#POSetGroupColorer#colorize_set on <self:POSetGroupColorer[Object, Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetGroupColorer#colorize_core for (self: POSetGroupColorer[Object, Object]) */
void nit___nit__POSetGroupColorer___colorize_core(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var2 /* : POSetConflictGraph[Object] */;
val* var3 /* : Array[nullable Object] */;
val* var5 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var10 /* : POSetConflictGraph[Object] */;
val* var12 /* : POSetConflictGraph[Object] */;
val* var13 /* : HashSet[nullable Object] */;
val* var15 /* : HashSet[nullable Object] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var_color /* var color: Int */;
long var_mincolor /* var mincolor: Int */;
val* var19 /* : Map[Object, Collection[Object]] */;
val* var21 /* : Map[Object, Collection[Object]] */;
val* var22 /* : nullable Object */;
val* var_bucket /* var bucket: nullable Collection[Object] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : POSetConflictGraph[Object] */;
val* var27 /* : POSetConflictGraph[Object] */;
val* var28 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var30 /* : HashMap[nullable Object, Set[nullable Object]] */;
val* var31 /* : nullable Object */;
val* var_conflicts /* var conflicts: Set[Object] */;
val* var32 /* : POSet[Object] */;
val* var33 /* : POSetElement[nullable Object] */;
val* var34 /* : Collection[nullable Object] */;
val* var_parents /* var parents: Collection[Object] */;
val* var_35 /* var : Collection[Object] */;
val* var36 /* : Iterator[nullable Object] */;
val* var_37 /* var : Iterator[Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_e /* var e: Object */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var42 /* : HashMap[Object, Int] */;
val* var44 /* : HashMap[Object, Int] */;
val* var45 /* : nullable Object */;
val* var46 /* : HashMap[Object, HashSet[Int]] */;
val* var48 /* : HashMap[Object, HashSet[Int]] */;
val* var49 /* : nullable Object */;
val* var50 /* : nullable Object */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var57 /* : Int */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var66 /* : HashMap[Object, Int] */;
val* var68 /* : HashMap[Object, Int] */;
val* var69 /* : nullable Object */;
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var2 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#order (var) on <var:POSetConflictGraph[Object]> */
var5 = var->attrs[COLOR_nit__coloring__POSetConflictGraph___order].val; /* _order on <var:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _order");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 51);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_7);
}
if (var8){
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_7);
}
var_h = var9;
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var12 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#core (var10) on <var10:POSetConflictGraph[Object]> */
var15 = var10->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val; /* _core on <var10:POSetConflictGraph[Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 22);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var13, var_h);
}
var17 = !var16;
if (var17){
goto BREAK_label;
} else {
}
{
var18 = nit___nit__POSetGroupColorer___inherit_color(self, var_h);
}
var_color = var18;
var_mincolor = var_color;
{
{ /* Inline coloring#POSetGroupColorer#buckets (self) on <self:POSetGroupColorer[Object, Object]> */
var21 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___buckets].val; /* _buckets on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _buckets");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 288);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self, val* p0))((((long)var19&3)?class_info[((long)var19&3)]:var19->class)->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var19, var_h); /* get_or_null on <var19:Map[Object, Collection[Object]]>*/
}
var_bucket = var22;
if (var_bucket == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))((((long)var_bucket&3)?class_info[((long)var_bucket&3)]:var_bucket->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bucket, ((val*)NULL)); /* == on <var_bucket:nullable Collection[Object]>*/
var23 = var24;
}
if (var23){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var27 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var25) on <var25:POSetConflictGraph[Object]> */
var30 = var25->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var25:POSetConflictGraph[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 40);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var28, var_h);
}
var_conflicts = var31;
{
var32 = nit___nit__POSetGroupColorer___poset(self);
}
{
var33 = poset___poset__POSet____91d_93d(var32, var_h);
}
{
var34 = poset___poset__POSetElement___greaters(var33);
}
var_parents = var34;
var_35 = var_bucket;
{
var36 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_35); /* iterator on <var_35:Collection[Object]>*/
}
var_37 = var36;
for(;;) {
{
var38 = ((short int(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_37); /* is_ok on <var_37:Iterator[Object]>*/
}
if (var38){
{
var39 = ((val*(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_37); /* item on <var_37:Iterator[Object]>*/
}
var_e = var39;
{
var40 = nit___nit__POSetGroupColorer___next_free_color(self, var_color, var_parents);
}
var_color = var40;
{
var41 = nit___nit__POSetGroupColorer___next_free_color(self, var_color, var_conflicts);
}
var_color = var41;
{
{ /* Inline coloring#POSetGroupColorer#colors_cache (self) on <self:POSetGroupColorer[Object, Object]> */
var44 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val; /* _colors_cache on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 311);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = (val*)(var_color<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var42, var_e, var45); /* Direct call hash_collection#HashMap#[]= on <var42:HashMap[Object, Int]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#used_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var48 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val; /* _used_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _used_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 314);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var46, var_h);
}
{
var50 = (val*)(var_color<<2|1);
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var49, var50); /* Direct call hash_collection#HashSet#add on <var49:nullable Object(HashSet[Int])>*/
}
{
{ /* Inline kernel#Int#== (var_mincolor,var_color) on <var_mincolor:Int> */
var53 = var_mincolor == var_color;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel#Int#+ (var_mincolor,1l) on <var_mincolor:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var57 = var_mincolor + 1l;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_mincolor = var54;
} else {
}
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var64 = var_color + 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_color = var58;
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_37); /* next on <var_37:Iterator[Object]>*/
}
} else {
goto BREAK_label65;
}
}
BREAK_label65: (void)0;
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_37); /* finish on <var_37:Iterator[Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#min_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var68 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val; /* _min_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _min_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 409);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = (val*)(var_mincolor<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var66, var_h, var69); /* Direct call hash_collection#HashMap#[]= on <var66:HashMap[Object, Int]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label70;
}
}
BREAK_label70: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_7); /* Direct call array#ArrayIterator#finish on <var_7:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetGroupColorer#colorize_set for (self: POSetGroupColorer[Object, Object], Set[Object]) */
void nit___nit__POSetGroupColorer___colorize_set(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: Set[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var4 /* : Array[nullable Object] */;
val* var6 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_h /* var h: Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var_color /* var color: Int */;
long var_mincolor /* var mincolor: Int */;
val* var14 /* : Map[Object, Collection[Object]] */;
val* var16 /* : Map[Object, Collection[Object]] */;
val* var17 /* : nullable Object */;
val* var_bucket /* var bucket: nullable Collection[Object] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : POSet[Object] */;
val* var21 /* : POSetElement[nullable Object] */;
val* var22 /* : Collection[nullable Object] */;
val* var_parents /* var parents: Collection[Object] */;
val* var_23 /* var : Collection[Object] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : Iterator[Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_e /* var e: Object */;
long var28 /* : Int */;
val* var29 /* : HashMap[Object, Int] */;
val* var31 /* : HashMap[Object, Int] */;
val* var32 /* : nullable Object */;
val* var33 /* : HashMap[Object, HashSet[Int]] */;
val* var35 /* : HashMap[Object, HashSet[Int]] */;
val* var36 /* : nullable Object */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var56 /* : HashMap[Object, Int] */;
val* var58 /* : HashMap[Object, Int] */;
val* var59 /* : nullable Object */;
/* Covariant cast for argument 0 (set) <p0:Set[Object]> isa Set[H] */
/* <p0:Set[Object]> isa Set[H] */
type_struct = self->type->resolution_table->types[COLOR_standard__Set__nit__POSetGroupColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 375);
fatal_exit(1);
}
var_set = p0;
{
{ /* Inline coloring#POSetGroupColorer#graph (self) on <self:POSetGroupColorer[Object, Object]> */
var3 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___graph].val; /* _graph on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 282);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#order (var1) on <var1:POSetConflictGraph[Object]> */
var6 = var1->attrs[COLOR_nit__coloring__POSetConflictGraph___order].val; /* _order on <var1:POSetConflictGraph[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _order");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 51);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_8);
}
if (var9){
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_8);
}
var_h = var10;
{
var11 = ((short int(*)(val* self, val* p0))((((long)var_set&3)?class_info[((long)var_set&3)]:var_set->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var_set, var_h); /* has on <var_set:Set[Object]>*/
}
var12 = !var11;
if (var12){
goto BREAK_label;
} else {
}
{
var13 = nit___nit__POSetGroupColorer___inherit_color(self, var_h);
}
var_color = var13;
var_mincolor = var_color;
{
{ /* Inline coloring#POSetGroupColorer#buckets (self) on <self:POSetGroupColorer[Object, Object]> */
var16 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___buckets].val; /* _buckets on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _buckets");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 288);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val*(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var14, var_h); /* get_or_null on <var14:Map[Object, Collection[Object]]>*/
}
var_bucket = var17;
if (var_bucket == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))((((long)var_bucket&3)?class_info[((long)var_bucket&3)]:var_bucket->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_bucket, ((val*)NULL)); /* == on <var_bucket:nullable Collection[Object]>*/
var18 = var19;
}
if (var18){
goto BREAK_label;
} else {
}
{
var20 = nit___nit__POSetGroupColorer___poset(self);
}
{
var21 = poset___poset__POSet____91d_93d(var20, var_h);
}
{
var22 = poset___poset__POSetElement___greaters(var21);
}
var_parents = var22;
var_23 = var_bucket;
{
var24 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Collection[Object]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:Iterator[Object]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:Iterator[Object]>*/
}
var_e = var27;
{
var28 = nit___nit__POSetGroupColorer___next_free_color(self, var_color, var_parents);
}
var_color = var28;
{
{ /* Inline coloring#POSetGroupColorer#colors_cache (self) on <self:POSetGroupColorer[Object, Object]> */
var31 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val; /* _colors_cache on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 311);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = (val*)(var_color<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var29, var_e, var32); /* Direct call hash_collection#HashMap#[]= on <var29:HashMap[Object, Int]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#used_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var35 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val; /* _used_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _used_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 314);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var33, var_h);
}
{
var37 = (val*)(var_color<<2|1);
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var36, var37); /* Direct call hash_collection#HashSet#add on <var36:nullable Object(HashSet[Int])>*/
}
{
{ /* Inline kernel#Int#== (var_mincolor,var_color) on <var_mincolor:Int> */
var40 = var_mincolor == var_color;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Int#+ (var_mincolor,1l) on <var_mincolor:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var47 = var_mincolor + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_mincolor = var41;
} else {
}
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var54 = var_color + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_color = var48;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:Iterator[Object]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:Iterator[Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#min_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var58 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val; /* _min_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _min_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 409);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = (val*)(var_mincolor<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var56, var_h, var59); /* Direct call hash_collection#HashMap#[]= on <var56:HashMap[Object, Int]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label60;
}
}
BREAK_label60: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_8); /* Direct call array#ArrayIterator#finish on <var_8:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetGroupColorer#inherit_color for (self: POSetGroupColorer[Object, Object], Object): Int */
long nit___nit__POSetGroupColorer___inherit_color(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_h /* var h: Object */;
long var_res /* var res: Int */;
val* var2 /* : POSet[Object] */;
val* var3 /* : POSetElement[nullable Object] */;
val* var4 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[Object] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_p /* var p: Object */;
val* var9 /* : HashMap[Object, Int] */;
val* var11 /* : HashMap[Object, Int] */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
long var_m /* var m: Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
val* var21 /* : HashMap[Object, Int] */;
val* var23 /* : HashMap[Object, Int] */;
val* var24 /* : nullable Object */;
/* Covariant cast for argument 0 (h) <p0:Object> isa H */
/* <p0:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetGroupColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 397);
fatal_exit(1);
}
var_h = p0;
var_res = 0l;
{
var2 = nit___nit__POSetGroupColorer___poset(self);
}
{
var3 = poset___poset__POSet____91d_93d(var2, var_h);
}
{
var4 = poset___poset__POSetElement___direct_greaters(var3);
}
var_ = var4;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Object]>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Object]>*/
}
var_p = var8;
{
{ /* Inline coloring#POSetGroupColorer#min_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var11 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val; /* _min_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _min_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 409);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var9, var_p);
}
var13 = (long)(var12)>>2;
var_m = var13;
{
{ /* Inline kernel#Int#> (var_m,var_res) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <var_res:Int> isa OTHER */
/* <var_res:Int> isa OTHER */
var16 = 1; /* easy <var_res:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var20 = var_m > var_res;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var_res = var_m;
} else {
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Object]>*/
}
{
{ /* Inline coloring#POSetGroupColorer#min_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var23 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val; /* _min_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _min_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 409);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = (val*)(var_res<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var21, var_h, var24); /* Direct call hash_collection#HashMap#[]= on <var21:HashMap[Object, Int]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#min_colors for (self: POSetGroupColorer[Object, Object]): HashMap[Object, Int] */
val* nit___nit__POSetGroupColorer___min_colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val; /* _min_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _min_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 409);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#next_free_color for (self: POSetGroupColorer[Object, Object], Int, Collection[Object]): Int */
long nit___nit__POSetGroupColorer___next_free_color(val* self, long p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_color /* var color: Int */;
val* var_set /* var set: Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var6 /* : HashMap[Object, HashSet[Int]] */;
val* var8 /* : HashMap[Object, HashSet[Int]] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
/* Covariant cast for argument 1 (set) <p1:Collection[Object]> isa Collection[H] */
/* <p1:Collection[Object]> isa Collection[H] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__nit__POSetGroupColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 416);
fatal_exit(1);
}
var_color = p0;
var_set = p1;
for(;;) {
var_ = var_set;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[Object]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[Object]>*/
}
var_h = var5;
{
{ /* Inline coloring#POSetGroupColorer#used_colors (self) on <self:POSetGroupColorer[Object, Object]> */
var8 = self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val; /* _used_colors on <self:POSetGroupColorer[Object, Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _used_colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 314);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var6, var_h);
}
{
var11 = (val*)(var_color<<2|1);
var10 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var9, var11);
}
if (var10){
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var18 = var_color + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_color = var12;
goto BREAK_;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[Object]>*/
}
goto BREAK_19;
BREAK_: (void)0;
}
BREAK_19: (void)0;
var = var_color;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetGroupColorer#init for (self: POSetGroupColorer[Object, Object]) */
void nit___nit__POSetGroupColorer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__POSetGroupColorer___standard__kernel__Object__init]))(self); /* init on <self:POSetGroupColorer[Object, Object]>*/
}
RET_LABEL:;
}
/* method coloring#BucketsColorer#colors for (self: BucketsColorer[Object, Object]): HashMap[Object, Int] */
val* nit___nit__BucketsColorer___colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#conflicts for (self: BucketsColorer[Object, Object]): HashMap[Object, Set[Object]] */
val* nit___nit__BucketsColorer___conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colorize for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* nit___nit__BucketsColorer___colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var_min_color /* var min_color: Int */;
val* var_ /* var : Map[Object, Set[Object]] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
val* var_3 /* var : MapIterator[Object, Set[Object]] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_holder /* var holder: Object */;
val* var6 /* : nullable Object */;
val* var_hbuckets /* var hbuckets: Set[Object] */;
val* var_7 /* var : Set[Object] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var12 /* : HashMap[Object, Int] */;
val* var14 /* : HashMap[Object, Int] */;
short int var15 /* : Bool */;
long var_color /* var color: Int */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
val* var26 /* : HashMap[Object, Int] */;
val* var28 /* : HashMap[Object, Int] */;
val* var29 /* : nullable Object */;
val* var33 /* : HashMap[Object, Int] */;
val* var35 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__BucketsColorer___35dH__standard__Set__nit__BucketsColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 456);
fatal_exit(1);
}
var_buckets = p0;
{
nit___nit__BucketsColorer___compute_conflicts(self, var_buckets); /* Direct call coloring#BucketsColorer#compute_conflicts on <self:BucketsColorer[Object, Object]>*/
}
var_min_color = 0l;
var_ = var_buckets;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[Object, Set[Object]]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_3); /* is_ok on <var_3:MapIterator[Object, Set[Object]]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_3); /* key on <var_3:MapIterator[Object, Set[Object]]>*/
}
var_holder = var5;
{
var6 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_3); /* item on <var_3:MapIterator[Object, Set[Object]]>*/
}
var_hbuckets = var6;
var_7 = var_hbuckets;
{
var8 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:Set[Object]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[Object]>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[Object]>*/
}
var_bucket = var11;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var14 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var12, var_bucket);
}
if (var15){
goto BREAK_label;
} else {
}
var_color = var_min_color;
for(;;) {
{
var16 = nit___nit__BucketsColorer___is_color_free(self, var_bucket, var_color);
}
var17 = !var16;
if (var17){
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var24 = var_color + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_color = var18;
} else {
goto BREAK_label25;
}
}
BREAK_label25: (void)0;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var28 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = (val*)(var_color<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var26, var_bucket, var29); /* Direct call hash_collection#HashMap#[]= on <var26:HashMap[Object, Int]>*/
}
var_color = var_min_color;
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[Object]>*/
}
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[Object]>*/
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_3); /* next on <var_3:MapIterator[Object, Set[Object]]>*/
}
} else {
goto BREAK_label31;
}
}
BREAK_label31: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_3) on <var_3:MapIterator[Object, Set[Object]]> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var35 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#is_color_free for (self: BucketsColorer[Object, Object], Object, Int): Bool */
short int nit___nit__BucketsColorer___is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_bucket /* var bucket: Object */;
long var_color /* var color: Int */;
val* var2 /* : HashMap[Object, Set[Object]] */;
val* var4 /* : HashMap[Object, Set[Object]] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[Object, Set[Object]] */;
val* var8 /* : HashMap[Object, Set[Object]] */;
val* var9 /* : nullable Object */;
val* var_ /* var : Set[Object] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_other /* var other: Object */;
short int var14 /* : Bool */;
val* var15 /* : HashMap[Object, Int] */;
val* var17 /* : HashMap[Object, Int] */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : HashMap[Object, Int] */;
val* var22 /* : HashMap[Object, Int] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
/* Covariant cast for argument 0 (bucket) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_nit__BucketsColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 474);
fatal_exit(1);
}
var_bucket = p0;
var_color = p1;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var2, var_bucket);
}
if (var5){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var8 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var6, var_bucket);
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[Object]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Object]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Object]>*/
}
var_other = var13;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var17 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var15, var_other);
}
var_19 = var18;
if (var18){
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var22 = self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 453);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var20, var_other);
}
{
{ /* Inline kernel#Int#== (var23,var_color) on <var23:nullable Object(Int)> */
var27 = (long)(var23)>>2;
var26 = (var23 != NULL) && (var27 == var_color);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var14 = var24;
} else {
var14 = var_19;
}
if (var14){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Object]>*/
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#compute_conflicts for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void nit___nit__BucketsColorer___compute_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
val* var_ /* var : Map[Object, Set[Object]] */;
val* var4 /* : MapIterator[nullable Object, nullable Object] */;
val* var_5 /* var : MapIterator[Object, Set[Object]] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_holder /* var holder: Object */;
val* var8 /* : nullable Object */;
val* var_hbuckets /* var hbuckets: Set[Object] */;
val* var_9 /* var : Set[Object] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var14 /* : HashMap[Object, Set[Object]] */;
val* var16 /* : HashMap[Object, Set[Object]] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : HashMap[Object, Set[Object]] */;
val* var21 /* : HashMap[Object, Set[Object]] */;
val* var22 /* : HashSet[Object] */;
val* var_23 /* var : Set[Object] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : Iterator[Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_obucket /* var obucket: Object */;
short int var28 /* : Bool */;
val* var29 /* : HashMap[Object, Set[Object]] */;
val* var31 /* : HashMap[Object, Set[Object]] */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : HashMap[Object, Set[Object]] */;
val* var36 /* : HashMap[Object, Set[Object]] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashMap[Object, Set[Object]] */;
val* var40 /* : HashMap[Object, Set[Object]] */;
val* var41 /* : nullable Object */;
val* var42 /* : HashMap[Object, Set[Object]] */;
val* var44 /* : HashMap[Object, Set[Object]] */;
val* var45 /* : nullable Object */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__BucketsColorer___35dH__standard__Set__nit__BucketsColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 483);
fatal_exit(1);
}
var_buckets = p0;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var3 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var1); /* Direct call hash_collection#HashMap#clear on <var1:HashMap[Object, Set[Object]]>*/
}
var_ = var_buckets;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[Object, Set[Object]]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_5); /* is_ok on <var_5:MapIterator[Object, Set[Object]]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_5); /* key on <var_5:MapIterator[Object, Set[Object]]>*/
}
var_holder = var7;
{
var8 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_5); /* item on <var_5:MapIterator[Object, Set[Object]]>*/
}
var_hbuckets = var8;
var_9 = var_hbuckets;
{
var10 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Set[Object]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Object]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Object]>*/
}
var_bucket = var13;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var16 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var14, var_bucket);
}
var18 = !var17;
if (var18){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var21 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__BucketsColorer___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var22); /* Direct call hash_collection#HashSet#init on <var22:HashSet[Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var19, var_bucket, var22); /* Direct call hash_collection#HashMap#[]= on <var19:HashMap[Object, Set[Object]]>*/
}
} else {
}
var_23 = var_hbuckets;
{
var24 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_23); /* iterator on <var_23:Set[Object]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:Iterator[Object]>*/
}
if (var26){
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:Iterator[Object]>*/
}
var_obucket = var27;
{
var28 = ((short int(*)(val* self, val* p0))((((long)var_obucket&3)?class_info[((long)var_obucket&3)]:var_obucket->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_obucket, var_bucket); /* == on <var_obucket:Object>*/
}
if (var28){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var31 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var29, var_obucket);
}
var33 = !var32;
if (var33){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var36 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__BucketsColorer___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var37); /* Direct call hash_collection#HashSet#init on <var37:HashSet[Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var34, var_obucket, var37); /* Direct call hash_collection#HashMap#[]= on <var34:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var40 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var38, var_bucket);
}
{
((void(*)(val* self, val* p0))((((long)var41&3)?class_info[((long)var41&3)]:var41->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var41, var_obucket); /* add on <var41:nullable Object(Set[Object])>*/
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var44 = self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 454);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var42, var_obucket);
}
{
((void(*)(val* self, val* p0))((((long)var45&3)?class_info[((long)var45&3)]:var45->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var45, var_bucket); /* add on <var45:nullable Object(Set[Object])>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:Iterator[Object]>*/
}
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:Iterator[Object]>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Object]>*/
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Object]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_5); /* next on <var_5:MapIterator[Object, Set[Object]]>*/
}
} else {
goto BREAK_label48;
}
}
BREAK_label48: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_5) on <var_5:MapIterator[Object, Set[Object]]> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colors for (self: POSetBucketsColorer[Object, Object]): HashMap[Object, Int] */
val* nit___nit__POSetBucketsColorer___colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset for (self: POSetBucketsColorer[Object, Object]): POSet[Object] */
val* nit___nit__POSetBucketsColorer___poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 505);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset= for (self: POSetBucketsColorer[Object, Object], POSet[Object]) */
void nit___nit__POSetBucketsColorer___poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[H] */
/* <p0:POSet[Object]> isa POSet[H] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSet__nit__POSetBucketsColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 505);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetBucketsColorer___poset].val = p0; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#conflicts for (self: POSetBucketsColorer[Object, Object]): Map[Object, Set[Object]] */
val* nit___nit__POSetBucketsColorer___conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 506);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#conflicts= for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void nit___nit__POSetBucketsColorer___conflicts_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetBucketsColorer___35dH__standard__Set__nit__POSetBucketsColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[H]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 506);
fatal_exit(1);
}
self->attrs[COLOR_nit__coloring__POSetBucketsColorer___conflicts].val = p0; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colorize for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* nit___nit__POSetBucketsColorer___colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var2 /* : HashMap[Object, Int] */;
val* var4 /* : HashMap[Object, Int] */;
val* var5 /* : POSet[Object] */;
val* var7 /* : POSet[Object] */;
val* var8 /* : Collection[nullable Object] */;
val* var9 /* : Array[nullable Object] */;
val* var_ /* var : Array[Object] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var14 /* : POSet[Object] */;
val* var16 /* : POSet[Object] */;
val* var17 /* : POSetElement[nullable Object] */;
val* var18 /* : Collection[nullable Object] */;
long var19 /* : Int */;
long var_color /* var color: Int */;
val* var20 /* : nullable Object */;
val* var_21 /* var : Set[Object] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var26 /* : HashMap[Object, Int] */;
val* var28 /* : HashMap[Object, Int] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var40 /* : HashMap[Object, Int] */;
val* var42 /* : HashMap[Object, Int] */;
val* var43 /* : nullable Object */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var53 /* : HashMap[Object, Int] */;
val* var55 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetBucketsColorer___35dH__standard__Set__nit__POSetBucketsColorer___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 508);
fatal_exit(1);
}
var_buckets = p0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map__clear(var2); /* Direct call hash_collection#HashMap#clear on <var2:HashMap[Object, Int]>*/
}
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var7 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 505);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))((((long)var_buckets&3)?class_info[((long)var_buckets&3)]:var_buckets->class)->vft[COLOR_standard__abstract_collection__MapRead__keys]))(var_buckets); /* keys on <var_buckets:Map[Object, Set[Object]]>*/
}
{
var9 = poset___poset__POSet___linearize(var5, var8);
}
var_ = var9;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_h = var13;
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var16 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 505);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset___poset__POSet____91d_93d(var14, var_h);
}
{
var18 = poset___poset__POSetElement___direct_greaters(var17);
}
{
var19 = nit___nit__POSetBucketsColorer___min_color(self, var18, var_buckets);
}
var_color = var19;
{
var20 = ((val*(*)(val* self, val* p0))((((long)var_buckets&3)?class_info[((long)var_buckets&3)]:var_buckets->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_buckets, var_h); /* [] on <var_buckets:Map[Object, Set[Object]]>*/
}
var_21 = var20;
{
var22 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_21); /* iterator on <var_21:Set[Object]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[Object]>*/
}
if (var24){
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[Object]>*/
}
var_bucket = var25;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var28 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var26, var_bucket);
}
if (var29){
goto BREAK_label;
} else {
}
for(;;) {
{
var30 = nit___nit__POSetBucketsColorer___is_color_free(self, var_color, var_h, var_buckets);
}
var31 = !var30;
if (var31){
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var38 = var_color + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_color = var32;
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var42 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = (val*)(var_color<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var40, var_bucket, var43); /* Direct call hash_collection#HashMap#[]= on <var40:HashMap[Object, Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_color,1l) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var50 = var_color + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_color = var44;
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[Object]>*/
}
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[Object]>*/
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var55 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#min_color for (self: POSetBucketsColorer[Object, Object], Collection[Object], Map[Object, Set[Object]]): Int */
long nit___nit__POSetBucketsColorer___min_color(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_others /* var others: Collection[Object] */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_min /* var min: Int */;
val* var_ /* var : Collection[Object] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_holder /* var holder: Object */;
long var14 /* : Int */;
long var_color /* var color: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
/* Covariant cast for argument 0 (others) <p0:Collection[Object]> isa Collection[H] */
/* <p0:Collection[Object]> isa Collection[H] */
type_struct = self->type->resolution_table->types[COLOR_standard__Collection__nit__POSetBucketsColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 523);
fatal_exit(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetBucketsColorer___35dH__standard__Set__nit__POSetBucketsColorer___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 523);
fatal_exit(1);
}
var_others = p0;
var_buckets = p1;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_min = var7;
var_ = var_others;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Object]>*/
}
if (var12){
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Object]>*/
}
var_holder = var13;
{
var14 = nit___nit__POSetBucketsColorer___max_color(self, var_holder, var_buckets);
}
var_color = var14;
{
{ /* Inline kernel#Int#> (var_color,var_min) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var17 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var21 = var_color > var_min;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var_min = var_color;
} else {
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Object]>*/
}
{
{ /* Inline kernel#Int#+ (var_min,1l) on <var_min:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var28 = var_min + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#max_color for (self: POSetBucketsColorer[Object, Object], Object, Map[Object, Set[Object]]): Int */
long nit___nit__POSetBucketsColorer___max_color(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_holder /* var holder: Object */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_max /* var max: Int */;
val* var10 /* : nullable Object */;
val* var_ /* var : Set[Object] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var15 /* : HashMap[Object, Int] */;
val* var17 /* : HashMap[Object, Int] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, Int] */;
val* var22 /* : HashMap[Object, Int] */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
long var_color /* var color: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (holder) <p0:Object> isa H */
/* <p0:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetBucketsColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 533);
fatal_exit(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetBucketsColorer___35dH__standard__Set__nit__POSetBucketsColorer___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 533);
fatal_exit(1);
}
var_holder = p0;
var_buckets = p1;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_max = var7;
{
var10 = ((val*(*)(val* self, val* p0))((((long)var_buckets&3)?class_info[((long)var_buckets&3)]:var_buckets->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_buckets, var_holder); /* [] on <var_buckets:Map[Object, Set[Object]]>*/
}
var_ = var10;
{
var11 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[Object]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[Object]>*/
}
if (var13){
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[Object]>*/
}
var_bucket = var14;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var17 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var15, var_bucket);
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var22 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var20, var_bucket);
}
var24 = (long)(var23)>>2;
var_color = var24;
{
{ /* Inline kernel#Int#> (var_color,var_max) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var27 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var31 = var_color > var_max;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var_max = var_color;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[Object]>*/
}
} else {
goto BREAK_label32;
}
}
BREAK_label32: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[Object]>*/
}
var = var_max;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#is_color_free for (self: POSetBucketsColorer[Object, Object], Int, Object, Map[Object, Set[Object]]): Bool */
short int nit___nit__POSetBucketsColorer___is_color_free(val* self, long p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
long var_color /* var color: Int */;
val* var_holder /* var holder: Object */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var7 /* : Map[Object, Set[Object]] */;
val* var9 /* : Map[Object, Set[Object]] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Map[Object, Set[Object]] */;
val* var14 /* : Map[Object, Set[Object]] */;
val* var15 /* : nullable Object */;
val* var_ /* var : Set[Object] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_conflict /* var conflict: Object */;
val* var20 /* : nullable Object */;
val* var_21 /* var : Set[Object] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var26 /* : HashMap[Object, Int] */;
val* var28 /* : HashMap[Object, Int] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : HashMap[Object, Int] */;
val* var33 /* : HashMap[Object, Int] */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
/* Covariant cast for argument 1 (holder) <p1:Object> isa H */
/* <p1:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_nit__POSetBucketsColorer___35dH];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 544);
fatal_exit(1);
}
/* Covariant cast for argument 2 (buckets) <p2:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p2:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_standard__Map__nit__POSetBucketsColorer___35dH__standard__Set__nit__POSetBucketsColorer___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 544);
fatal_exit(1);
}
var_color = p0;
var_holder = p1;
var_buckets = p2;
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var9 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 506);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var7, var_holder); /* has_key on <var7:Map[Object, Set[Object]]>*/
}
var11 = !var10;
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var14 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 506);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var12, var_holder); /* [] on <var12:Map[Object, Set[Object]]>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[Object]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[Object]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[Object]>*/
}
var_conflict = var19;
{
var20 = ((val*(*)(val* self, val* p0))((((long)var_buckets&3)?class_info[((long)var_buckets&3)]:var_buckets->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var_buckets, var_conflict); /* [] on <var_buckets:Map[Object, Set[Object]]>*/
}
var_21 = var20;
{
var22 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_21); /* iterator on <var_21:Set[Object]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[Object]>*/
}
if (var24){
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[Object]>*/
}
var_bucket = var25;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var28 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var26, var_bucket);
}
var30 = !var29;
if (var30){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var33 = self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__coloring, 504);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var31, var_bucket);
}
{
{ /* Inline kernel#Int#== (var34,var_color) on <var34:nullable Object(Int)> */
var38 = (long)(var34)>>2;
var37 = (var34 != NULL) && (var38 == var_color);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var = 0;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[Object]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[Object]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[Object]>*/
}
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#init for (self: POSetBucketsColorer[Object, Object]) */
void nit___nit__POSetBucketsColorer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__POSetBucketsColorer___standard__kernel__Object__init]))(self); /* init on <self:POSetBucketsColorer[Object, Object]>*/
}
RET_LABEL:;
}
