#include "coloring.sep.0.h"
/* method coloring#POSetConflictGraph#core for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__core(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#core for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__core(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#border for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__border(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#border for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__border(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#crown for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__crown(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#crown for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__crown(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#conflicts for (self: POSetConflictGraph[Object]): HashMap[Object, Set[Object]] */
val* coloring__POSetConflictGraph__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#conflicts for (self: Object): HashMap[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetConflictGraph__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset for (self: POSetConflictGraph[Object]): POSet[Object] */
val* coloring__POSetConflictGraph__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset= for (self: POSetConflictGraph[Object], POSet[Object]) */
void coloring__POSetConflictGraph__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = p0; /* _poset on <self:POSetConflictGraph[Object]> */
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetConflictGraph#poset= (self,p0) on <self:Object(POSetConflictGraph[Object])> */
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = p0; /* _poset on <self:Object(POSetConflictGraph[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#init for (self: POSetConflictGraph[Object], POSet[Object]) */
void coloring__POSetConflictGraph__init(val* self, val* p0) {
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
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 50);
show_backtrace(1);
}
var_poset = p0;
{
{ /* Inline coloring#POSetConflictGraph#poset= (self,var_poset) on <self:POSetConflictGraph[Object]> */
/* Covariant cast for argument 0 (poset) <var_poset:POSet[Object]> isa POSet[E] */
/* <var_poset:POSet[Object]> isa POSet[E] */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = var_poset; /* _poset on <self:POSetConflictGraph[Object]> */
RET_LABEL1:(void)0;
}
}
{
coloring__POSetConflictGraph__extract_core(self); /* Direct call coloring#POSetConflictGraph#extract_core on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__extract_border(self); /* Direct call coloring#POSetConflictGraph#extract_border on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__extract_crown(self); /* Direct call coloring#POSetConflictGraph#extract_crown on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__compute_conflicts(self); /* Direct call coloring#POSetConflictGraph#compute_conflicts on <self:POSetConflictGraph[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#init for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__init(val* self, val* p0) {
coloring__POSetConflictGraph__init(self, p0); /* Direct call coloring#POSetConflictGraph#init on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_core for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_core(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var5 /* : POSet[Object] */;
val* var_ /* var : POSet[Object] */;
val* var6 /* : Iterator[Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var10 /* : POSet[Object] */;
val* var12 /* : POSet[Object] */;
val* var13 /* : POSetElement[Object] */;
val* var14 /* : Collection[Object] */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var20 /* : Bool */;
val* var21 /* : HashSet[Object] */;
val* var23 /* : HashSet[Object] */;
val* var24 /* : POSet[Object] */;
val* var26 /* : POSet[Object] */;
val* var27 /* : POSetElement[Object] */;
val* var28 /* : Collection[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = poset__POSet__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_7) /* is_ok on <var_7:Iterator[Object]>*/;
}
if (var8){
{
var9 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__item]))(var_7) /* item on <var_7:Iterator[Object]>*/;
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var12 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset__POSet___91d_93d(var10, var_e);
}
{
var14 = poset__POSetElement__direct_greaters(var13);
}
{
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:Collection[Object]>*/;
}
var16 = 1;
{
{ /* Inline kernel#Int#> (var15,var16) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var20 = var15 > var16;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var23 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var26 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = poset__POSet___91d_93d(var24, var_e);
}
{
var28 = poset__POSetElement__greaters(var27);
}
{
abstract_collection__SimpleCollection__add_all(var21, var28); /* Direct call abstract_collection#SimpleCollection#add_all on <var21:HashSet[Object]>*/
}
} else {
}
{
((void (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__next]))(var_7) /* next on <var_7:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:Iterator[Object]> */
RET_LABEL29:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_core for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_core(val* self) {
coloring__POSetConflictGraph__extract_core(self); /* Direct call coloring#POSetConflictGraph#extract_core on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_border for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_border(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
val* var5 /* : HashSet[Object] */;
val* var_ /* var : HashSet[Object] */;
val* var6 /* : Iterator[Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : HashSet[Object] */;
val* var14 /* : HashSet[Object] */;
val* var17 /* : HashSet[Object] */;
val* var19 /* : HashSet[Object] */;
val* var_20 /* var : HashSet[Object] */;
val* var21 /* : Iterator[Object] */;
val* var_22 /* var : Iterator[Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_e25 /* var e: Object */;
val* var26 /* : HashSet[Object] */;
val* var28 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = hash_collection__HashSet__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_7) /* is_ok on <var_7:Iterator[Object]>*/;
}
if (var8){
{
var9 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__item]))(var_7) /* item on <var_7:Iterator[Object]>*/;
}
var_e = var9;
{
var10 = coloring__POSetConflictGraph__is_border(self, var_e);
}
var11 = !var10;
if (var11){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var14 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
hash_collection__HashSet__add(var12, var_e); /* Direct call hash_collection#HashSet#add on <var12:HashSet[Object]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__next]))(var_7) /* next on <var_7:Iterator[Object]>*/;
}
} else {
goto BREAK_label15;
}
}
BREAK_label15: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:Iterator[Object]> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var19 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = hash_collection__HashSet__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int (*)(val*))(var_22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_22) /* is_ok on <var_22:Iterator[Object]>*/;
}
if (var23){
{
var24 = ((val* (*)(val*))(var_22->class->vft[COLOR_abstract_collection__Iterator__item]))(var_22) /* item on <var_22:Iterator[Object]>*/;
}
var_e25 = var24;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var28 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
hash_collection__HashSet__remove(var26, var_e25); /* Direct call hash_collection#HashSet#remove on <var26:HashSet[Object]>*/
}
{
((void (*)(val*))(var_22->class->vft[COLOR_abstract_collection__Iterator__next]))(var_22) /* next on <var_22:Iterator[Object]>*/;
}
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_22) on <var_22:Iterator[Object]> */
RET_LABEL30:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_border for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_border(val* self) {
coloring__POSetConflictGraph__extract_border(self); /* Direct call coloring#POSetConflictGraph#extract_border on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#is_border for (self: POSetConflictGraph[Object], Object): Bool */
short int coloring__POSetConflictGraph__is_border(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : POSet[Object] */;
val* var4 /* : POSet[Object] */;
val* var5 /* : POSetElement[Object] */;
val* var6 /* : Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_child /* var child: Object */;
val* var11 /* : HashSet[Object] */;
val* var13 /* : HashSet[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 79);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var4 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset__POSet___91d_93d(var2, var_e);
}
{
var6 = poset__POSetElement__direct_smallers(var5);
}
var_ = var6;
{
var7 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[Object]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[Object]>*/;
}
var_child = var10;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var13 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = hash_collection__HashSet__has(var11, var_child);
}
if (var14){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[Object]> */
RET_LABEL16:(void)0;
}
}
var17 = 1;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#is_border for (self: Object, Object): Bool */
short int VIRTUAL_coloring__POSetConflictGraph__is_border(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetConflictGraph__is_border(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#extract_crown for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_crown(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var5 /* : POSet[Object] */;
val* var_ /* var : POSet[Object] */;
val* var6 /* : Iterator[Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[Object] */;
val* var13 /* : HashSet[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : HashSet[Object] */;
val* var19 /* : HashSet[Object] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : HashSet[Object] */;
val* var24 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 34);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = poset__POSet__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_7) /* is_ok on <var_7:Iterator[Object]>*/;
}
if (var8){
{
var9 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__item]))(var_7) /* item on <var_7:Iterator[Object]>*/;
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var13 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = hash_collection__HashSet__has(var11, var_e);
}
var15 = !var14;
var_16 = var15;
if (var15){
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var19 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = hash_collection__HashSet__has(var17, var_e);
}
var21 = !var20;
var10 = var21;
} else {
var10 = var_16;
}
if (var10){
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[Object]> */
var24 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 34);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
hash_collection__HashSet__add(var22, var_e); /* Direct call hash_collection#HashSet#add on <var22:HashSet[Object]>*/
}
} else {
}
{
((void (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__next]))(var_7) /* next on <var_7:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:Iterator[Object]> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_crown for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_crown(val* self) {
coloring__POSetConflictGraph__extract_crown(self); /* Direct call coloring#POSetConflictGraph#extract_crown on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#compute_conflicts for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__compute_conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var2 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashSet[Object] */;
val* var5 /* : HashSet[Object] */;
val* var_ /* var : HashSet[Object] */;
val* var6 /* : Iterator[Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var10 /* : POSet[Object] */;
val* var12 /* : POSet[Object] */;
val* var13 /* : POSetElement[Object] */;
val* var14 /* : Collection[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Set[Object]]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = hash_collection__HashSet__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_7) /* is_ok on <var_7:Iterator[Object]>*/;
}
if (var8){
{
var9 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__item]))(var_7) /* item on <var_7:Iterator[Object]>*/;
}
var_e = var9;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var12 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 48);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset__POSet___91d_93d(var10, var_e);
}
{
var14 = poset__POSetElement__greaters(var13);
}
{
coloring__POSetConflictGraph__add_conflicts(self, var14); /* Direct call coloring#POSetConflictGraph#add_conflicts on <self:POSetConflictGraph[Object]>*/
}
{
((void (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__next]))(var_7) /* next on <var_7:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:Iterator[Object]> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#compute_conflicts for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__compute_conflicts(val* self) {
coloring__POSetConflictGraph__compute_conflicts(self); /* Direct call coloring#POSetConflictGraph#compute_conflicts on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflict for (self: POSetConflictGraph[Object], Object, Object) */
void coloring__POSetConflictGraph__add_conflict(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_e /* var e: Object */;
val* var_o /* var o: Object */;
val* var6 /* : HashMap[Object, Set[Object]] */;
val* var8 /* : HashMap[Object, Set[Object]] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, Set[Object]] */;
val* var13 /* : HashMap[Object, Set[Object]] */;
val* var14 /* : HashSet[Object] */;
val* var15 /* : HashMap[Object, Set[Object]] */;
val* var17 /* : HashMap[Object, Set[Object]] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, Set[Object]] */;
val* var22 /* : HashMap[Object, Set[Object]] */;
val* var23 /* : HashSet[Object] */;
val* var24 /* : HashMap[Object, Set[Object]] */;
val* var26 /* : HashMap[Object, Set[Object]] */;
val* var27 /* : nullable Object */;
val* var28 /* : HashMap[Object, Set[Object]] */;
val* var30 /* : HashMap[Object, Set[Object]] */;
val* var31 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 101);
show_backtrace(1);
}
/* Covariant cast for argument 1 (o) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 101);
show_backtrace(1);
}
var_e = p0;
var_o = p1;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var8 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_collection__MapRead__has_key(var6, var_e);
}
var10 = !var9;
if (var10){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var13 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var14->class->vft[COLOR_kernel__Object__init]))(var14) /* init on <var14:HashSet[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var11, var_e, var14); /* Direct call hash_collection#HashMap#[]= on <var11:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var17 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_collection__MapRead__has_key(var15, var_o);
}
var19 = !var18;
if (var19){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var22 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var23->class->vft[COLOR_kernel__Object__init]))(var23) /* init on <var23:HashSet[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var20, var_o, var23); /* Direct call hash_collection#HashMap#[]= on <var20:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var26 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = hash_collection__HashMap___91d_93d(var24, var_e);
}
{
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var_o) /* add on <var27:nullable Object(Set[Object])>*/;
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var30 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = hash_collection__HashMap___91d_93d(var28, var_o);
}
{
((void (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var31, var_e) /* add on <var31:nullable Object(Set[Object])>*/;
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflict for (self: Object, Object, Object) */
void VIRTUAL_coloring__POSetConflictGraph__add_conflict(val* self, val* p0, val* p1) {
coloring__POSetConflictGraph__add_conflict(self, p0, p1); /* Direct call coloring#POSetConflictGraph#add_conflict on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflicts for (self: POSetConflictGraph[Object], Collection[Object]) */
void coloring__POSetConflictGraph__add_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e1 /* var e1: Object */;
val* var_5 /* var : Collection[Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
/* Covariant cast for argument 0 (es) <p0:Collection[Object]> isa Collection[E] */
/* <p0:Collection[Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 108);
show_backtrace(1);
}
var_es = p0;
var_ = var_es;
{
var1 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_2 = var1;
for(;;) {
{
var3 = ((short int (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_2) /* is_ok on <var_2:Iterator[Object]>*/;
}
if (var3){
{
var4 = ((val* (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__item]))(var_2) /* item on <var_2:Iterator[Object]>*/;
}
var_e1 = var4;
var_5 = var_es;
{
var6 = ((val* (*)(val*))(var_5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_5) /* iterator on <var_5:Collection[Object]>*/;
}
var_7 = var6;
for(;;) {
{
var8 = ((short int (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_7) /* is_ok on <var_7:Iterator[Object]>*/;
}
if (var8){
{
var9 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__item]))(var_7) /* item on <var_7:Iterator[Object]>*/;
}
var_e2 = var9;
{
coloring__POSetConflictGraph__add_conflict(self, var_e1, var_e2); /* Direct call coloring#POSetConflictGraph#add_conflict on <self:POSetConflictGraph[Object]>*/
}
{
((void (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Iterator__next]))(var_7) /* next on <var_7:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:Iterator[Object]> */
RET_LABEL10:(void)0;
}
}
{
((void (*)(val*))(var_2->class->vft[COLOR_abstract_collection__Iterator__next]))(var_2) /* next on <var_2:Iterator[Object]>*/;
}
} else {
goto BREAK_label11;
}
}
BREAK_label11: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_2) on <var_2:Iterator[Object]> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflicts for (self: Object, Collection[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__add_conflicts(val* self, val* p0) {
coloring__POSetConflictGraph__add_conflicts(self, p0); /* Direct call coloring#POSetConflictGraph#add_conflicts on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#is_colored for (self: POSetColorer[Object]): Bool */
short int coloring__POSetColorer__is_colored(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored for (self: Object): Bool */
short int VIRTUAL_coloring__POSetColorer__is_colored(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:Object(POSetColorer[Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored= for (self: POSetColorer[Object], Bool) */
void coloring__POSetColorer__is_colored_61d(val* self, short int p0) {
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = p0; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#is_colored= for (self: Object, Bool) */
void VIRTUAL_coloring__POSetColorer__is_colored_61d(val* self, short int p0) {
{ /* Inline coloring#POSetColorer#is_colored= (self,p0) on <self:Object(POSetColorer[Object])> */
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = p0; /* _is_colored on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#ids for (self: POSetColorer[Object]): Map[Object, Int] */
val* coloring__POSetColorer__ids(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 162);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
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
/* method coloring#POSetColorer#ids for (self: Object): Map[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetColorer__ids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#ids_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* coloring__POSetColorer__ids_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#ids_cache for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__ids_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors for (self: POSetColorer[Object]): Map[Object, Int] */
val* coloring__POSetColorer__colors(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 170);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
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
/* method coloring#POSetColorer#colors for (self: Object): Map[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__colors(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetColorer__colors(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* coloring__POSetColorer__colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors_cache for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache for (self: POSetColorer[Object]): POSet[Object] */
val* coloring__POSetColorer__poset_cache(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetColorer__poset_cache(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache= for (self: POSetColorer[Object], POSet[Object]) */
void coloring__POSetColorer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = p0; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#poset_cache= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetColorer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#poset_cache= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (poset_cache) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = p0; /* _poset_cache on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#conflicts for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* coloring__POSetColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Map[Object, Set[Object]] */;
val* var6 /* : Map[Object, Set[Object]] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 184);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
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
/* method coloring#POSetColorer#conflicts for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = coloring__POSetColorer__conflicts(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* coloring__POSetColorer__conflicts_cache(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetColorer__conflicts_cache(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
val* var3 /* : Map[Object, Set[Object]] */;
{ /* Inline coloring#POSetColorer#conflicts_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache= for (self: POSetColorer[Object], Map[Object, Set[Object]]) */
void coloring__POSetColorer__conflicts_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts_cache) <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[E, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = p0; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#conflicts_cache= for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetColorer__conflicts_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#conflicts_cache= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (conflicts_cache) <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[E, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[E, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = p0; /* _conflicts_cache on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#graph for (self: POSetColorer[Object]): POSetConflictGraph[Object] */
val* coloring__POSetColorer__graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#graph for (self: Object): POSetConflictGraph[Object] */
val* VIRTUAL_coloring__POSetColorer__graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
{ /* Inline coloring#POSetColorer#graph (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#graph= for (self: POSetColorer[Object], POSetConflictGraph[Object]) */
void coloring__POSetColorer__graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = p0; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#graph= for (self: Object, POSetConflictGraph[Object]) */
void VIRTUAL_coloring__POSetColorer__graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#graph= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = p0; /* _graph on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize for (self: POSetColorer[Object], POSet[Object]) */
void coloring__POSetColorer__colorize(val* self, val* p0) {
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
val* var17 /* : HashMap[Object, Set[Object]] */;
val* var19 /* : HashMap[Object, Set[Object]] */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
short int var26 /* : Bool */;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[E] */
/* <p0:POSet[Object]> isa POSet[E] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 191);
show_backtrace(1);
}
var_poset = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache= (self,var_poset) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (poset_cache) <var_poset:POSet[Object]> isa POSet[E] */
/* <var_poset:POSet[Object]> isa POSet[E] */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = var_poset; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL1:(void)0;
}
}
var7 = NEW_coloring__POSetConflictGraph(self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0]);
{
coloring__POSetConflictGraph__init(var7, var_poset); /* Direct call coloring#POSetConflictGraph#init on <var7:POSetConflictGraph[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph= (self,var7) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (graph) <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
/* <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[E] */
type_struct12 = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = var7; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL8:(void)0;
}
}
{
coloring__POSetColorer__allocate_ids(self); /* Direct call coloring#POSetColorer#allocate_ids on <self:POSetColorer[Object]>*/
}
{
coloring__POSetColorer__compute_colors(self); /* Direct call coloring#POSetColorer#compute_colors on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var14) on <var14:POSetConflictGraph[Object]> */
var19 = var14->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var14:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache= (self,var17) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (conflicts_cache) <var17:HashMap[Object, Set[Object]]> isa Map[E, Set[E]] */
/* <var17:HashMap[Object, Set[Object]]> isa Map[E, Set[E]] */
type_struct24 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = var17; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL20:(void)0;
}
}
var26 = 1;
{
{ /* Inline coloring#POSetColorer#is_colored= (self,var26) on <self:POSetColorer[Object]> */
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = var26; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetColorer__colorize(val* self, val* p0) {
coloring__POSetColorer__colorize(self, p0); /* Direct call coloring#POSetColorer#colorize on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#allocate_ids for (self: POSetColorer[Object]) */
void coloring__POSetColorer__allocate_ids(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : HashSet[Object] */;
val* var4 /* : POSet[Object] */;
val* var6 /* : POSet[Object] */;
val* var7 /* : Array[nullable Object] */;
val* var_elements /* var elements: HashSet[Object] */;
val* var8 /* : POSet[Object] */;
val* var10 /* : POSet[Object] */;
val* var11 /* : Array[Object] */;
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
var2 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
var3 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetColorer_FT0]);
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = array__Collection__to_a(var4);
}
{
hash_collection__HashSet__from(var3, var7); /* Direct call hash_collection#HashSet#from on <var3:HashSet[Object]>*/
}
var_elements = var3;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var10 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = poset__POSet__linearize(var8, var_elements);
}
var_ = var11;
{
var12 = array__AbstractArrayRead__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = array__ArrayIterator__is_ok(var_13);
}
if (var14){
{
var15 = array__ArrayIterator__item(var_13);
}
var_e = var15;
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var18 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var21 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 165);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = hash_collection__HashMap__length(var19);
}
{
var23 = BOX_kernel__Int(var22); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var16, var_e, var23); /* Direct call hash_collection#HashMap#[]= on <var16:HashMap[Object, Int]>*/
}
{
array__ArrayIterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[Object]> */
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#allocate_ids for (self: Object) */
void VIRTUAL_coloring__POSetColorer__allocate_ids(val* self) {
coloring__POSetColorer__allocate_ids(self); /* Direct call coloring#POSetColorer#allocate_ids on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#compute_colors for (self: POSetColorer[Object]) */
void coloring__POSetColorer__compute_colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[Object] */;
val* var8 /* : HashSet[Object] */;
val* var9 /* : POSetConflictGraph[Object] */;
val* var11 /* : POSetConflictGraph[Object] */;
val* var12 /* : HashSet[Object] */;
val* var14 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
{
coloring__POSetColorer__colorize_core(self); /* Direct call coloring#POSetColorer#colorize_core on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#border (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 28);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
coloring__POSetColorer__colorize_set(self, var6); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var11 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#crown (var9) on <var9:POSetConflictGraph[Object]> */
var14 = var9->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <var9:POSetConflictGraph[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 34);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
coloring__POSetColorer__colorize_set(self, var12); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#compute_colors for (self: Object) */
void VIRTUAL_coloring__POSetColorer__compute_colors(val* self) {
coloring__POSetColorer__compute_colors(self); /* Direct call coloring#POSetColorer#compute_colors on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_core for (self: POSetColorer[Object]) */
void coloring__POSetColorer__colorize_core(val* self) {
val* var /* : POSet[Object] */;
val* var2 /* : POSet[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[Object] */;
val* var8 /* : HashSet[Object] */;
val* var9 /* : Array[Object] */;
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
val* var18 /* : HashMap[Object, Set[Object]] */;
val* var20 /* : HashMap[Object, Set[Object]] */;
val* var21 /* : nullable Object */;
val* var_conflicts /* var conflicts: Set[Object] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var28 /* : Int */;
val* var29 /* : HashMap[Object, Int] */;
val* var31 /* : HashMap[Object, Int] */;
val* var32 /* : nullable Object */;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#core (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 22);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset__POSet__linearize(var, var6);
}
var_ = var9;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_e = var13;
{
var14 = coloring__POSetColorer__min_color(self, var_e);
}
var_color = var14;
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var17 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 189);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var15) on <var15:POSetConflictGraph[Object]> */
var20 = var15->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var15:POSetConflictGraph[Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 40);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashMap___91d_93d(var18, var_e);
}
var_conflicts = var21;
for(;;) {
{
var22 = coloring__POSetColorer__is_color_free(self, var_color, var_conflicts);
}
var23 = !var22;
if (var23){
var24 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var24) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var28 = var_color + var24;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_color = var25;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var31 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var29, var_e, var32); /* Direct call hash_collection#HashMap#[]= on <var29:HashMap[Object, Int]>*/
}
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[Object]> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_core for (self: Object) */
void VIRTUAL_coloring__POSetColorer__colorize_core(val* self) {
coloring__POSetColorer__colorize_core(self); /* Direct call coloring#POSetColorer#colorize_core on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_set for (self: POSetColorer[Object], Set[Object]) */
void coloring__POSetColorer__colorize_set(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: Set[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : Array[Object] */;
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
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 231);
show_backtrace(1);
}
var_set = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = poset__POSet__linearize(var1, var_set);
}
var_ = var4;
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
var_e = var8;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var11 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = coloring__POSetColorer__min_color(self, var_e);
}
{
var13 = BOX_kernel__Int(var12); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var9, var_e, var13); /* Direct call hash_collection#HashMap#[]= on <var9:HashMap[Object, Int]>*/
}
{
array__ArrayIterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[Object]> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_set for (self: Object, Set[Object]) */
void VIRTUAL_coloring__POSetColorer__colorize_set(val* self, val* p0) {
coloring__POSetColorer__colorize_set(self, p0); /* Direct call coloring#POSetColorer#colorize_set on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#min_color for (self: POSetColorer[Object], Object): Int */
long coloring__POSetColorer__min_color(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_max_color /* var max_color: Int */;
val* var6 /* : POSet[Object] */;
val* var8 /* : POSet[Object] */;
val* var9 /* : POSetElement[Object] */;
val* var10 /* : Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_p /* var p: Object */;
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
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 236);
show_backtrace(1);
}
var_e = p0;
var2 = 1;
{
{ /* Inline kernel#Int#unary - (var2) on <var2:Int> */
var5 = -var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_max_color = var3;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var8 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 180);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset__POSet___91d_93d(var6, var_e);
}
{
var10 = poset__POSetElement__direct_greaters(var9);
}
var_ = var10;
{
var11 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_12 = var11;
for(;;) {
{
var13 = ((short int (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_12) /* is_ok on <var_12:Iterator[Object]>*/;
}
if (var13){
{
var14 = ((val* (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__item]))(var_12) /* item on <var_12:Iterator[Object]>*/;
}
var_p = var14;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var17 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_collection__MapRead__has_key(var15, var_p);
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var22 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = hash_collection__HashMap___91d_93d(var20, var_p);
}
var24 = ((struct instance_kernel__Int*)var23)->value; /* autounbox from nullable Object to Int */;
var_color = var24;
{
{ /* Inline kernel#Int#> (var_color,var_max_color) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max_color:Int> isa OTHER */
/* <var_max_color:Int> isa OTHER */
var27 = 1; /* easy <var_max_color:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var31 = var_color > var_max_color;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var_max_color = var_color;
} else {
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__next]))(var_12) /* next on <var_12:Iterator[Object]>*/;
}
} else {
goto BREAK_label32;
}
}
BREAK_label32: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:Iterator[Object]> */
RET_LABEL33:(void)0;
}
}
var34 = 1;
{
{ /* Inline kernel#Int#+ (var_max_color,var34) on <var_max_color:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var41 = var_max_color + var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var = var35;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#min_color for (self: Object, Object): Int */
long VIRTUAL_coloring__POSetColorer__min_color(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetColorer__min_color(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_color_free for (self: POSetColorer[Object], Int, Collection[Object]): Bool */
short int coloring__POSetColorer__is_color_free(val* self, long p0, val* p1) {
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
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
/* Covariant cast for argument 1 (set) <p1:Collection[Object]> isa Collection[E] */
/* <p1:Collection[Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 247);
show_backtrace(1);
}
var_color = p0;
var_set = p1;
var_ = var_set;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[Object]>*/;
}
var_e = var5;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var9 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_collection__MapRead__has_key(var7, var_e);
}
var_11 = var10;
if (var10){
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var14 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 173);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = hash_collection__HashMap___91d_93d(var12, var_e);
}
{
{ /* Inline kernel#Int#== (var15,var_color) on <var15:nullable Object(Int)> */
var19 = (var15 != NULL) && (var15->class == &class_kernel__Int);
if (var19) {
var20 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var19 = (var20 == var_color);
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var6 = var16;
} else {
var6 = var_11;
}
if (var6){
var21 = 0;
var = var21;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[Object]> */
RET_LABEL22:(void)0;
}
}
var23 = 1;
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_color_free for (self: Object, Int, Collection[Object]): Bool */
short int VIRTUAL_coloring__POSetColorer__is_color_free(val* self, long p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetColorer__is_color_free(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colors for (self: BucketsColorer[Object, Object]): HashMap[Object, Int] */
val* coloring__BucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colors for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__BucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#BucketsColorer#colors (self) on <self:Object(BucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:Object(BucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#conflicts for (self: BucketsColorer[Object, Object]): HashMap[Object, Set[Object]] */
val* coloring__BucketsColorer__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#conflicts for (self: Object): HashMap[Object, Set[Object]] */
val* VIRTUAL_coloring__BucketsColorer__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:Object(BucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:Object(BucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colorize for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* coloring__BucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var2 /* : Int */;
long var_min_color /* var min_color: Int */;
val* var_ /* var : Map[Object, Set[Object]] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
val* var_4 /* var : MapIterator[Object, Set[Object]] */;
short int var5 /* : Bool */;
val* var6 /* : Object */;
val* var_holder /* var holder: Object */;
val* var7 /* : nullable Object */;
val* var_hbuckets /* var hbuckets: Set[Object] */;
val* var_8 /* var : Set[Object] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var13 /* : HashMap[Object, Int] */;
val* var15 /* : HashMap[Object, Int] */;
short int var16 /* : Bool */;
long var_color /* var color: Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var28 /* : HashMap[Object, Int] */;
val* var30 /* : HashMap[Object, Int] */;
val* var31 /* : nullable Object */;
val* var36 /* : HashMap[Object, Int] */;
val* var38 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__BucketsColorer_FT0abstract_collection__Setcoloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 282);
show_backtrace(1);
}
var_buckets = p0;
{
coloring__BucketsColorer__compute_conflicts(self, var_buckets); /* Direct call coloring#BucketsColorer#compute_conflicts on <self:BucketsColorer[Object, Object]>*/
}
var2 = 0;
var_min_color = var2;
var_ = var_buckets;
{
var3 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[Object, Set[Object]]>*/;
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val*))(var_4->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_4) /* is_ok on <var_4:MapIterator[Object, Set[Object]]>*/;
}
if (var5){
{
var6 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_4) /* key on <var_4:MapIterator[Object, Set[Object]]>*/;
}
var_holder = var6;
{
var7 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_4) /* item on <var_4:MapIterator[Object, Set[Object]]>*/;
}
var_hbuckets = var7;
var_8 = var_hbuckets;
{
var9 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_8) /* iterator on <var_8:Set[Object]>*/;
}
var_10 = var9;
for(;;) {
{
var11 = ((short int (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_10) /* is_ok on <var_10:Iterator[Object]>*/;
}
if (var11){
{
var12 = ((val* (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__item]))(var_10) /* item on <var_10:Iterator[Object]>*/;
}
var_bucket = var12;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var15 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = abstract_collection__MapRead__has_key(var13, var_bucket);
}
if (var16){
goto BREAK_label;
} else {
}
var_color = var_min_color;
for(;;) {
{
var17 = coloring__BucketsColorer__is_color_free(self, var_bucket, var_color);
}
var18 = !var17;
if (var18){
var19 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var19) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var26 = var_color + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_color = var20;
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var30 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var28, var_bucket, var31); /* Direct call hash_collection#HashMap#[]= on <var28:HashMap[Object, Int]>*/
}
var_color = var_min_color;
BREAK_label: (void)0;
{
((void (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__next]))(var_10) /* next on <var_10:Iterator[Object]>*/;
}
} else {
goto BREAK_label32;
}
}
BREAK_label32: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:Iterator[Object]> */
RET_LABEL33:(void)0;
}
}
{
((void (*)(val*))(var_4->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_4) /* next on <var_4:MapIterator[Object, Set[Object]]>*/;
}
} else {
goto BREAK_label34;
}
}
BREAK_label34: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_4) on <var_4:MapIterator[Object, Set[Object]]> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var38 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var = var36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colorize for (self: Object, Map[Object, Set[Object]]): Map[Object, Int] */
val* VIRTUAL_coloring__BucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__BucketsColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#is_color_free for (self: BucketsColorer[Object, Object], Object, Int): Bool */
short int coloring__BucketsColorer__is_color_free(val* self, val* p0, long p1) {
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
short int var25 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (bucket) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_coloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 300);
show_backtrace(1);
}
var_bucket = p0;
var_color = p1;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = abstract_collection__MapRead__has_key(var2, var_bucket);
}
if (var5){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var8 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = hash_collection__HashMap___91d_93d(var6, var_bucket);
}
var_ = var9;
{
var10 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[Object]>*/;
}
var_11 = var10;
for(;;) {
{
var12 = ((short int (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_11) /* is_ok on <var_11:Iterator[Object]>*/;
}
if (var12){
{
var13 = ((val* (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__item]))(var_11) /* item on <var_11:Iterator[Object]>*/;
}
var_other = var13;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var17 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_collection__MapRead__has_key(var15, var_other);
}
var_19 = var18;
if (var18){
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var22 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 279);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = hash_collection__HashMap___91d_93d(var20, var_other);
}
{
{ /* Inline kernel#Int#== (var23,var_color) on <var23:nullable Object(Int)> */
var27 = (var23 != NULL) && (var23->class == &class_kernel__Int);
if (var27) {
var28 = ((struct instance_kernel__Int*)var23)->value; /* autounbox from nullable Object to Int */;
var27 = (var28 == var_color);
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var14 = var24;
} else {
var14 = var_19;
}
if (var14){
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__next]))(var_11) /* next on <var_11:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:Iterator[Object]> */
RET_LABEL30:(void)0;
}
}
} else {
}
var31 = 1;
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#is_color_free for (self: Object, Object, Int): Bool */
short int VIRTUAL_coloring__BucketsColorer__is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__BucketsColorer__is_color_free(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#compute_conflicts for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void coloring__BucketsColorer__compute_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
val* var_ /* var : Map[Object, Set[Object]] */;
val* var4 /* : MapIterator[Object, nullable Object] */;
val* var_5 /* var : MapIterator[Object, Set[Object]] */;
short int var6 /* : Bool */;
val* var7 /* : Object */;
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
short int var29 /* : Bool */;
val* var30 /* : HashMap[Object, Set[Object]] */;
val* var32 /* : HashMap[Object, Set[Object]] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : HashMap[Object, Set[Object]] */;
val* var37 /* : HashMap[Object, Set[Object]] */;
val* var38 /* : HashSet[Object] */;
val* var39 /* : HashMap[Object, Set[Object]] */;
val* var41 /* : HashMap[Object, Set[Object]] */;
val* var42 /* : nullable Object */;
val* var43 /* : HashMap[Object, Set[Object]] */;
val* var45 /* : HashMap[Object, Set[Object]] */;
val* var46 /* : nullable Object */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__BucketsColorer_FT0abstract_collection__Setcoloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 309);
show_backtrace(1);
}
var_buckets = p0;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
hash_collection__HashMap__clear(var1); /* Direct call hash_collection#HashMap#clear on <var1:HashMap[Object, Set[Object]]>*/
}
var_ = var_buckets;
{
var4 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[Object, Set[Object]]>*/;
}
var_5 = var4;
for(;;) {
{
var6 = ((short int (*)(val*))(var_5->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_5) /* is_ok on <var_5:MapIterator[Object, Set[Object]]>*/;
}
if (var6){
{
var7 = ((val* (*)(val*))(var_5->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_5) /* key on <var_5:MapIterator[Object, Set[Object]]>*/;
}
var_holder = var7;
{
var8 = ((val* (*)(val*))(var_5->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_5) /* item on <var_5:MapIterator[Object, Set[Object]]>*/;
}
var_hbuckets = var8;
var_9 = var_hbuckets;
{
var10 = ((val* (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_9) /* iterator on <var_9:Set[Object]>*/;
}
var_11 = var10;
for(;;) {
{
var12 = ((short int (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_11) /* is_ok on <var_11:Iterator[Object]>*/;
}
if (var12){
{
var13 = ((val* (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__item]))(var_11) /* item on <var_11:Iterator[Object]>*/;
}
var_bucket = var13;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var16 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_collection__MapRead__has_key(var14, var_bucket);
}
var18 = !var17;
if (var18){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var21 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__BucketsColorer_FT1]);
{
((void (*)(val*))(var22->class->vft[COLOR_kernel__Object__init]))(var22) /* init on <var22:HashSet[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var19, var_bucket, var22); /* Direct call hash_collection#HashMap#[]= on <var19:HashMap[Object, Set[Object]]>*/
}
} else {
}
var_23 = var_hbuckets;
{
var24 = ((val* (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_23) /* iterator on <var_23:Set[Object]>*/;
}
var_25 = var24;
for(;;) {
{
var26 = ((short int (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_25) /* is_ok on <var_25:Iterator[Object]>*/;
}
if (var26){
{
var27 = ((val* (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__item]))(var_25) /* item on <var_25:Iterator[Object]>*/;
}
var_obucket = var27;
{
var29 = ((short int (*)(val*, val*))(var_obucket->class->vft[COLOR_kernel__Object___61d_61d]))(var_obucket, var_bucket) /* == on <var_obucket:Object>*/;
var28 = var29;
}
if (var28){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var32 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = abstract_collection__MapRead__has_key(var30, var_obucket);
}
var34 = !var33;
if (var34){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var37 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__BucketsColorer_FT1]);
{
((void (*)(val*))(var38->class->vft[COLOR_kernel__Object__init]))(var38) /* init on <var38:HashSet[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var35, var_obucket, var38); /* Direct call hash_collection#HashMap#[]= on <var35:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var41 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = hash_collection__HashMap___91d_93d(var39, var_bucket);
}
{
((void (*)(val*, val*))(var42->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var42, var_obucket) /* add on <var42:nullable Object(Set[Object])>*/;
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var45 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 280);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = hash_collection__HashMap___91d_93d(var43, var_obucket);
}
{
((void (*)(val*, val*))(var46->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var46, var_bucket) /* add on <var46:nullable Object(Set[Object])>*/;
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_25->class->vft[COLOR_abstract_collection__Iterator__next]))(var_25) /* next on <var_25:Iterator[Object]>*/;
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_25) on <var_25:Iterator[Object]> */
RET_LABEL48:(void)0;
}
}
{
((void (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__next]))(var_11) /* next on <var_11:Iterator[Object]>*/;
}
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:Iterator[Object]> */
RET_LABEL50:(void)0;
}
}
{
((void (*)(val*))(var_5->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_5) /* next on <var_5:MapIterator[Object, Set[Object]]>*/;
}
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_5) on <var_5:MapIterator[Object, Set[Object]]> */
RET_LABEL52:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#BucketsColorer#compute_conflicts for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__BucketsColorer__compute_conflicts(val* self, val* p0) {
coloring__BucketsColorer__compute_conflicts(self, p0); /* Direct call coloring#BucketsColorer#compute_conflicts on <self:Object(BucketsColorer[Object, Object])>*/
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colors for (self: POSetBucketsColorer[Object, Object]): HashMap[Object, Int] */
val* coloring__POSetBucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#colors for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetBucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset for (self: POSetBucketsColorer[Object, Object]): POSet[Object] */
val* coloring__POSetBucketsColorer__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetBucketsColorer__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset= for (self: POSetBucketsColorer[Object, Object], POSet[Object]) */
void coloring__POSetBucketsColorer__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[H] */
/* <p0:POSet[Object]> isa POSet[H] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = p0; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetBucketsColorer__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetBucketsColorer#poset= (self,p0) on <self:Object(POSetBucketsColorer[Object, Object])> */
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[H] */
/* <p0:POSet[Object]> isa POSet[H] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = p0; /* _poset on <self:Object(POSetBucketsColorer[Object, Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#conflicts for (self: POSetBucketsColorer[Object, Object]): Map[Object, Set[Object]] */
val* coloring__POSetBucketsColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#conflicts for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetBucketsColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
val* var3 /* : Map[Object, Set[Object]] */;
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#conflicts= for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void coloring__POSetBucketsColorer__conflicts_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[H]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = p0; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#conflicts= for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetBucketsColorer__conflicts_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetBucketsColorer#conflicts= (self,p0) on <self:Object(POSetBucketsColorer[Object, Object])> */
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[H]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = p0; /* _conflicts on <self:Object(POSetBucketsColorer[Object, Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#init for (self: POSetBucketsColorer[Object, Object], POSet[Object], Map[Object, Set[Object]]) */
void coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_poset /* var poset: POSet[Object] */;
val* var_conflicts /* var conflicts: Map[Object, Set[Object]] */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
const char* var_class_name17;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[H] */
/* <p0:POSet[Object]> isa POSet[H] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 334);
show_backtrace(1);
}
/* Covariant cast for argument 1 (conflicts) <p1:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
/* <p1:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[H]]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 334);
show_backtrace(1);
}
var_poset = p0;
var_conflicts = p1;
{
{ /* Inline coloring#POSetBucketsColorer#poset= (self,var_poset) on <self:POSetBucketsColorer[Object, Object]> */
/* Covariant cast for argument 0 (poset) <var_poset:POSet[Object]> isa POSet[H] */
/* <var_poset:POSet[Object]> isa POSet[H] */
type_struct10 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var_poset->type->table_size) {
var7 = 0;
} else {
var7 = var_poset->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = var_poset == NULL ? "null" : var_poset->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[H]", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = var_poset; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline coloring#POSetBucketsColorer#conflicts= (self,var_conflicts) on <self:POSetBucketsColorer[Object, Object]> */
/* Covariant cast for argument 0 (conflicts) <var_conflicts:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
/* <var_conflicts:Map[Object, Set[Object]]> isa Map[H, Set[H]] */
type_struct16 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
if(cltype14 >= var_conflicts->type->table_size) {
var13 = 0;
} else {
var13 = var_conflicts->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name17 = var_conflicts == NULL ? "null" : var_conflicts->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[H]]", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = var_conflicts; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#init for (self: Object, POSet[Object], Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1) {
coloring__POSetBucketsColorer__init(self, p0, p1); /* Direct call coloring#POSetBucketsColorer#init on <self:Object(POSetBucketsColorer[Object, Object])>*/
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colorize for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* coloring__POSetBucketsColorer__colorize(val* self, val* p0) {
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
val* var8 /* : Collection[Object] */;
val* var9 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var14 /* : POSet[Object] */;
val* var16 /* : POSet[Object] */;
val* var17 /* : POSetElement[Object] */;
val* var18 /* : Collection[Object] */;
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
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
val* var41 /* : HashMap[Object, Int] */;
val* var43 /* : HashMap[Object, Int] */;
val* var44 /* : nullable Object */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var57 /* : HashMap[Object, Int] */;
val* var59 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p0:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 339);
show_backtrace(1);
}
var_buckets = p0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
hash_collection__HashMap__clear(var2); /* Direct call hash_collection#HashMap#clear on <var2:HashMap[Object, Int]>*/
}
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var7 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val* (*)(val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_buckets) /* keys on <var_buckets:Map[Object, Set[Object]]>*/;
}
{
var9 = poset__POSet__linearize(var5, var8);
}
var_ = var9;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_h = var13;
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var16 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 331);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset__POSet___91d_93d(var14, var_h);
}
{
var18 = poset__POSetElement__direct_greaters(var17);
}
{
var19 = coloring__POSetBucketsColorer__min_color(self, var18, var_buckets);
}
var_color = var19;
{
var20 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_h) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
var_21 = var20;
{
var22 = ((val* (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_21) /* iterator on <var_21:Set[Object]>*/;
}
var_23 = var22;
for(;;) {
{
var24 = ((short int (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_23) /* is_ok on <var_23:Iterator[Object]>*/;
}
if (var24){
{
var25 = ((val* (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__item]))(var_23) /* item on <var_23:Iterator[Object]>*/;
}
var_bucket = var25;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var28 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = abstract_collection__MapRead__has_key(var26, var_bucket);
}
if (var29){
goto BREAK_label;
} else {
}
for(;;) {
{
var30 = coloring__POSetBucketsColorer__is_color_free(self, var_color, var_h, var_buckets);
}
var31 = !var30;
if (var31){
var32 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var32) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var39 = var_color + var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_color = var33;
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var43 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var41, var_bucket, var44); /* Direct call hash_collection#HashMap#[]= on <var41:HashMap[Object, Int]>*/
}
var45 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var45) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var45:Int> isa OTHER */
/* <var45:Int> isa OTHER */
var48 = 1; /* easy <var45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var52 = var_color + var45;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_color = var46;
BREAK_label: (void)0;
{
((void (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__next]))(var_23) /* next on <var_23:Iterator[Object]>*/;
}
} else {
goto BREAK_label53;
}
}
BREAK_label53: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:Iterator[Object]> */
RET_LABEL54:(void)0;
}
}
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[Object]> */
RET_LABEL56:(void)0;
}
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var59 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var = var57;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#colorize for (self: Object, Map[Object, Set[Object]]): Map[Object, Int] */
val* VIRTUAL_coloring__POSetBucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetBucketsColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#min_color for (self: POSetBucketsColorer[Object, Object], Collection[Object], Map[Object, Set[Object]]): Int */
long coloring__POSetBucketsColorer__min_color(val* self, val* p0, val* p1) {
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
long var8 /* : Int */;
long var10 /* : Int */;
long var_min /* var min: Int */;
val* var_ /* var : Collection[Object] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_holder /* var holder: Object */;
long var15 /* : Int */;
long var_color /* var color: Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
/* Covariant cast for argument 0 (others) <p0:Collection[Object]> isa Collection[H] */
/* <p0:Collection[Object]> isa Collection[H] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[H]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 354);
show_backtrace(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 354);
show_backtrace(1);
}
var_others = p0;
var_buckets = p1;
var7 = 1;
{
{ /* Inline kernel#Int#unary - (var7) on <var7:Int> */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_min = var8;
var_ = var_others;
{
var11 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Object]>*/;
}
var_12 = var11;
for(;;) {
{
var13 = ((short int (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_12) /* is_ok on <var_12:Iterator[Object]>*/;
}
if (var13){
{
var14 = ((val* (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__item]))(var_12) /* item on <var_12:Iterator[Object]>*/;
}
var_holder = var14;
{
var15 = coloring__POSetBucketsColorer__max_color(self, var_holder, var_buckets);
}
var_color = var15;
{
{ /* Inline kernel#Int#> (var_color,var_min) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var18 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var22 = var_color > var_min;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var_min = var_color;
} else {
}
{
((void (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__next]))(var_12) /* next on <var_12:Iterator[Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:Iterator[Object]> */
RET_LABEL23:(void)0;
}
}
var24 = 1;
{
{ /* Inline kernel#Int#+ (var_min,var24) on <var_min:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var31 = var_min + var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#min_color for (self: Object, Collection[Object], Map[Object, Set[Object]]): Int */
long VIRTUAL_coloring__POSetBucketsColorer__min_color(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetBucketsColorer__min_color(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#max_color for (self: POSetBucketsColorer[Object, Object], Object, Map[Object, Set[Object]]): Int */
long coloring__POSetBucketsColorer__max_color(val* self, val* p0, val* p1) {
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
long var8 /* : Int */;
long var10 /* : Int */;
long var_max /* var max: Int */;
val* var11 /* : nullable Object */;
val* var_ /* var : Set[Object] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : Iterator[Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var16 /* : HashMap[Object, Int] */;
val* var18 /* : HashMap[Object, Int] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[Object, Int] */;
val* var23 /* : HashMap[Object, Int] */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var_color /* var color: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
/* Covariant cast for argument 0 (holder) <p0:Object> isa H */
/* <p0:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 364);
show_backtrace(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p1:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 364);
show_backtrace(1);
}
var_holder = p0;
var_buckets = p1;
var7 = 1;
{
{ /* Inline kernel#Int#unary - (var7) on <var7:Int> */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_max = var8;
{
var11 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_holder) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
var_ = var11;
{
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[Object]>*/;
}
var_13 = var12;
for(;;) {
{
var14 = ((short int (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_13) /* is_ok on <var_13:Iterator[Object]>*/;
}
if (var14){
{
var15 = ((val* (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__item]))(var_13) /* item on <var_13:Iterator[Object]>*/;
}
var_bucket = var15;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var18 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = abstract_collection__MapRead__has_key(var16, var_bucket);
}
var20 = !var19;
if (var20){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var23 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = hash_collection__HashMap___91d_93d(var21, var_bucket);
}
var25 = ((struct instance_kernel__Int*)var24)->value; /* autounbox from nullable Object to Int */;
var_color = var25;
{
{ /* Inline kernel#Int#> (var_color,var_max) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var28 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var32 = var_color > var_max;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var_max = var_color;
} else {
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__next]))(var_13) /* next on <var_13:Iterator[Object]>*/;
}
} else {
goto BREAK_label33;
}
}
BREAK_label33: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:Iterator[Object]> */
RET_LABEL34:(void)0;
}
}
var = var_max;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#max_color for (self: Object, Object, Map[Object, Set[Object]]): Int */
long VIRTUAL_coloring__POSetBucketsColorer__max_color(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetBucketsColorer__max_color(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#is_color_free for (self: POSetBucketsColorer[Object, Object], Int, Object, Map[Object, Set[Object]]): Bool */
short int coloring__POSetBucketsColorer__is_color_free(val* self, long p0, val* p1, val* p2) {
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
short int var12 /* : Bool */;
val* var13 /* : Map[Object, Set[Object]] */;
val* var15 /* : Map[Object, Set[Object]] */;
val* var16 /* : nullable Object */;
val* var_ /* var : Set[Object] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_conflict /* var conflict: Object */;
val* var21 /* : nullable Object */;
val* var_22 /* var : Set[Object] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var27 /* : HashMap[Object, Int] */;
val* var29 /* : HashMap[Object, Int] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : HashMap[Object, Int] */;
val* var34 /* : HashMap[Object, Int] */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var46 /* : Bool */;
/* Covariant cast for argument 1 (holder) <p1:Object> isa H */
/* <p1:Object> isa H */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "H", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 375);
show_backtrace(1);
}
/* Covariant cast for argument 2 (buckets) <p2:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
/* <p2:Map[Object, Set[Object]]> isa Map[H, Set[E]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p2->type->table_size) {
var2 = 0;
} else {
var2 = p2->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[H, Set[E]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 375);
show_backtrace(1);
}
var_color = p0;
var_holder = p1;
var_buckets = p2;
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var9 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_collection__MapRead__has_key(var7, var_holder);
}
var11 = !var10;
if (var11){
var12 = 1;
var = var12;
goto RET_LABEL;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var15 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 332);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_holder) /* [] on <var13:Map[Object, Set[Object]]>*/;
}
var_ = var16;
{
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[Object]>*/;
}
var_18 = var17;
for(;;) {
{
var19 = ((short int (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_18) /* is_ok on <var_18:Iterator[Object]>*/;
}
if (var19){
{
var20 = ((val* (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__item]))(var_18) /* item on <var_18:Iterator[Object]>*/;
}
var_conflict = var20;
{
var21 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_conflict) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
var_22 = var21;
{
var23 = ((val* (*)(val*))(var_22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_22) /* iterator on <var_22:Set[Object]>*/;
}
var_24 = var23;
for(;;) {
{
var25 = ((short int (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_24) /* is_ok on <var_24:Iterator[Object]>*/;
}
if (var25){
{
var26 = ((val* (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__item]))(var_24) /* item on <var_24:Iterator[Object]>*/;
}
var_bucket = var26;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var29 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = abstract_collection__MapRead__has_key(var27, var_bucket);
}
var31 = !var30;
if (var31){
goto BREAK_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var34 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/coloring.nit", 330);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = hash_collection__HashMap___91d_93d(var32, var_bucket);
}
{
{ /* Inline kernel#Int#== (var35,var_color) on <var35:nullable Object(Int)> */
var39 = (var35 != NULL) && (var35->class == &class_kernel__Int);
if (var39) {
var40 = ((struct instance_kernel__Int*)var35)->value; /* autounbox from nullable Object to Int */;
var39 = (var40 == var_color);
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
var41 = 0;
var = var41;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__next]))(var_24) /* next on <var_24:Iterator[Object]>*/;
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:Iterator[Object]> */
RET_LABEL43:(void)0;
}
}
{
((void (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__next]))(var_18) /* next on <var_18:Iterator[Object]>*/;
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_18) on <var_18:Iterator[Object]> */
RET_LABEL45:(void)0;
}
}
var46 = 1;
var = var46;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#is_color_free for (self: Object, Int, Object, Map[Object, Set[Object]]): Bool */
short int VIRTUAL_coloring__POSetBucketsColorer__is_color_free(val* self, long p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetBucketsColorer__is_color_free(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
