#include "nit.common.h"
extern const int COLOR_c_tools__CCompilationUnit___64dheader_c_base;
val* c_tools__CCompilationUnit__header_c_base(val* self);
void c_tools__CCompilationUnit__header_c_base_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dheader_custom;
val* c_tools__CCompilationUnit__header_custom(val* self);
void c_tools__CCompilationUnit__header_custom_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dheader_c_types;
val* c_tools__CCompilationUnit__header_c_types(val* self);
void c_tools__CCompilationUnit__header_c_types_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dheader_decl;
val* c_tools__CCompilationUnit__header_decl(val* self);
void c_tools__CCompilationUnit__header_decl_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dbody_decl;
val* c_tools__CCompilationUnit__body_decl(val* self);
void c_tools__CCompilationUnit__body_decl_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dbody_custom;
val* c_tools__CCompilationUnit__body_custom(val* self);
void c_tools__CCompilationUnit__body_custom_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dbody_impl;
val* c_tools__CCompilationUnit__body_impl(val* self);
void c_tools__CCompilationUnit__body_impl_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit___64dfiles;
val* c_tools__CCompilationUnit__files(val* self);
void c_tools__CCompilationUnit__files_61d(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit__body_decl;
extern const int COLOR_c_tools__CFunction__signature;
val* string__NativeString__to_s_with_length(char* self, long p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
extern const int COLOR_array__Array__with_native;
void CHECK_NEW_array__Array(val*);
extern const int COLOR_string__Object__to_s;
extern const int COLOR_compiling_writer__Writer__add;
extern const int COLOR_c_tools__CCompilationUnit__body_impl;
extern const int COLOR_c_tools__CFunction__to_writer;
extern const int COLOR_compiling_writer__Writer__append;
void c_tools__CCompilationUnit__add_local_function(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit__header_decl;
void c_tools__CCompilationUnit__add_exported_function(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit__header_c_base;
extern const int COLOR_compiling_writer__Writer__write_to_stream;
extern const int COLOR_c_tools__CCompilationUnit__header_custom;
extern const int COLOR_c_tools__CCompilationUnit__header_c_types;
void c_tools__CCompilationUnit__compile_header_core(val* self, val* p0);
extern const int COLOR_c_tools__CCompilationUnit__body_custom;
void c_tools__CCompilationUnit__compile_body_core(val* self, val* p0);
void c_tools__CCompilationUnit__init(val* self);
extern const int COLOR_c_tools__CFunction___64dsignature;
val* c_tools__CFunction__signature(val* self);
void c_tools__CFunction__signature_61d(val* self, val* p0);
extern const int COLOR_c_tools__CFunction___64ddecls;
val* c_tools__CFunction__decls(val* self);
void c_tools__CFunction__decls_61d(val* self, val* p0);
extern const int COLOR_c_tools__CFunction___64dexprs;
val* c_tools__CFunction__exprs(val* self);
void c_tools__CFunction__exprs_61d(val* self, val* p0);
val* NEW_compiling_writer__Writer(const struct type* type);
extern const struct type type_compiling_writer__Writer;
extern const int COLOR_compiling_writer__Writer__init;
void CHECK_NEW_compiling_writer__Writer(val*);
extern const int COLOR_c_tools__CFunction__decls;
extern const int COLOR_c_tools__CFunction__exprs;
val* c_tools__CFunction__to_writer(val* self);
void c_tools__CFunction__init(val* self, val* p0);
