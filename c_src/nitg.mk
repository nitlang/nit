CC = ccache cc
CFLAGS = -g -O2
CINCL =  -I "../clib"
LDFLAGS ?= 
LDLIBS  ?= -lunwind -lm -lgc

all: ../c_src2/nitg

nitg.classes.1.o: nitg.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.1.o nitg.classes.1.c

nitg.classes.2.o: nitg.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.2.o nitg.classes.2.c

nitg.classes.3.o: nitg.classes.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.3.o nitg.classes.3.c

nitg.classes.4.o: nitg.classes.4.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.4.o nitg.classes.4.c

nitg.classes.5.o: nitg.classes.5.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.5.o nitg.classes.5.c

nitg.classes.6.o: nitg.classes.6.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.6.o nitg.classes.6.c

nitg.classes.7.o: nitg.classes.7.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.7.o nitg.classes.7.c

nitg.classes.8.o: nitg.classes.8.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.8.o nitg.classes.8.c

nitg.classes.9.o: nitg.classes.9.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.9.o nitg.classes.9.c

nitg.classes.10.o: nitg.classes.10.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.classes.10.o nitg.classes.10.c

nitg.main.1.o: nitg.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.main.1.o nitg.main.1.c

nitg.sep.1.o: nitg.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.sep.1.o nitg.sep.1.c

modelbuilder.sep.1.o: modelbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o modelbuilder.sep.1.o modelbuilder.sep.1.c

parser.sep.1.o: parser.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.1.o parser.sep.1.c

parser.sep.2.o: parser.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.2.o parser.sep.2.c

parser.sep.3.o: parser.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.3.o parser.sep.3.c

parser.sep.4.o: parser.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.4.o parser.sep.4.c

parser.sep.5.o: parser.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.5.o parser.sep.5.c

parser.sep.6.o: parser.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.6.o parser.sep.6.c

parser.sep.7.o: parser.sep.7.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.7.o parser.sep.7.c

parser.sep.8.o: parser.sep.8.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.8.o parser.sep.8.c

parser.sep.9.o: parser.sep.9.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.9.o parser.sep.9.c

parser.sep.10.o: parser.sep.10.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.10.o parser.sep.10.c

parser.sep.11.o: parser.sep.11.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.11.o parser.sep.11.c

parser.sep.12.o: parser.sep.12.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.12.o parser.sep.12.c

parser.sep.13.o: parser.sep.13.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.13.o parser.sep.13.c

parser.sep.14.o: parser.sep.14.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.14.o parser.sep.14.c

parser.sep.15.o: parser.sep.15.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser.sep.15.o parser.sep.15.c

parser_prod.sep.1.o: parser_prod.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_prod.sep.1.o parser_prod.sep.1.c

parser_prod.sep.2.o: parser_prod.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_prod.sep.2.o parser_prod.sep.2.c

parser_prod.sep.3.o: parser_prod.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_prod.sep.3.o parser_prod.sep.3.c

parser_prod.sep.4.o: parser_prod.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_prod.sep.4.o parser_prod.sep.4.c

parser_prod.sep.5.o: parser_prod.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_prod.sep.5.o parser_prod.sep.5.c

lexer.sep.1.o: lexer.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o lexer.sep.1.o lexer.sep.1.c

parser_nodes.sep.1.o: parser_nodes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_nodes.sep.1.o parser_nodes.sep.1.c

parser_nodes.sep.2.o: parser_nodes.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_nodes.sep.2.o parser_nodes.sep.2.c

location.sep.1.o: location.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o location.sep.1.o location.sep.1.c

posix.sep.1.o: posix.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o posix.sep.1.o posix.sep.1.c

string.sep.1.o: string.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o string.sep.1.o string.sep.1.c

collection.sep.1.o: collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o collection.sep.1.o collection.sep.1.c

abstract_collection.sep.1.o: abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o abstract_collection.sep.1.o abstract_collection.sep.1.c

kernel.sep.1.o: kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o kernel.sep.1.o kernel.sep.1.c

range.sep.1.o: range.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o range.sep.1.o range.sep.1.c

list.sep.1.o: list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o list.sep.1.o list.sep.1.c

array.sep.1.o: array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o array.sep.1.o array.sep.1.c

sorter.sep.1.o: sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o sorter.sep.1.o sorter.sep.1.c

hash_collection.sep.1.o: hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o hash_collection.sep.1.o hash_collection.sep.1.c

