#include "nit.common.h"
#define COLOR_parser_nodes__ANode___location 0
val* parser_nodes__ANode__location(val* self);
val* parser_nodes__ANode__hot_location(val* self);
#define COLOR_file__Sys___stderr 3
#define COLOR_parser_nodes__ANode__hot_location 30
val* string__NativeString__to_s_with_length(char* self, long p0);
val* string__Object__class_name(val* self);
val* location__Location__colored_line(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void file__OFStream__write(val* self, val* p0);
void parser_nodes__ANode__debug(val* self, val* p0);
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_parser_nodes__ANode__replace_child 35
void parser_nodes__ANode__replace_with(val* self, val* p0);
#define COLOR_parser_nodes__ANodes___parent 0
#define COLOR_parser_nodes__ANodes___items 1
val* array__AbstractArrayRead__iterator(val* self);
val* parser_nodes__ANodes__iterator(val* self);
long array__AbstractArrayRead__length(val* self);
long parser_nodes__ANodes__length(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
short int parser_nodes__ANodes__is_empty(val* self);
#define COLOR_abstract_collection__Sequence_FT0 0
void parser_nodes__ANodes__hook_add(val* self, val* p0);
void array__AbstractArray__push(val* self, val* p0);
void parser_nodes__ANodes__push(val* self, val* p0);
val* array__AbstractArray__pop(val* self);
void parser_nodes__ANodes__hook_remove(val* self, val* p0);
val* parser_nodes__ANodes__pop(val* self);
void array__AbstractArray__unshift(val* self, val* p0);
void parser_nodes__ANodes__unshift(val* self, val* p0);
val* array__AbstractArray__shift(val* self);
val* parser_nodes__ANodes__shift(val* self);
#define COLOR_abstract_collection__Collection_FT0 8
short int array__AbstractArrayRead__has(val* self, val* p0);
short int parser_nodes__ANodes__has(val* self, val* p0);
val* array__Array___91d_93d(val* self, long p0);
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
void parser_nodes__ANodes___91d_93d_61d(val* self, long p0, val* p1);
void array__AbstractArray__remove_at(val* self, long p0);
void parser_nodes__ANodes__remove_at(val* self, long p0);
#define COLOR_parser_nodes__ANodes_FT0 3
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
void abstract_collection__Sequence__add(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 30
void parser_nodes__ANodes__unsafe_add_all(val* self, val* p0);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
val* BOX_kernel__Int(long);
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
short int parser_nodes__ANodes__replace_child(val* self, val* p0, val* p1);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
void parser_nodes__ANodes__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__Token___prev_token 2
#define COLOR_parser_nodes__Token___next_token 3
val* lexer_work__Token__text(val* self);
val* parser_nodes__Token__to_s(val* self);
#define COLOR_parser_nodes__SourceFile___first_token 3
#define COLOR_parser_nodes__SourceFile___last_token 4
void parser_nodes__Prod__location_61d(val* self, val* p0);
#define COLOR_parser_nodes__Prod___n_annotations 2
val* parser_nodes__Prod__n_annotations(val* self);
void parser_nodes__Prod__n_annotations_61d(val* self, val* p0);
#define COLOR_parser_nodes__Prod__replace_with 52
extern const struct type type_parser_nodes__Prod;
short int location__Location___61d_61d(val* self, val* p0);
void parser_nodes__Prod__replace_with(val* self, val* p0);
#define COLOR_parser_nodes__Visitor___current_node 0
#define COLOR_parser_nodes__Visitor__visit 29
val* parser_nodes__Visitor__current_node(val* self);
val* parser_nodes__TEol__to_s(val* self);
val* parser_nodes__TokenKeyword__to_s(val* self);
val* parser_nodes__TokenOperator__to_s(val* self);
val* parser_nodes__TClassid__to_s(val* self);
val* parser_nodes__TId__to_s(val* self);
val* parser_nodes__TAttrid__to_s(val* self);
val* parser_nodes__TokenLiteral__to_s(val* self);
val* parser_nodes__TBadString__to_s(val* self);
val* parser_nodes__TBadChar__to_s(val* self);
val* parser_nodes__EOF__to_s(val* self);
#define COLOR_parser_nodes__AModule___n_moduledecl 4
val* parser_nodes__AModule__n_moduledecl(val* self);
#define COLOR_parser_nodes__AModule___n_imports 5
#define COLOR_parser_nodes__AModule___n_extern_code_blocks 6
#define COLOR_parser_nodes__AModule___n_classdefs 7
#define COLOR_parser_nodes__AModuledecl___n_doc 4
val* parser_nodes__AModuledecl__n_doc(val* self);
#define COLOR_parser_nodes__AModuledecl___n_name 8
val* parser_nodes__AModuledecl__n_name(val* self);
#define COLOR_parser_nodes__AStdImport___n_visibility 4
val* parser_nodes__AStdImport__n_visibility(val* self);
#define COLOR_parser_nodes__AStdImport___n_name 6
val* parser_nodes__AStdImport__n_name(val* self);
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
#define COLOR_parser_nodes__AStdClassdef___n_doc 11
val* parser_nodes__AStdClassdef__n_doc(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_kwredef 12
val* parser_nodes__AStdClassdef__n_kwredef(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_visibility 13
val* parser_nodes__AStdClassdef__n_visibility(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_classkind 14
val* parser_nodes__AStdClassdef__n_classkind(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_id 15
val* parser_nodes__AStdClassdef__n_id(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_formaldefs 16
#define COLOR_parser_nodes__AStdClassdef___n_superclasses 18
val* parser_nodes__AStdClassdef__hot_location(val* self);
#define COLOR_parser_nodes__AFormaldef___n_id 4
val* parser_nodes__AFormaldef__n_id(val* self);
#define COLOR_parser_nodes__AFormaldef___n_type 5
val* parser_nodes__AFormaldef__n_type(val* self);
#define COLOR_parser_nodes__ASuperclass___n_type 5
val* parser_nodes__ASuperclass__n_type(val* self);
#define COLOR_parser_nodes__APropdef___n_doc 4
val* parser_nodes__APropdef__n_doc(val* self);
#define COLOR_parser_nodes__APropdef___n_kwredef 5
val* parser_nodes__APropdef__n_kwredef(val* self);
#define COLOR_parser_nodes__APropdef___n_visibility 6
val* parser_nodes__APropdef__n_visibility(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_id 12
val* parser_nodes__AAttrPropdef__n_id(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_id2 13
val* parser_nodes__AAttrPropdef__n_id2(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_type 14
val* parser_nodes__AAttrPropdef__n_type(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_readable 15
val* parser_nodes__AAttrPropdef__n_readable(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_writable 16
val* parser_nodes__AAttrPropdef__n_writable(val* self);
#define COLOR_parser_nodes__AAttrPropdef___n_expr 17
val* parser_nodes__AAttrPropdef__n_expr(val* self);
val* parser_nodes__AAttrPropdef__hot_location(val* self);
#define COLOR_parser_nodes__AMethPropdef___n_kwmeth 11
void parser_nodes__AMethPropdef__n_kwmeth_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_kwinit 12
val* parser_nodes__AMethPropdef__n_kwinit(val* self);
void parser_nodes__AMethPropdef__n_kwinit_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_kwnew 13
val* parser_nodes__AMethPropdef__n_kwnew(val* self);
void parser_nodes__AMethPropdef__n_kwnew_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_methid 14
val* parser_nodes__AMethPropdef__n_methid(val* self);
#define COLOR_parser_nodes__AMethPropdef___n_signature 15
val* parser_nodes__AMethPropdef__n_signature(val* self);
#define COLOR_parser_nodes__AMethPropdef___n_block 16
val* parser_nodes__AMethPropdef__n_block(val* self);
void parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_extern 17
val* parser_nodes__AMethPropdef__n_extern(val* self);
void parser_nodes__AMethPropdef__n_extern_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_extern_calls 18
void parser_nodes__AMethPropdef__n_extern_calls_61d(val* self, val* p0);
#define COLOR_parser_nodes__AMethPropdef___n_extern_code_block 19
void parser_nodes__AMethPropdef__n_extern_code_block_61d(val* self, val* p0);
val* parser_nodes__AMethPropdef__hot_location(val* self);
#define COLOR_parser_nodes__AExternCalls___n_extern_calls 5
#define COLOR_parser_nodes__ATypePropdef___n_id 12
val* parser_nodes__ATypePropdef__n_id(val* self);
#define COLOR_parser_nodes__ATypePropdef___n_type 13
val* parser_nodes__ATypePropdef__n_type(val* self);
#define COLOR_parser_nodes__AAble___n_visibility 4
val* parser_nodes__AAble__n_visibility(val* self);
void parser_nodes__AAble__n_visibility_61d(val* self, val* p0);
#define COLOR_parser_nodes__AAble___n_kwredef 5
val* parser_nodes__AAble__n_kwredef(val* self);
#define COLOR_parser_nodes__AIdMethid___n_id 4
val* parser_nodes__AIdMethid__n_id(val* self);
#define COLOR_parser_nodes__ASignature___n_params 5
#define COLOR_parser_nodes__ASignature___n_type 7
val* parser_nodes__ASignature__n_type(val* self);
#define COLOR_parser_nodes__AParam___n_id 4
val* parser_nodes__AParam__n_id(val* self);
#define COLOR_parser_nodes__AParam___n_type 5
val* parser_nodes__AParam__n_type(val* self);
#define COLOR_parser_nodes__AParam___n_dotdotdot 6
val* parser_nodes__AParam__n_dotdotdot(val* self);
#define COLOR_parser_nodes__AType___n_kwnullable 4
val* parser_nodes__AType__n_kwnullable(val* self);
#define COLOR_parser_nodes__AType___n_id 5
val* parser_nodes__AType__n_id(val* self);
#define COLOR_parser_nodes__AType___n_types 6
#define COLOR_parser_nodes__ALabel___n_id 5
val* parser_nodes__ALabel__n_id(val* self);
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
#define COLOR_parser_nodes__AVardeclExpr___n_id 10
val* parser_nodes__AVardeclExpr__n_id(val* self);
#define COLOR_parser_nodes__AVardeclExpr___n_type 11
val* parser_nodes__AVardeclExpr__n_type(val* self);
#define COLOR_parser_nodes__AVardeclExpr___n_expr 13
val* parser_nodes__AVardeclExpr__n_expr(val* self);
#define COLOR_parser_nodes__AReturnExpr___n_expr 10
val* parser_nodes__AReturnExpr__n_expr(val* self);
#define COLOR_parser_nodes__ALabelable___n_label 9
val* parser_nodes__ALabelable__n_label(val* self);
#define COLOR_parser_nodes__ABreakExpr___n_expr 11
val* parser_nodes__ABreakExpr__n_expr(val* self);
#define COLOR_parser_nodes__AContinueExpr___n_expr 11
val* parser_nodes__AContinueExpr__n_expr(val* self);
#define COLOR_parser_nodes__ADoExpr___n_block 11
val* parser_nodes__ADoExpr__n_block(val* self);
#define COLOR_parser_nodes__AIfExpr___n_expr 10
val* parser_nodes__AIfExpr__n_expr(val* self);
#define COLOR_parser_nodes__AIfExpr___n_then 11
val* parser_nodes__AIfExpr__n_then(val* self);
#define COLOR_parser_nodes__AIfExpr___n_else 12
val* parser_nodes__AIfExpr__n_else(val* self);
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
val* parser_nodes__AIfexprExpr__n_expr(val* self);
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
val* parser_nodes__AIfexprExpr__n_then(val* self);
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
val* parser_nodes__AIfexprExpr__n_else(val* self);
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
val* parser_nodes__AWhileExpr__n_expr(val* self);
#define COLOR_parser_nodes__AWhileExpr___n_block 13
val* parser_nodes__AWhileExpr__n_block(val* self);
#define COLOR_parser_nodes__ALoopExpr___n_block 11
val* parser_nodes__ALoopExpr__n_block(val* self);
#define COLOR_parser_nodes__AForExpr___n_ids 11
#define COLOR_parser_nodes__AForExpr___n_expr 12
val* parser_nodes__AForExpr__n_expr(val* self);
#define COLOR_parser_nodes__AForExpr___n_block 14
val* parser_nodes__AForExpr__n_block(val* self);
#define COLOR_parser_nodes__AAssertExpr___n_id 10
val* parser_nodes__AAssertExpr__n_id(val* self);
#define COLOR_parser_nodes__AAssertExpr___n_expr 11
val* parser_nodes__AAssertExpr__n_expr(val* self);
#define COLOR_parser_nodes__AAssertExpr___n_else 12
val* parser_nodes__AAssertExpr__n_else(val* self);
#define COLOR_parser_nodes__AAssignFormExpr___n_assign 11
val* parser_nodes__AAssignFormExpr__n_assign(val* self);
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
val* parser_nodes__AAssignFormExpr__n_value(val* self);
#define COLOR_parser_nodes__AReassignFormExpr___n_assign_op 11
val* parser_nodes__AReassignFormExpr__n_assign_op(val* self);
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
val* parser_nodes__AReassignFormExpr__n_value(val* self);
#define COLOR_parser_nodes__ASendExpr___n_expr 9
val* parser_nodes__ASendExpr__n_expr(val* self);
#define COLOR_parser_nodes__ABinopExpr___n_expr2 11
val* parser_nodes__ABinopExpr__n_expr2(val* self);
#define COLOR_parser_nodes__AOrExpr___n_expr 9
val* parser_nodes__AOrExpr__n_expr(val* self);
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
val* parser_nodes__AOrExpr__n_expr2(val* self);
#define COLOR_parser_nodes__AAndExpr___n_expr 9
val* parser_nodes__AAndExpr__n_expr(val* self);
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
val* parser_nodes__AAndExpr__n_expr2(val* self);
#define COLOR_parser_nodes__AOrElseExpr___n_expr 9
val* parser_nodes__AOrElseExpr__n_expr(val* self);
#define COLOR_parser_nodes__AOrElseExpr___n_expr2 10
val* parser_nodes__AOrElseExpr__n_expr2(val* self);
#define COLOR_parser_nodes__AImpliesExpr___n_expr 9
val* parser_nodes__AImpliesExpr__n_expr(val* self);
#define COLOR_parser_nodes__AImpliesExpr___n_expr2 10
val* parser_nodes__AImpliesExpr__n_expr2(val* self);
#define COLOR_parser_nodes__ANotExpr___n_expr 10
val* parser_nodes__ANotExpr__n_expr(val* self);
#define COLOR_parser_nodes__AIsaExpr___n_expr 9
val* parser_nodes__AIsaExpr__n_expr(val* self);
#define COLOR_parser_nodes__AIsaExpr___n_type 10
val* parser_nodes__AIsaExpr__n_type(val* self);
#define COLOR_parser_nodes__ANewExpr___n_type 10
val* parser_nodes__ANewExpr__n_type(val* self);
#define COLOR_parser_nodes__ANewExpr___n_id 11
val* parser_nodes__ANewExpr__n_id(val* self);
#define COLOR_parser_nodes__ANewExpr___n_args 12
val* parser_nodes__ANewExpr__n_args(val* self);
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
val* parser_nodes__AAttrFormExpr__n_expr(val* self);
#define COLOR_parser_nodes__AAttrFormExpr___n_id 10
val* parser_nodes__AAttrFormExpr__n_id(val* self);
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
val* parser_nodes__ACallFormExpr__n_id(val* self);
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
val* parser_nodes__ACallFormExpr__n_args(val* self);
#define COLOR_parser_nodes__ASuperExpr___n_args 11
val* parser_nodes__ASuperExpr__n_args(val* self);
#define COLOR_parser_nodes__AInitExpr___n_args 12
val* parser_nodes__AInitExpr__n_args(val* self);
#define COLOR_parser_nodes__ABraFormExpr___n_args 15
val* parser_nodes__ABraFormExpr__n_args(val* self);
#define COLOR_parser_nodes__ARangeExpr___n_expr 9
val* parser_nodes__ARangeExpr__n_expr(val* self);
#define COLOR_parser_nodes__ARangeExpr___n_expr2 10
val* parser_nodes__ARangeExpr__n_expr2(val* self);
#define COLOR_parser_nodes__AArrayExpr___n_exprs 9
val* parser_nodes__AArrayExpr__n_exprs(val* self);
#define COLOR_parser_nodes__ADecIntExpr___n_number 10
val* parser_nodes__ADecIntExpr__n_number(val* self);
#define COLOR_parser_nodes__AHexIntExpr___n_hex_number 10
val* parser_nodes__AHexIntExpr__n_hex_number(val* self);
#define COLOR_parser_nodes__AFloatExpr___n_float 9
val* parser_nodes__AFloatExpr__n_float(val* self);
#define COLOR_parser_nodes__ACharExpr___n_char 9
val* parser_nodes__ACharExpr__n_char(val* self);
#define COLOR_parser_nodes__AStringFormExpr___n_string 9
val* parser_nodes__AStringFormExpr__n_string(val* self);
#define COLOR_parser_nodes__ASuperstringExpr___n_exprs 9
#define COLOR_parser_nodes__AProxyExpr___n_expr 9
val* parser_nodes__AProxyExpr__n_expr(val* self);
#define COLOR_parser_nodes__AAsCastExpr___n_expr 9
val* parser_nodes__AAsCastExpr__n_expr(val* self);
#define COLOR_parser_nodes__AAsCastExpr___n_type 12
val* parser_nodes__AAsCastExpr__n_type(val* self);
#define COLOR_parser_nodes__AAsNotnullExpr___n_expr 9
val* parser_nodes__AAsNotnullExpr__n_expr(val* self);
#define COLOR_parser_nodes__AExprs___n_exprs 4
void parser_nodes__AExprs__init(val* self);
#define COLOR_parser_nodes__ADebugTypeExpr___n_expr 11
val* parser_nodes__ADebugTypeExpr__n_expr(val* self);
#define COLOR_parser_nodes__ADebugTypeExpr___n_type 12
val* parser_nodes__ADebugTypeExpr__n_type(val* self);
#define COLOR_parser_nodes__AModuleName___n_quad 4
val* parser_nodes__AModuleName__n_quad(val* self);
#define COLOR_parser_nodes__AModuleName___n_path 5
#define COLOR_parser_nodes__AModuleName___n_id 6
val* parser_nodes__AModuleName__n_id(val* self);
#define COLOR_parser_nodes__AQualified___n_id 5
#define COLOR_parser_nodes__ADoc___n_comment 4
#define COLOR_parser_nodes__AAnnotations___n_items 6
#define COLOR_parser_nodes__AAnnotation___n_kwredef 5
val* parser_nodes__AAnnotation__n_kwredef(val* self);
#define COLOR_parser_nodes__AAnnotation___n_visibility 6
val* parser_nodes__AAnnotation__n_visibility(val* self);
#define COLOR_parser_nodes__AAnnotation___n_atid 7
val* parser_nodes__AAnnotation__n_atid(val* self);
#define COLOR_parser_nodes__AAnnotation___n_args 9
#define COLOR_parser_nodes__AExprAtArg___n_expr 4
val* parser_nodes__AExprAtArg__n_expr(val* self);
#define COLOR_parser_nodes__AAtid___n_id 4
val* parser_nodes__AAtid__n_id(val* self);
#define COLOR_parser_nodes__Start___n_base 4
val* parser_nodes__Start__n_base(val* self);
#define COLOR_parser_nodes__Start___n_eof 5
val* parser_nodes__Start__n_eof(val* self);
void parser_nodes__Start__init(val* self, val* p0, val* p1);
