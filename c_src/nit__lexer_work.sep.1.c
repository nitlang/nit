#include "nit__lexer_work.sep.0.h"
/* method lexer_work#Token#text for (self: Token): String */
val* nit__lexer_work___Token___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Location */;
val* var10 /* : Location */;
val* var11 /* : String */;
var1 = self->attrs[COLOR_nit__lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var2) on <var_res:nullable String> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:Token> */
var10 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:Token> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__Location___text(var8);
}
var_res = var11;
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
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_loc = p0;
if (varonce) {
var = varonce;
} else {
var1 = "";
var2 = 0;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Token */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Token */;
short int var18 /* : Bool */;
val* var19 /* : nullable Token */;
val* var21 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var30 /* : SourceFile */;
val* var32 /* : SourceFile */;
var1 = self->attrs[COLOR_nit__lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
var2 = NULL;
if (var_t == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,var2) on <var_t:nullable Token> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var_t->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable Token(Token)>*/;
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var = var_t;
goto RET_LABEL;
} else {
}
{
var8 = nit___nit__Lexer___get_token(self);
}
var_t = var8;
for(;;) {
var9 = NULL;
if (var_t == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var9) on <var_t:nullable Token> */
var_other13 = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other13) on <var_t:nullable Token(Token)> */
var16 = var_t == var_other13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
var17 = nit___nit__Lexer___get_token(self);
}
var_t = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var18 = var_t->attrs[COLOR_nit__parser_nodes__ANode___location].val != NULL; /* _location on <var_t:nullable Token(Token)> */
if (var18){
{
{ /* Inline lexer_work#Lexer#last_token (self) on <self:Lexer> */
var21 = self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_l = var19;
var22 = NULL;
if (var_l == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,var22) on <var_l:nullable Token> */
var_other = var22;
{
var26 = ((short int (*)(val* self, val* p0))(var_l->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_l, var_other) /* == on <var_l:nullable Token(Token)>*/;
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline parser_nodes#Token#next_token= (var_l,var_t) on <var_l:nullable Token(Token)> */
var_l->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var_t; /* _next_token on <var_l:nullable Token(Token)> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline parser_nodes#Token#prev_token= (var_t,var_l) on <var_t:nullable Token(Token)> */
var_t->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var_l; /* _prev_token on <var_t:nullable Token(Token)> */
RET_LABEL29:(void)0;
}
}
} else {
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var32 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline parser_nodes#SourceFile#first_token= (var30,var_t) on <var30:SourceFile> */
var30->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val = var_t; /* _first_token on <var30:SourceFile> */
RET_LABEL33:(void)0;
}
}
}
{
{ /* Inline lexer_work#Lexer#last_token= (self,var_t) on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val = var_t; /* _last_token on <self:Lexer> */
RET_LABEL34:(void)0;
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
val* var2 /* : null */;
{
var1 = nit___nit__Lexer___peek(self);
}
var_result = var1;
var2 = NULL;
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = var2; /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#get_token for (self: Lexer): nullable Token */
val* nit___nit__Lexer___get_token(val* self) {
val* var /* : nullable Token */;
long var1 /* : Int */;
long var_dfa_state /* var dfa_state: Int */;
long var2 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var3 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var4 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var5 /* : SourceFile */;
val* var7 /* : SourceFile */;
val* var_file /* var file: SourceFile */;
val* var8 /* : String */;
val* var10 /* : String */;
val* var_string /* var string: String */;
long var11 /* : Int */;
long var_string_len /* var string_len: Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
char var40 /* : Char */;
long var41 /* : Int */;
long var43 /* : Int */;
long var_c /* var c: Int */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var53 /* : Int */;
long var_line /* var line: Int */;
long var54 /* : Int */;
long var_pos /* var pos: Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : Array[Int] */;
val* var62 /* : Array[Int] */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var72 /* : Int */;
val* var73 /* : Array[Int] */;
val* var75 /* : Array[Int] */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
long var89 /* : Int */;
short int var90 /* : Bool */;
val* var91 /* : Array[Int] */;
val* var93 /* : Array[Int] */;
val* var94 /* : nullable Object */;
long var95 /* : Int */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
short int var103 /* : Bool */;
long var_old_state /* var old_state: Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var107 /* : Int */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
short int var114 /* : Bool */;
long var115 /* : Int */;
long var116 /* : Int */;
long var118 /* : Int */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
long var130 /* : Int */;
long var_low /* var low: Int */;
long var131 /* : Int */;
long var132 /* : Int */;
long var134 /* : Int for extern */;
long var135 /* : Int */;
long var136 /* : Int */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
long var142 /* : Int */;
long var_high /* var high: Int */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
const char* var_class_name156;
short int var157 /* : Bool */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
long var164 /* : Int */;
long var165 /* : Int */;
long var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
long var172 /* : Int */;
long var_middle /* var middle: Int */;
long var173 /* : Int */;
long var174 /* : Int */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name179;
long var180 /* : Int */;
long var181 /* : Int */;
long var182 /* : Int */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
const char* var_class_name187;
long var188 /* : Int */;
long var_offset /* var offset: Int */;
long var189 /* : Int */;
long var191 /* : Int for extern */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
const char* var_class_name197;
short int var198 /* : Bool */;
long var199 /* : Int */;
long var200 /* : Int */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
const char* var_class_name205;
long var206 /* : Int */;
long var207 /* : Int */;
long var208 /* : Int */;
short int var210 /* : Bool */;
int cltype211;
int idtype212;
const char* var_class_name213;
long var214 /* : Int */;
long var215 /* : Int */;
long var217 /* : Int for extern */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
const char* var_class_name223;
short int var224 /* : Bool */;
long var225 /* : Int */;
long var226 /* : Int */;
short int var228 /* : Bool */;
int cltype229;
int idtype230;
const char* var_class_name231;
long var232 /* : Int */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
const char* var_class_name239;
long var240 /* : Int */;
long var241 /* : Int */;
long var243 /* : Int for extern */;
long var244 /* : Int */;
long var245 /* : Int */;
long var247 /* : Int */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
const char* var_class_name253;
short int var254 /* : Bool */;
long var256 /* : Int */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
short int var263 /* : Bool */;
long var264 /* : Int */;
long var266 /* : Int for extern */;
long var_tok /* var tok: Int */;
long var267 /* : Int */;
long var268 /* : Int */;
long var270 /* : Int */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
long var275 /* : Int */;
short int var277 /* : Bool */;
int cltype278;
int idtype279;
const char* var_class_name280;
long var281 /* : Int */;
long var282 /* : Int */;
long var283 /* : Int */;
long var284 /* : Int */;
long var285 /* : Int */;
long var287 /* : Int */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
val* var292 /* : Location */;
long var293 /* : Int */;
long var294 /* : Int */;
short int var296 /* : Bool */;
int cltype297;
int idtype298;
const char* var_class_name299;
long var300 /* : Int */;
long var301 /* : Int */;
long var302 /* : Int */;
short int var304 /* : Bool */;
int cltype305;
int idtype306;
const char* var_class_name307;
long var308 /* : Int */;
long var309 /* : Int */;
long var310 /* : Int */;
short int var312 /* : Bool */;
int cltype313;
int idtype314;
const char* var_class_name315;
long var316 /* : Int */;
val* var_location /* var location: Location */;
long var317 /* : Int */;
short int var319 /* : Bool */;
int cltype320;
int idtype321;
const char* var_class_name322;
long var323 /* : Int */;
long var324 /* : Int */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
val* var328 /* : null */;
val* var329 /* : Token */;
val* var330 /* : Location */;
long var331 /* : Int */;
long var332 /* : Int */;
short int var334 /* : Bool */;
int cltype335;
int idtype336;
const char* var_class_name337;
long var338 /* : Int */;
long var339 /* : Int */;
long var340 /* : Int */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
const char* var_class_name345;
long var346 /* : Int */;
long var347 /* : Int */;
long var348 /* : Int */;
short int var350 /* : Bool */;
int cltype351;
int idtype352;
const char* var_class_name353;
long var354 /* : Int */;
long var355 /* : Int */;
long var356 /* : Int */;
short int var358 /* : Bool */;
int cltype359;
int idtype360;
const char* var_class_name361;
long var362 /* : Int */;
val* var_location363 /* var location: Location */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
int cltype367;
int idtype368;
const char* var_class_name369;
short int var370 /* : Bool */;
long var371 /* : Int */;
short int var373 /* : Bool */;
int cltype374;
int idtype375;
const char* var_class_name376;
long var377 /* : Int */;
val* var378 /* : Text */;
val* var_text /* var text: String */;
val* var379 /* : ALexerError */;
static val* varonce;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
val* var389 /* : Array[Object] */;
long var390 /* : Int */;
val* var391 /* : NativeArray[Object] */;
val* var392 /* : String */;
val* var_token /* var token: ALexerError */;
val* var394 /* : EOF */;
val* var_token395 /* var token: EOF */;
var1 = 0;
var_dfa_state = var1;
var2 = self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var2;
var_start_stream_pos = var_sp;
var3 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var3;
var4 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var4;
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var7 = self->attrs[COLOR_nit__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__lexer_work, 90);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_file = var5;
{
{ /* Inline location#SourceFile#string (var_file) on <var_file:SourceFile> */
var10 = var_file->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var_file:SourceFile> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_string = var8;
{
var11 = ((long (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string) /* length on <var_string:String>*/;
}
var_string_len = var11;
var12 = 1;
{
{ /* Inline kernel#Int#unary - (var12) on <var12:Int> */
var15 = -var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_accept_state = var13;
var16 = 1;
{
{ /* Inline kernel#Int#unary - (var16) on <var16:Int> */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_accept_token = var17;
var20 = 1;
{
{ /* Inline kernel#Int#unary - (var20) on <var20:Int> */
var23 = -var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_accept_length = var21;
var24 = 1;
{
{ /* Inline kernel#Int#unary - (var24) on <var24:Int> */
var27 = -var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_accept_pos = var25;
var28 = 1;
{
{ /* Inline kernel#Int#unary - (var28) on <var28:Int> */
var31 = -var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_accept_line = var29;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_sp,var_string_len) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var34 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var35 = var_sp >= var_string_len;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var36 = 1;
{
{ /* Inline kernel#Int#unary - (var36) on <var36:Int> */
var39 = -var36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_dfa_state = var37;
} else {
{
var40 = ((char (*)(val* self, long p0))(var_string->class->vft[COLOR_standard__string__Text___91d_93d]))(var_string, var_sp) /* [] on <var_string:String>*/;
}
{
{ /* Inline kernel#Char#ascii (var40) on <var40:Char> */
var43 = (unsigned char)var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_c = var41;
var44 = 1;
{
{ /* Inline kernel#Int#+ (var_sp,var44) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var51 = var_sp + var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_sp = var45;
var52 = self->attrs[COLOR_nit__lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var52;
var53 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var53;
var54 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var54;
var55 = 10;
{
{ /* Inline kernel#Int#== (var_c,var55) on <var_c:Int> */
var58 = var_c == var55;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
if (var_cr){
var59 = 0;
var_cr = var59;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var62 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = BOX_standard__Int(var_sp); /* autobox from Int to nullable Object */
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var60, var_line, var63); /* Direct call array#Array#[]= on <var60:Array[Int]>*/
}
} else {
var64 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var64) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var71 = var_line + var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_line = var65;
var72 = 0;
var_pos = var72;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var75 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = BOX_standard__Int(var_sp); /* autobox from Int to nullable Object */
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var73, var_line, var76); /* Direct call array#Array#[]= on <var73:Array[Int]>*/
}
}
} else {
var77 = 13;
{
{ /* Inline kernel#Int#== (var_c,var77) on <var_c:Int> */
var80 = var_c == var77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
if (var78){
var81 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var81) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var81:Int> isa OTHER */
/* <var81:Int> isa OTHER */
var84 = 1; /* easy <var81:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var88 = var_line + var81;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_line = var82;
var89 = 0;
var_pos = var89;
var90 = 1;
var_cr = var90;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var93 = var_file->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = BOX_standard__Int(var_sp); /* autobox from Int to nullable Object */
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var91, var_line, var94); /* Direct call array#Array#[]= on <var91:Array[Int]>*/
}
} else {
var95 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var95) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var95:Int> isa OTHER */
/* <var95:Int> isa OTHER */
var98 = 1; /* easy <var95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var102 = var_pos + var95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_pos = var96;
var103 = 0;
var_cr = var103;
}
}
for(;;) {
var_old_state = var_dfa_state;
var104 = 1;
{
{ /* Inline kernel#Int#unary - (var104) on <var104:Int> */
var107 = -var104;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_dfa_state,var105) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var105:Int> isa OTHER */
/* <var105:Int> isa OTHER */
var110 = 1; /* easy <var105:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var114 = var_dfa_state < var105;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
var115 = 2;
{
{ /* Inline kernel#Int#unary - (var115) on <var115:Int> */
var118 = -var115;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var116,var_dfa_state) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var121 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var125 = var116 - var_dfa_state;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_old_state = var119;
} else {
}
var126 = 1;
{
{ /* Inline kernel#Int#unary - (var126) on <var126:Int> */
var129 = -var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_dfa_state = var127;
var130 = 0;
var_low = var130;
var131 = 0;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var131) on <self:Lexer> */
var134 = lexer_goto(self, var_old_state, var131);
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
var135 = 1;
{
{ /* Inline kernel#Int#- (var132,var135) on <var132:Int> */
/* Covariant cast for argument 0 (i) <var135:Int> isa OTHER */
/* <var135:Int> isa OTHER */
var138 = 1; /* easy <var135:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name141 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var142 = var132 - var135;
var136 = var142;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
var_high = var136;
var143 = 0;
{
{ /* Inline kernel#Int#>= (var_high,var143) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <var143:Int> isa OTHER */
/* <var143:Int> isa OTHER */
var146 = 1; /* easy <var143:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var150 = var_high >= var143;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
if (var144){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var153 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var153)) {
var_class_name156 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name156);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var157 = var_low <= var_high;
var151 = var157;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
if (var151){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var160 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var164 = var_low + var_high;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
var165 = 2;
{
{ /* Inline kernel#Int#/ (var158,var165) on <var158:Int> */
/* Covariant cast for argument 0 (i) <var165:Int> isa OTHER */
/* <var165:Int> isa OTHER */
var168 = 1; /* easy <var165:Int> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 418);
show_backtrace(1);
}
var172 = var158 / var165;
var166 = var172;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
var_middle = var166;
var173 = 3;
{
{ /* Inline kernel#Int#* (var_middle,var173) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var173:Int> isa OTHER */
/* <var173:Int> isa OTHER */
var176 = 1; /* easy <var173:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name179 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name179);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 417);
show_backtrace(1);
}
var180 = var_middle * var173;
var174 = var180;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
var181 = 1;
{
{ /* Inline kernel#Int#+ (var174,var181) on <var174:Int> */
/* Covariant cast for argument 0 (i) <var181:Int> isa OTHER */
/* <var181:Int> isa OTHER */
var184 = 1; /* easy <var181:Int> isa OTHER*/
if (unlikely(!var184)) {
var_class_name187 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name187);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var188 = var174 + var181;
var182 = var188;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var_offset = var182;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var_offset) on <self:Lexer> */
var191 = lexer_goto(self, var_old_state, var_offset);
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_c,var189) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var189:Int> isa OTHER */
/* <var189:Int> isa OTHER */
var194 = 1; /* easy <var189:Int> isa OTHER*/
if (unlikely(!var194)) {
var_class_name197 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name197);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var198 = var_c < var189;
var192 = var198;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
if (var192){
var199 = 1;
{
{ /* Inline kernel#Int#- (var_middle,var199) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var199:Int> isa OTHER */
/* <var199:Int> isa OTHER */
var202 = 1; /* easy <var199:Int> isa OTHER*/
if (unlikely(!var202)) {
var_class_name205 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name205);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var206 = var_middle - var199;
var200 = var206;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
var_high = var200;
} else {
var207 = 1;
{
{ /* Inline kernel#Int#+ (var_offset,var207) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var207:Int> isa OTHER */
/* <var207:Int> isa OTHER */
var210 = 1; /* easy <var207:Int> isa OTHER*/
if (unlikely(!var210)) {
var_class_name213 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name213);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var214 = var_offset + var207;
var208 = var214;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var208) on <self:Lexer> */
var217 = lexer_goto(self, var_old_state, var208);
var215 = var217;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_c,var215) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var215:Int> isa OTHER */
/* <var215:Int> isa OTHER */
var220 = 1; /* easy <var215:Int> isa OTHER*/
if (unlikely(!var220)) {
var_class_name223 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name223);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var224 = var_c > var215;
var218 = var224;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
if (var218){
var225 = 1;
{
{ /* Inline kernel#Int#+ (var_middle,var225) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var225:Int> isa OTHER */
/* <var225:Int> isa OTHER */
var228 = 1; /* easy <var225:Int> isa OTHER*/
if (unlikely(!var228)) {
var_class_name231 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name231);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var232 = var_middle + var225;
var226 = var232;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
var_low = var226;
} else {
var233 = 2;
{
{ /* Inline kernel#Int#+ (var_offset,var233) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var233:Int> isa OTHER */
/* <var233:Int> isa OTHER */
var236 = 1; /* easy <var233:Int> isa OTHER*/
if (unlikely(!var236)) {
var_class_name239 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name239);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var240 = var_offset + var233;
var234 = var240;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var234) on <self:Lexer> */
var243 = lexer_goto(self, var_old_state, var234);
var241 = var243;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
var_dfa_state = var241;
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
var244 = 2;
{
{ /* Inline kernel#Int#unary - (var244) on <var244:Int> */
var247 = -var244;
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_dfa_state,var245) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var245:Int> isa OTHER */
/* <var245:Int> isa OTHER */
var250 = 1; /* easy <var245:Int> isa OTHER*/
if (unlikely(!var250)) {
var_class_name253 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name253);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var254 = var_dfa_state > var245;
var248 = var254;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
if (var248){
goto BREAK_label255;
} else {
}
}
BREAK_label255: (void)0;
self->attrs[COLOR_nit__lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var256 = 0;
{
{ /* Inline kernel#Int#>= (var_dfa_state,var256) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var256:Int> isa OTHER */
/* <var256:Int> isa OTHER */
var259 = 1; /* easy <var256:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var263 = var_dfa_state >= var256;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
if (var257){
{
{ /* Inline tables#TablesCapable#lexer_accept (self,var_dfa_state) on <self:Lexer> */
var266 = lexer_accept(self, var_dfa_state);
var264 = var266;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_tok = var264;
var267 = 1;
{
{ /* Inline kernel#Int#unary - (var267) on <var267:Int> */
var270 = -var267;
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_tok,var268) on <var_tok:Int> */
var273 = var_tok == var268;
var274 = !var273;
var271 = var274;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
if (var271){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var277 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var277)) {
var_class_name280 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name280);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var281 = var_sp - var_start_stream_pos;
var275 = var281;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
}
var_accept_length = var275;
var282 = self->attrs[COLOR_nit__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var282;
var283 = self->attrs[COLOR_nit__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var283;
} else {
}
} else {
var284 = 1;
{
{ /* Inline kernel#Int#unary - (var284) on <var284:Int> */
var287 = -var284;
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_accept_state,var285) on <var_accept_state:Int> */
var290 = var_accept_state == var285;
var291 = !var290;
var288 = var291;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
if (var288){
var292 = NEW_nit__Location(&type_nit__Location);
var293 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var293) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var293:Int> isa OTHER */
/* <var293:Int> isa OTHER */
var296 = 1; /* easy <var293:Int> isa OTHER*/
if (unlikely(!var296)) {
var_class_name299 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name299);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var300 = var_start_line + var293;
var294 = var300;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
}
var301 = 1;
{
{ /* Inline kernel#Int#+ (var_accept_line,var301) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <var301:Int> isa OTHER */
/* <var301:Int> isa OTHER */
var304 = 1; /* easy <var301:Int> isa OTHER*/
if (unlikely(!var304)) {
var_class_name307 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name307);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var308 = var_accept_line + var301;
var302 = var308;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
}
var309 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var309) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var309:Int> isa OTHER */
/* <var309:Int> isa OTHER */
var312 = 1; /* easy <var309:Int> isa OTHER*/
if (unlikely(!var312)) {
var_class_name315 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name315);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var316 = var_start_pos + var309;
var310 = var316;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var292->class->vft[COLOR_nit__location__Location__file_61d]))(var292, var_file) /* file= on <var292:Location>*/;
}
{
((void (*)(val* self, long p0))(var292->class->vft[COLOR_nit__location__Location__line_start_61d]))(var292, var294) /* line_start= on <var292:Location>*/;
}
{
((void (*)(val* self, long p0))(var292->class->vft[COLOR_nit__location__Location__line_end_61d]))(var292, var302) /* line_end= on <var292:Location>*/;
}
{
((void (*)(val* self, long p0))(var292->class->vft[COLOR_nit__location__Location__column_start_61d]))(var292, var310) /* column_start= on <var292:Location>*/;
}
{
((void (*)(val* self, long p0))(var292->class->vft[COLOR_nit__location__Location__column_end_61d]))(var292, var_accept_pos) /* column_end= on <var292:Location>*/;
}
{
((void (*)(val* self))(var292->class->vft[COLOR_standard__kernel__Object__init]))(var292) /* init on <var292:Location>*/;
}
var_location = var292;
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var319 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var319)) {
var_class_name322 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name322);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var323 = var_start_stream_pos + var_accept_length;
var317 = var323;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
}
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var317; /* _stream_pos on <self:Lexer> */
var324 = 0;
{
{ /* Inline kernel#Int#== (var_accept_token,var324) on <var_accept_token:Int> */
var327 = var_accept_token == var324;
var325 = var327;
goto RET_LABEL326;
RET_LABEL326:(void)0;
}
}
if (var325){
var328 = NULL;
var = var328;
goto RET_LABEL;
} else {
}
{
var329 = nit__lexer___Lexer___make_token(self, var_accept_token, var_location);
}
var = var329;
goto RET_LABEL;
} else {
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var330 = NEW_nit__Location(&type_nit__Location);
var331 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var331) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var331:Int> isa OTHER */
/* <var331:Int> isa OTHER */
var334 = 1; /* easy <var331:Int> isa OTHER*/
if (unlikely(!var334)) {
var_class_name337 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name337);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var338 = var_start_line + var331;
var332 = var338;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
}
var339 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var339) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var339:Int> isa OTHER */
/* <var339:Int> isa OTHER */
var342 = 1; /* easy <var339:Int> isa OTHER*/
if (unlikely(!var342)) {
var_class_name345 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var346 = var_start_line + var339;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
var347 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var347) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var347:Int> isa OTHER */
/* <var347:Int> isa OTHER */
var350 = 1; /* easy <var347:Int> isa OTHER*/
if (unlikely(!var350)) {
var_class_name353 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name353);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var354 = var_start_pos + var347;
var348 = var354;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
}
var355 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var355) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var355:Int> isa OTHER */
/* <var355:Int> isa OTHER */
var358 = 1; /* easy <var355:Int> isa OTHER*/
if (unlikely(!var358)) {
var_class_name361 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name361);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var362 = var_start_pos + var355;
var356 = var362;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var330->class->vft[COLOR_nit__location__Location__file_61d]))(var330, var_file) /* file= on <var330:Location>*/;
}
{
((void (*)(val* self, long p0))(var330->class->vft[COLOR_nit__location__Location__line_start_61d]))(var330, var332) /* line_start= on <var330:Location>*/;
}
{
((void (*)(val* self, long p0))(var330->class->vft[COLOR_nit__location__Location__line_end_61d]))(var330, var340) /* line_end= on <var330:Location>*/;
}
{
((void (*)(val* self, long p0))(var330->class->vft[COLOR_nit__location__Location__column_start_61d]))(var330, var348) /* column_start= on <var330:Location>*/;
}
{
((void (*)(val* self, long p0))(var330->class->vft[COLOR_nit__location__Location__column_end_61d]))(var330, var356) /* column_end= on <var330:Location>*/;
}
{
((void (*)(val* self))(var330->class->vft[COLOR_standard__kernel__Object__init]))(var330) /* init on <var330:Location>*/;
}
var_location363 = var330;
{
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var366 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var366)) {
var_class_name369 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name369);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var370 = var_sp > var_start_stream_pos;
var364 = var370;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
}
if (var364){
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var373 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var373)) {
var_class_name376 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name376);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var377 = var_sp - var_start_stream_pos;
var371 = var377;
goto RET_LABEL372;
RET_LABEL372:(void)0;
}
}
{
var378 = ((val* (*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_start_stream_pos, var371) /* substring on <var_string:String>*/;
}
var_text = var378;
var379 = NEW_nit__ALexerError(&type_nit__ALexerError);
if (varonce) {
var380 = varonce;
} else {
var381 = "Syntax error: unknown token ";
var382 = 28;
var383 = standard___standard__NativeString___to_s_with_length(var381, var382);
var380 = var383;
varonce = var380;
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = ".";
var387 = 1;
var388 = standard___standard__NativeString___to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
var389 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var389 = array_instance Array[Object] */
var390 = 3;
var391 = NEW_standard__NativeArray(var390, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var391)->values[0] = (val*) var380;
((struct instance_standard__NativeArray*)var391)->values[1] = (val*) var_text;
((struct instance_standard__NativeArray*)var391)->values[2] = (val*) var385;
{
((void (*)(val* self, val* p0, long p1))(var389->class->vft[COLOR_standard__array__Array__with_native]))(var389, var391, var390) /* with_native on <var389:Array[Object]>*/;
}
}
{
var392 = ((val* (*)(val* self))(var389->class->vft[COLOR_standard__string__Object__to_s]))(var389) /* to_s on <var389:Array[Object]>*/;
}
{
nit__lexer_work___ALexerError___init_lexer_error(var379, var392, var_location363, var_text); /* Direct call lexer_work#ALexerError#init_lexer_error on <var379:ALexerError>*/
}
var_token = var379;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token) on <var_file:SourceFile> */
var_file->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = var_token; /* _last_token on <var_file:SourceFile> */
RET_LABEL393:(void)0;
}
}
var = var_token;
goto RET_LABEL;
} else {
var394 = NEW_nit__EOF(&type_nit__EOF);
{
nit__lexer_work___EOF___init_tk(var394, var_location363); /* Direct call lexer_work#EOF#init_tk on <var394:EOF>*/
}
var_token395 = var394;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token395) on <var_file:SourceFile> */
var_file->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = var_token395; /* _last_token on <var_file:SourceFile> */
RET_LABEL396:(void)0;
}
}
var = var_token395;
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
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Lexer___standard__kernel__Object__init]))(self) /* init on <self:Lexer>*/;
}
RET_LABEL:;
}