ropes.sep.1.o: ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o ropes.sep.1.o ropes.sep.1.c

file.sep.1.o: file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o file.sep.1.o file.sep.1.c

stream.sep.1.o: stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o stream.sep.1.o stream.sep.1.c

string_search.sep.1.o: string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o string_search.sep.1.o string_search.sep.1.c

time.sep.1.o: time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o time.sep.1.o time.sep.1.c

environ.sep.1.o: environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o environ.sep.1.o environ.sep.1.c

exec.sep.1.o: exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o exec.sep.1.o exec.sep.1.c

math.sep.1.o: math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o math.sep.1.o math.sep.1.c

gc.sep.1.o: gc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o gc.sep.1.o gc.sep.1.c

tables.sep.1.o: tables.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o tables.sep.1.o tables.sep.1.c

model.sep.1.o: model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o model.sep.1.o model.sep.1.c

poset.sep.1.o: poset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o poset.sep.1.o poset.sep.1.c

mmodule.sep.1.o: mmodule.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o mmodule.sep.1.o mmodule.sep.1.c

mproject.sep.1.o: mproject.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o mproject.sep.1.o mproject.sep.1.c

model_base.sep.1.o: model_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o model_base.sep.1.o model_base.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o more_collections.sep.1.o more_collections.sep.1.c

opts.sep.1.o: opts.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o opts.sep.1.o opts.sep.1.c

toolcontext.sep.1.o: toolcontext.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o toolcontext.sep.1.o toolcontext.sep.1.c

phase.sep.1.o: phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o phase.sep.1.o phase.sep.1.c

frontend.sep.1.o: frontend.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o frontend.sep.1.o frontend.sep.1.c

simple_misc_analysis.sep.1.o: simple_misc_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o simple_misc_analysis.sep.1.o simple_misc_analysis.sep.1.c

literal.sep.1.o: literal.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o literal.sep.1.o literal.sep.1.c

scope.sep.1.o: scope.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o scope.sep.1.o scope.sep.1.c

flow.sep.1.o: flow.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o flow.sep.1.o flow.sep.1.c

local_var_init.sep.1.o: local_var_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o local_var_init.sep.1.o local_var_init.sep.1.c

typing.sep.1.o: typing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o typing.sep.1.o typing.sep.1.c

typing.sep.2.o: typing.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o typing.sep.2.o typing.sep.2.c

modelize_property.sep.1.o: modelize_property.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o modelize_property.sep.1.o modelize_property.sep.1.c

modelize_class.sep.1.o: modelize_class.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o modelize_class.sep.1.o modelize_class.sep.1.c

auto_super_init.sep.1.o: auto_super_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o auto_super_init.sep.1.o auto_super_init.sep.1.c

div_by_zero.sep.1.o: div_by_zero.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o div_by_zero.sep.1.o div_by_zero.sep.1.c

cached.sep.1.o: cached.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o cached.sep.1.o cached.sep.1.c

parser_util.sep.1.o: parser_util.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o parser_util.sep.1.o parser_util.sep.1.c

serialization_phase.sep.1.o: serialization_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o serialization_phase.sep.1.o serialization_phase.sep.1.c

transform.sep.1.o: transform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o transform.sep.1.o transform.sep.1.c

astbuilder.sep.1.o: astbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o astbuilder.sep.1.o astbuilder.sep.1.c

astvalidation.sep.1.o: astvalidation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o astvalidation.sep.1.o astvalidation.sep.1.c

rapid_type_analysis.sep.1.o: rapid_type_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o rapid_type_analysis.sep.1.o rapid_type_analysis.sep.1.c

global_compiler.sep.1.o: global_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o global_compiler.sep.1.o global_compiler.sep.1.c

global_compiler.sep.2.o: global_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o global_compiler.sep.2.o global_compiler.sep.2.c

abstract_compiler.sep.1.o: abstract_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o abstract_compiler.sep.1.o abstract_compiler.sep.1.c

abstract_compiler.sep.2.o: abstract_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o abstract_compiler.sep.2.o abstract_compiler.sep.2.c

abstract_compiler.sep.3.o: abstract_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o abstract_compiler.sep.3.o abstract_compiler.sep.3.c

separate_erasure_compiler.sep.1.o: separate_erasure_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o separate_erasure_compiler.sep.1.o separate_erasure_compiler.sep.1.c

