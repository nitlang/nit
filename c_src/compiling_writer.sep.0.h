#include "nit.common.h"
extern const int COLOR_compiling_writer__Writer__is_frozen;
extern const int COLOR_compiling_writer__Writer___last_string;
val* NEW_compiling_writer__WriterStrings(const struct type* type);
extern const struct type type_compiling_writer__WriterStrings;
extern const int COLOR_compiling_writer__WriterStrings__init;
void CHECK_NEW_compiling_writer__WriterStrings(val*);
extern const int COLOR_compiling_writer__Writer__internal_append;
extern const int COLOR_compiling_writer__WriterStrings___next;
val* compiling_writer__Writer__add(val* self, val* p0);
extern const int COLOR_abstract_collection__Collection__iterator;
extern const int COLOR_abstract_collection__Iterator__is_ok;
extern const int COLOR_abstract_collection__Iterator__item;
extern const int COLOR_compiling_writer__Writer__add;
extern const int COLOR_abstract_collection__Iterator__next;
val* compiling_writer__Writer__add_all(val* self, val* p0, val* p1);
val* NEW_compiling_writer__WriterCoreNode(const struct type* type);
extern const struct type type_compiling_writer__WriterCoreNode;
extern const int COLOR_compiling_writer__WriterCoreNode__init;
void CHECK_NEW_compiling_writer__WriterCoreNode(val*);
val* compiling_writer__Writer__append(val* self, val* p0);
extern const int COLOR_compiling_writer__Writer___first_sub_writer;
extern const int COLOR_compiling_writer__Writer___last_sub_writer;
extern const int COLOR_compiling_writer__WriterNode___next_writer;
void compiling_writer__Writer__internal_append(val* self, val* p0);
val* NEW_compiling_writer__Writer(const struct type* type);
extern const struct type type_compiling_writer__Writer;
extern const int COLOR_compiling_writer__Writer__init;
void CHECK_NEW_compiling_writer__Writer(val*);
extern const int COLOR_compiling_writer__Writer__append;
val* compiling_writer__Writer__sub(val* self);
extern const int COLOR_compiling_writer__Writer___is_writing;
extern const int COLOR_compiling_writer__WriterNode__internal_write_to_stream;
void compiling_writer__Writer__write_to_stream(val* self, val* p0);
extern const int COLOR_compiling_writer__Writer___is_frozen;
short int compiling_writer__Writer__is_frozen(val* self);
void compiling_writer__Writer__freeze(val* self);
void compiling_writer__Writer__init(val* self);
void compiling_writer__WriterNode__internal_write_to_stream(val* self, val* p0);
void compiling_writer__WriterNode__init(val* self);
extern const int COLOR_compiling_writer__WriterCoreNode___writer;
extern const int COLOR_compiling_writer__Writer__write_to_stream;
void compiling_writer__WriterCoreNode__internal_write_to_stream(val* self, val* p0);
extern const int COLOR_compiling_writer__WriterNode__init;
void compiling_writer__WriterCoreNode__init(val* self, val* p0);
extern const int COLOR_compiling_writer__WriterStrings___string;
void compiling_writer__WriterStrings__init(val* self, val* p0);
extern const int COLOR_stream__OStream__write;
void compiling_writer__WriterStrings__internal_write_to_stream(val* self, val* p0);
