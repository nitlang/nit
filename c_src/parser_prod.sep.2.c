#include "parser_prod.sep.0.h"
/* method parser_prod#AMethPropdef#visit_all for (self: AMethPropdef, Visitor) */
void parser_prod__AMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwmeth */;
val* var4 /* : nullable TKwinit */;
val* var5 /* : nullable TKwnew */;
val* var6 /* : nullable AMethid */;
val* var7 /* : nullable ASignature */;
val* var8 /* : nullable AAnnotations */;
val* var9 /* : nullable AExternCalls */;
val* var10 /* : nullable AExternCodeBlock */;
val* var11 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var10); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var11 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var11); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AMethPropdef__visit_all(self, p0); /* Direct call parser_prod#AMethPropdef#visit_all on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: AIdMethid, nullable TId) */
void parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1295);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1296);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
parser_prod__AIdMethid__init_aidmethid(self, p0); /* Direct call parser_prod#AIdMethid#init_aidmethid on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: AIdMethid, ANode, nullable ANode) */
void parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1301);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1302);
show_backtrace(1);
}
{
parser_prod__AIdMethid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIdMethid#n_id= on <self:AIdMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIdMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AIdMethid#replace_child on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: AIdMethid, TId) */
void parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
parser_prod__AIdMethid__n_id_61d(self, p0); /* Direct call parser_prod#AIdMethid#n_id= on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: AIdMethid, Visitor) */
void parser_prod__AIdMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1316);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIdMethid__visit_all(val* self, val* p0) {
parser_prod__AIdMethid__visit_all(self, p0); /* Direct call parser_prod#AIdMethid#visit_all on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
val* var_n_plus /* var n_plus: nullable TPlus */;
var_n_plus = p0;
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1324);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_n_plus; /* _n_plus on <self:APlusMethid> */
if (var_n_plus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1325);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_plus,self) on <var_n_plus:nullable TPlus> */
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_plus->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_plus:nullable TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: Object, nullable TPlus) */
void VIRTUAL_parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
parser_prod__APlusMethid__init_aplusmethid(self, p0); /* Direct call parser_prod#APlusMethid#init_aplusmethid on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: APlusMethid, ANode, nullable ANode) */
void parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPlus */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1330);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPlus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPlus> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TPlus */
cltype = type_parser_nodes__TPlus.color;
idtype = type_parser_nodes__TPlus.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1331);
show_backtrace(1);
}
{
parser_prod__APlusMethid__n_plus_61d(self, var_new_child); /* Direct call parser_prod#APlusMethid#n_plus= on <self:APlusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusMethid__replace_child(self, p0, p1); /* Direct call parser_prod#APlusMethid#replace_child on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: APlusMethid, TPlus) */
void parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
val* var_node /* var node: TPlus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_node; /* _n_plus on <self:APlusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPlus> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: Object, TPlus) */
void VIRTUAL_parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
parser_prod__APlusMethid__n_plus_61d(self, p0); /* Direct call parser_prod#APlusMethid#n_plus= on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: APlusMethid, Visitor) */
void parser_prod__APlusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPlus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1345);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusMethid__visit_all(val* self, val* p0) {
parser_prod__APlusMethid__visit_all(self, p0); /* Direct call parser_prod#APlusMethid#visit_all on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
val* var_n_minus /* var n_minus: nullable TMinus */;
var_n_minus = p0;
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1353);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_n_minus; /* _n_minus on <self:AMinusMethid> */
if (var_n_minus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1354);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_minus,self) on <var_n_minus:nullable TMinus> */
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_minus->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_minus:nullable TMinus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: Object, nullable TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
parser_prod__AMinusMethid__init_aminusmethid(self, p0); /* Direct call parser_prod#AMinusMethid#init_aminusmethid on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TMinus */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1359);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TMinus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TMinus> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TMinus */
cltype = type_parser_nodes__TMinus.color;
idtype = type_parser_nodes__TMinus.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TMinus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1360);
show_backtrace(1);
}
{
parser_prod__AMinusMethid__n_minus_61d(self, var_new_child); /* Direct call parser_prod#AMinusMethid#n_minus= on <self:AMinusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AMinusMethid#replace_child on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: AMinusMethid, TMinus) */
void parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_node; /* _n_minus on <self:AMinusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinus> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
parser_prod__AMinusMethid__n_minus_61d(self, p0); /* Direct call parser_prod#AMinusMethid#n_minus= on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: AMinusMethid, Visitor) */
void parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1374);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
parser_prod__AMinusMethid__visit_all(self, p0); /* Direct call parser_prod#AMinusMethid#visit_all on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: AStarMethid, nullable TStar) */
void parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
val* var_n_star /* var n_star: nullable TStar */;
var_n_star = p0;
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1382);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_n_star; /* _n_star on <self:AStarMethid> */
if (var_n_star == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1383);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_star,self) on <var_n_star:nullable TStar> */
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_star->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_star:nullable TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: Object, nullable TStar) */
void VIRTUAL_parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
parser_prod__AStarMethid__init_astarmethid(self, p0); /* Direct call parser_prod#AStarMethid#init_astarmethid on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: AStarMethid, ANode, nullable ANode) */
void parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1388);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStar> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TStar */
cltype = type_parser_nodes__TStar.color;
idtype = type_parser_nodes__TStar.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1389);
show_backtrace(1);
}
{
parser_prod__AStarMethid__n_star_61d(self, var_new_child); /* Direct call parser_prod#AStarMethid#n_star= on <self:AStarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AStarMethid#replace_child on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: AStarMethid, TStar) */
void parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
val* var_node /* var node: TStar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_node; /* _n_star on <self:AStarMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: Object, TStar) */
void VIRTUAL_parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
parser_prod__AStarMethid__n_star_61d(self, p0); /* Direct call parser_prod#AStarMethid#n_star= on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: AStarMethid, Visitor) */
void parser_prod__AStarMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1403);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarMethid__visit_all(val* self, val* p0) {
parser_prod__AStarMethid__visit_all(self, p0); /* Direct call parser_prod#AStarMethid#visit_all on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#init_astarstarmethid for (self: AStarstarMethid, nullable TStarstar) */
void parser_prod__AStarstarMethid__init_astarstarmethid(val* self, val* p0) {
val* var_n_starstar /* var n_starstar: nullable TStarstar */;
var_n_starstar = p0;
if (unlikely(var_n_starstar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1411);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarstarMethid___n_starstar].val = var_n_starstar; /* _n_starstar on <self:AStarstarMethid> */
if (var_n_starstar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1412);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_starstar,self) on <var_n_starstar:nullable TStarstar> */
if (unlikely(var_n_starstar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_starstar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_starstar:nullable TStarstar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#init_astarstarmethid for (self: Object, nullable TStarstar) */
void VIRTUAL_parser_prod__AStarstarMethid__init_astarstarmethid(val* self, val* p0) {
parser_prod__AStarstarMethid__init_astarstarmethid(self, p0); /* Direct call parser_prod#AStarstarMethid#init_astarstarmethid on <self:Object(AStarstarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#replace_child for (self: AStarstarMethid, ANode, nullable ANode) */
void parser_prod__AStarstarMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarstar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStarstarMethid___n_starstar].val; /* _n_starstar on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starstar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1417);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStarstar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStarstar> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TStarstar */
cltype = type_parser_nodes__TStarstar.color;
idtype = type_parser_nodes__TStarstar.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1418);
show_backtrace(1);
}
{
parser_prod__AStarstarMethid__n_starstar_61d(self, var_new_child); /* Direct call parser_prod#AStarstarMethid#n_starstar= on <self:AStarstarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarstarMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarstarMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AStarstarMethid#replace_child on <self:Object(AStarstarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#n_starstar= for (self: AStarstarMethid, TStarstar) */
void parser_prod__AStarstarMethid__n_starstar_61d(val* self, val* p0) {
val* var_node /* var node: TStarstar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarstarMethid___n_starstar].val = var_node; /* _n_starstar on <self:AStarstarMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStarstar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStarstar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#n_starstar= for (self: Object, TStarstar) */
void VIRTUAL_parser_prod__AStarstarMethid__n_starstar_61d(val* self, val* p0) {
parser_prod__AStarstarMethid__n_starstar_61d(self, p0); /* Direct call parser_prod#AStarstarMethid#n_starstar= on <self:Object(AStarstarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#visit_all for (self: AStarstarMethid, Visitor) */
void parser_prod__AStarstarMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarstar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarstarMethid___n_starstar].val; /* _n_starstar on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starstar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1432);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarstarMethid__visit_all(val* self, val* p0) {
parser_prod__AStarstarMethid__visit_all(self, p0); /* Direct call parser_prod#AStarstarMethid#visit_all on <self:Object(AStarstarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
val* var_n_slash /* var n_slash: nullable TSlash */;
var_n_slash = p0;
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1440);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_n_slash; /* _n_slash on <self:ASlashMethid> */
if (var_n_slash == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1441);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_slash,self) on <var_n_slash:nullable TSlash> */
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_slash->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_slash:nullable TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: Object, nullable TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
parser_prod__ASlashMethid__init_aslashmethid(self, p0); /* Direct call parser_prod#ASlashMethid#init_aslashmethid on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TSlash */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1446);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TSlash> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TSlash> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TSlash */
cltype = type_parser_nodes__TSlash.color;
idtype = type_parser_nodes__TSlash.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlash", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1447);
show_backtrace(1);
}
{
parser_prod__ASlashMethid__n_slash_61d(self, var_new_child); /* Direct call parser_prod#ASlashMethid#n_slash= on <self:ASlashMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASlashMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ASlashMethid#replace_child on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: ASlashMethid, TSlash) */
void parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
val* var_node /* var node: TSlash */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_node; /* _n_slash on <self:ASlashMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TSlash> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: Object, TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
parser_prod__ASlashMethid__n_slash_61d(self, p0); /* Direct call parser_prod#ASlashMethid#n_slash= on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: ASlashMethid, Visitor) */
void parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TSlash */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1461);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
parser_prod__ASlashMethid__visit_all(self, p0); /* Direct call parser_prod#ASlashMethid#visit_all on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
val* var_n_percent /* var n_percent: nullable TPercent */;
var_n_percent = p0;
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1469);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_n_percent; /* _n_percent on <self:APercentMethid> */
if (var_n_percent == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1470);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_percent,self) on <var_n_percent:nullable TPercent> */
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_percent->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_percent:nullable TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: Object, nullable TPercent) */
void VIRTUAL_parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
parser_prod__APercentMethid__init_apercentmethid(self, p0); /* Direct call parser_prod#APercentMethid#init_apercentmethid on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: APercentMethid, ANode, nullable ANode) */
void parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPercent */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1475);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPercent> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPercent> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TPercent */
cltype = type_parser_nodes__TPercent.color;
idtype = type_parser_nodes__TPercent.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1476);
show_backtrace(1);
}
{
parser_prod__APercentMethid__n_percent_61d(self, var_new_child); /* Direct call parser_prod#APercentMethid#n_percent= on <self:APercentMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APercentMethid__replace_child(self, p0, p1); /* Direct call parser_prod#APercentMethid#replace_child on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: APercentMethid, TPercent) */
void parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
val* var_node /* var node: TPercent */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_node; /* _n_percent on <self:APercentMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPercent> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: Object, TPercent) */
void VIRTUAL_parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
parser_prod__APercentMethid__n_percent_61d(self, p0); /* Direct call parser_prod#APercentMethid#n_percent= on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: APercentMethid, Visitor) */
void parser_prod__APercentMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPercent */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1490);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APercentMethid__visit_all(val* self, val* p0) {
parser_prod__APercentMethid__visit_all(self, p0); /* Direct call parser_prod#APercentMethid#visit_all on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: AEqMethid, nullable TEq) */
void parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
val* var_n_eq /* var n_eq: nullable TEq */;
var_n_eq = p0;
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1498);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_n_eq; /* _n_eq on <self:AEqMethid> */
if (var_n_eq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1499);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_eq,self) on <var_n_eq:nullable TEq> */
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_eq->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_eq:nullable TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: Object, nullable TEq) */
void VIRTUAL_parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
parser_prod__AEqMethid__init_aeqmethid(self, p0); /* Direct call parser_prod#AEqMethid#init_aeqmethid on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: AEqMethid, ANode, nullable ANode) */
void parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TEq */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1504);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TEq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TEq> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TEq */
cltype = type_parser_nodes__TEq.color;
idtype = type_parser_nodes__TEq.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1505);
show_backtrace(1);
}
{
parser_prod__AEqMethid__n_eq_61d(self, var_new_child); /* Direct call parser_prod#AEqMethid#n_eq= on <self:AEqMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEqMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AEqMethid#replace_child on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: AEqMethid, TEq) */
void parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
val* var_node /* var node: TEq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_node; /* _n_eq on <self:AEqMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TEq> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: Object, TEq) */
void VIRTUAL_parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
parser_prod__AEqMethid__n_eq_61d(self, p0); /* Direct call parser_prod#AEqMethid#n_eq= on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: AEqMethid, Visitor) */
void parser_prod__AEqMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TEq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1519);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEqMethid__visit_all(val* self, val* p0) {
parser_prod__AEqMethid__visit_all(self, p0); /* Direct call parser_prod#AEqMethid#visit_all on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: ANeMethid, nullable TNe) */
void parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
val* var_n_ne /* var n_ne: nullable TNe */;
var_n_ne = p0;
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1527);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_n_ne; /* _n_ne on <self:ANeMethid> */
if (var_n_ne == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1528);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ne,self) on <var_n_ne:nullable TNe> */
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_ne->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ne:nullable TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: Object, nullable TNe) */
void VIRTUAL_parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
parser_prod__ANeMethid__init_anemethid(self, p0); /* Direct call parser_prod#ANeMethid#init_anemethid on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: ANeMethid, ANode, nullable ANode) */
void parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNe */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1533);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TNe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TNe> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TNe */
cltype = type_parser_nodes__TNe.color;
idtype = type_parser_nodes__TNe.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1534);
show_backtrace(1);
}
{
parser_prod__ANeMethid__n_ne_61d(self, var_new_child); /* Direct call parser_prod#ANeMethid#n_ne= on <self:ANeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ANeMethid#replace_child on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: ANeMethid, TNe) */
void parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
val* var_node /* var node: TNe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_node; /* _n_ne on <self:ANeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TNe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: Object, TNe) */
void VIRTUAL_parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
parser_prod__ANeMethid__n_ne_61d(self, p0); /* Direct call parser_prod#ANeMethid#n_ne= on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: ANeMethid, Visitor) */
void parser_prod__ANeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1548);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANeMethid__visit_all(val* self, val* p0) {
parser_prod__ANeMethid__visit_all(self, p0); /* Direct call parser_prod#ANeMethid#visit_all on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: ALeMethid, nullable TLe) */
void parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
val* var_n_le /* var n_le: nullable TLe */;
var_n_le = p0;
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1556);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_n_le; /* _n_le on <self:ALeMethid> */
if (var_n_le == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1557);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_le,self) on <var_n_le:nullable TLe> */
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_le->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_le:nullable TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: Object, nullable TLe) */
void VIRTUAL_parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
parser_prod__ALeMethid__init_alemethid(self, p0); /* Direct call parser_prod#ALeMethid#init_alemethid on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: ALeMethid, ANode, nullable ANode) */
void parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLe */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1562);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLe> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TLe */
cltype = type_parser_nodes__TLe.color;
idtype = type_parser_nodes__TLe.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1563);
show_backtrace(1);
}
{
parser_prod__ALeMethid__n_le_61d(self, var_new_child); /* Direct call parser_prod#ALeMethid#n_le= on <self:ALeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALeMethid#replace_child on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: ALeMethid, TLe) */
void parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
val* var_node /* var node: TLe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_node; /* _n_le on <self:ALeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: Object, TLe) */
void VIRTUAL_parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
parser_prod__ALeMethid__n_le_61d(self, p0); /* Direct call parser_prod#ALeMethid#n_le= on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: ALeMethid, Visitor) */
void parser_prod__ALeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1577);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALeMethid__visit_all(val* self, val* p0) {
parser_prod__ALeMethid__visit_all(self, p0); /* Direct call parser_prod#ALeMethid#visit_all on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: AGeMethid, nullable TGe) */
void parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
val* var_n_ge /* var n_ge: nullable TGe */;
var_n_ge = p0;
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1585);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_n_ge; /* _n_ge on <self:AGeMethid> */
if (var_n_ge == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1586);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ge,self) on <var_n_ge:nullable TGe> */
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_ge->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ge:nullable TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: Object, nullable TGe) */
void VIRTUAL_parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
parser_prod__AGeMethid__init_agemethid(self, p0); /* Direct call parser_prod#AGeMethid#init_agemethid on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: AGeMethid, ANode, nullable ANode) */
void parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGe */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1591);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGe> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TGe */
cltype = type_parser_nodes__TGe.color;
idtype = type_parser_nodes__TGe.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1592);
show_backtrace(1);
}
{
parser_prod__AGeMethid__n_ge_61d(self, var_new_child); /* Direct call parser_prod#AGeMethid#n_ge= on <self:AGeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGeMethid#replace_child on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: AGeMethid, TGe) */
void parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
val* var_node /* var node: TGe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_node; /* _n_ge on <self:AGeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: Object, TGe) */
void VIRTUAL_parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
parser_prod__AGeMethid__n_ge_61d(self, p0); /* Direct call parser_prod#AGeMethid#n_ge= on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: AGeMethid, Visitor) */
void parser_prod__AGeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1606);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGeMethid__visit_all(val* self, val* p0) {
parser_prod__AGeMethid__visit_all(self, p0); /* Direct call parser_prod#AGeMethid#visit_all on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: ALtMethid, nullable TLt) */
void parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
val* var_n_lt /* var n_lt: nullable TLt */;
var_n_lt = p0;
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1614);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_n_lt; /* _n_lt on <self:ALtMethid> */
if (var_n_lt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1615);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_lt,self) on <var_n_lt:nullable TLt> */
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_lt->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_lt:nullable TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: Object, nullable TLt) */
void VIRTUAL_parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
parser_prod__ALtMethid__init_altmethid(self, p0); /* Direct call parser_prod#ALtMethid#init_altmethid on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: ALtMethid, ANode, nullable ANode) */
void parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLt */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1620);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLt> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TLt */
cltype = type_parser_nodes__TLt.color;
idtype = type_parser_nodes__TLt.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1621);
show_backtrace(1);
}
{
parser_prod__ALtMethid__n_lt_61d(self, var_new_child); /* Direct call parser_prod#ALtMethid#n_lt= on <self:ALtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALtMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALtMethid#replace_child on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: ALtMethid, TLt) */
void parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
val* var_node /* var node: TLt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_node; /* _n_lt on <self:ALtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLt> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: Object, TLt) */
void VIRTUAL_parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
parser_prod__ALtMethid__n_lt_61d(self, p0); /* Direct call parser_prod#ALtMethid#n_lt= on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: ALtMethid, Visitor) */
void parser_prod__ALtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1635);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALtMethid__visit_all(val* self, val* p0) {
parser_prod__ALtMethid__visit_all(self, p0); /* Direct call parser_prod#ALtMethid#visit_all on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: AGtMethid, nullable TGt) */
void parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
val* var_n_gt /* var n_gt: nullable TGt */;
var_n_gt = p0;
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1643);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_n_gt; /* _n_gt on <self:AGtMethid> */
if (var_n_gt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1644);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gt,self) on <var_n_gt:nullable TGt> */
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_gt->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gt:nullable TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: Object, nullable TGt) */
void VIRTUAL_parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
parser_prod__AGtMethid__init_agtmethid(self, p0); /* Direct call parser_prod#AGtMethid#init_agtmethid on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: AGtMethid, ANode, nullable ANode) */
void parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGt */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1649);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGt> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TGt */
cltype = type_parser_nodes__TGt.color;
idtype = type_parser_nodes__TGt.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1650);
show_backtrace(1);
}
{
parser_prod__AGtMethid__n_gt_61d(self, var_new_child); /* Direct call parser_prod#AGtMethid#n_gt= on <self:AGtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGtMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGtMethid#replace_child on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: AGtMethid, TGt) */
void parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
val* var_node /* var node: TGt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_node; /* _n_gt on <self:AGtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGt> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: Object, TGt) */
void VIRTUAL_parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
parser_prod__AGtMethid__n_gt_61d(self, p0); /* Direct call parser_prod#AGtMethid#n_gt= on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: AGtMethid, Visitor) */
void parser_prod__AGtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1664);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGtMethid__visit_all(val* self, val* p0) {
parser_prod__AGtMethid__visit_all(self, p0); /* Direct call parser_prod#AGtMethid#visit_all on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: ALlMethid, nullable TLl) */
void parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
val* var_n_ll /* var n_ll: nullable TLl */;
var_n_ll = p0;
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1672);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_n_ll; /* _n_ll on <self:ALlMethid> */
if (var_n_ll == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1673);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ll,self) on <var_n_ll:nullable TLl> */
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_ll->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ll:nullable TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: Object, nullable TLl) */
void VIRTUAL_parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
parser_prod__ALlMethid__init_allmethid(self, p0); /* Direct call parser_prod#ALlMethid#init_allmethid on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: ALlMethid, ANode, nullable ANode) */
void parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLl */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1678);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLl> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLl> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TLl */
cltype = type_parser_nodes__TLl.color;
idtype = type_parser_nodes__TLl.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1679);
show_backtrace(1);
}
{
parser_prod__ALlMethid__n_ll_61d(self, var_new_child); /* Direct call parser_prod#ALlMethid#n_ll= on <self:ALlMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALlMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALlMethid#replace_child on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: ALlMethid, TLl) */
void parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
val* var_node /* var node: TLl */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_node; /* _n_ll on <self:ALlMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLl> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: Object, TLl) */
void VIRTUAL_parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
parser_prod__ALlMethid__n_ll_61d(self, p0); /* Direct call parser_prod#ALlMethid#n_ll= on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: ALlMethid, Visitor) */
void parser_prod__ALlMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLl */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1693);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALlMethid__visit_all(val* self, val* p0) {
parser_prod__ALlMethid__visit_all(self, p0); /* Direct call parser_prod#ALlMethid#visit_all on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: AGgMethid, nullable TGg) */
void parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
val* var_n_gg /* var n_gg: nullable TGg */;
var_n_gg = p0;
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1701);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_n_gg; /* _n_gg on <self:AGgMethid> */
if (var_n_gg == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1702);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gg,self) on <var_n_gg:nullable TGg> */
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_gg->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gg:nullable TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: Object, nullable TGg) */
void VIRTUAL_parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
parser_prod__AGgMethid__init_aggmethid(self, p0); /* Direct call parser_prod#AGgMethid#init_aggmethid on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: AGgMethid, ANode, nullable ANode) */
void parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGg */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1707);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGg> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGg> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TGg */
cltype = type_parser_nodes__TGg.color;
idtype = type_parser_nodes__TGg.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1708);
show_backtrace(1);
}
{
parser_prod__AGgMethid__n_gg_61d(self, var_new_child); /* Direct call parser_prod#AGgMethid#n_gg= on <self:AGgMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGgMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGgMethid#replace_child on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: AGgMethid, TGg) */
void parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
val* var_node /* var node: TGg */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_node; /* _n_gg on <self:AGgMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGg> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: Object, TGg) */
void VIRTUAL_parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
parser_prod__AGgMethid__n_gg_61d(self, p0); /* Direct call parser_prod#AGgMethid#n_gg= on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: AGgMethid, Visitor) */
void parser_prod__AGgMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGg */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1722);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGgMethid__visit_all(val* self, val* p0) {
parser_prod__AGgMethid__visit_all(self, p0); /* Direct call parser_prod#AGgMethid#visit_all on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
var_n_obra = p0;
var_n_cbra = p1;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1731);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1732);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1733);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: Object, nullable TObra, nullable TCbra) */
void VIRTUAL_parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__init_abramethid(self, p0, p1); /* Direct call parser_prod#ABraMethid#init_abramethid on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: ABraMethid, ANode, nullable ANode) */
void parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TCbra */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1739);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1740);
show_backtrace(1);
}
{
parser_prod__ABraMethid__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_obra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1743);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TCbra> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TCbra */
cltype16 = type_parser_nodes__TCbra.color;
idtype17 = type_parser_nodes__TCbra.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1744);
show_backtrace(1);
}
{
parser_prod__ABraMethid__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_cbra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ABraMethid#replace_child on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_obra_61d(self, p0); /* Direct call parser_prod#ABraMethid#n_obra= on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_cbra_61d(self, p0); /* Direct call parser_prod#ABraMethid#n_cbra= on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: ABraMethid, Visitor) */
void parser_prod__ABraMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1763);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1764);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraMethid__visit_all(val* self, val* p0) {
parser_prod__ABraMethid__visit_all(self, p0); /* Direct call parser_prod#ABraMethid#visit_all on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
val* var_n_starship /* var n_starship: nullable TStarship */;
var_n_starship = p0;
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1772);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_n_starship; /* _n_starship on <self:AStarshipMethid> */
if (var_n_starship == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1773);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_starship,self) on <var_n_starship:nullable TStarship> */
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_starship->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_starship:nullable TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: Object, nullable TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
parser_prod__AStarshipMethid__init_astarshipmethid(self, p0); /* Direct call parser_prod#AStarshipMethid#init_astarshipmethid on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarship */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1778);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStarship> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStarship> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TStarship */
cltype = type_parser_nodes__TStarship.color;
idtype = type_parser_nodes__TStarship.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1779);
show_backtrace(1);
}
{
parser_prod__AStarshipMethid__n_starship_61d(self, var_new_child); /* Direct call parser_prod#AStarshipMethid#n_starship= on <self:AStarshipMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarshipMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AStarshipMethid#replace_child on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: AStarshipMethid, TStarship) */
void parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
val* var_node /* var node: TStarship */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_node; /* _n_starship on <self:AStarshipMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStarship> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: Object, TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
parser_prod__AStarshipMethid__n_starship_61d(self, p0); /* Direct call parser_prod#AStarshipMethid#n_starship= on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: AStarshipMethid, Visitor) */
void parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarship */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1793);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
parser_prod__AStarshipMethid__visit_all(self, p0); /* Direct call parser_prod#AStarshipMethid#visit_all on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_id = p0;
var_n_assign = p1;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1802);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1803);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1804);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1805);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: Object, nullable TId, nullable TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__init_aassignmethid(self, p0, p1); /* Direct call parser_prod#AAssignMethid#init_aassignmethid on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TAssign */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1810);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1811);
show_backtrace(1);
}
{
parser_prod__AAssignMethid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_id= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1814);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TAssign> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TAssign */
cltype16 = type_parser_nodes__TAssign.color;
idtype17 = type_parser_nodes__TAssign.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1815);
show_backtrace(1);
}
{
parser_prod__AAssignMethid__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_assign= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AAssignMethid#replace_child on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_id_61d(self, p0); /* Direct call parser_prod#AAssignMethid#n_id= on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_assign_61d(self, p0); /* Direct call parser_prod#AAssignMethid#n_assign= on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: AAssignMethid, Visitor) */
void parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1834);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1835);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
parser_prod__AAssignMethid__visit_all(self, p0); /* Direct call parser_prod#AAssignMethid#visit_all on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1845);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1846);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_obra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1847);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1848);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1849);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1850);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: Object, nullable TObra, nullable TCbra, nullable TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraassignMethid__init_abraassignmethid(self, p0, p1, p2); /* Direct call parser_prod#ABraassignMethid#init_abraassignmethid on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TObra */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TCbra */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TAssign */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1855);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TObra> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TObra */
cltype = type_parser_nodes__TObra.color;
idtype = type_parser_nodes__TObra.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TObra", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1856);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_obra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1859);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TCbra> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TCbra */
cltype16 = type_parser_nodes__TCbra.color;
idtype17 = type_parser_nodes__TCbra.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1860);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_cbra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1863);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TAssign> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa TAssign */
cltype27 = type_parser_nodes__TAssign.color;
idtype28 = type_parser_nodes__TAssign.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAssign", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1864);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_assign= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraassignMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ABraassignMethid#replace_child on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_obra_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_obra= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_cbra_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_cbra= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_assign_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_assign= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: ABraassignMethid, Visitor) */
void parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1888);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1889);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1890);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
parser_prod__ABraassignMethid__visit_all(self, p0); /* Direct call parser_prod#ABraassignMethid#visit_all on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_params /* var n_params: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_type /* var n_type: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : ANodes[AParam] */;
val* var10 /* : ANodes[AParam] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
var = NULL;
if (var_n_opar == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_opar,var) on <var_n_opar:nullable TOpar> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var8, var_n_params); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var8:ANodes[AParam]>*/
}
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
var11 = NULL;
if (var_n_cpar == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var11) on <var_n_cpar:nullable TCpar> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL18:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
var19 = NULL;
if (var_n_type == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var19) on <var_n_type:nullable AType> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL26:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: Object, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void VIRTUAL_parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ASignature__init_asignature(self, p0, p1, p2, p3); /* Direct call parser_prod#ASignature#init_asignature on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: ASignature, ANode, nullable ANode) */
void parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TOpar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AParam] */;
val* var10 /* : ANodes[AParam] */;
short int var11 /* : Bool */;
val* var12 /* : nullable TCpar */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
val* var23 /* : nullable AType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TOpar(TOpar)> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1913);
show_backtrace(1);
}
{
parser_prod__ASignature__n_opar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_opar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__ANodes__replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var12,var_old_child) on <var12:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:nullable TCpar(TCpar)> */
var18 = var12 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype20 = type_nullable_parser_nodes__TCpar.color;
idtype21 = type_nullable_parser_nodes__TCpar.id;
if(var_new_child == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_new_child->type->table_size) {
var19 = 0;
} else {
var19 = var_new_child->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
var_class_name22 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1918);
show_backtrace(1);
}
{
parser_prod__ASignature__n_cpar_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_cpar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable AType(AType)> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype31 = type_nullable_parser_nodes__AType.color;
idtype32 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name33 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1922);
show_backtrace(1);
}
{
parser_prod__ASignature__n_type_61d(self, var_new_child); /* Direct call parser_prod#ASignature#n_type= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASignature__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASignature__replace_child(self, p0, p1); /* Direct call parser_prod#ASignature#replace_child on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: ASignature, nullable TOpar) */
void parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TOpar> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TOpar(TOpar)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_prod__ASignature__n_opar_61d(val* self, val* p0) {
parser_prod__ASignature__n_opar_61d(self, p0); /* Direct call parser_prod#ASignature#n_opar= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_cpar= for (self: ASignature, nullable TCpar) */
void parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TCpar> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TCpar(TCpar)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_prod__ASignature__n_cpar_61d(val* self, val* p0) {
parser_prod__ASignature__n_cpar_61d(self, p0); /* Direct call parser_prod#ASignature#n_cpar= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: ASignature, nullable AType) */
void parser_prod__ASignature__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__ASignature__n_type_61d(val* self, val* p0) {
parser_prod__ASignature__n_type_61d(self, p0); /* Direct call parser_prod#ASignature#n_type= on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: ASignature, Visitor) */
void parser_prod__ASignature__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : nullable TCpar */;
val* var5 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AParam]>*/
}
var4 = self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASignature#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASignature__visit_all(val* self, val* p0) {
parser_prod__ASignature__visit_all(self, p0); /* Direct call parser_prod#ASignature#visit_all on <self:Object(ASignature)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1960);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1961);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
var = NULL;
if (var_n_type == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var) on <var_n_type:nullable AType> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
var9 = NULL;
if (var_n_dotdotdot == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_dotdotdot,var9) on <var_n_dotdotdot:nullable TDotdotdot> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_dotdotdot->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_dotdotdot, var_other) /* == on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
var_n_dotdotdot->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL16:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
var17 = NULL;
if (var_n_annotations == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var17) on <var_n_annotations:nullable AAnnotations> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL24:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#init_aparam for (self: Object, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AParam__init_aparam(self, p0, p1, p2, p3); /* Direct call parser_prod#AParam#init_aparam on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: AParam, ANode, nullable ANode) */
void parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TId */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable TDotdotdot */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AAnnotations */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1972);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TId> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TId */
cltype = type_parser_nodes__TId.color;
idtype = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1973);
show_backtrace(1);
}
{
parser_prod__AParam__n_id_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_id= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AType(AType)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype16 = type_nullable_parser_nodes__AType.color;
idtype17 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1977);
show_backtrace(1);
}
{
parser_prod__AParam__n_type_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_type= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable TDotdotdot(TDotdotdot)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable TDotdotdot */
cltype27 = type_nullable_parser_nodes__TDotdotdot.color;
idtype28 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TDotdotdot", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1981);
show_backtrace(1);
}
{
parser_prod__AParam__n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_dotdotdot= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AAnnotations(AAnnotations)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype38 = type_nullable_parser_nodes__AAnnotations.color;
idtype39 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1985);
show_backtrace(1);
}
{
parser_prod__AParam__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AParam#n_annotations= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AParam__replace_child(val* self, val* p0, val* p1) {
parser_prod__AParam__replace_child(self, p0, p1); /* Direct call parser_prod#AParam#replace_child on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: AParam, TId) */
void parser_prod__AParam__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AParam__n_id_61d(val* self, val* p0) {
parser_prod__AParam__n_id_61d(self, p0); /* Direct call parser_prod#AParam#n_id= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: AParam, nullable AType) */
void parser_prod__AParam__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AParam__n_type_61d(val* self, val* p0) {
parser_prod__AParam__n_type_61d(self, p0); /* Direct call parser_prod#AParam#n_type= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TDotdotdot> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TDotdotdot(TDotdotdot)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TDotdotdot(TDotdotdot)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_dotdotdot= for (self: Object, nullable TDotdotdot) */
void VIRTUAL_parser_prod__AParam__n_dotdotdot_61d(val* self, val* p0) {
parser_prod__AParam__n_dotdotdot_61d(self, p0); /* Direct call parser_prod#AParam#n_dotdotdot= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: AParam, nullable AAnnotations) */
void parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AParam#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AParam__n_annotations_61d(val* self, val* p0) {
parser_prod__AParam__n_annotations_61d(self, p0); /* Direct call parser_prod#AParam#n_annotations= on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: AParam, Visitor) */
void parser_prod__AParam__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable TDotdotdot */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2014);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AParam#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AParam__visit_all(val* self, val* p0) {
parser_prod__AParam__visit_all(self, p0); /* Direct call parser_prod#AParam#visit_all on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: AType, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_types /* var n_types: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var9 /* : ANodes[AType] */;
val* var11 /* : ANodes[AType] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_n_kwnullable = p0;
var_n_id = p1;
var_n_types = p2;
var_n_annotations = p3;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_n_kwnullable == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnullable,var) on <var_n_kwnullable:nullable TKwnullable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwnullable->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnullable, var_other) /* == on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
var_n_kwnullable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2030);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_n_id; /* _n_id on <self:AType> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2031);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var11 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var9, var_n_types); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var9:ANodes[AType]>*/
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
var12 = NULL;
if (var_n_annotations == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var12) on <var_n_annotations:nullable AAnnotations> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL19:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#init_atype for (self: Object, nullable TKwnullable, nullable TClassid, Collection[Object], nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__init_atype(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AType__init_atype(self, p0, p1, p2, p3); /* Direct call parser_prod#AType#init_atype on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: AType, ANode, nullable ANode) */
void parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwnullable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TClassid */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : ANodes[AType] */;
val* var21 /* : ANodes[AType] */;
short int var22 /* : Bool */;
val* var23 /* : nullable AAnnotations */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwnullable(TKwnullable)> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwnullable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2040);
show_backtrace(1);
}
{
parser_prod__AType__n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod#AType#n_kwnullable= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2043);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TClassid> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TClassid */
cltype16 = type_parser_nodes__TClassid.color;
idtype17 = type_parser_nodes__TClassid.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2044);
show_backtrace(1);
}
{
parser_prod__AType__n_id_61d(self, var_new_child); /* Direct call parser_prod#AType#n_id= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var21 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = parser_nodes__ANodes__replace_child(var19, var_old_child, var_new_child);
}
if (var22){
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var23,var_old_child) on <var23:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable AAnnotations(AAnnotations)> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype31 = type_nullable_parser_nodes__AAnnotations.color;
idtype32 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_new_child->type->table_size) {
var30 = 0;
} else {
var30 = var_new_child->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
var_class_name33 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2049);
show_backtrace(1);
}
{
parser_prod__AType__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AType#n_annotations= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AType__replace_child(val* self, val* p0, val* p1) {
parser_prod__AType__replace_child(self, p0, p1); /* Direct call parser_prod#AType#replace_child on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: AType, nullable TKwnullable) */
void parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwnullable> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwnullable(TKwnullable)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnullable(TKwnullable)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnullable(TKwnullable)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_kwnullable= for (self: Object, nullable TKwnullable) */
void VIRTUAL_parser_prod__AType__n_kwnullable_61d(val* self, val* p0) {
parser_prod__AType__n_kwnullable_61d(self, p0); /* Direct call parser_prod#AType#n_kwnullable= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: AType, TClassid) */
void parser_prod__AType__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AType___n_id].val = var_node; /* _n_id on <self:AType> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AType#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__AType__n_id_61d(val* self, val* p0) {
parser_prod__AType__n_id_61d(self, p0); /* Direct call parser_prod#AType#n_id= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: AType, nullable AAnnotations) */
void parser_prod__AType__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AType#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AType__n_annotations_61d(val* self, val* p0) {
parser_prod__AType__n_annotations_61d(self, p0); /* Direct call parser_prod#AType#n_annotations= on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: AType, Visitor) */
void parser_prod__AType__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : TClassid */;
val* var2 /* : ANodes[AType] */;
val* var4 /* : ANodes[AType] */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2074);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AType#n_types (self) on <self:AType> */
var4 = self->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var2, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var2:ANodes[AType]>*/
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AType#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AType__visit_all(val* self, val* p0) {
parser_prod__AType__visit_all(self, p0); /* Direct call parser_prod#AType#visit_all on <self:Object(AType)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwlabel = p0;
var_n_id = p1;
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2085);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2086);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwlabel,self) on <var_n_kwlabel:nullable TKwlabel> */
if (unlikely(var_n_kwlabel == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwlabel->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwlabel:nullable TKwlabel> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
var = NULL;
if (var_n_id == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var) on <var_n_id:nullable TId> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_id->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TId(TId)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#init_alabel for (self: Object, nullable TKwlabel, nullable TId) */
void VIRTUAL_parser_prod__ALabel__init_alabel(val* self, val* p0, val* p1) {
parser_prod__ALabel__init_alabel(self, p0, p1); /* Direct call parser_prod#ALabel#init_alabel on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: ALabel, ANode, nullable ANode) */
void parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwlabel */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2093);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwlabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwlabel> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwlabel */
cltype = type_parser_nodes__TKwlabel.color;
idtype = type_parser_nodes__TKwlabel.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwlabel", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2094);
show_backtrace(1);
}
{
parser_prod__ALabel__n_kwlabel_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_kwlabel= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TId(TId)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable TId */
cltype16 = type_nullable_parser_nodes__TId.color;
idtype17 = type_nullable_parser_nodes__TId.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TId", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2098);
show_backtrace(1);
}
{
parser_prod__ALabel__n_id_61d(self, var_new_child); /* Direct call parser_prod#ALabel#n_id= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALabel__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALabel__replace_child(self, p0, p1); /* Direct call parser_prod#ALabel#replace_child on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: ALabel, TKwlabel) */
void parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwlabel> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwlabel> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_kwlabel= for (self: Object, TKwlabel) */
void VIRTUAL_parser_prod__ALabel__n_kwlabel_61d(val* self, val* p0) {
parser_prod__ALabel__n_kwlabel_61d(self, p0); /* Direct call parser_prod#ALabel#n_kwlabel= on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: ALabel, nullable TId) */
void parser_prod__ALabel__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TId> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TId(TId)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALabel#n_id= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__ALabel__n_id_61d(val* self, val* p0) {
parser_prod__ALabel__n_id_61d(self, p0); /* Direct call parser_prod#ALabel#n_id= on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: ALabel, Visitor) */
void parser_prod__ALabel__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : nullable TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2117);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALabel#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALabel__visit_all(val* self, val* p0) {
parser_prod__ALabel__visit_all(self, p0); /* Direct call parser_prod#ALabel#visit_all on <self:Object(ALabel)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_n_expr = p0;
var_n_kwend = p1;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_expr); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
var3 = NULL;
if (var_n_kwend == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwend,var3) on <var_n_kwend:nullable TKwend> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_n_kwend->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwend, var_other) /* == on <var_n_kwend:nullable TKwend(TKwend)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#init_ablockexpr for (self: Object, Collection[Object], nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__init_ablockexpr(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__init_ablockexpr(self, p0, p1); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
val* var4 /* : nullable TKwend */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__replace_child(var, var_old_child, var_new_child);
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var4,var_old_child) on <var4:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:nullable TKwend(TKwend)> */
var10 = var4 == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_new_child == NULL) {
var11 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var11 = 0;
} else {
var11 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2136);
show_backtrace(1);
}
{
parser_prod__ABlockExpr__n_kwend_61d(self, var_new_child); /* Direct call parser_prod#ABlockExpr#n_kwend= on <self:ABlockExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABlockExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABlockExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABlockExpr#replace_child on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: ABlockExpr, nullable TKwend) */
void parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwend> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwend(TKwend)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#n_kwend= for (self: Object, nullable TKwend) */
void VIRTUAL_parser_prod__ABlockExpr__n_kwend_61d(val* self, val* p0) {
parser_prod__ABlockExpr__n_kwend_61d(self, p0); /* Direct call parser_prod#ABlockExpr#n_kwend= on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: ABlockExpr, Visitor) */
void parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable TKwend */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABlockExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABlockExpr__visit_all(val* self, val* p0) {
parser_prod__ABlockExpr__visit_all(self, p0); /* Direct call parser_prod#ABlockExpr#visit_all on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: AVardeclExpr, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2164);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2165);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwvar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2166);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2167);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_n_type == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var) on <var_n_type:nullable AType> */
var_other = var;
{
var7 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
var10 = NULL;
if (var_n_assign == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_assign,var10) on <var_n_assign:nullable TAssign> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_assign->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_assign, var_other) /* == on <var_n_assign:nullable TAssign(TAssign)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_assign,self) on <var_n_assign:nullable TAssign(TAssign)> */
var_n_assign->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign(TAssign)> */
RET_LABEL17:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
var18 = NULL;
if (var_n_expr == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var18) on <var_n_expr:nullable AExpr> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_n_expr->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL25:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
var26 = NULL;
if (var_n_annotations == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var26) on <var_n_annotations:nullable AAnnotations> */
var_other = var26;
{
var31 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var30 = var31;
}
var32 = !var30;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL33:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#init_avardeclexpr for (self: Object, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AVardeclExpr__init_avardeclexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwvar */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable TAssign */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AExpr */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable AAnnotations */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2180);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwvar> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwvar */
cltype = type_parser_nodes__TKwvar.color;
idtype = type_parser_nodes__TKwvar.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2181);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_kwvar_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_kwvar= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2184);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TId> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa TId */
cltype16 = type_parser_nodes__TId.color;
idtype17 = type_parser_nodes__TId.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2185);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_id_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_id= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AType(AType)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable AType */
cltype27 = type_nullable_parser_nodes__AType.color;
idtype28 = type_nullable_parser_nodes__AType.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2189);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_type_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_type= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TAssign(TAssign)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype38 = type_nullable_parser_nodes__TAssign.color;
idtype39 = type_nullable_parser_nodes__TAssign.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2193);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_assign= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AExpr(AExpr)> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype49 = type_nullable_parser_nodes__AExpr.color;
idtype50 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var48 = 1;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2197);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_expr= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable AAnnotations(AAnnotations)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype60 = type_nullable_parser_nodes__AAnnotations.color;
idtype61 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var59 = 1;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2201);
show_backtrace(1);
}
{
parser_prod__AVardeclExpr__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AVardeclExpr#n_annotations= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AVardeclExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AVardeclExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AVardeclExpr#replace_child on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: AVardeclExpr, TKwvar) */
void parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_prod__AVardeclExpr__n_kwvar_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_kwvar_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_kwvar= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: AVardeclExpr, TId) */
void parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AVardeclExpr__n_id_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_id_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_id= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: AVardeclExpr, nullable AType) */
void parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AType> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AVardeclExpr__n_type_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_type_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_type= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: AVardeclExpr, nullable TAssign) */
void parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TAssign> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TAssign(TAssign)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TAssign(TAssign)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAssign(TAssign)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_assign= for (self: Object, nullable TAssign) */
void VIRTUAL_parser_prod__AVardeclExpr__n_assign_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_assign_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_assign= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: AVardeclExpr, nullable AExpr) */
void parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AVardeclExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_expr= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AAnnotations> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AAnnotations(AAnnotations)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AVardeclExpr__n_annotations_61d(val* self, val* p0) {
parser_prod__AVardeclExpr__n_annotations_61d(self, p0); /* Direct call parser_prod#AVardeclExpr#n_annotations= on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: AVardeclExpr, Visitor) */
void parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : nullable TAssign */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2240);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2241);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AVardeclExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AVardeclExpr__visit_all(val* self, val* p0) {
parser_prod__AVardeclExpr__visit_all(self, p0); /* Direct call parser_prod#AVardeclExpr#visit_all on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwreturn = p0;
var_n_expr = p1;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_n_kwreturn == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwreturn,var) on <var_n_kwreturn:nullable TKwreturn> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwreturn->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwreturn, var_other) /* == on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwreturn,self) on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
var_n_kwreturn->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
var8 = NULL;
if (var_n_expr == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var8) on <var_n_expr:nullable AExpr> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_expr->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
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
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#init_areturnexpr for (self: Object, nullable TKwreturn, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__init_areturnexpr(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__init_areturnexpr(self, p0, p1); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwreturn */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwreturn> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwreturn(TKwreturn)> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwreturn", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2263);
show_backtrace(1);
}
{
parser_prod__AReturnExpr__n_kwreturn_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_kwreturn= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2267);
show_backtrace(1);
}
{
parser_prod__AReturnExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AReturnExpr#n_expr= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AReturnExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AReturnExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AReturnExpr#replace_child on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwreturn> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwreturn(TKwreturn)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwreturn(TKwreturn)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwreturn(TKwreturn)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_kwreturn= for (self: Object, nullable TKwreturn) */
void VIRTUAL_parser_prod__AReturnExpr__n_kwreturn_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_kwreturn_61d(self, p0); /* Direct call parser_prod#AReturnExpr#n_kwreturn= on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: AReturnExpr, nullable AExpr) */
void parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AReturnExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AReturnExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AReturnExpr#n_expr= on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: AReturnExpr, Visitor) */
void parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AReturnExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AReturnExpr__visit_all(val* self, val* p0) {
parser_prod__AReturnExpr__visit_all(self, p0); /* Direct call parser_prod#AReturnExpr#visit_all on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel) */
void parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwbreak = p0;
var_n_label = p1;
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2296);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2297);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwbreak,self) on <var_n_kwbreak:nullable TKwbreak> */
if (unlikely(var_n_kwbreak == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwbreak->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwbreak:nullable TKwbreak> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
var = NULL;
if (var_n_label == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var) on <var_n_label:nullable ALabel> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#init_abreakexpr for (self: Object, nullable TKwbreak, nullable ALabel) */
void VIRTUAL_parser_prod__ABreakExpr__init_abreakexpr(val* self, val* p0, val* p1) {
parser_prod__ABreakExpr__init_abreakexpr(self, p0, p1); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwbreak */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ALabel */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2304);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwbreak> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwbreak> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwbreak */
cltype = type_parser_nodes__TKwbreak.color;
idtype = type_parser_nodes__TKwbreak.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwbreak", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2305);
show_backtrace(1);
}
{
parser_prod__ABreakExpr__n_kwbreak_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_kwbreak= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ALabel(ALabel)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype16 = type_nullable_parser_nodes__ALabel.color;
idtype17 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2309);
show_backtrace(1);
}
{
parser_prod__ABreakExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ABreakExpr#n_label= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABreakExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABreakExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ABreakExpr#replace_child on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwbreak> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwbreak> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_kwbreak= for (self: Object, TKwbreak) */
void VIRTUAL_parser_prod__ABreakExpr__n_kwbreak_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_kwbreak_61d(self, p0); /* Direct call parser_prod#ABreakExpr#n_kwbreak= on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: ABreakExpr, nullable ALabel) */
void parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ABreakExpr__n_label_61d(val* self, val* p0) {
parser_prod__ABreakExpr__n_label_61d(self, p0); /* Direct call parser_prod#ABreakExpr#n_label= on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: ABreakExpr, Visitor) */
void parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2328);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABreakExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABreakExpr__visit_all(val* self, val* p0) {
parser_prod__ABreakExpr__visit_all(self, p0); /* Direct call parser_prod#ABreakExpr#visit_all on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
var_n_kwabort = p0;
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2337);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2338);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwabort,self) on <var_n_kwabort:nullable TKwabort> */
if (unlikely(var_n_kwabort == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwabort->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabort:nullable TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#init_aabortexpr for (self: Object, nullable TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__init_aabortexpr(val* self, val* p0) {
parser_prod__AAbortExpr__init_aabortexpr(self, p0); /* Direct call parser_prod#AAbortExpr#init_aabortexpr on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabort */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2343);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwabort> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwabort> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwabort */
cltype = type_parser_nodes__TKwabort.color;
idtype = type_parser_nodes__TKwabort.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabort", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2344);
show_backtrace(1);
}
{
parser_prod__AAbortExpr__n_kwabort_61d(self, var_new_child); /* Direct call parser_prod#AAbortExpr#n_kwabort= on <self:AAbortExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAbortExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAbortExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AAbortExpr#replace_child on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: AAbortExpr, TKwabort) */
void parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwabort> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#n_kwabort= for (self: Object, TKwabort) */
void VIRTUAL_parser_prod__AAbortExpr__n_kwabort_61d(val* self, val* p0) {
parser_prod__AAbortExpr__n_kwabort_61d(self, p0); /* Direct call parser_prod#AAbortExpr#n_kwabort= on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: AAbortExpr, Visitor) */
void parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2358);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbortExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAbortExpr__visit_all(val* self, val* p0) {
parser_prod__AAbortExpr__visit_all(self, p0); /* Direct call parser_prod#AAbortExpr#visit_all on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel) */
void parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
var_n_kwcontinue = p0;
var_n_label = p1;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_n_kwcontinue == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwcontinue,var) on <var_n_kwcontinue:nullable TKwcontinue> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwcontinue->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwcontinue, var_other) /* == on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwcontinue,self) on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
var_n_kwcontinue->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
var8 = NULL;
if (var_n_label == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var8) on <var_n_label:nullable ALabel> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
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
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#init_acontinueexpr for (self: Object, nullable TKwcontinue, nullable ALabel) */
void VIRTUAL_parser_prod__AContinueExpr__init_acontinueexpr(val* self, val* p0, val* p1) {
parser_prod__AContinueExpr__init_acontinueexpr(self, p0, p1); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwcontinue */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable ALabel */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwcontinue> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwcontinue(TKwcontinue)> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_new_child == NULL) {
var7 = 1;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwcontinue", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2376);
show_backtrace(1);
}
{
parser_prod__AContinueExpr__n_kwcontinue_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_kwcontinue= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable ALabel(ALabel)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype16 = type_nullable_parser_nodes__ALabel.color;
idtype17 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2380);
show_backtrace(1);
}
{
parser_prod__AContinueExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#AContinueExpr#n_label= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AContinueExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AContinueExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AContinueExpr#replace_child on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwcontinue> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwcontinue(TKwcontinue)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwcontinue(TKwcontinue)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_kwcontinue= for (self: Object, nullable TKwcontinue) */
void VIRTUAL_parser_prod__AContinueExpr__n_kwcontinue_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_kwcontinue_61d(self, p0); /* Direct call parser_prod#AContinueExpr#n_kwcontinue= on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: AContinueExpr, nullable ALabel) */
void parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AContinueExpr__n_label_61d(val* self, val* p0) {
parser_prod__AContinueExpr__n_label_61d(self, p0); /* Direct call parser_prod#AContinueExpr#n_label= on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: AContinueExpr, Visitor) */
void parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AContinueExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AContinueExpr__visit_all(val* self, val* p0) {
parser_prod__AContinueExpr__visit_all(self, p0); /* Direct call parser_prod#AContinueExpr#visit_all on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_kwdo = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2410);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2411);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
var = NULL;
if (var_n_block == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
var9 = NULL;
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var9) on <var_n_label:nullable ALabel> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#init_adoexpr for (self: Object, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__init_adoexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ADoExpr__init_adoexpr(self, p0, p1, p2); /* Direct call parser_prod#ADoExpr#init_adoexpr on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: ADoExpr, ANode, nullable ANode) */
void parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwdo */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable ALabel */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2420);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwdo> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype = type_parser_nodes__TKwdo.color;
idtype = type_parser_nodes__TKwdo.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2421);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_kwdo= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2425);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_block= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable ALabel(ALabel)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype27 = type_nullable_parser_nodes__ALabel.color;
idtype28 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2429);
show_backtrace(1);
}
{
parser_prod__ADoExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ADoExpr#n_label= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADoExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADoExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ADoExpr#replace_child on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: ADoExpr, TKwdo) */
void parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__ADoExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_kwdo_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_kwdo= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: ADoExpr, nullable AExpr) */
void parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ADoExpr__n_block_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_block_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_block= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: ADoExpr, nullable ALabel) */
void parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ADoExpr__n_label_61d(val* self, val* p0) {
parser_prod__ADoExpr__n_label_61d(self, p0); /* Direct call parser_prod#ADoExpr#n_label= on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: ADoExpr, Visitor) */
void parser_prod__ADoExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2453);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ADoExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADoExpr__visit_all(val* self, val* p0) {
parser_prod__ADoExpr__visit_all(self, p0); /* Direct call parser_prod#ADoExpr#visit_all on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_else /* var n_else: nullable AExpr */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_then = p2;
var_n_else = p3;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2466);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2467);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2468);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2469);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
var = NULL;
if (var_n_then == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_then,var) on <var_n_then:nullable AExpr> */
var_other = var;
{
var7 = ((short int (*)(val*, val*))(var_n_then->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_then, var_other) /* == on <var_n_then:nullable AExpr(AExpr)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr(AExpr)> */
var_n_then->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
var10 = NULL;
if (var_n_else == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_else,var10) on <var_n_else:nullable AExpr> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_else->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_else, var_other) /* == on <var_n_else:nullable AExpr(AExpr)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#init_aifexpr for (self: Object, nullable TKwif, nullable AExpr, nullable AExpr, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AIfExpr__init_aifexpr(self, p0, p1, p2, p3); /* Direct call parser_prod#AIfExpr#init_aifexpr on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: AIfExpr, ANode, nullable ANode) */
void parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2478);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwif> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_parser_nodes__TKwif.color;
idtype = type_parser_nodes__TKwif.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2479);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_kwif= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2482);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2483);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_expr= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AExpr(AExpr)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2487);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_then= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AExpr(AExpr)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype38 = type_nullable_parser_nodes__AExpr.color;
idtype39 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2491);
show_backtrace(1);
}
{
parser_prod__AIfExpr__n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfExpr#n_else= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIfExpr#replace_child on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: AIfExpr, TKwif) */
void parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_kwif_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_kwif= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: AIfExpr, AExpr) */
void parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_expr= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_then= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_then_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_then= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: AIfExpr, nullable AExpr) */
void parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#n_else= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AIfExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfExpr__n_else_61d(self, p0); /* Direct call parser_prod#AIfExpr#n_else= on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: AIfExpr, Visitor) */
void parser_prod__AIfExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2520);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2521);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfExpr__visit_all(val* self, val* p0) {
parser_prod__AIfExpr__visit_all(self, p0); /* Direct call parser_prod#AIfExpr#visit_all on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void parser_prod__AIfexprExpr__init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
var_n_kwif = p0;
var_n_expr = p1;
var_n_kwthen = p2;
var_n_then = p3;
var_n_kwelse = p4;
var_n_else = p5;
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2536);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2537);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwif->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2538);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2539);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2540);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2541);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwthen->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2542);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2543);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_then,self) on <var_n_then:nullable AExpr> */
if (unlikely(var_n_then == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_then->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2544);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2545);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwelse->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2546);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2547);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_else,self) on <var_n_else:nullable AExpr> */
if (unlikely(var_n_else == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_else->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#init_aifexprexpr for (self: Object, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AIfexprExpr__init_aifexprexpr(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AIfexprExpr#init_aifexprexpr on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
void parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwif */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwthen */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : TKwelse */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : AExpr */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2552);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwif> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwif */
cltype = type_parser_nodes__TKwif.color;
idtype = type_parser_nodes__TKwif.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwif", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2553);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwif_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2556);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2557);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2560);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwthen> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwthen> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa TKwthen */
cltype27 = type_parser_nodes__TKwthen.color;
idtype28 = type_parser_nodes__TKwthen.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwthen", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2561);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwthen_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2564);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AExpr> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa AExpr */
cltype38 = type_parser_nodes__AExpr.color;
idtype39 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2565);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_then_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2568);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:TKwelse> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa TKwelse */
cltype49 = type_parser_nodes__TKwelse.color;
idtype50 = type_parser_nodes__TKwelse.id;
if(var_new_child == NULL) {
var48 = 0;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwelse", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2569);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_kwelse_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2572);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:AExpr> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa AExpr */
cltype60 = type_parser_nodes__AExpr.color;
idtype61 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2573);
show_backtrace(1);
}
{
parser_prod__AIfexprExpr__n_else_61d(self, var_new_child); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIfexprExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIfexprExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AIfexprExpr#replace_child on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: AIfexprExpr, TKwif) */
void parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwif= for (self: Object, TKwif) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwif_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwif_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwif= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_expr= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: AIfexprExpr, TKwthen) */
void parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwthen= for (self: Object, TKwthen) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwthen_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwthen_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwthen= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_then= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_then_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_then_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_then= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: AIfexprExpr, TKwelse) */
void parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_kwelse= for (self: Object, TKwelse) */
void VIRTUAL_parser_prod__AIfexprExpr__n_kwelse_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_kwelse_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_kwelse= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: AIfexprExpr, AExpr) */
void parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#n_else= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AIfexprExpr__n_else_61d(val* self, val* p0) {
parser_prod__AIfexprExpr__n_else_61d(self, p0); /* Direct call parser_prod#AIfexprExpr#n_else= on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: AIfexprExpr, Visitor) */
void parser_prod__AIfexprExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : TKwthen */;
val* var3 /* : AExpr */;
val* var4 /* : TKwelse */;
val* var5 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2612);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2613);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2614);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2615);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2616);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2617);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIfexprExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIfexprExpr__visit_all(val* self, val* p0) {
parser_prod__AIfexprExpr__visit_all(self, p0); /* Direct call parser_prod#AIfexprExpr#visit_all on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwwhile /* var n_kwwhile: nullable TKwwhile */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2629);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2630);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwhile,self) on <var_n_kwwhile:nullable TKwwhile> */
if (unlikely(var_n_kwwhile == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwwhile->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwhile:nullable TKwwhile> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2631);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2632);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr> */
if (unlikely(var_n_expr == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2633);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2634);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwdo->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_n_block; /* _n_block on <self:AWhileExpr> */
var = NULL;
if (var_n_block == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var8 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL10:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AWhileExpr> */
var11 = NULL;
if (var_n_label == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var11) on <var_n_label:nullable ALabel> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#init_awhileexpr for (self: Object, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__init_awhileexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AWhileExpr__init_awhileexpr(self, p0, p1, p2, p3, p4); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: AWhileExpr, ANode, nullable ANode) */
void parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwwhile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwdo */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AExpr */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable ALabel */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2643);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwwhile> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwwhile> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwwhile */
cltype = type_parser_nodes__TKwwhile.color;
idtype = type_parser_nodes__TKwwhile.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwhile", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2644);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_kwwhile_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2647);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:AExpr> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_parser_nodes__AExpr.color;
idtype17 = type_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2648);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2651);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwdo> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa TKwdo */
cltype27 = type_parser_nodes__TKwdo.color;
idtype28 = type_parser_nodes__TKwdo.id;
if(var_new_child == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwdo", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2652);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_kwdo_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AExpr(AExpr)> */
var36 = var30 == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype38 = type_nullable_parser_nodes__AExpr.color;
idtype39 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2656);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable ALabel(ALabel)> */
var47 = var41 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype49 = type_nullable_parser_nodes__ALabel.color;
idtype50 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var48 = 1;
} else {
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
}
if (unlikely(!var48)) {
var_class_name51 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2660);
show_backtrace(1);
}
{
parser_prod__AWhileExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#AWhileExpr#n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AWhileExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__AWhileExpr__replace_child(self, p0, p1); /* Direct call parser_prod#AWhileExpr#replace_child on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwhile> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwhile> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwwhile= for (self: Object, TKwwhile) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwwhile_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwwhile_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_kwwhile= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: AWhileExpr, AExpr) */
void parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_expr_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_expr_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_expr= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: AWhileExpr, TKwdo) */
void parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_kwdo= for (self: Object, TKwdo) */
void VIRTUAL_parser_prod__AWhileExpr__n_kwdo_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_kwdo_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_kwdo= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: AWhileExpr, nullable AExpr) */
void parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var_node; /* _n_block on <self:AWhileExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AWhileExpr__n_block_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_block_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_block= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: AWhileExpr, nullable ALabel) */
void parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AWhileExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__AWhileExpr__n_label_61d(val* self, val* p0) {
parser_prod__AWhileExpr__n_label_61d(self, p0); /* Direct call parser_prod#AWhileExpr#n_label= on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: AWhileExpr, Visitor) */
void parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwwhile */;
val* var1 /* : AExpr */;
val* var2 /* : TKwdo */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2694);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2695);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2696);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWhileExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AWhileExpr__visit_all(val* self, val* p0) {
parser_prod__AWhileExpr__visit_all(self, p0); /* Direct call parser_prod#AWhileExpr#visit_all on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
void parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwloop /* var n_kwloop: nullable TKwloop */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_label /* var n_label: nullable ALabel */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2708);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2709);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwloop,self) on <var_n_kwloop:nullable TKwloop> */
if (unlikely(var_n_kwloop == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwloop->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwloop:nullable TKwloop> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_n_block; /* _n_block on <self:ALoopExpr> */
var = NULL;
if (var_n_block == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var) on <var_n_block:nullable AExpr> */
var_other = var;
{
var6 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ALoopExpr> */
var9 = NULL;
if (var_n_label == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_label,var9) on <var_n_label:nullable ALabel> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_label->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_label, var_other) /* == on <var_n_label:nullable ALabel(ALabel)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#init_aloopexpr for (self: Object, nullable TKwloop, nullable AExpr, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__init_aloopexpr(val* self, val* p0, val* p1, val* p2) {
parser_prod__ALoopExpr__init_aloopexpr(self, p0, p1, p2); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: ALoopExpr, ANode, nullable ANode) */
void parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwloop */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable ALabel */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2718);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwloop> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwloop> */
var6 = var == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
/* <var_new_child:nullable ANode> isa TKwloop */
cltype = type_parser_nodes__TKwloop.color;
idtype = type_parser_nodes__TKwloop.id;
if(var_new_child == NULL) {
var7 = 0;
} else {
if(cltype >= var_new_child->type->table_size) {
var7 = 0;
} else {
var7 = var_new_child->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
var_class_name = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwloop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2719);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_kwloop_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
var14 = var8 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
var_class_name18 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2723);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_block_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable ALabel(ALabel)> */
var25 = var19 == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype27 = type_nullable_parser_nodes__ALabel.color;
idtype28 = type_nullable_parser_nodes__ALabel.id;
if(var_new_child == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
var_class_name29 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2727);
show_backtrace(1);
}
{
parser_prod__ALoopExpr__n_label_61d(self, var_new_child); /* Direct call parser_prod#ALoopExpr#n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALoopExpr__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALoopExpr__replace_child(self, p0, p1); /* Direct call parser_prod#ALoopExpr#replace_child on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: ALoopExpr, TKwloop) */
void parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwloop> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwloop> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_kwloop= for (self: Object, TKwloop) */
void VIRTUAL_parser_prod__ALoopExpr__n_kwloop_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_kwloop_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_kwloop= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: ALoopExpr, nullable AExpr) */
void parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var_node; /* _n_block on <self:ALoopExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__ALoopExpr__n_block_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_block_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_block= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: ALoopExpr, nullable ALabel) */
void parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ALoopExpr> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable ALabel> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ALabel(ALabel)>*/;
var4 = var5;
}
var6 = !var4;
var2 = var6;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#n_label= for (self: Object, nullable ALabel) */
void VIRTUAL_parser_prod__ALoopExpr__n_label_61d(val* self, val* p0) {
parser_prod__ALoopExpr__n_label_61d(self, p0); /* Direct call parser_prod#ALoopExpr#n_label= on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: ALoopExpr, Visitor) */
void parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 2751);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALoopExpr#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALoopExpr__visit_all(val* self, val* p0) {
parser_prod__ALoopExpr__visit_all(self, p0); /* Direct call parser_prod#ALoopExpr#visit_all on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