separate_compiler.sep.1.o: separate_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o separate_compiler.sep.1.o separate_compiler.sep.1.c

separate_compiler.sep.2.o: separate_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o separate_compiler.sep.2.o separate_compiler.sep.2.c

separate_compiler.sep.3.o: separate_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o separate_compiler.sep.3.o separate_compiler.sep.3.c

layout_builders.sep.1.o: layout_builders.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o layout_builders.sep.1.o layout_builders.sep.1.c

collect_super_sends.sep.1.o: collect_super_sends.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o collect_super_sends.sep.1.o collect_super_sends.sep.1.c

nitg.types.1.o: nitg.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.1.o nitg.types.1.c

nitg.types.2.o: nitg.types.2.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.2.o nitg.types.2.c

nitg.types.3.o: nitg.types.3.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.3.o nitg.types.3.c

nitg.types.4.o: nitg.types.4.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.4.o nitg.types.4.c

nitg.types.5.o: nitg.types.5.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.5.o nitg.types.5.c

nitg.types.6.o: nitg.types.6.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.6.o nitg.types.6.c

nitg.types.7.o: nitg.types.7.c
	$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o nitg.types.7.o nitg.types.7.c

string_nit.extern.o: ../lib/standard/string_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o string_nit.extern.o ../lib/standard/string_nit.c

file_nit.extern.o: ../lib/standard/file_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o file_nit.extern.o ../lib/standard/file_nit.c

stream_nit.extern.o: ../lib/standard/stream_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o stream_nit.extern.o ../lib/standard/stream_nit.c

time_nit.extern.o: ../lib/standard/time_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o time_nit.extern.o ../lib/standard/time_nit.c

exec_nit.extern.o: ../lib/standard/exec_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o exec_nit.extern.o ../lib/standard/exec_nit.c

tables_nit.extern.o: ../src/parser/tables_nit.c
	$(CC) $(CFLAGS) -D NONITCNI  -c -o tables_nit.extern.o ../src/parser/tables_nit.c

gc_chooser.extern.o: ../clib/gc_chooser.c
	$(CC) $(CFLAGS) -D NONITCNI -DWITH_LIBGC -c -o gc_chooser.extern.o ../clib/gc_chooser.c

../c_src2/nitg: nitg.classes.1.o nitg.classes.2.o nitg.classes.3.o nitg.classes.4.o nitg.classes.5.o nitg.classes.6.o nitg.classes.7.o nitg.classes.8.o nitg.classes.9.o nitg.classes.10.o nitg.main.1.o nitg.sep.1.o modelbuilder.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser.sep.7.o parser.sep.8.o parser.sep.9.o parser.sep.10.o parser.sep.11.o parser.sep.12.o parser.sep.13.o parser.sep.14.o parser.sep.15.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o lexer.sep.1.o parser_nodes.sep.1.o parser_nodes.sep.2.o location.sep.1.o posix.sep.1.o string.sep.1.o collection.sep.1.o abstract_collection.sep.1.o kernel.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o ropes.sep.1.o file.sep.1.o stream.sep.1.o string_search.sep.1.o time.sep.1.o environ.sep.1.o exec.sep.1.o math.sep.1.o gc.sep.1.o tables.sep.1.o model.sep.1.o poset.sep.1.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o opts.sep.1.o toolcontext.sep.1.o phase.sep.1.o frontend.sep.1.o simple_misc_analysis.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_class.sep.1.o auto_super_init.sep.1.o div_by_zero.sep.1.o cached.sep.1.o parser_util.sep.1.o serialization_phase.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o rapid_type_analysis.sep.1.o global_compiler.sep.1.o global_compiler.sep.2.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o separate_erasure_compiler.sep.1.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o layout_builders.sep.1.o collect_super_sends.sep.1.o nitg.types.1.o nitg.types.2.o nitg.types.3.o nitg.types.4.o nitg.types.5.o nitg.types.6.o nitg.types.7.o string_nit.extern.o file_nit.extern.o stream_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o gc_chooser.extern.o
	$(CC) $(LDFLAGS) -o ../c_src2/nitg nitg.classes.1.o nitg.classes.2.o nitg.classes.3.o nitg.classes.4.o nitg.classes.5.o nitg.classes.6.o nitg.classes.7.o nitg.classes.8.o nitg.classes.9.o nitg.classes.10.o nitg.main.1.o nitg.sep.1.o modelbuilder.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser.sep.7.o parser.sep.8.o parser.sep.9.o parser.sep.10.o parser.sep.11.o parser.sep.12.o parser.sep.13.o parser.sep.14.o parser.sep.15.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o lexer.sep.1.o parser_nodes.sep.1.o parser_nodes.sep.2.o location.sep.1.o posix.sep.1.o string.sep.1.o collection.sep.1.o abstract_collection.sep.1.o kernel.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o ropes.sep.1.o file.sep.1.o stream.sep.1.o string_search.sep.1.o time.sep.1.o environ.sep.1.o exec.sep.1.o math.sep.1.o gc.sep.1.o tables.sep.1.o model.sep.1.o poset.sep.1.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o opts.sep.1.o toolcontext.sep.1.o phase.sep.1.o frontend.sep.1.o simple_misc_analysis.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_class.sep.1.o auto_super_init.sep.1.o div_by_zero.sep.1.o cached.sep.1.o parser_util.sep.1.o serialization_phase.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o rapid_type_analysis.sep.1.o global_compiler.sep.1.o global_compiler.sep.2.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o separate_erasure_compiler.sep.1.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o layout_builders.sep.1.o collect_super_sends.sep.1.o nitg.types.1.o nitg.types.2.o nitg.types.3.o nitg.types.4.o nitg.types.5.o nitg.types.6.o nitg.types.7.o string_nit.extern.o file_nit.extern.o stream_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o gc_chooser.extern.o $(LDLIBS)

