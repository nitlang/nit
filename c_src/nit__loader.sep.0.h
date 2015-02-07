#include "nit.common.h"
#define COLOR_nit__loader__ToolContext___opt_path 38
extern const char FILE_nit__loader[];
#define COLOR_nit__loader__ToolContext___opt_only_metamodel 39
#define COLOR_nit__loader__ToolContext___opt_only_parse 40
#define COLOR_nit__loader___ToolContext___standard__kernel__Object__init 156
#define COLOR_nit__toolcontext__ToolContext___option_context 7
extern const char FILE_nit__toolcontext[];
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__opts__Option;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__opts__Option;
#define COLOR_standard__array__Array__with_native 73
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nit__loader___ModelBuilder___standard__kernel__Object__init 91
#define COLOR_nit__loader__ModelBuilder___paths 3
#define COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext 1
extern const char FILE_nit__modelbuilder_base[];
#define COLOR_opts__Option___value 6
void standard___standard__Sequence___append(val* self, val* p0);
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
val* standard__environ___String___environ(val* self);
short int standard___standard__Text___is_empty(val* self);
val* BOX_standard__Char(char);
val* standard__string_search___Text___split_with(val* self, val* p0);
#define COLOR_nit__toolcontext__ToolContext___nit_dir 25
extern const struct type type_standard__Array__standard__Object;
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__string__Object__to_s 9
short int standard__file___String___file_exists(val* self);
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#include "time_nit.h"
void nit___nit__ToolContext___info(val* self, val* p0, long p1);
val* NEW_standard__ArraySet(const struct type* type);
extern const struct type type_standard__ArraySet__nit__MModule;
void standard___standard__ArraySet___standard__kernel__Object__init(val* self);
#define COLOR_standard__abstract_collection__Collection__iterator 37
#define COLOR_standard__abstract_collection__Iterator__is_ok 34
#define COLOR_standard__abstract_collection__Iterator__item 32
val* nit__loader___ModelBuilder___load_module(val* self, val* p0);
void nit__loader___ModelBuilder___build_module_importation(val* self, val* p0);
#define COLOR_nit__loader__AModule___mmodule 8
void standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_standard__abstract_collection__Iterator__next 33
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
val* BOX_standard__Int(long);
short int nit___nit__ToolContext___check_errors(val* self);
val* standard__array___Collection___to_a(val* self);
#define COLOR_standard__kernel__Object___61d_61d 2
#define COLOR_nit__mproject__MGroup___filepath 8
short int standard___standard__Text___has_suffix(val* self, val* p0);
#define COLOR_standard__string__String___43d 82
val* standard__file___String___simplify_path(val* self);
val* nit__loader___ModelBuilder___identify_file(val* self, val* p0);
#define COLOR_nit__mproject__MGroup___parent 6
#define COLOR_nit__mproject__MGroup___mproject 5
extern const char FILE_nit__mproject[];
#define COLOR_nit__mproject__MProject___root 8
val* standard__file___String___join_path(val* self, val* p0);
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(val* self, val* p0);
#define COLOR_nit__parser_nodes__ANode__hot_location 34
val* nit__loader___ModelBuilder___search_module_in_paths(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__mproject__MGroup___name 4
val* standard__string___Collection___join(val* self, val* p0);
void nit___nit__ModelBuilder___error(val* self, val* p0, val* p1);
val* nit__loader___ModelBuilder___search_mmodule_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__loader__ModulePath___filepath 1
val* nit__loader___ModelBuilder___module_absolute_path(val* self, val* p0);
void nit___nit__ToolContext___error(val* self, val* p0, val* p1);
#define COLOR_nit__loader__ModelBuilder___identified_files_by_path 4
#define COLOR_nit__loader__ModelBuilder___identified_files 5
val* standard__file___String___file_extension(val* self);
val* standard__file___String___dirname(val* self);
val* nit__loader___ModelBuilder___get_mgroup(val* self, val* p0);
val* standard__file___String___basename(val* self, val* p0);
short int standard___standard__MapRead___has_key(val* self, val* p0);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
val* NEW_nit__MProject(const struct type* type);
extern const struct type type_nit__MProject;
#define COLOR_nit__modelbuilder_base__ModelBuilder___model 0
#define COLOR_nit__mproject__MProject__name_61d 41
#define COLOR_nit__mproject__MProject__model_61d 42
#define COLOR_standard__kernel__Object__init 7
val* NEW_nit__MGroup(const struct type* type);
extern const struct type type_nit__MGroup;
#define COLOR_nit__mproject__MGroup__name_61d 41
#define COLOR_nit__mproject__MGroup__mproject_61d 43
#define COLOR_nit__mproject__MGroup__parent_61d 45
val* NEW_nit__ModulePath(const struct type* type);
extern const struct type type_nit__ModulePath;
#define COLOR_nit__loader__ModulePath__name_61d 33
#define COLOR_nit__loader__ModulePath__filepath_61d 35
#define COLOR_nit__loader__ModulePath__mgroup_61d 37
#define COLOR_nit__loader__MGroup___module_paths 11
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nit__loader__ModelBuilder___mgroups 6
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
val* standard__file___String____47d(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
val* nit___nit__MGroup___nit__model_base__MEntity__full_name(val* self);
val* NEW_nit__MDoc(const struct type* type);
extern const struct type type_nit__MDoc;
val* NEW_standard__IFStream(const struct type* type);
extern const struct type type_standard__IFStream;
void standard___standard__IFStream___open(val* self, val* p0);
short int standard___standard__BufferedIStream___IStream__eof(val* self);
#define COLOR_nit__mdoc__MDoc___content 0
extern const char FILE_nit__mdoc[];
val* standard___standard__IStream___read_line(val* self);
#define COLOR_nit__mdoc__MEntity___mdoc 0
#define COLOR_nit__mdoc__MDoc___original_mentity 1
val* standard__file___Object___getcwd(val* self);
val* NEW_nit__Lexer(const struct type* type);
extern const struct type type_nit__Lexer;
val* NEW_nit__SourceFile(const struct type* type);
extern const struct type type_nit__SourceFile;
#define COLOR_nit__location__SourceFile__filename_61d 33
#define COLOR_nit__location__SourceFile__stream_61d 37
#define COLOR_nit__lexer_work__Lexer__file_61d 37
val* NEW_nit__Parser(const struct type* type);
extern const struct type type_nit__Parser;
#define COLOR_nit__parser_work__Parser__lexer_61d 36
val* nit___nit__Parser___parse(val* self);
void standard___standard__IFStream___standard__stream__IOS__close(val* self);
#define COLOR_nit__parser_nodes__Start___n_base 4
#define COLOR_nit__parser_nodes__Start___n_eof 5
extern const char FILE_nit__parser_nodes[];
extern const struct type type_nit__AError;
#define COLOR_nit__lexer_work__AError___message 5
extern const char FILE_nit__lexer_work[];
#define COLOR_nit__loader__ModulePath___mmodule 3
#define COLOR_nit__loader__ModelBuilder___mmodule2nmodule 8
val* nit__loader___ModelBuilder___load_module_ast(val* self, val* p0);
#define COLOR_nit__loader__ModulePath___mgroup 2
#define COLOR_nit__loader__ModulePath___name 0
val* nit__loader___ModelBuilder___build_a_mmodule(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__parser_nodes__AModule___n_moduledecl 4
#define COLOR_nit__parser_nodes__AModuledecl___n_name 14
#define COLOR_nit__parser_nodes__AModuleName___n_id 6
val* nit__lexer_work___Token___text(val* self);
val* nit__mmodule___Model___get_mmodules_by_name(val* self, val* p0);
#define COLOR_nit__mmodule__MModule___mgroup 5
val* nit___nit__MModule___nit__model_base__MEntity__full_name(val* self);
#define COLOR_nit__mmodule__MModule___location 7
extern const char FILE_nit__mmodule[];
val* NEW_nit__MModule(const struct type* type);
extern const struct type type_nit__MModule;
#define COLOR_nit__parser_nodes__ANode___location 0
#define COLOR_nit__mmodule__MModule__model_61d 41
#define COLOR_nit__mmodule__MModule__mgroup_61d 43
#define COLOR_nit__mmodule__MModule__name_61d 45
#define COLOR_nit__mmodule__MModule__location_61d 47
#define COLOR_nit__loader__ModelBuilder___nmodules 7
#define COLOR_nit__location__Location___file 0
#define COLOR_nit__loader__SourceFile___mmodule 6
#define COLOR_nit__parser_nodes__ADefinition___n_doc 10
val* nit__modelbuilder_base___ADoc___to_mdoc(val* self);
void nit___nit__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2);
val* nit___nit__Prod___get_annotations(val* self, val* p0);
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(val* self);
#define COLOR_nit__mmodule__MModule___is_test_suite 17
#define COLOR_nit__loader__AModule___is_importation_done 9
extern const struct type type_standard__Array__nit__MModule;
void standard___standard__Array___standard__kernel__Object__init(val* self);
#define COLOR_nit__parser_nodes__AModule___n_imports 5
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self);
extern const struct type type_nit__AStdImport;
#define COLOR_nit__parser_nodes__AStdImport___n_name 6
#define COLOR_nit__parser_nodes__AModuleName___n_quad 4
#define COLOR_nit__parser_nodes__AModuleName___n_path 5
val* nit__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__loader__AStdImport___mmodule 7
#define COLOR_nit__parser_nodes__AImport___n_visibility 4
#define COLOR_nit__modelbuilder_base__AVisibility__mvisibility 56
val* nit__model_base___standard__Object___protected_visibility(val* self);
#define COLOR_nit__mmodule__MModule___in_importation 8
short int poset___poset__POSetElement____60d(val* self, val* p0);
void nit___nit__MModule___set_visibility_for(val* self, val* p0, val* p1);
val* nit__model_base___standard__Object___public_visibility(val* self);
void nit___nit__MModule___set_imported_mmodules(val* self, val* p0);
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_nit__mmodule__MModule___name 6
val* poset___poset__POSetElement___direct_greaters(val* self);
#define COLOR_standard__abstract_collection__Collection__has 40
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0);
#define COLOR_nit___nit__ModulePath___standard__kernel__Object__init 40
