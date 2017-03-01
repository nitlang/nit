#include "nitc__model_base.sep.0.h"
/* method model_base$Model$model for (self: Model): Model */
val* nitc___nitc__Model___MEntity__model(val* self) {
val* var /* : Model */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base$Model$no_location for (self: Model): Location */
val* nitc___nitc__Model___no_location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__model_base__Model___no_location].val; /* _no_location on <self:Model> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base$MEntity$name for (self: MEntity): String */
val* nitc___nitc__MEntity___name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 37);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base$MEntity$full_name for (self: MEntity): String */
val* nitc___nitc__MEntity___full_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "full_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 46);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base$MEntity$c_name for (self: MEntity): String */
val* nitc___nitc__MEntity___c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 59);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base$MEntity$location for (self: MEntity): Location */
val* nitc___nitc__MEntity___location(val* self) {
val* var /* : Location */;
val* var1 /* : Model */;
val* var2 /* : Location */;
val* var4 /* : Location */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__model_base__MEntity__model]))(self); /* model on <self:MEntity>*/
}
{
{ /* Inline model_base$Model$no_location (var1) on <var1:Model> */
var4 = var1->attrs[COLOR_nitc__model_base__Model___no_location].val; /* _no_location on <var1:Model> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 28);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base$MEntity$model for (self: MEntity): Model */
val* nitc___nitc__MEntity___model(val* self) {
val* var /* : Model */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "model", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 84);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model_base$MEntity$is_broken for (self: MEntity): Bool */
short int nitc___nitc__MEntity___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <self:MEntity> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base$MEntity$is_broken= for (self: MEntity, Bool) */
void nitc___nitc__MEntity___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = p0; /* _is_broken on <self:MEntity> */
RET_LABEL:;
}
/* method model_base$MEntity$is_fictive for (self: MEntity): Bool */
short int nitc___nitc__MEntity___is_fictive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s; /* _is_fictive on <self:MEntity> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base$MEntity$is_fictive= for (self: MEntity, Bool) */
void nitc___nitc__MEntity___is_fictive_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = p0; /* _is_fictive on <self:MEntity> */
RET_LABEL:;
}
/* method model_base$MVisibility$to_s for (self: MVisibility): String */
val* nitc___nitc__MVisibility___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model_base__MVisibility___to_s].val; /* _to_s on <self:MVisibility> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 130);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base$MVisibility$to_s= for (self: MVisibility, String) */
void nitc___nitc__MVisibility___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model_base__MVisibility___to_s].val = p0; /* _to_s on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base$MVisibility$level for (self: MVisibility): Int */
long nitc___nitc__MVisibility___level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base$MVisibility$level= for (self: MVisibility, Int) */
void nitc___nitc__MVisibility___level_61d(val* self, long p0) {
self->attrs[COLOR_nitc__model_base__MVisibility___level].l = p0; /* _level on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base$MVisibility$< for (self: MVisibility, MVisibility): Bool */
short int nitc___nitc__MVisibility___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: MVisibility */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:MVisibility> isa OTHER */
/* <p0:MVisibility> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model_base, 136);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline model_base$MVisibility$level (self) on <self:MVisibility> */
var4 = self->attrs[COLOR_nitc__model_base__MVisibility___level].l; /* _level on <self:MVisibility> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model_base$MVisibility$level (var_other) on <var_other:MVisibility> */
var7 = var_other->attrs[COLOR_nitc__model_base__MVisibility___level].l; /* _level on <var_other:MVisibility> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var2,var5) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var2 < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base$MVisibility$init for (self: MVisibility) */
void nitc___nitc__MVisibility___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MVisibility___core__kernel__Object__init]))(self); /* init on <self:MVisibility>*/
}
RET_LABEL:;
}
/* method model_base$Sys$intrude_visibility for (self: Sys): MVisibility */
val* nitc__model_base___core__Sys___intrude_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MVisibility(&type_nitc__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "intrude";
var7 = (val*)(7l<<2|1);
var8 = (val*)(7l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__level_61d]))(var2, 5l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base$Sys$public_visibility for (self: Sys): MVisibility */
val* nitc__model_base___core__Sys___public_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MVisibility(&type_nitc__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "public";
var7 = (val*)(6l<<2|1);
var8 = (val*)(6l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__level_61d]))(var2, 4l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base$Sys$protected_visibility for (self: Sys): MVisibility */
val* nitc__model_base___core__Sys___protected_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MVisibility(&type_nitc__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "protected";
var7 = (val*)(9l<<2|1);
var8 = (val*)(9l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__level_61d]))(var2, 3l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base$Sys$private_visibility for (self: Sys): MVisibility */
val* nitc__model_base___core__Sys___private_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MVisibility(&type_nitc__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "private";
var7 = (val*)(7l<<2|1);
var8 = (val*)(7l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__level_61d]))(var2, 2l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
/* method model_base$Sys$none_visibility for (self: Sys): MVisibility */
val* nitc__model_base___core__Sys___none_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MVisibility(&type_nitc__MVisibility);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "none";
var7 = (val*)(4l<<2|1);
var8 = (val*)(4l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__to_s_61d]))(var2, var4); /* to_s= on <var2:MVisibility>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__model_base__MVisibility__level_61d]))(var2, 1l); /* level= on <var2:MVisibility>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MVisibility>*/
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
