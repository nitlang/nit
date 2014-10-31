#include "nit.common.h"
#define COLOR_parser_nodes__ANode___location 0
val* parser_nodes__ANode__hot_location(val* self);
#define COLOR_file__Sys___stderr 3
#define COLOR_parser_nodes__ANode__hot_location 33
val* string__NativeString__to_s_with_length(char* self, long p0);
val* string__Object__class_name(val* self);
val* location__Location__colored_line(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void file__OFStream__write(val* self, val* p0);
void parser_nodes__ANode__debug(val* self, val* p0);
#define COLOR_parser_nodes__ANode___parent 1
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_parser_nodes__ANode__replace_child 37
void parser_nodes__ANode__replace_with(val* self, val* p0);
#define COLOR_parser_nodes__ANodes___parent 0
#define COLOR_parser_nodes__ANodes___items 1
val* array__AbstractArrayRead__iterator(val* self);
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_array__AbstractArrayRead___length 0
long parser_nodes__ANodes__length(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
short int parser_nodes__ANodes__is_empty(val* self);
#define COLOR_abstract_collection__Sequence_FT0 5
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
#define COLOR_abstract_collection__Collection_FT0 2
short int array__AbstractArrayRead__has(val* self, val* p0);
short int parser_nodes__ANodes__has(val* self, val* p0);
val* array__Array___91d_93d(val* self, long p0);
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
void parser_nodes__ANodes___91d_93d_61d(val* self, long p0, val* p1);
void array__AbstractArray__remove_at(val* self, long p0);
void parser_nodes__ANodes__remove_at(val* self, long p0);
#define COLOR_parser_nodes__ANodes_FT0 10
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
void abstract_collection__Sequence__add(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 32
void parser_nodes__ANodes__unsafe_add_all(val* self, val* p0);
extern const struct type type_kernel__Int;
long kernel__Int__successor(long self, long p0);
short int parser_nodes__ANodes__replace_child(val* self, val* p0, val* p1);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
void parser_nodes__ANodes__visit_all(val* self, val* p0);
#define COLOR_parser_nodes__ANodes__init 79
#define COLOR_parser_nodes__Token___prev_token 2
#define COLOR_parser_nodes__Token___next_token 3
val* lexer_work__Token__text(val* self);
val* parser_nodes__Token__to_s(val* self);
#define COLOR_parser_nodes__SourceFile___first_token 3
#define COLOR_parser_nodes__SourceFile___last_token 4
#define COLOR_parser_nodes__Prod___n_annotations 2
#define COLOR_parser_nodes__Prod__replace_with 53
extern const struct type type_parser_nodes__Prod;
void parser_nodes__Prod__replace_with(val* self, val* p0);
#define COLOR_parser_nodes__Visitor___current_node 0
#define COLOR_parser_nodes__Visitor__visit 31
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
#define COLOR_parser_nodes__AModule___n_imports 5
#define COLOR_parser_nodes__AModule___n_extern_code_blocks 6
#define COLOR_parser_nodes__AModule___n_classdefs 7
#define COLOR_parser_nodes__AModuledecl___n_doc 4
#define COLOR_parser_nodes__AModuledecl___n_name 8
#define COLOR_parser_nodes__AStdImport___n_visibility 4
#define COLOR_parser_nodes__AStdImport___n_name 6
#define COLOR_parser_nodes__APublicVisibility__init 57
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
#define COLOR_parser_nodes__AStdClassdef___n_doc 10
#define COLOR_parser_nodes__AStdClassdef___n_kwredef 11
#define COLOR_parser_nodes__AStdClassdef___n_visibility 12
#define COLOR_parser_nodes__AStdClassdef___n_classkind 13
#define COLOR_parser_nodes__AStdClassdef___n_id 14
#define COLOR_parser_nodes__AStdClassdef___n_formaldefs 15
#define COLOR_parser_nodes__AStdClassdef___n_superclasses 17
val* parser_nodes__AStdClassdef__hot_location(val* self);
#define COLOR_parser_nodes__AFormaldef___n_id 4
#define COLOR_parser_nodes__AFormaldef___n_type 5
#define COLOR_parser_nodes__ASuperclass___n_type 5
#define COLOR_parser_nodes__APropdef___n_doc 4
#define COLOR_parser_nodes__APropdef___n_kwredef 5
#define COLOR_parser_nodes__APropdef___n_visibility 6
#define COLOR_parser_nodes__AAttrPropdef___n_id2 12
#define COLOR_parser_nodes__AAttrPropdef___n_type 13
#define COLOR_parser_nodes__AAttrPropdef___n_expr 14
#define COLOR_parser_nodes__AAttrPropdef___n_block 15
val* parser_nodes__AAttrPropdef__hot_location(val* self);
#define COLOR_parser_nodes__AMethPropdef___n_kwinit 12
#define COLOR_parser_nodes__AMethPropdef___n_kwnew 13
#define COLOR_parser_nodes__AMethPropdef___n_methid 14
#define COLOR_parser_nodes__AMethPropdef___n_signature 15
#define COLOR_parser_nodes__AMethPropdef___n_block 16
#define COLOR_parser_nodes__AMethPropdef___n_extern_code_block 18
val* parser_nodes__AMethPropdef__hot_location(val* self);
#define COLOR_parser_nodes__AExternCalls___n_extern_calls 5
#define COLOR_parser_nodes__ATypePropdef___n_id 12
#define COLOR_parser_nodes__ATypePropdef___n_type 13
#define COLOR_parser_nodes__AIdMethid___n_id 4
#define COLOR_parser_nodes__ASignature___n_params 5
#define COLOR_parser_nodes__ASignature___n_type 7
#define COLOR_parser_nodes__AParam___n_id 4
#define COLOR_parser_nodes__AParam___n_type 5
#define COLOR_parser_nodes__AParam___n_dotdotdot 6
#define COLOR_parser_nodes__AType___n_kwnullable 4
#define COLOR_parser_nodes__AType___n_id 5
#define COLOR_parser_nodes__AType___n_types 6
#define COLOR_parser_nodes__ALabel___n_id 5
#define COLOR_parser_nodes__ALabel__init 58
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
#define COLOR_parser_nodes__AVardeclExpr___n_id 10
#define COLOR_parser_nodes__AVardeclExpr___n_type 11
#define COLOR_parser_nodes__AVardeclExpr___n_expr 13
#define COLOR_parser_nodes__AReturnExpr___n_expr 10
#define COLOR_parser_nodes__ALabelable___n_label 9
#define COLOR_parser_nodes__AEscapeExpr___n_expr 10
#define COLOR_parser_nodes__ADoExpr___n_block 11
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
#define COLOR_parser_nodes__AWhileExpr___n_block 13
#define COLOR_parser_nodes__ALoopExpr___n_block 11
#define COLOR_parser_nodes__AForExpr___n_ids 11
#define COLOR_parser_nodes__AForExpr___n_expr 12
#define COLOR_parser_nodes__AForExpr___n_block 14
#define COLOR_parser_nodes__AAssertExpr___n_id 10
#define COLOR_parser_nodes__AAssertExpr___n_expr 11
#define COLOR_parser_nodes__AAssertExpr___n_else 12
#define COLOR_parser_nodes__AAssignFormExpr___n_assign 11
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
#define COLOR_parser_nodes__AReassignFormExpr___n_assign_op 11
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
#define COLOR_parser_nodes__AOnceExpr___n_expr 10
#define COLOR_parser_nodes__ASendExpr___n_expr 9
#define COLOR_parser_nodes__ABinopExpr___n_expr2 11
#define COLOR_parser_nodes__AOrExpr___n_expr 9
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
#define COLOR_parser_nodes__AAndExpr___n_expr 9
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
#define COLOR_parser_nodes__AOrElseExpr___n_expr 9
#define COLOR_parser_nodes__AOrElseExpr___n_expr2 10
#define COLOR_parser_nodes__AImpliesExpr___n_expr 9
#define COLOR_parser_nodes__AImpliesExpr___n_expr2 10
#define COLOR_parser_nodes__ANotExpr___n_expr 10
#define COLOR_parser_nodes__AIsaExpr___n_expr 9
#define COLOR_parser_nodes__AIsaExpr___n_type 10
#define COLOR_parser_nodes__ANewExpr___n_type 10
#define COLOR_parser_nodes__ANewExpr___n_id 11
#define COLOR_parser_nodes__ANewExpr___n_args 12
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
#define COLOR_parser_nodes__AAttrFormExpr___n_id 10
#define COLOR_parser_nodes__ACallFormExpr___n_id 15
#define COLOR_parser_nodes__ACallFormExpr___n_args 16
#define COLOR_parser_nodes__ASuperExpr___n_args 11
#define COLOR_parser_nodes__AInitExpr___n_args 12
#define COLOR_parser_nodes__ABraFormExpr___n_args 15
#define COLOR_parser_nodes__ARangeExpr___n_expr 9
#define COLOR_parser_nodes__ARangeExpr___n_expr2 10
#define COLOR_parser_nodes__AArrayExpr___n_exprs 10
#define COLOR_parser_nodes__AArrayExpr___n_type 11
#define COLOR_parser_nodes__ASelfExpr__init 78
#define COLOR_parser_nodes__ADecIntExpr___n_number 10
#define COLOR_parser_nodes__AHexIntExpr___n_hex_number 10
#define COLOR_parser_nodes__AFloatExpr___n_float 9
#define COLOR_parser_nodes__ACharExpr___n_char 9
#define COLOR_parser_nodes__AStringFormExpr___n_string 9
#define COLOR_parser_nodes__ASuperstringExpr___n_exprs 9
#define COLOR_parser_nodes__AParExpr___n_expr 10
#define COLOR_parser_nodes__AAsCastExpr___n_expr 9
#define COLOR_parser_nodes__AAsCastExpr___n_type 12
#define COLOR_parser_nodes__AAsNotnullExpr___n_expr 9
#define COLOR_parser_nodes__AVarargExpr___n_expr 9
#define COLOR_parser_nodes__AManyExpr___n_exprs 9
#define COLOR_parser_nodes__ADebugTypeExpr___n_expr 11
#define COLOR_parser_nodes__ADebugTypeExpr___n_type 12
#define COLOR_parser_nodes__AExprs___n_exprs 4
#define COLOR_parser_nodes__AModuleName___n_quad 4
#define COLOR_parser_nodes__AModuleName___n_path 5
#define COLOR_parser_nodes__AModuleName___n_id 6
#define COLOR_parser_nodes__AQualified___n_id 5
#define COLOR_parser_nodes__ADoc___n_comment 4
#define COLOR_parser_nodes__AAnnotations___n_items 6
#define COLOR_parser_nodes__AAnnotation___n_doc 4
#define COLOR_parser_nodes__AAnnotation___n_kwredef 5
#define COLOR_parser_nodes__AAnnotation___n_visibility 6
#define COLOR_parser_nodes__AAnnotation___n_atid 7
#define COLOR_parser_nodes__AAnnotation___n_args 9
#define COLOR_parser_nodes__AAnnotation__init 69
#define COLOR_parser_nodes__AAtid___n_id 4
#define COLOR_parser_nodes__Start___n_base 4
#define COLOR_parser_nodes__Start___n_eof 5
#define COLOR_kernel__Object__init 7
void parser_nodes__Start__init(val* self, val* p0, val* p1);
