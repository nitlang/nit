#include "nit.common.h"
#define COLOR_modelbuilder__ToolContext___opt_path 30
#define COLOR_modelbuilder__ToolContext___opt_only_metamodel 31
#define COLOR_modelbuilder__ToolContext___opt_only_parse 32
#define COLOR_modelbuilder__ToolContext___opt_ignore_visibility 33
#define COLOR_modelbuilder__ToolContext__init 145
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 74
void opts__OptionContext__add_option(val* self, val* p0);
void modelbuilder__ToolContext__init(val* self);
#define COLOR_modelbuilder__ToolContext___modelbuilder_real 34
val* modelbuilder__ToolContext__modelbuilder(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
#define COLOR_array__AbstractArrayRead___length 0
val* abstract_collection__SequenceRead__first(val* self);
val* NEW_mmodule__MModule(const struct type* type);
extern const struct type type_mmodule__MModule;
#define COLOR_modelbuilder__ModelBuilder___model 0
#define COLOR_mmodule__MModule___name 4
val* string__NativeString__to_s_with_length(char* self, long p0);
val* string__FlatString___43d(val* self, val* p0);
val* NEW_location__Location(const struct type* type);
extern const struct type type_location__Location;
#define COLOR_mmodule__MModule___location 5
#define COLOR_location__Location___file 0
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4);
void mmodule__MModule__init(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_mmodule__MModule___is_fictive 11
void mmodule__MModule__set_imported_mmodules(val* self, val* p0);
val* modelbuilder__ToolContext__make_main_module(val* self, val* p0);
val* mixin__ToolContext__make_main_module(val* self, val* p0);
val* phase__ToolContext__phases_list(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
#define COLOR_phase__Phase___disabled 2
#define COLOR_modelbuilder__Phase__process_mainmodule 42
#define COLOR_abstract_collection__Iterator__next 32
void modelbuilder__ToolContext__run_global_phases(val* self, val* p0);
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
#define COLOR_mmodule__Model___mmodules 2
val* array__Collection__to_a(val* self);
#define COLOR_mmodule__Model___mmodule_importation_hierarchy 4
void sorter__Comparator__sort(val* self, val* p0);
extern const struct type type_array__Arrayparser_nodes__AModule;
#define COLOR_kernel__Object__init 7
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_modelbuilder__ModelBuilder___mmodule2nmodule 7
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
void array__Array__add(val* self, val* p0);
void array__ArrayIterator__next(val* self);
void phase__ToolContext__run_phases(val* self, val* p0);
#define COLOR_opts__Option___value 6
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
void modelbuilder__ModelBuilder__run_phases(val* self);
#define COLOR_modelbuilder__ModelBuilder___paths 3
void abstract_collection__Sequence__append(val* self, val* p0);
val* environ__String__environ(val* self);
short int string__Text__is_empty(val* self);
val* BOX_kernel__Char(char);
val* string_search__Text__split_with(val* self, val* p0);
#define COLOR_toolcontext__ToolContext___nit_dir 22
#define COLOR_kernel__Object___61d_61d 2
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 9
short int file__String__file_exists(val* self);
void modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1);
#include "time_nit.h"
val* NEW_array__ArraySet(const struct type* type);
extern const struct type type_array__ArraySetmmodule__MModule;
val* modelbuilder__ModelBuilder__load_module(val* self, val* p0);
#define COLOR_modelbuilder__AModule___mmodule 8
void array__ArraySet__add(val* self, val* p0);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
void toolcontext__ToolContext__check_errors(val* self);
val* modelbuilder__ModelBuilder__parse(val* self, val* p0);
val* model__Model__get_mclasses_by_name(val* self, val* p0);
short int array__Array___61d_61d(val* self, val* p0);
#define COLOR_mmodule__MModule___in_importation 7
#define COLOR_model__MClass___intro_mmodule 2
short int poset__POSetElement___60d_61d(val* self, val* p0);
#define COLOR_model__MClass___visibility 7
short int mmodule__MModule__is_visible(val* self, val* p0, val* p1);
val* model__MClass__full_name(val* self);
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
val* modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
val* model__Model__get_mproperties_by_name(val* self, val* p0);
#define COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache 2
val* more_collections__HashMap3___91d_93d(val* self, val* p0, val* p1, val* p2);
short int model__MType__has_mproperty(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___intro_mclassdef 2
#define COLOR_model__MClassDef___mmodule 2
#define COLOR_model__MProperty___visibility 4
extern const struct type type_model__MMethod;
#define COLOR_model__MMethod___is_new 13
extern const struct type type_model__MClassType;
#define COLOR_model__MClassDef___mclass 3
#define COLOR_model__MClassType___mclass 4
#define COLOR_model__MMethod___is_init 11
#define COLOR_model__MClassDef___bound_mtype 4
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
extern const struct type type_array__Arraymodel__MProperty;
extern const struct type type_array__Arraystring__String;
val* model__MProperty__full_name(val* self);
val* string__Collection__join(val* self, val* p0);
void more_collections__HashMap3___91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3);
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_mproject__MGroup___filepath 6
short int string__FlatString___61d_61d(val* self, val* p0);
short int string__Text__has_suffix(val* self, val* p0);
val* file__String__simplify_path(val* self);
val* modelbuilder__ModelBuilder__identify_file(val* self, val* p0);
#define COLOR_mproject__MGroup___parent 4
#define COLOR_mproject__MGroup___mproject 3
#define COLOR_mproject__MProject___root 4
val* file__String__join_path(val* self, val* p0);
short int array__AbstractArrayRead__has(val* self, val* p0);
#define COLOR_parser_nodes__ANode__hot_location 33
val* modelbuilder__ModelBuilder__search_module_in_paths(val* self, val* p0, val* p1, val* p2);
#define COLOR_mproject__MGroup___name 2
val* modelbuilder__ModelBuilder__search_mmodule_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelbuilder__ModulePath___filepath 1
val* modelbuilder__ModelBuilder__get_mmodule_by_name(val* self, val* p0, val* p1, val* p2);
val* modelbuilder__ModelBuilder__module_absolute_path(val* self, val* p0);
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_modelbuilder__ModelBuilder___identified_files 4
val* file__String__file_extension(val* self);
val* modelbuilder__ModelBuilder__get_mgroup(val* self, val* p0);
val* file__String__basename(val* self, val* p0);
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* NEW_mproject__MProject(const struct type* type);
extern const struct type type_mproject__MProject;
void mproject__MProject__init(val* self, val* p0, val* p1);
val* NEW_mproject__MGroup(const struct type* type);
extern const struct type type_mproject__MGroup;
void mproject__MGroup__init(val* self, val* p0, val* p1, val* p2);
val* NEW_modelbuilder__ModulePath(const struct type* type);
extern const struct type type_modelbuilder__ModulePath;
#define COLOR_modelbuilder__ModulePath__name_61d 32
#define COLOR_modelbuilder__ModulePath__filepath_61d 34
#define COLOR_modelbuilder__ModulePath__mgroup_61d 36
#define COLOR_modelbuilder__MGroup___module_paths 9
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_modelbuilder__ModelBuilder___mgroups 5
val* file__String__dirname(val* self);
val* mproject__MGroup__full_name(val* self);
val* NEW_mdoc__MDoc(const struct type* type);
extern const struct type type_mdoc__MDoc;
val* NEW_file__IFStream(const struct type* type);
extern const struct type type_file__IFStream;
void file__IFStream__open(val* self, val* p0);
short int stream__BufferedIStream__eof(val* self);
#define COLOR_mdoc__MDoc___content 0
val* stream__IStream__read_line(val* self);
#define COLOR_mdoc__MEntity___mdoc 0
#define COLOR_mdoc__MDoc___original_mentity 1
val* file__Object__getcwd(val* self);
val* NEW_lexer_work__Lexer(const struct type* type);
extern const struct type type_lexer_work__Lexer;
val* NEW_location__SourceFile(const struct type* type);
extern const struct type type_location__SourceFile;
void location__SourceFile__init(val* self, val* p0, val* p1);
void lexer_work__Lexer__init(val* self, val* p0);
val* NEW_parser_work__Parser(const struct type* type);
extern const struct type type_parser_work__Parser;
void parser_work__Parser__init(val* self, val* p0);
val* parser_work__Parser__parse(val* self);
void file__IFStream__close(val* self);
#define COLOR_parser_nodes__Start___n_base 4
#define COLOR_parser_nodes__Start___n_eof 5
extern const struct type type_parser_nodes__AError;
#define COLOR_lexer_work__AError___message 5
val* modelbuilder__ModelBuilder__load_module_ast(val* self, val* p0);
#define COLOR_modelbuilder__ModulePath___mmodule 3
#define COLOR_modelbuilder__ModulePath___mgroup 2
#define COLOR_modelbuilder__ModulePath___name 0
val* modelbuilder__ModelBuilder__build_a_mmodule(val* self, val* p0, val* p1, val* p2);
void modelbuilder__ModelBuilder__build_module_importation(val* self, val* p0);
#define COLOR_parser_nodes__AModule___n_moduledecl 4
#define COLOR_parser_nodes__AModuledecl___n_name 8
#define COLOR_parser_nodes__AModuleName___n_id 6
val* lexer_work__Token__text(val* self);
#define COLOR_parser_nodes__ANode___location 0
#define COLOR_modelbuilder__ModelBuilder___nmodules 6
#define COLOR_parser_nodes__AModuledecl___n_doc 4
val* modelbuilder__ADoc__to_mdoc(val* self);
void modelbuilder__ModelBuilder__advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelbuilder__AModule___is_importation_done 9
extern const struct type type_array__Arraymmodule__MModule;
#define COLOR_parser_nodes__AModule___n_imports 5
val* parser_nodes__ANodes__iterator(val* self);
extern const struct type type_parser_nodes__AStdImport;
#define COLOR_mmodule__MModule___mgroup 3
#define COLOR_parser_nodes__AStdImport___n_name 6
#define COLOR_parser_nodes__AModuleName___n_quad 4
#define COLOR_parser_nodes__AModuleName___n_path 5
#define COLOR_modelbuilder__AStdImport___mmodule 7
#define COLOR_parser_nodes__AStdImport___n_visibility 4
#define COLOR_modelbuilder__AVisibility__mvisibility 54
val* model_base__Object__protected_visibility(val* self);
short int poset__POSetElement___60d(val* self, val* p0);
void mmodule__MModule__set_visibility_for(val* self, val* p0, val* p1);
val* model_base__Object__public_visibility(val* self);
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__has 40
void toolcontext__ToolContext__warning(val* self, val* p0, val* p1, val* p2);
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1, val* p2);
void toolcontext__ToolContext__advice(val* self, val* p0, val* p1, val* p2);
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1);
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1);
val* modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
val* modelbuilder__ModulePath__to_s(val* self);
#define COLOR_modelbuilder__ModulePath__init 39
val* model_base__Object__intrude_visibility(val* self);
val* modelbuilder__AIntrudeVisibility__mvisibility(val* self);
val* modelbuilder__APublicVisibility__mvisibility(val* self);
val* modelbuilder__AProtectedVisibility__mvisibility(val* self);
val* model_base__Object__private_visibility(val* self);
val* modelbuilder__APrivateVisibility__mvisibility(val* self);
#define COLOR_modelbuilder__ADoc___mdoc_cache 5
#define COLOR_parser_nodes__ADoc___n_comment 4
#define COLOR_string__FlatText___length 3
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 46
extern const struct class class_kernel__Char;
val* string__Text__substring_from(val* self, long p0);
#define COLOR_abstract_collection__SequenceRead__last 47
val* string__FlatString__substring(val* self, long p0, long p1);
