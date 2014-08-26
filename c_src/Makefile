CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch
CINCL =  -I "./clib"
LDFLAGS ?=
LDLIBS  ?= -lm -lgc

NEED_LIBUNWIND := YesPlease
uname_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')
ifeq ($(uname_S),Darwin)
	NEED_LIBUNWIND :=
endif

clang_check := $(shell sh -c '$(CC) -v 2>&1 | grep -q clang; echo $$?')
ifeq ($(clang_check), 0)
	CFLAGS += -Qunused-arguments
endif
ifdef NEED_LIBUNWIND
	LDLIBS += -lunwind
endif
all: nitg

nith.classes.1.o: nith.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.1.o nith.classes.1.c

nith.classes.2.o: nith.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.2.o nith.classes.2.c

nith.classes.3.o: nith.classes.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.3.o nith.classes.3.c

nith.classes.4.o: nith.classes.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.4.o nith.classes.4.c

nith.classes.5.o: nith.classes.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.5.o nith.classes.5.c

nith.classes.6.o: nith.classes.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.classes.6.o nith.classes.6.c

nith.main.1.o: nith.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.main.1.o nith.main.1.c

nith.sep.1.o: nith.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.sep.1.o nith.sep.1.c

phase.sep.1.o: phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o phase.sep.1.o phase.sep.1.c

toolcontext.sep.1.o: toolcontext.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o toolcontext.sep.1.o toolcontext.sep.1.c

opts.sep.1.o: opts.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o opts.sep.1.o opts.sep.1.c

string.sep.1.o: string.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o string.sep.1.o string.sep.1.c

string.sep.2.o: string.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o string.sep.2.o string.sep.2.c

math.sep.1.o: math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o math.sep.1.o math.sep.1.c

kernel.sep.1.o: kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o kernel.sep.1.o kernel.sep.1.c

abstract_collection.sep.1.o: abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_collection.sep.1.o abstract_collection.sep.1.c

range.sep.1.o: range.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o range.sep.1.o range.sep.1.c

list.sep.1.o: list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o list.sep.1.o list.sep.1.c

array.sep.1.o: array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o array.sep.1.o array.sep.1.c

sorter.sep.1.o: sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o sorter.sep.1.o sorter.sep.1.c

hash_collection.sep.1.o: hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o hash_collection.sep.1.o hash_collection.sep.1.c

environ.sep.1.o: environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o environ.sep.1.o environ.sep.1.c

time.sep.1.o: time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o time.sep.1.o time.sep.1.c

string_search.sep.1.o: string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o string_search.sep.1.o string_search.sep.1.c

file.sep.1.o: file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o file.sep.1.o file.sep.1.c

stream.sep.1.o: stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o stream.sep.1.o stream.sep.1.c

exec.sep.1.o: exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o exec.sep.1.o exec.sep.1.c

location.sep.1.o: location.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o location.sep.1.o location.sep.1.c

version.sep.1.o: version.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o version.sep.1.o version.sep.1.c

template.sep.1.o: template.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o template.sep.1.o template.sep.1.c

parser.sep.1.o: parser.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.1.o parser.sep.1.c

parser.sep.2.o: parser.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.2.o parser.sep.2.c

parser.sep.3.o: parser.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.3.o parser.sep.3.c

parser.sep.4.o: parser.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.4.o parser.sep.4.c

parser.sep.5.o: parser.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.5.o parser.sep.5.c

parser.sep.6.o: parser.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser.sep.6.o parser.sep.6.c

parser_prod.sep.1.o: parser_prod.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.1.o parser_prod.sep.1.c

parser_prod.sep.2.o: parser_prod.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.2.o parser_prod.sep.2.c

parser_prod.sep.3.o: parser_prod.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.3.o parser_prod.sep.3.c

parser_prod.sep.4.o: parser_prod.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.4.o parser_prod.sep.4.c

parser_prod.sep.5.o: parser_prod.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.5.o parser_prod.sep.5.c

parser_prod.sep.6.o: parser_prod.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_prod.sep.6.o parser_prod.sep.6.c

lexer.sep.1.o: lexer.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o lexer.sep.1.o lexer.sep.1.c

parser_nodes.sep.1.o: parser_nodes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_nodes.sep.1.o parser_nodes.sep.1.c

lexer_work.sep.1.o: lexer_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o lexer_work.sep.1.o lexer_work.sep.1.c

tables.sep.1.o: tables.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o tables.sep.1.o tables.sep.1.c

parser_work.sep.1.o: parser_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o parser_work.sep.1.o parser_work.sep.1.c

poset.sep.1.o: poset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o poset.sep.1.o poset.sep.1.c

literal.sep.1.o: literal.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o literal.sep.1.o literal.sep.1.c

scope.sep.1.o: scope.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o scope.sep.1.o scope.sep.1.c

flow.sep.1.o: flow.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o flow.sep.1.o flow.sep.1.c

local_var_init.sep.1.o: local_var_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o local_var_init.sep.1.o local_var_init.sep.1.c