clean:
	rm nitg.classes.1.o nitg.classes.2.o nitg.classes.3.o nitg.classes.4.o nitg.classes.5.o nitg.classes.6.o nitg.classes.7.o nitg.classes.8.o nitg.classes.9.o nitg.classes.10.o nitg.main.1.o nitg.sep.1.o modelbuilder.sep.1.o parser.sep.1.o parser.sep.2.o parser.sep.3.o parser.sep.4.o parser.sep.5.o parser.sep.6.o parser.sep.7.o parser.sep.8.o parser.sep.9.o parser.sep.10.o parser.sep.11.o parser.sep.12.o parser.sep.13.o parser.sep.14.o parser.sep.15.o parser_prod.sep.1.o parser_prod.sep.2.o parser_prod.sep.3.o parser_prod.sep.4.o parser_prod.sep.5.o lexer.sep.1.o parser_nodes.sep.1.o parser_nodes.sep.2.o location.sep.1.o posix.sep.1.o string.sep.1.o collection.sep.1.o abstract_collection.sep.1.o kernel.sep.1.o range.sep.1.o list.sep.1.o array.sep.1.o sorter.sep.1.o hash_collection.sep.1.o ropes.sep.1.o file.sep.1.o stream.sep.1.o string_search.sep.1.o time.sep.1.o environ.sep.1.o exec.sep.1.o math.sep.1.o gc.sep.1.o tables.sep.1.o model.sep.1.o poset.sep.1.o mmodule.sep.1.o mproject.sep.1.o model_base.sep.1.o more_collections.sep.1.o opts.sep.1.o toolcontext.sep.1.o phase.sep.1.o frontend.sep.1.o simple_misc_analysis.sep.1.o literal.sep.1.o scope.sep.1.o flow.sep.1.o local_var_init.sep.1.o typing.sep.1.o typing.sep.2.o modelize_property.sep.1.o modelize_class.sep.1.o auto_super_init.sep.1.o div_by_zero.sep.1.o cached.sep.1.o parser_util.sep.1.o serialization_phase.sep.1.o transform.sep.1.o astbuilder.sep.1.o astvalidation.sep.1.o rapid_type_analysis.sep.1.o global_compiler.sep.1.o global_compiler.sep.2.o abstract_compiler.sep.1.o abstract_compiler.sep.2.o abstract_compiler.sep.3.o separate_erasure_compiler.sep.1.o separate_compiler.sep.1.o separate_compiler.sep.2.o separate_compiler.sep.3.o layout_builders.sep.1.o collect_super_sends.sep.1.o nitg.types.1.o nitg.types.2.o nitg.types.3.o nitg.types.4.o nitg.types.5.o nitg.types.6.o nitg.types.7.o string_nit.extern.o file_nit.extern.o stream_nit.extern.o time_nit.extern.o exec_nit.extern.o tables_nit.extern.o gc_chooser.extern.o 2>/dev/null

