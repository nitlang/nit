#include "nit__lexer_work.sep.0.h"
/* method lexer_work#Token#text for (self: Token): String */
val* nit__lexer_work___Token___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var9 /* : Location */;
val* var10 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:Token> */
var9 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:Token> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__Location___text(var7);
}
var_res = var10;
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = var_res; /* _cached_text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#EOF#init_tk for (self: EOF, Location) */
void nit__lexer_work___EOF___init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
{
{ /* Inline kernel#Object#init (self) on <self:EOF> */
RET_LABEL1:(void)0;
}
}
var_loc = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var = var3;
varonce = var;
}
self->attrs[COLOR_nit__lexer_work__Token___cached_text].val = var; /* _cached_text on <self:EOF> */
self->attrs[COLOR_nit__parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer_work#AError#message for (self: AError): String */
val* nit__lexer_work___AError___message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__AError___message].val; /* _message on <self:AError> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#AError#message= for (self: AError, String) */
void nit__lexer_work___AError___message_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__AError___message].val = p0; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer_work#AError#init_error for (self: AError, String, Location) */
void nit__lexer_work___AError___init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
{
nit__lexer_work___EOF___init_tk(self, var_loc); /* Direct call lexer_work#EOF#init_tk on <self:AError>*/
}
{
{ /* Inline lexer_work#AError#message= (self,var_message) on <self:AError> */
self->attrs[COLOR_nit__lexer_work__AError___message].val = var_message; /* _message on <self:AError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#ALexerError#string= for (self: ALexerError, String) */
void nit__lexer_work___ALexerError___string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__ALexerError___string].val = p0; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer_work#ALexerError#init_lexer_error for (self: ALexerError, String, Location, String) */
void nit__lexer_work___ALexerError___init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
{
nit__lexer_work___AError___init_error(self, var_message, var_loc); /* Direct call lexer_work#AError#init_error on <self:ALexerError>*/
}
{
{ /* Inline lexer_work#ALexerError#string= (self,var_string) on <self:ALexerError> */
self->attrs[COLOR_nit__lexer_work__ALexerError___string].val = var_string; /* _string on <self:ALexerError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#AParserError#token= for (self: AParserError, Token) */
void nit__lexer_work___AParserError___token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__AParserError___token].val = p0; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer_work#AParserError#init_parser_error for (self: AParserError, String, Location, Token) */
void nit__lexer_work___AParserError___init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
{
nit__lexer_work___AError___init_error(self, var_message, var_loc); /* Direct call lexer_work#AError#init_error on <self:AParserError>*/
}
{
{ /* Inline lexer_work#AParserError#token= (self,var_token) on <self:AParserError> */
self->attrs[COLOR_nit__lexer_work__AParserError___token].val = var_token; /* _token on <self:AParserError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#Lexer#file for (self: Lexer): SourceFile */
val* nit___nit__Lexer___file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#file= for (self: Lexer, SourceFile) */
void nit___nit__Lexer___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___file].val = p0; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#last_token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#last_token= for (self: Lexer, nullable Token) */
void nit___nit__Lexer___last_token_61d(val* self, val* p0) {
self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val = p0; /* _last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#peek for (self: Lexer): Token */
val* nit___nit__Lexer___peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Token */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other11 /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Token */;
short int var16 /* : Bool */;
val* var17 /* : nullable Token */;
val* var19 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var27 /* : SourceFile */;
val* var29 /* : SourceFile */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,((val*)NULL)) on <var_t:nullable Token> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var_other); /* == on <var_t:nullable Token(Token)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = var_t;
goto RET_LABEL;
} else {
}
{
var7 = nit___nit__Lexer___get_token(self);
}
var_t = var7;
for(;;) {
if (var_t == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable Token> */
var_other11 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other11) on <var_t:nullable Token(Token)> */
var14 = var_t == var_other11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var15 = nit___nit__Lexer___get_token(self);
}
var_t = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var16 = var_t->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_t:nullable Token(Token)> */
if (var16){
{
{ /* Inline lexer_work#Lexer#last_token (self) on <self:Lexer> */
var19 = self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_l = var17;
if (var_l == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,((val*)NULL)) on <var_l:nullable Token> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Token(Token)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes#Token#next_token= (var_l,var_t) on <var_l:nullable Token(Token)> */
var_l->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var_t; /* _next_token on <var_l:nullable Token(Token)> */
RET_LABEL25:(void)0;
}
}
{
{ /* Inline parser_nodes#Token#prev_token= (var_t,var_l) on <var_t:nullable Token(Token)> */
var_t->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var_l; /* _prev_token on <var_t:nullable Token(Token)> */
RET_LABEL26:(void)0;
}
}
} else {
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var29 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline parser_nodes#SourceFile#first_token= (var27,var_t) on <var27:SourceFile> */
var27->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val = var_t; /* _first_token on <var27:SourceFile> */
RET_LABEL30:(void)0;
}
}
}
{
{ /* Inline lexer_work#Lexer#last_token= (self,var_t) on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val = var_t; /* _last_token on <self:Lexer> */
RET_LABEL31:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#next for (self: Lexer): Token */
val* nit___nit__Lexer___next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
{
var1 = nit___nit__Lexer___peek(self);
}
var_result = var1;
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = ((val*)NULL); /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#get_token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___get_token(val* self) {
val* var /* : nullable Token */;
long var_dfa_state /* var dfa_state: Int */;
long var1 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var2 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var3 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var4 /* : SourceFile */;
val* var6 /* : SourceFile */;
val* var_file /* var file: SourceFile */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var_string /* var string: String */;
long var10 /* : Int */;
long var_string_len /* var string_len: Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var32 /* : Int */;
uint32_t var33 /* : Char */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_c /* var c: Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var45 /* : Int */;
long var_line /* var line: Int */;
long var46 /* : Int */;
long var_pos /* var pos: Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Array[Int] */;
val* var52 /* : Array[Int] */;
val* var53 /* : nullable Object */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Array[Int] */;
val* var63 /* : Array[Int] */;
val* var64 /* : nullable Object */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var75 /* : Array[Int] */;
val* var77 /* : Array[Int] */;
val* var78 /* : nullable Object */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var_old_state /* var old_state: Int */;
long var86 /* : Int */;
long var88 /* : Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
short int var95 /* : Bool */;
long var96 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var106 /* : Int */;
long var108 /* : Int */;
long var_low /* var low: Int */;
long var109 /* : Int */;
long var111 /* : Int for extern */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
long var_high /* var high: Int */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
short int var132 /* : Bool */;
long var133 /* : Int */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
const char* var_class_name138;
long var139 /* : Int */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var_middle /* var middle: Int */;
long var147 /* : Int */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
long var153 /* : Int */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
long var_offset /* var offset: Int */;
long var161 /* : Int */;
long var163 /* : Int for extern */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
const char* var_class_name169;
short int var170 /* : Bool */;
long var171 /* : Int */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
long var177 /* : Int */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var185 /* : Int */;
long var187 /* : Int for extern */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
short int var194 /* : Bool */;
long var195 /* : Int */;
short int var197 /* : Bool */;
int cltype198;
int idtype199;
const char* var_class_name200;
long var201 /* : Int */;
long var202 /* : Int */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
const char* var_class_name207;
long var208 /* : Int */;
long var209 /* : Int */;
long var211 /* : Int for extern */;
long var212 /* : Int */;
long var214 /* : Int */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
const char* var_class_name220;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
const char* var_class_name228;
short int var229 /* : Bool */;
long var230 /* : Int */;
long var232 /* : Int for extern */;
long var_tok /* var tok: Int */;
long var233 /* : Int */;
long var235 /* : Int */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
long var240 /* : Int */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
const char* var_class_name245;
long var246 /* : Int */;
long var247 /* : Int */;
long var248 /* : Int */;
long var249 /* : Int */;
long var251 /* : Int */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
long var256 /* : Int */;
short int var258 /* : Bool */;
int cltype259;
int idtype260;
const char* var_class_name261;
long var262 /* : Int */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
val* var266 /* : Location */;
long var267 /* : Int */;
short int var269 /* : Bool */;
int cltype270;
int idtype271;
const char* var_class_name272;
long var273 /* : Int */;
long var274 /* : Int */;
short int var276 /* : Bool */;
int cltype277;
int idtype278;
const char* var_class_name279;
long var280 /* : Int */;
long var281 /* : Int */;
short int var283 /* : Bool */;
int cltype284;
int idtype285;
const char* var_class_name286;
long var287 /* : Int */;
val* var_location /* var location: Location */;
val* var288 /* : Token */;
val* var289 /* : Location */;
long var290 /* : Int */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
const char* var_class_name295;
long var296 /* : Int */;
long var297 /* : Int */;
short int var299 /* : Bool */;
int cltype300;
int idtype301;
const char* var_class_name302;
long var303 /* : Int */;
long var304 /* : Int */;
short int var306 /* : Bool */;
int cltype307;
int idtype308;
const char* var_class_name309;
long var310 /* : Int */;
long var311 /* : Int */;
short int var313 /* : Bool */;
int cltype314;
int idtype315;
const char* var_class_name316;
long var317 /* : Int */;
val* var_location318 /* var location: Location */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
int cltype322;
int idtype323;
const char* var_class_name324;
short int var325 /* : Bool */;
long var326 /* : Int */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
const char* var_class_name331;
long var332 /* : Int */;
val* var333 /* : Text */;
val* var_text /* var text: String */;
val* var334 /* : ALexerError */;
val* var335 /* : NativeArray[String] */;
static val* varonce;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : FlatString */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : FlatString */;
val* var344 /* : String */;
val* var_token /* var token: ALexerError */;
val* var346 /* : EOF */;
val* var_token347 /* var token: EOF */;
var_dfa_state = 0l;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var1;
var_start_stream_pos = var_sp;
var2 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var2;
var3 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var3;
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var6 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_file = var4;
{
{ /* Inline location#SourceFile#string (var_file) on <var_file:SourceFile> */
var9 = var_file->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var_file:SourceFile> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_string = var7;
{
var10 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
var_string_len = var10;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var13 = -1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_accept_state = var11;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var16 = -1l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_accept_token = var14;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_accept_length = var17;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var22 = -1l;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_accept_pos = var20;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var25 = -1l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_accept_line = var23;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_sp,var_string_len) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var28 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var29 = var_sp >= var_string_len;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var32 = -1l;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_dfa_state = var30;
} else {
{
var33 = ((uint32_t(*)(val* self, long p0))(var_string->class->vft[COLOR_standard__string__Text___91d_93d]))(var_string, var_sp); /* [] on <var_string:String>*/
}
{
{ /* Inline kernel#Char#ascii (var33) on <var33:Char> */
var36 = (long)var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_c = var34;
{
{ /* Inline kernel#Int#+ (var_sp,1l) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var43 = var_sp + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_sp = var37;
var44 = self->attrs[COLOR_nit__lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var44;
var45 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var45;
var46 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var46;
{
{ /* Inline kernel#Int#== (var_c,10l) on <var_c:Int> */
var49 = var_c == 10l;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
if (var_cr){
var_cr = 0;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var52 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = (val*)(var_sp<<2|1);
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var50, var_line, var53); /* Direct call array#Array#[]= on <var50:Array[Int]>*/
}
} else {
{
{ /* Inline kernel#Int#+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var60 = var_line + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_line = var54;
var_pos = 0l;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var63 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = (val*)(var_sp<<2|1);
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var61, var_line, var64); /* Direct call array#Array#[]= on <var61:Array[Int]>*/
}
}
} else {
{
{ /* Inline kernel#Int#== (var_c,13l) on <var_c:Int> */
var67 = var_c == 13l;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline kernel#Int#+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var74 = var_line + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_line = var68;
var_pos = 0l;
var_cr = 1;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var77 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = (val*)(var_sp<<2|1);
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var75, var_line, var78); /* Direct call array#Array#[]= on <var75:Array[Int]>*/
}
} else {
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var85 = var_pos + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_pos = var79;
var_cr = 0;
}
}
for(;;) {
var_old_state = var_dfa_state;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var88 = -1l;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_dfa_state,var86) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var86:Int> isa OTHER */
/* <var86:Int> isa OTHER */
var91 = 1; /* easy <var86:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var95 = var_dfa_state < var86;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
{
{ /* Inline kernel#Int#unary - (2l) on <2l:Int> */
var98 = -2l;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var96,var_dfa_state) on <var96:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var101 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var105 = var96 - var_dfa_state;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_old_state = var99;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var108 = -1l;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var_dfa_state = var106;
var_low = 0l;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,0l) on <self:Lexer> */
var111 = lexer_goto(self, var_old_state, 0l);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var109,1l) on <var109:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var114 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var118 = var109 - 1l;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var_high = var112;
{
{ /* Inline kernel#Int#>= (var_high,0l) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var121 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var125 = var_high >= 0l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
if (var119){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var128 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var132 = var_low <= var_high;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var135 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var135)) {
var_class_name138 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var139 = var_low + var_high;
var133 = var139;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#/ (var133,2l) on <var133:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var142 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 542);
fatal_exit(1);
}
var146 = var133 / 2l;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_middle = var140;
{
{ /* Inline kernel#Int#* (var_middle,3l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var149 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 541);
fatal_exit(1);
}
var153 = var_middle * 3l;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var147,1l) on <var147:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var156 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var160 = var147 + 1l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var_offset = var154;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var_offset) on <self:Lexer> */
var163 = lexer_goto(self, var_old_state, var_offset);
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_c,var161) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var161:Int> isa OTHER */
/* <var161:Int> isa OTHER */
var166 = 1; /* easy <var161:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var170 = var_c < var161;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
if (var164){
{
{ /* Inline kernel#Int#- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var173 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var177 = var_middle - 1l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_high = var171;
} else {
{
{ /* Inline kernel#Int#+ (var_offset,1l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var180 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var184 = var_offset + 1l;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var178) on <self:Lexer> */
var187 = lexer_goto(self, var_old_state, var178);
var185 = var187;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_c,var185) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var185:Int> isa OTHER */
/* <var185:Int> isa OTHER */
var190 = 1; /* easy <var185:Int> isa OTHER*/
if (unlikely(!var190)) {
var_class_name193 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var194 = var_c > var185;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
}
if (var188){
{
{ /* Inline kernel#Int#+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var197 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var197)) {
var_class_name200 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name200);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var201 = var_middle + 1l;
var195 = var201;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
}
var_low = var195;
} else {
{
{ /* Inline kernel#Int#+ (var_offset,2l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var204 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name207 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name207);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var208 = var_offset + 2l;
var202 = var208;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var202) on <self:Lexer> */
var211 = lexer_goto(self, var_old_state, var202);
var209 = var211;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
var_dfa_state = var209;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline kernel#Int#unary - (2l) on <2l:Int> */
var214 = -2l;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_dfa_state,var212) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var212:Int> isa OTHER */
/* <var212:Int> isa OTHER */
var217 = 1; /* easy <var212:Int> isa OTHER*/
if (unlikely(!var217)) {
var_class_name220 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name220);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var221 = var_dfa_state > var212;
var215 = var221;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
if (var215){
goto BREAK_label222;
} else {
}
}
BREAK_label222: (void)0;
self->attrs[COLOR_nit__lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
{
{ /* Inline kernel#Int#>= (var_dfa_state,0l) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var225 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var225)) {
var_class_name228 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name228);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var229 = var_dfa_state >= 0l;
var223 = var229;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
if (var223){
{
{ /* Inline tables#TablesCapable#lexer_accept (self,var_dfa_state) on <self:Lexer> */
var232 = lexer_accept(self, var_dfa_state);
var230 = var232;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
}
var_tok = var230;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var235 = -1l;
var233 = var235;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_tok,var233) on <var_tok:Int> */
var238 = var_tok == var233;
var239 = !var238;
var236 = var239;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
if (var236){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var242 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var242)) {
var_class_name245 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name245);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var246 = var_sp - var_start_stream_pos;
var240 = var246;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
var_accept_length = var240;
var247 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var247;
var248 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var248;
} else {
}
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var251 = -1l;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_accept_state,var249) on <var_accept_state:Int> */
var254 = var_accept_state == var249;
var255 = !var254;
var252 = var255;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
}
if (var252){
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var258 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var258)) {
var_class_name261 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name261);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var262 = var_start_stream_pos + var_accept_length;
var256 = var262;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var256; /* _stream_pos on <self:Lexer> */
{
{ /* Inline kernel#Int#== (var_accept_token,0l) on <var_accept_token:Int> */
var265 = var_accept_token == 0l;
var263 = var265;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
}
if (var263){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var266 = NEW_nit__Location(&type_nit__Location);
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var269 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var269)) {
var_class_name272 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name272);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var273 = var_start_line + 1l;
var267 = var273;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_accept_line,1l) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var276 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var276)) {
var_class_name279 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name279);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var280 = var_accept_line + 1l;
var274 = var280;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var283 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var283)) {
var_class_name286 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name286);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var287 = var_start_pos + 1l;
var281 = var287;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var266->class->vft[COLOR_nit__location__Location__file_61d]))(var266, var_file); /* file= on <var266:Location>*/
}
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nit__location__Location__line_start_61d]))(var266, var267); /* line_start= on <var266:Location>*/
}
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nit__location__Location__line_end_61d]))(var266, var274); /* line_end= on <var266:Location>*/
}
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nit__location__Location__column_start_61d]))(var266, var281); /* column_start= on <var266:Location>*/
}
{
((void(*)(val* self, long p0))(var266->class->vft[COLOR_nit__location__Location__column_end_61d]))(var266, var_accept_pos); /* column_end= on <var266:Location>*/
}
{
((void(*)(val* self))(var266->class->vft[COLOR_standard__kernel__Object__init]))(var266); /* init on <var266:Location>*/
}
var_location = var266;
{
var288 = nit__lexer___Lexer___make_token(self, var_accept_token, var_location);
}
var = var288;
goto RET_LABEL;
} else {
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var289 = NEW_nit__Location(&type_nit__Location);
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var292 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var292)) {
var_class_name295 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name295);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var296 = var_start_line + 1l;
var290 = var296;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var299 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var299)) {
var_class_name302 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name302);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var303 = var_start_line + 1l;
var297 = var303;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var306 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var306)) {
var_class_name309 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name309);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var310 = var_start_pos + 1l;
var304 = var310;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var313 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var313)) {
var_class_name316 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name316);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var317 = var_start_pos + 1l;
var311 = var317;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var289->class->vft[COLOR_nit__location__Location__file_61d]))(var289, var_file); /* file= on <var289:Location>*/
}
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nit__location__Location__line_start_61d]))(var289, var290); /* line_start= on <var289:Location>*/
}
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nit__location__Location__line_end_61d]))(var289, var297); /* line_end= on <var289:Location>*/
}
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nit__location__Location__column_start_61d]))(var289, var304); /* column_start= on <var289:Location>*/
}
{
((void(*)(val* self, long p0))(var289->class->vft[COLOR_nit__location__Location__column_end_61d]))(var289, var311); /* column_end= on <var289:Location>*/
}
{
((void(*)(val* self))(var289->class->vft[COLOR_standard__kernel__Object__init]))(var289); /* init on <var289:Location>*/
}
var_location318 = var289;
{
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var321 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var321)) {
var_class_name324 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name324);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var325 = var_sp > var_start_stream_pos;
var319 = var325;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
}
if (var319){
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var328 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var328)) {
var_class_name331 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name331);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var332 = var_sp - var_start_stream_pos;
var326 = var332;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
}
{
var333 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_start_stream_pos, var326); /* substring on <var_string:String>*/
}
var_text = var333;
var334 = NEW_nit__ALexerError(&type_nit__ALexerError);
if (unlikely(varonce==NULL)) {
var335 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "Syntax Error: unknown token `";
var339 = standard___standard__NativeString___to_s_with_length(var338, 29l);
var337 = var339;
varonce336 = var337;
}
((struct instance_standard__NativeArray*)var335)->values[0]=var337;
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "`.";
var343 = standard___standard__NativeString___to_s_with_length(var342, 2l);
var341 = var343;
varonce340 = var341;
}
((struct instance_standard__NativeArray*)var335)->values[2]=var341;
} else {
var335 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var335)->values[1]=var_text;
{
var344 = ((val*(*)(val* self))(var335->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var335); /* native_to_s on <var335:NativeArray[String]>*/
}
varonce = var335;
{
nit__lexer_work___ALexerError___init_lexer_error(var334, var344, var_location318, var_text); /* Direct call lexer_work#ALexerError#init_lexer_error on <var334:ALexerError>*/
}
var_token = var334;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token) on <var_file:SourceFile> */
var_file->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = var_token; /* _last_token on <var_file:SourceFile> */
RET_LABEL345:(void)0;
}
}
var = var_token;
goto RET_LABEL;
} else {
var346 = NEW_nit__EOF(&type_nit__EOF);
{
nit__lexer_work___EOF___init_tk(var346, var_location318); /* Direct call lexer_work#EOF#init_tk on <var346:EOF>*/
}
var_token347 = var346;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token347) on <var_file:SourceFile> */
var_file->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = var_token347; /* _last_token on <var_file:SourceFile> */
RET_LABEL348:(void)0;
}
}
var = var_token347;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#init for (self: Lexer) */
void nit___nit__Lexer___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Lexer___standard__kernel__Object__init]))(self); /* init on <self:Lexer>*/
}
RET_LABEL:;
}