typing.sep.1.o: typing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o typing.sep.1.o typing.sep.1.c

typing.sep.2.o: typing.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o typing.sep.2.o typing.sep.2.c

modelize_property.sep.1.o: modelize_property.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o modelize_property.sep.1.o modelize_property.sep.1.c

modelize_property.sep.2.o: modelize_property.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o modelize_property.sep.2.o modelize_property.sep.2.c

modelize_class.sep.1.o: modelize_class.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o modelize_class.sep.1.o modelize_class.sep.1.c

modelbuilder.sep.1.o: modelbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o modelbuilder.sep.1.o modelbuilder.sep.1.c

model.sep.1.o: model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o model.sep.1.o model.sep.1.c

model.sep.2.o: model.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o model.sep.2.o model.sep.2.c

mmodule.sep.1.o: mmodule.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o mmodule.sep.1.o mmodule.sep.1.c

mproject.sep.1.o: mproject.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o mproject.sep.1.o mproject.sep.1.c

model_base.sep.1.o: model_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o model_base.sep.1.o model_base.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o more_collections.sep.1.o more_collections.sep.1.c

mdoc.sep.1.o: mdoc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o mdoc.sep.1.o mdoc.sep.1.c

annotation.sep.1.o: annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o annotation.sep.1.o annotation.sep.1.c

auto_super_init.sep.1.o: auto_super_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o auto_super_init.sep.1.o auto_super_init.sep.1.c

rapid_type_analysis.sep.1.o: rapid_type_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o rapid_type_analysis.sep.1.o rapid_type_analysis.sep.1.c

separate_erasure_compiler.sep.1.o: separate_erasure_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_erasure_compiler.sep.1.o separate_erasure_compiler.sep.1.c

separate_erasure_compiler.sep.2.o: separate_erasure_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_erasure_compiler.sep.2.o separate_erasure_compiler.sep.2.c

separate_compiler.sep.1.o: separate_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_compiler.sep.1.o separate_compiler.sep.1.c

separate_compiler.sep.2.o: separate_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_compiler.sep.2.o separate_compiler.sep.2.c

separate_compiler.sep.3.o: separate_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_compiler.sep.3.o separate_compiler.sep.3.c

separate_compiler.sep.4.o: separate_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o separate_compiler.sep.4.o separate_compiler.sep.4.c

abstract_compiler.sep.1.o: abstract_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_compiler.sep.1.o abstract_compiler.sep.1.c

abstract_compiler.sep.2.o: abstract_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_compiler.sep.2.o abstract_compiler.sep.2.c

abstract_compiler.sep.3.o: abstract_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_compiler.sep.3.o abstract_compiler.sep.3.c

abstract_compiler.sep.4.o: abstract_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_compiler.sep.4.o abstract_compiler.sep.4.c

abstract_compiler.sep.5.o: abstract_compiler.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o abstract_compiler.sep.5.o abstract_compiler.sep.5.c

platform.sep.1.o: platform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o platform.sep.1.o platform.sep.1.c

c_tools.sep.1.o: c_tools.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o c_tools.sep.1.o c_tools.sep.1.c

coloring.sep.1.o: coloring.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o coloring.sep.1.o coloring.sep.1.c

transform.sep.1.o: transform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o transform.sep.1.o transform.sep.1.c

astbuilder.sep.1.o: astbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o astbuilder.sep.1.o astbuilder.sep.1.c

astvalidation.sep.1.o: astvalidation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o astvalidation.sep.1.o astvalidation.sep.1.c

nith.types.1.o: nith.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.types.1.o nith.types.1.c

nith.types.2.o: nith.types.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.types.2.o nith.types.2.c

nith.types.3.o: nith.types.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.types.3.o nith.types.3.c

nith.types.4.o: nith.types.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.types.4.o nith.types.4.c

nith.types.5.o: nith.types.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nith.types.5.o nith.types.5.c

time_nit.extern.o: time_nit.c
	$(CC) $(CFLAGS)  -c -o time_nit.extern.o time_nit.c

string_nit.extern.o: string_nit.c
	$(CC) $(CFLAGS)  -c -o string_nit.extern.o string_nit.c

file_nit.extern.o: file_nit.c
	$(CC) $(CFLAGS)  -c -o file_nit.extern.o file_nit.c

exec_nit.extern.o: exec_nit.c
	$(CC) $(CFLAGS)  -c -o exec_nit.extern.o exec_nit.c

tables_nit.extern.o: tables_nit.c
	$(CC) $(CFLAGS)  -c -o tables_nit.extern.o tables_nit.c

c_functions_hash.extern.o: c_functions_hash.c
	$(CC) $(CFLAGS)  -c -o c_functions_hash.extern.o c_functions_hash.c

gc_chooser.extern.o: gc_chooser.c
	$(CC) $(CFLAGS) -DWITH_LIBGC -c -o gc_chooser.extern.o gc_chooser.c

string._ffi.extern.o: string._ffi.c
	$(CC) $(CFLAGS)  -c -o string._ffi.extern.o string._ffi.c

