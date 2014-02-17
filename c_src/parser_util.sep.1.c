#include "parser_util.sep.0.h"
/* method parser_util#ToolContext#parse_module for (self: ToolContext, String): AModule */
val* parser_util__ToolContext__parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_source /* var source: SourceFile */;
val* var6 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var7 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var8 /* : Start */;
val* var_tree /* var tree: Start */;
val* var9 /* : EOF */;
val* var_eof /* var eof: EOF */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : null */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable AModule */;
var_string = p0;
var1 = NEW_location__SourceFile(&type_location__SourceFile);
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_location__SourceFile__from_string]))(var1, var2, var_string) /* from_string on <var1:SourceFile>*/;
var_source = var1;
var6 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var6->class->vft[COLOR_lexer__Lexer__init]))(var6, var_source) /* init on <var6:Lexer>*/;
var_lexer = var6;
var7 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var7->class->vft[COLOR_parser__Parser__init]))(var7, var_lexer) /* init on <var7:Parser>*/;
var_parser = var7;
var8 = ((val* (*)(val*))(var_parser->class->vft[COLOR_parser__Parser__parse]))(var_parser) /* parse on <var_parser:Parser>*/;
var_tree = var8;
var9 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:Start>*/;
var_eof = var9;
/* <var_eof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_eof->type->table_size) {
var10 = 0;
} else {
var10 = var_eof->type->type_table[cltype] == idtype;
}
if (var10){
var11 = NULL;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Fatal Error: ";
var15 = 13;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((val* (*)(val*))(var_eof->class->vft[COLOR_lexer__AError__message]))(var_eof) /* message on <var_eof:EOF(AError)>*/;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var17;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var11, var21) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 34);
show_backtrace(1);
} else {
}
var22 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:Start>*/;
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 36);
show_backtrace(1);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_module for (self: Object, String): AModule */
val* VIRTUAL_parser_util__ToolContext__parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var1 /* : AModule */;
var1 = parser_util__ToolContext__parse_module(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: ToolContext, String): AClassdef */
val* parser_util__ToolContext__parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var_string /* var string: String */;
val* var1 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var2 /* : ANodes[AClassdef] */;
val* var_nclassdefs /* var nclassdefs: ANodes[AClassdef] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : nullable Object */;
var_string = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var1;
var2 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var_nclassdefs = var2;
var3 = ((long (*)(val*))(var_nclassdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_nclassdefs) /* length on <var_nclassdefs:ANodes[AClassdef]>*/;
var4 = 1;
{ /* Inline kernel#Int#!= (var3,var4) */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = NULL;
if (varonce) {
var10 = varonce;
} else {
var11 = "Fatal Error: not a classdef";
var12 = 27;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var9, var10) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 47);
show_backtrace(1);
} else {
}
var14 = ((val* (*)(val*))(var_nclassdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_nclassdefs) /* first on <var_nclassdefs:ANodes[AClassdef]>*/;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: Object, String): AClassdef */
val* VIRTUAL_parser_util__ToolContext__parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var1 /* : AClassdef */;
var1 = parser_util__ToolContext__parse_classdef(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: ToolContext, String): APropdef */
val* parser_util__ToolContext__parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AClassdef */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var14 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : nullable Object */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "class Dummy\n";
var5 = 12;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\nend";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_classdef]))(self, var_mod_string) /* parse_classdef on <self:ToolContext>*/;
var_nclassdef = var13;
var14 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var_npropdefs = var14;
var15 = ((long (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_npropdefs) /* length on <var_npropdefs:ANodes[APropdef]>*/;
var16 = 1;
{ /* Inline kernel#Int#!= (var15,var16) */
var19 = var15 == var16;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var21 = NULL;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Fatal Error: not a propdef";
var25 = 26;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var21, var23) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 61);
show_backtrace(1);
} else {
}
var27 = ((val* (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_npropdefs) /* first on <var_npropdefs:ANodes[APropdef]>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: Object, String): APropdef */
val* VIRTUAL_parser_util__ToolContext__parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var1 /* : APropdef */;
var1 = parser_util__ToolContext__parse_propdef(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_stmts for (self: ToolContext, String): AExpr */
val* parser_util__ToolContext__parse_stmts(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var14 /* : ANodes[AClassdef] */;
val* var15 /* : nullable Object */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : ANodes[AExpr] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
val* var_nblock /* var nblock: AExpr */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "do\n";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\nend";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_mod_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var13;
var14 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__first]))(var14) /* first on <var14:ANodes[AClassdef]>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var15) /* n_propdefs on <var15:nullable Object(AClassdef)>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__first]))(var16) /* first on <var16:ANodes[APropdef]>*/;
/* <var17:nullable Object(APropdef)> isa AMainMethPropdef */
cltype = type_parser_nodes__AMainMethPropdef.color;
idtype = type_parser_nodes__AMainMethPropdef.id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (!var18) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AMainMethPropdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 72);
show_backtrace(1);
}
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var17) /* n_block on <var17:APropdef(AMainMethPropdef)>*/;
/* <var19:nullable AExpr> isa ABlockExpr */
cltype21 = type_parser_nodes__ABlockExpr.color;
idtype22 = type_parser_nodes__ABlockExpr.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
var_class_name23 = var19 == NULL ? "null" : var19->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 72);
show_backtrace(1);
}
var24 = ((val* (*)(val*))(var19->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var19) /* n_expr on <var19:nullable AExpr(ABlockExpr)>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__first]))(var24) /* first on <var24:ANodes[AExpr]>*/;
/* <var25:nullable Object(AExpr)> isa ADoExpr */
cltype27 = type_parser_nodes__ADoExpr.color;
idtype28 = type_parser_nodes__ADoExpr.id;
if(cltype27 >= var25->type->table_size) {
var26 = 0;
} else {
var26 = var25->type->type_table[cltype27] == idtype28;
}
if (!var26) {
var_class_name29 = var25 == NULL ? "null" : var25->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ADoExpr", var_class_name29);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 72);
show_backtrace(1);
}
var30 = ((val* (*)(val*))(var25->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(var25) /* n_block on <var25:AExpr(ADoExpr)>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 72);
show_backtrace(1);
}
var_nblock = var30;
var = var_nblock;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_stmts for (self: Object, String): AExpr */
val* VIRTUAL_parser_util__ToolContext__parse_stmts(val* self, val* p0) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_util__ToolContext__parse_stmts(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: ToolContext, String): AExpr */
val* parser_util__ToolContext__parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var14 /* : ANodes[AClassdef] */;
val* var15 /* : nullable Object */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : ANodes[AExpr] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "var dummy = \n";
var5 = 13;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "";
var10 = 0;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_mod_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var13;
var14 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__first]))(var14) /* first on <var14:ANodes[AClassdef]>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var15) /* n_propdefs on <var15:nullable Object(AClassdef)>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__first]))(var16) /* first on <var16:ANodes[APropdef]>*/;
/* <var17:nullable Object(APropdef)> isa AMainMethPropdef */
cltype = type_parser_nodes__AMainMethPropdef.color;
idtype = type_parser_nodes__AMainMethPropdef.id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (!var18) {
var_class_name = var17 == NULL ? "null" : var17->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AMainMethPropdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 82);
show_backtrace(1);
}
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var17) /* n_block on <var17:APropdef(AMainMethPropdef)>*/;
/* <var19:nullable AExpr> isa ABlockExpr */
cltype21 = type_parser_nodes__ABlockExpr.color;
idtype22 = type_parser_nodes__ABlockExpr.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
var_class_name23 = var19 == NULL ? "null" : var19->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 82);
show_backtrace(1);
}
var24 = ((val* (*)(val*))(var19->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var19) /* n_expr on <var19:nullable AExpr(ABlockExpr)>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__first]))(var24) /* first on <var24:ANodes[AExpr]>*/;
/* <var25:nullable Object(AExpr)> isa AVardeclExpr */
cltype27 = type_parser_nodes__AVardeclExpr.color;
idtype28 = type_parser_nodes__AVardeclExpr.id;
if(cltype27 >= var25->type->table_size) {
var26 = 0;
} else {
var26 = var25->type->type_table[cltype27] == idtype28;
}
if (!var26) {
var_class_name29 = var25 == NULL ? "null" : var25->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name29);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 82);
show_backtrace(1);
}
var30 = ((val* (*)(val*))(var25->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(var25) /* n_expr on <var25:AExpr(AVardeclExpr)>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 82);
show_backtrace(1);
}
var_nexpr = var30;
var = var_nexpr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: Object, String): AExpr */
val* VIRTUAL_parser_util__ToolContext__parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_util__ToolContext__parse_expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: ToolContext, String): ANode */
val* parser_util__ToolContext__parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_source /* var source: SourceFile */;
val* var6 /* : InjectedLexer */;
val* var_lexer /* var lexer: nullable Object */;
val* var7 /* : List[Token] */;
val* var8 /* : TKwvar */;
val* var9 /* : List[Token] */;
val* var10 /* : TId */;
val* var11 /* : List[Token] */;
val* var12 /* : TColumn */;
val* var13 /* : List[Token] */;
val* var14 /* : TClassid */;
val* var15 /* : List[Token] */;
val* var16 /* : TObra */;
val* var17 /* : List[Token] */;
val* var18 /* : TCbra */;
val* var19 /* : Parser */;
val* var20 /* : Start */;
val* var_tree /* var tree: nullable Object */;
val* var21 /* : EOF */;
val* var_eof /* var eof: nullable Object */;
short int var22 /* : Bool */;
int cltype;
int idtype;
short int var23 /* : Bool */;
val* var24 /* : nullable AModule */;
val* var25 /* : ANodes[AClassdef] */;
val* var26 /* : nullable Object */;
val* var27 /* : ANodes[APropdef] */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
val* var32 /* : nullable AExpr */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
val* var37 /* : ANodes[AExpr] */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
val* var43 /* : nullable AType */;
val* var44 /* : ANodes[AType] */;
val* var45 /* : nullable Object */;
val* var_ntype /* var ntype: AType */;
val* var_error /* var error: nullable Object */;
val* var46 /* : Lexer */;
val* var47 /* : Token */;
val* var_first /* var first: Token */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
short int var51 /* : Bool */;
val* var52 /* : Token */;
val* var_second /* var second: Token */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
short int var_ /* var : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
short int var60 /* : Bool */;
val* var61 /* : InjectedLexer */;
val* var62 /* : List[Token] */;
val* var63 /* : TKwvar */;
val* var64 /* : List[Token] */;
val* var65 /* : TId */;
val* var66 /* : List[Token] */;
val* var67 /* : TAssign */;
val* var68 /* : List[Token] */;
val* var69 /* : TOpar */;
val* var70 /* : List[Token] */;
val* var71 /* : TCpar */;
val* var72 /* : Parser */;
val* var73 /* : Start */;
val* var74 /* : EOF */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
short int var78 /* : Bool */;
val* var79 /* : nullable AModule */;
val* var80 /* : ANodes[AClassdef] */;
val* var81 /* : nullable Object */;
val* var82 /* : ANodes[APropdef] */;
val* var83 /* : nullable Object */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
val* var88 /* : nullable AExpr */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
val* var93 /* : ANodes[AExpr] */;
val* var94 /* : nullable Object */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
val* var99 /* : nullable AExpr */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
val* var104 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
val* var105 /* : Location */;
val* var106 /* : Location */;
short int var107 /* : Bool */;
val* var108 /* : InjectedLexer */;
val* var109 /* : List[Token] */;
val* var110 /* : TKwdo */;
val* var111 /* : List[Token] */;
val* var112 /* : TKwend */;
val* var113 /* : Parser */;
val* var114 /* : Start */;
val* var115 /* : EOF */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
short int var119 /* : Bool */;
val* var120 /* : nullable AModule */;
val* var121 /* : ANodes[AClassdef] */;
val* var122 /* : nullable Object */;
val* var123 /* : ANodes[APropdef] */;
val* var124 /* : nullable Object */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
val* var129 /* : nullable AExpr */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
val* var134 /* : ANodes[AExpr] */;
val* var135 /* : nullable Object */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
val* var140 /* : nullable AExpr */;
val* var_nblock /* var nblock: AExpr */;
val* var141 /* : Location */;
val* var142 /* : Location */;
short int var143 /* : Bool */;
val* var144 /* : Lexer */;
val* var145 /* : Parser */;
val* var146 /* : Start */;
val* var147 /* : EOF */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
short int var151 /* : Bool */;
val* var152 /* : nullable AModule */;
val* var153 /* : Location */;
val* var154 /* : Location */;
short int var155 /* : Bool */;
var_string = p0;
var1 = NEW_location__SourceFile(&type_location__SourceFile);
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_location__SourceFile__from_string]))(var1, var2, var_string) /* from_string on <var1:SourceFile>*/;
var_source = var1;
var6 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var6->class->vft[COLOR_lexer__Lexer__init]))(var6, var_source) /* init on <var6:InjectedLexer>*/;
var_lexer = var6;
var7 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var8 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*))(var8->class->vft[COLOR_parser_nodes__TKwvar__init]))(var8) /* init on <var8:TKwvar>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var8) /* add on <var7:List[Token]>*/;
var9 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var10 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var10->class->vft[COLOR_parser_nodes__TId__init]))(var10) /* init on <var10:TId>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var10) /* add on <var9:List[Token]>*/;
var11 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var12 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
((void (*)(val*))(var12->class->vft[COLOR_parser_nodes__TColumn__init]))(var12) /* init on <var12:TColumn>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var12) /* add on <var11:List[Token]>*/;
var13 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var14 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*))(var14->class->vft[COLOR_parser_nodes__TClassid__init]))(var14) /* init on <var14:TClassid>*/;
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var13, var14) /* add on <var13:List[Token]>*/;
var15 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var16 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
((void (*)(val*))(var16->class->vft[COLOR_parser_nodes__TObra__init]))(var16) /* init on <var16:TObra>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var16) /* add on <var15:List[Token]>*/;
var17 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var18 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
((void (*)(val*))(var18->class->vft[COLOR_parser_nodes__TCbra__init]))(var18) /* init on <var18:TCbra>*/;
((void (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var17, var18) /* add on <var17:List[Token]>*/;
var19 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var19->class->vft[COLOR_parser__Parser__init]))(var19, var_lexer) /* init on <var19:Parser>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_parser__Parser__parse]))(var19) /* parse on <var19:Parser>*/;
var_tree = var20;
var21 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var21;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_eof->type->table_size) {
var22 = 0;
} else {
var22 = var_eof->type->type_table[cltype] == idtype;
}
var23 = !var22;
if (var23){
var24 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 114);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var24) /* n_classdefs on <var24:nullable AModule>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Collection__first]))(var25) /* first on <var25:ANodes[AClassdef]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var26) /* n_propdefs on <var26:nullable Object(AClassdef)>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__first]))(var27) /* first on <var27:ANodes[APropdef]>*/;
/* <var28:nullable Object(APropdef)> isa AMainMethPropdef */
cltype30 = type_parser_nodes__AMainMethPropdef.color;
idtype31 = type_parser_nodes__AMainMethPropdef.id;
if(cltype30 >= var28->type->table_size) {
var29 = 0;
} else {
var29 = var28->type->type_table[cltype30] == idtype31;
}
if (!var29) {
var_class_name = var28 == NULL ? "null" : var28->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AMainMethPropdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 114);
show_backtrace(1);
}
var32 = ((val* (*)(val*))(var28->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var28) /* n_block on <var28:APropdef(AMainMethPropdef)>*/;
/* <var32:nullable AExpr> isa ABlockExpr */
cltype34 = type_parser_nodes__ABlockExpr.color;
idtype35 = type_parser_nodes__ABlockExpr.id;
if(var32 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var32->type->table_size) {
var33 = 0;
} else {
var33 = var32->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
var_class_name36 = var32 == NULL ? "null" : var32->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name36);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 114);
show_backtrace(1);
}
var37 = ((val* (*)(val*))(var32->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var32) /* n_expr on <var32:nullable AExpr(ABlockExpr)>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__first]))(var37) /* first on <var37:ANodes[AExpr]>*/;
/* <var38:nullable Object(AExpr)> isa AVardeclExpr */
cltype40 = type_parser_nodes__AVardeclExpr.color;
idtype41 = type_parser_nodes__AVardeclExpr.id;
if(cltype40 >= var38->type->table_size) {
var39 = 0;
} else {
var39 = var38->type->type_table[cltype40] == idtype41;
}
if (!var39) {
var_class_name42 = var38 == NULL ? "null" : var38->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name42);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 114);
show_backtrace(1);
}
var43 = ((val* (*)(val*))(var38->class->vft[COLOR_parser_nodes__AVardeclExpr__n_type]))(var38) /* n_type on <var38:AExpr(AVardeclExpr)>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 114);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_parser_nodes__AType__n_types]))(var43) /* n_types on <var43:nullable AType>*/;
}
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Collection__first]))(var44) /* first on <var44:ANodes[AType]>*/;
var_ntype = var45;
var = var_ntype;
goto RET_LABEL;
} else {
}
var_error = var_eof;
var46 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var46->class->vft[COLOR_lexer__Lexer__init]))(var46, var_source) /* init on <var46:Lexer>*/;
var_lexer = var46;
var47 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:nullable Object(Lexer)>*/;
var_first = var47;
/* <var_first:Token> isa EOF */
cltype49 = type_parser_nodes__EOF.color;
idtype50 = type_parser_nodes__EOF.id;
if(cltype49 >= var_first->type->table_size) {
var48 = 0;
} else {
var48 = var_first->type->type_table[cltype49] == idtype50;
}
var51 = !var48;
if (var51){
var52 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:nullable Object(Lexer)>*/;
var_second = var52;
/* <var_second:Token> isa EOF */
cltype55 = type_parser_nodes__EOF.color;
idtype56 = type_parser_nodes__EOF.id;
if(cltype55 >= var_second->type->table_size) {
var54 = 0;
} else {
var54 = var_second->type->type_table[cltype55] == idtype56;
}
var_ = var54;
if (var54){
/* <var_second:Token(EOF)> isa AError */
cltype58 = type_parser_nodes__AError.color;
idtype59 = type_parser_nodes__AError.id;
if(cltype58 >= var_second->type->table_size) {
var57 = 0;
} else {
var57 = var_second->type->type_table[cltype58] == idtype59;
}
var60 = !var57;
var53 = var60;
} else {
var53 = var_;
}
if (var53){
var = var_first;
goto RET_LABEL;
} else {
}
} else {
}
var61 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var61->class->vft[COLOR_lexer__Lexer__init]))(var61, var_source) /* init on <var61:InjectedLexer>*/;
var_lexer = var61;
var62 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var63 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*))(var63->class->vft[COLOR_parser_nodes__TKwvar__init]))(var63) /* init on <var63:TKwvar>*/;
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var62, var63) /* add on <var62:List[Token]>*/;
var64 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var65 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var65->class->vft[COLOR_parser_nodes__TId__init]))(var65) /* init on <var65:TId>*/;
((void (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var64, var65) /* add on <var64:List[Token]>*/;
var66 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var67 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*))(var67->class->vft[COLOR_parser_nodes__TAssign__init]))(var67) /* init on <var67:TAssign>*/;
((void (*)(val*, val*))(var66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var66, var67) /* add on <var66:List[Token]>*/;
var68 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var69 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
((void (*)(val*))(var69->class->vft[COLOR_parser_nodes__TOpar__init]))(var69) /* init on <var69:TOpar>*/;
((void (*)(val*, val*))(var68->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var68, var69) /* add on <var68:List[Token]>*/;
var70 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var71 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
((void (*)(val*))(var71->class->vft[COLOR_parser_nodes__TCpar__init]))(var71) /* init on <var71:TCpar>*/;
((void (*)(val*, val*))(var70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var70, var71) /* add on <var70:List[Token]>*/;
var72 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var72->class->vft[COLOR_parser__Parser__init]))(var72, var_lexer) /* init on <var72:Parser>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_parser__Parser__parse]))(var72) /* parse on <var72:Parser>*/;
var_tree = var73;
var74 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var74;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype76 = type_parser_nodes__AError.color;
idtype77 = type_parser_nodes__AError.id;
if(cltype76 >= var_eof->type->table_size) {
var75 = 0;
} else {
var75 = var_eof->type->type_table[cltype76] == idtype77;
}
var78 = !var75;
if (var78){
var79 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var79 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 137);
show_backtrace(1);
} else {
var80 = ((val* (*)(val*))(var79->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var79) /* n_classdefs on <var79:nullable AModule>*/;
}
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_abstract_collection__Collection__first]))(var80) /* first on <var80:ANodes[AClassdef]>*/;
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var81) /* n_propdefs on <var81:nullable Object(AClassdef)>*/;
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_collection__Collection__first]))(var82) /* first on <var82:ANodes[APropdef]>*/;
/* <var83:nullable Object(APropdef)> isa AMainMethPropdef */
cltype85 = type_parser_nodes__AMainMethPropdef.color;
idtype86 = type_parser_nodes__AMainMethPropdef.id;
if(cltype85 >= var83->type->table_size) {
var84 = 0;
} else {
var84 = var83->type->type_table[cltype85] == idtype86;
}
if (!var84) {
var_class_name87 = var83 == NULL ? "null" : var83->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AMainMethPropdef", var_class_name87);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 137);
show_backtrace(1);
}
var88 = ((val* (*)(val*))(var83->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var83) /* n_block on <var83:APropdef(AMainMethPropdef)>*/;
/* <var88:nullable AExpr> isa ABlockExpr */
cltype90 = type_parser_nodes__ABlockExpr.color;
idtype91 = type_parser_nodes__ABlockExpr.id;
if(var88 == NULL) {
var89 = 0;
} else {
if(cltype90 >= var88->type->table_size) {
var89 = 0;
} else {
var89 = var88->type->type_table[cltype90] == idtype91;
}
}
if (!var89) {
var_class_name92 = var88 == NULL ? "null" : var88->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name92);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 137);
show_backtrace(1);
}
var93 = ((val* (*)(val*))(var88->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var88) /* n_expr on <var88:nullable AExpr(ABlockExpr)>*/;
var94 = ((val* (*)(val*))(var93->class->vft[COLOR_abstract_collection__Collection__first]))(var93) /* first on <var93:ANodes[AExpr]>*/;
/* <var94:nullable Object(AExpr)> isa AVardeclExpr */
cltype96 = type_parser_nodes__AVardeclExpr.color;
idtype97 = type_parser_nodes__AVardeclExpr.id;
if(cltype96 >= var94->type->table_size) {
var95 = 0;
} else {
var95 = var94->type->type_table[cltype96] == idtype97;
}
if (!var95) {
var_class_name98 = var94 == NULL ? "null" : var94->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name98);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 137);
show_backtrace(1);
}
var99 = ((val* (*)(val*))(var94->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(var94) /* n_expr on <var94:AExpr(AVardeclExpr)>*/;
/* <var99:nullable AExpr> isa AParExpr */
cltype101 = type_parser_nodes__AParExpr.color;
idtype102 = type_parser_nodes__AParExpr.id;
if(var99 == NULL) {
var100 = 0;
} else {
if(cltype101 >= var99->type->table_size) {
var100 = 0;
} else {
var100 = var99->type->type_table[cltype101] == idtype102;
}
}
if (!var100) {
var_class_name103 = var99 == NULL ? "null" : var99->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AParExpr", var_class_name103);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 137);
show_backtrace(1);
}
var104 = ((val* (*)(val*))(var99->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(var99) /* n_expr on <var99:nullable AExpr(AParExpr)>*/;
var_nexpr = var104;
var = var_nexpr;
goto RET_LABEL;
} else {
}
var105 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var106 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var107 = ((short int (*)(val*, val*))(var105->class->vft[COLOR_kernel__Comparable___62d]))(var105, var106) /* > on <var105:Location>*/;
if (var107){
var_error = var_eof;
} else {
}
var108 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var108->class->vft[COLOR_lexer__Lexer__init]))(var108, var_source) /* init on <var108:InjectedLexer>*/;
var_lexer = var108;
var109 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var110 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*))(var110->class->vft[COLOR_parser_nodes__TKwdo__init]))(var110) /* init on <var110:TKwdo>*/;
((void (*)(val*, val*))(var109->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var109, var110) /* add on <var109:List[Token]>*/;
var111 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var112 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
((void (*)(val*))(var112->class->vft[COLOR_parser_nodes__TKwend__init]))(var112) /* init on <var112:TKwend>*/;
((void (*)(val*, val*))(var111->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var111, var112) /* add on <var111:List[Token]>*/;
var113 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var113->class->vft[COLOR_parser__Parser__init]))(var113, var_lexer) /* init on <var113:Parser>*/;
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_parser__Parser__parse]))(var113) /* parse on <var113:Parser>*/;
var_tree = var114;
var115 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var115;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype117 = type_parser_nodes__AError.color;
idtype118 = type_parser_nodes__AError.id;
if(cltype117 >= var_eof->type->table_size) {
var116 = 0;
} else {
var116 = var_eof->type->type_table[cltype117] == idtype118;
}
var119 = !var116;
if (var119){
var120 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var120 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 148);
show_backtrace(1);
} else {
var121 = ((val* (*)(val*))(var120->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var120) /* n_classdefs on <var120:nullable AModule>*/;
}
var122 = ((val* (*)(val*))(var121->class->vft[COLOR_abstract_collection__Collection__first]))(var121) /* first on <var121:ANodes[AClassdef]>*/;
var123 = ((val* (*)(val*))(var122->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var122) /* n_propdefs on <var122:nullable Object(AClassdef)>*/;
var124 = ((val* (*)(val*))(var123->class->vft[COLOR_abstract_collection__Collection__first]))(var123) /* first on <var123:ANodes[APropdef]>*/;
/* <var124:nullable Object(APropdef)> isa AMainMethPropdef */
cltype126 = type_parser_nodes__AMainMethPropdef.color;
idtype127 = type_parser_nodes__AMainMethPropdef.id;
if(cltype126 >= var124->type->table_size) {
var125 = 0;
} else {
var125 = var124->type->type_table[cltype126] == idtype127;
}
if (!var125) {
var_class_name128 = var124 == NULL ? "null" : var124->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AMainMethPropdef", var_class_name128);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 148);
show_backtrace(1);
}
var129 = ((val* (*)(val*))(var124->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var124) /* n_block on <var124:APropdef(AMainMethPropdef)>*/;
/* <var129:nullable AExpr> isa ABlockExpr */
cltype131 = type_parser_nodes__ABlockExpr.color;
idtype132 = type_parser_nodes__ABlockExpr.id;
if(var129 == NULL) {
var130 = 0;
} else {
if(cltype131 >= var129->type->table_size) {
var130 = 0;
} else {
var130 = var129->type->type_table[cltype131] == idtype132;
}
}
if (!var130) {
var_class_name133 = var129 == NULL ? "null" : var129->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name133);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 148);
show_backtrace(1);
}
var134 = ((val* (*)(val*))(var129->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var129) /* n_expr on <var129:nullable AExpr(ABlockExpr)>*/;
var135 = ((val* (*)(val*))(var134->class->vft[COLOR_abstract_collection__Collection__first]))(var134) /* first on <var134:ANodes[AExpr]>*/;
/* <var135:nullable Object(AExpr)> isa ADoExpr */
cltype137 = type_parser_nodes__ADoExpr.color;
idtype138 = type_parser_nodes__ADoExpr.id;
if(cltype137 >= var135->type->table_size) {
var136 = 0;
} else {
var136 = var135->type->type_table[cltype137] == idtype138;
}
if (!var136) {
var_class_name139 = var135 == NULL ? "null" : var135->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ADoExpr", var_class_name139);
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 148);
show_backtrace(1);
}
var140 = ((val* (*)(val*))(var135->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(var135) /* n_block on <var135:AExpr(ADoExpr)>*/;
if (var140 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 148);
show_backtrace(1);
}
var_nblock = var140;
var = var_nblock;
goto RET_LABEL;
} else {
}
var141 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var142 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var143 = ((short int (*)(val*, val*))(var141->class->vft[COLOR_kernel__Comparable___62d]))(var141, var142) /* > on <var141:Location>*/;
if (var143){
var_error = var_eof;
} else {
}
var144 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var144->class->vft[COLOR_lexer__Lexer__init]))(var144, var_source) /* init on <var144:Lexer>*/;
var_lexer = var144;
var145 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var145->class->vft[COLOR_parser__Parser__init]))(var145, var_lexer) /* init on <var145:Parser>*/;
var146 = ((val* (*)(val*))(var145->class->vft[COLOR_parser__Parser__parse]))(var145) /* parse on <var145:Parser>*/;
var_tree = var146;
var147 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var147;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype149 = type_parser_nodes__AError.color;
idtype150 = type_parser_nodes__AError.id;
if(cltype149 >= var_eof->type->table_size) {
var148 = 0;
} else {
var148 = var_eof->type->type_table[cltype149] == idtype150;
}
var151 = !var148;
if (var151){
var152 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var152 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 157);
show_backtrace(1);
}
var = var152;
goto RET_LABEL;
} else {
}
var153 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var154 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var155 = ((short int (*)(val*, val*))(var153->class->vft[COLOR_kernel__Comparable___62d]))(var153, var154) /* > on <var153:Location>*/;
if (var155){
var_error = var_eof;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: Object, String): ANode */
val* VIRTUAL_parser_util__ToolContext__parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = parser_util__ToolContext__parse_something(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: InjectedLexer): List[Token] */
val* parser_util__InjectedLexer__injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_before].val; /* @injected_before on <self:InjectedLexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @injected_before");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 168);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: Object): List[Token] */
val* VIRTUAL_parser_util__InjectedLexer__injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = parser_util__InjectedLexer__injected_before(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before= for (self: InjectedLexer, List[Token]) */
void parser_util__InjectedLexer__injected_before_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_before].val = p0; /* @injected_before on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_before= for (self: Object, List[Token]) */
void VIRTUAL_parser_util__InjectedLexer__injected_before_61d(val* self, val* p0) {
parser_util__InjectedLexer__injected_before_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_after for (self: InjectedLexer): List[Token] */
val* parser_util__InjectedLexer__injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_after].val; /* @injected_after on <self:InjectedLexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @injected_after");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 169);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after for (self: Object): List[Token] */
val* VIRTUAL_parser_util__InjectedLexer__injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = parser_util__InjectedLexer__injected_after(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after= for (self: InjectedLexer, List[Token]) */
void parser_util__InjectedLexer__injected_after_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_after].val = p0; /* @injected_after on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_after= for (self: Object, List[Token]) */
void VIRTUAL_parser_util__InjectedLexer__injected_after_61d(val* self, val* p0) {
parser_util__InjectedLexer__injected_after_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#is_finished for (self: InjectedLexer): Bool */
short int parser_util__InjectedLexer__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dis_finished].s; /* @is_finished on <self:InjectedLexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished for (self: Object): Bool */
short int VIRTUAL_parser_util__InjectedLexer__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = parser_util__InjectedLexer__is_finished(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished= for (self: InjectedLexer, Bool) */
void parser_util__InjectedLexer__is_finished_61d(val* self, short int p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dis_finished].s = p0; /* @is_finished on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#is_finished= for (self: Object, Bool) */
void VIRTUAL_parser_util__InjectedLexer__is_finished_61d(val* self, short int p0) {
parser_util__InjectedLexer__is_finished_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#get_token for (self: InjectedLexer): nullable Token */
val* parser_util__InjectedLexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : List[Token] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : List[Token] */;
val* var5 /* : nullable Object */;
val* var_tok /* var tok: Token */;
val* var6 /* : nullable Location */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : Location */;
val* var10 /* : SourceFile */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Token */;
val* var_next /* var next: nullable Token */;
short int var18 /* : Bool */;
int cltype;
int idtype;
short int var19 /* : Bool */;
val* var20 /* : List[Token] */;
short int var21 /* : Bool */;
val* var22 /* : List[Token] */;
val* var23 /* : nullable Object */;
val* var_tok24 /* var tok: Token */;
val* var25 /* : nullable Location */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : Location */;
val* var29 /* : SourceFile */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(self) /* injected_before on <self:InjectedLexer>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:List[Token]>*/;
var3 = !var2;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(self) /* injected_before on <self:InjectedLexer>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Sequence__shift]))(var4) /* shift on <var4:List[Token]>*/;
var_tok = var5;
var6 = var_tok->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_tok:Token> */
var7 = NULL;
if (var6 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
var9 = NEW_location__Location(&type_location__Location);
var10 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__file]))(self) /* file on <self:InjectedLexer>*/;
var11 = 1;
var12 = 1;
var13 = 1;
var14 = 0;
((void (*)(val*, val*, long, long, long, long))(var9->class->vft[COLOR_location__Location__init]))(var9, var10, var11, var12, var13, var14) /* init on <var9:Location>*/;
var_tok->attrs[COLOR_parser_nodes__ANode___location].val = var9; /* _location on <var_tok:Token> */
} else {
}
var = var_tok;
goto RET_LABEL;
} else {
}
var15 = ((short int (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__is_finished]))(self) /* is_finished on <self:InjectedLexer>*/;
var16 = !var15;
if (var16){
var17 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__get_token]))(self) /* get_token on <self:InjectedLexer>*/;
var_next = var17;
/* <var_next:nullable Token> isa EOF */
cltype = type_parser_nodes__EOF.color;
idtype = type_parser_nodes__EOF.id;
if(var_next == NULL) {
var18 = 0;
} else {
if(cltype >= var_next->type->table_size) {
var18 = 0;
} else {
var18 = var_next->type->type_table[cltype] == idtype;
}
}
var19 = !var18;
if (var19){
var = var_next;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(self) /* injected_after on <self:InjectedLexer>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__Sequence__push]))(var20, var_next) /* push on <var20:List[Token]>*/;
var21 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_parser_util__InjectedLexer__is_finished_61d]))(self, var21) /* is_finished= on <self:InjectedLexer>*/;
} else {
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(self) /* injected_after on <self:InjectedLexer>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Sequence__shift]))(var22) /* shift on <var22:List[Token]>*/;
var_tok24 = var23;
var25 = var_tok24->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_tok24:Token> */
var26 = NULL;
if (var25 == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (var27){
var28 = NEW_location__Location(&type_location__Location);
var29 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__file]))(self) /* file on <self:InjectedLexer>*/;
var30 = 1;
var31 = 1;
var32 = 1;
var33 = 0;
((void (*)(val*, val*, long, long, long, long))(var28->class->vft[COLOR_location__Location__init]))(var28, var29, var30, var31, var32, var33) /* init on <var28:Location>*/;
var_tok24->attrs[COLOR_parser_nodes__ANode___location].val = var28; /* _location on <var_tok24:Token> */
} else {
}
var = var_tok24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#get_token for (self: Object): nullable Token */
val* VIRTUAL_parser_util__InjectedLexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = parser_util__InjectedLexer__get_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_tokens_by_text for (self: ANode, String): Array[Token] */
val* parser_util__ANode__collect_tokens_by_text(val* self, val* p0) {
val* var /* : Array[Token] */;
val* var_text /* var text: String */;
val* var1 /* : CollectTokensByTextVisitor */;
val* var_v /* var v: CollectTokensByTextVisitor */;
val* var2 /* : Array[Token] */;
var_text = p0;
var1 = NEW_parser_util__CollectTokensByTextVisitor(&type_parser_util__CollectTokensByTextVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__init]))(var1, var_text) /* init on <var1:CollectTokensByTextVisitor>*/;
var_v = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:CollectTokensByTextVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__result]))(var_v) /* result on <var_v:CollectTokensByTextVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_tokens_by_text for (self: Object, String): Array[Token] */
val* VIRTUAL_parser_util__ANode__collect_tokens_by_text(val* self, val* p0) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = parser_util__ANode__collect_tokens_by_text(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_annotations_by_name for (self: ANode, String): Array[AAnnotation] */
val* parser_util__ANode__collect_annotations_by_name(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : CollectAnnotationsByNameVisitor */;
val* var_v /* var v: CollectAnnotationsByNameVisitor */;
val* var2 /* : Array[AAnnotation] */;
var_name = p0;
var1 = NEW_parser_util__CollectAnnotationsByNameVisitor(&type_parser_util__CollectAnnotationsByNameVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__init]))(var1, var_name) /* init on <var1:CollectAnnotationsByNameVisitor>*/;
var_v = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:CollectAnnotationsByNameVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__result]))(var_v) /* result on <var_v:CollectAnnotationsByNameVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_annotations_by_name for (self: Object, String): Array[AAnnotation] */
val* VIRTUAL_parser_util__ANode__collect_annotations_by_name(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = parser_util__ANode__collect_annotations_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text for (self: CollectTokensByTextVisitor): String */
val* parser_util__CollectTokensByTextVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val; /* @text on <self:CollectTokensByTextVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @text");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 213);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text for (self: Object): String */
val* VIRTUAL_parser_util__CollectTokensByTextVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_util__CollectTokensByTextVisitor__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text= for (self: CollectTokensByTextVisitor, String) */
void parser_util__CollectTokensByTextVisitor__text_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val = p0; /* @text on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#text= for (self: Object, String) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__text_61d(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__text_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#init for (self: CollectTokensByTextVisitor, String) */
void parser_util__CollectTokensByTextVisitor__init(val* self, val* p0) {
val* var_text /* var text: String */;
var_text = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:CollectTokensByTextVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__text_61d]))(self, var_text) /* text= on <self:CollectTokensByTextVisitor>*/;
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#init for (self: Object, String) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__init(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__init(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#result for (self: CollectTokensByTextVisitor): Array[Token] */
val* parser_util__CollectTokensByTextVisitor__result(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val; /* @result on <self:CollectTokensByTextVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @result");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 215);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#result for (self: Object): Array[Token] */
val* VIRTUAL_parser_util__CollectTokensByTextVisitor__result(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = parser_util__CollectTokensByTextVisitor__result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#result= for (self: CollectTokensByTextVisitor, Array[Token]) */
void parser_util__CollectTokensByTextVisitor__result_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val = p0; /* @result on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#result= for (self: Object, Array[Token]) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__result_61d(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__result_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#visit for (self: CollectTokensByTextVisitor, ANode) */
void parser_util__CollectTokensByTextVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : Array[Token] */;
var_node = p0;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
/* <var_node:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__Token__text]))(var_node) /* text on <var_node:ANode(Token)>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__text]))(self) /* text on <self:CollectTokensByTextVisitor>*/;
var4 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
var = var4;
} else {
var = var_;
}
if (var){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__result]))(self) /* result on <self:CollectTokensByTextVisitor>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var5, var_node) /* add on <var5:Array[Token]>*/;
} else {
}
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__visit(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__visit(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name for (self: CollectAnnotationsByNameVisitor): String */
val* parser_util__CollectAnnotationsByNameVisitor__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dname].val; /* @name on <self:CollectAnnotationsByNameVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 225);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name for (self: Object): String */
val* VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_util__CollectAnnotationsByNameVisitor__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name= for (self: CollectAnnotationsByNameVisitor, String) */
void parser_util__CollectAnnotationsByNameVisitor__name_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dname].val = p0; /* @name on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name= for (self: Object, String) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name_61d(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__name_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#init for (self: CollectAnnotationsByNameVisitor, String) */
void parser_util__CollectAnnotationsByNameVisitor__init(val* self, val* p0) {
val* var_name /* var name: String */;
var_name = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:CollectAnnotationsByNameVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__name_61d]))(self, var_name) /* name= on <self:CollectAnnotationsByNameVisitor>*/;
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#init for (self: Object, String) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__init(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__init(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result for (self: CollectAnnotationsByNameVisitor): Array[AAnnotation] */
val* parser_util__CollectAnnotationsByNameVisitor__result(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dresult].val; /* @result on <self:CollectAnnotationsByNameVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @result");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 227);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result for (self: Object): Array[AAnnotation] */
val* VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = parser_util__CollectAnnotationsByNameVisitor__result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result= for (self: CollectAnnotationsByNameVisitor, Array[AAnnotation]) */
void parser_util__CollectAnnotationsByNameVisitor__result_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dresult].val = p0; /* @result on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result= for (self: Object, Array[AAnnotation]) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result_61d(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__result_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#visit for (self: CollectAnnotationsByNameVisitor, ANode) */
void parser_util__CollectAnnotationsByNameVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var4 /* : String */;
val* var5 /* : String */;
short int var6 /* : Bool */;
val* var7 /* : Array[AAnnotation] */;
var_node = p0;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
/* <var_node:ANode> isa AAnnotation */
cltype = type_parser_nodes__AAnnotation.color;
idtype = type_parser_nodes__AAnnotation.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_node) /* n_atid on <var_node:ANode(AAnnotation)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var2) /* n_id on <var2:AAtid>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser_nodes__Token__text]))(var3) /* text on <var3:Token>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__name]))(self) /* name on <self:CollectAnnotationsByNameVisitor>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:String>*/;
var = var6;
} else {
var = var_;
}
if (var){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__result]))(self) /* result on <self:CollectAnnotationsByNameVisitor>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_node) /* add on <var7:Array[AAnnotation]>*/;
} else {
}
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__visit(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__visit(self, p0);
RET_LABEL:;
}