string._nitni.extern.o: string._nitni.c
	$(CC) $(CFLAGS)  -c -o string._nitni.extern.o string._nitni.c

kernel._ffi.extern.o: kernel._ffi.c
	$(CC) $(CFLAGS)  -c -o kernel._ffi.extern.o kernel._ffi.c

kernel._nitni.extern.o: kernel._nitni.c
	$(CC) $(CFLAGS)  -c -o kernel._nitni.extern.o kernel._nitni.c

nitg: nith.classes.1.o nith.classes.2.o nith.classes.3.o nith.classes.4.o nith.classes.5.o nith.classes.6.o nith.main.1.o nith.sep.1.o phase.sep.1.o toolcontext.sep.1.o opts.sep.1.o string.sep.1.o string.sep.2.o math.sep.1.o kernel.sep.1.o abstract_collection.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o environ.sep.1.o time.sep.1.o string_search.sep.1.o file.sep.1.o stream.sep.1.o exec.sep.1.o location.sep.1.o version.sep.1.o template.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o parser_prod.sep.6.o lexer.sep.1.o parser_nodes.sep.1.o lexer_work.sep.1.o tables.sep.1.o parser_work.sep.1.o poset.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_property.sep.2.o modelize_class.sep.1.o modelbuilder.sep.1.o model.sep.1.o model.sep.2.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o mdoc.sep.1.o annotation.sep.1.o auto_super_init.sep.1.o rapid_type_analysis.sep.1.o separate_erasure_compiler.sep.1.o separate_erasure_compiler.sep.2.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o separate_compiler.sep.4.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o abstract_compiler.sep.4.o abstract_compiler.sep.5.o platform.sep.1.o c_tools.sep.1.o coloring.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o nith.types.1.o nith.types.2.o nith.types.3.o nith.types.4.o nith.types.5.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o string._ffi.extern.o string._nitni.extern.o kernel._ffi.extern.o kernel._nitni.extern.o
	$(CC) $(LDFLAGS) -o nitg nith.classes.1.o nith.classes.2.o nith.classes.3.o nith.classes.4.o nith.classes.5.o nith.classes.6.o nith.main.1.o nith.sep.1.o phase.sep.1.o toolcontext.sep.1.o opts.sep.1.o string.sep.1.o string.sep.2.o math.sep.1.o kernel.sep.1.o abstract_collection.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o environ.sep.1.o time.sep.1.o string_search.sep.1.o file.sep.1.o stream.sep.1.o exec.sep.1.o location.sep.1.o version.sep.1.o template.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o parser_prod.sep.6.o lexer.sep.1.o parser_nodes.sep.1.o lexer_work.sep.1.o tables.sep.1.o parser_work.sep.1.o poset.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_property.sep.2.o modelize_class.sep.1.o modelbuilder.sep.1.o model.sep.1.o model.sep.2.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o mdoc.sep.1.o annotation.sep.1.o auto_super_init.sep.1.o rapid_type_analysis.sep.1.o separate_erasure_compiler.sep.1.o separate_erasure_compiler.sep.2.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o separate_compiler.sep.4.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o abstract_compiler.sep.4.o abstract_compiler.sep.5.o platform.sep.1.o c_tools.sep.1.o coloring.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o nith.types.1.o nith.types.2.o nith.types.3.o nith.types.4.o nith.types.5.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o string._ffi.extern.o string._nitni.extern.o kernel._ffi.extern.o kernel._nitni.extern.o $(LDLIBS)

clean:
	rm nith.classes.1.o nith.classes.2.o nith.classes.3.o nith.classes.4.o nith.classes.5.o nith.classes.6.o nith.main.1.o nith.sep.1.o phase.sep.1.o toolcontext.sep.1.o opts.sep.1.o string.sep.1.o string.sep.2.o math.sep.1.o kernel.sep.1.o abstract_collection.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o environ.sep.1.o time.sep.1.o string_search.sep.1.o file.sep.1.o stream.sep.1.o exec.sep.1.o location.sep.1.o version.sep.1.o template.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o parser_prod.sep.6.o lexer.sep.1.o parser_nodes.sep.1.o lexer_work.sep.1.o tables.sep.1.o parser_work.sep.1.o poset.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_property.sep.2.o modelize_class.sep.1.o modelbuilder.sep.1.o model.sep.1.o model.sep.2.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o mdoc.sep.1.o annotation.sep.1.o auto_super_init.sep.1.o rapid_type_analysis.sep.1.o separate_erasure_compiler.sep.1.o separate_erasure_compiler.sep.2.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o separate_compiler.sep.4.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o abstract_compiler.sep.4.o abstract_compiler.sep.5.o platform.sep.1.o c_tools.sep.1.o coloring.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o nith.types.1.o nith.types.2.o nith.types.3.o nith.types.4.o nith.types.5.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o string._ffi.extern.o string._nitni.extern.o kernel._ffi.extern.o kernel._nitni.extern.o 2>/dev/null
