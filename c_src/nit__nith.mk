CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes
CINCL =
LDFLAGS ?= 
LDLIBS  ?= -lm 


# SPECIAL CONFIGURATION FLAGS
NO_STACKTRACE= # Set to `True` to enable

uname_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')
clang_check := $(shell sh -c '$(CC) -v 2>&1 | grep -q clang; echo $$?')
ifeq ($(clang_check), 0)
	CFLAGS += -Qunused-arguments
endif
ifneq ($(NO_STACKTRACE), True)
  # Check and include lib-unwind in a portable way
  ifneq ($(uname_S),Darwin)
    # already included on macosx, but need to get the correct flags in other supported platforms.
    ifeq ($(shell pkg-config --exists 'libunwind'; echo $$?), 0)
      LDLIBS += `pkg-config --libs libunwind`
      CFLAGS += `pkg-config --cflags libunwind`
    else
      $(warning "[_] stack-traces disabled. Please install libunwind-dev.")
      CFLAGS += -D NO_STACKTRACE
    endif
  endif
else
  # Stacktraces disabled
  CFLAGS += -D NO_STACKTRACE
endif

all: nitg

nit__nith.classes.1.o: nit__nith.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.1.o nit__nith.classes.1.c

nit__nith.classes.2.o: nit__nith.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.2.o nit__nith.classes.2.c

nit__nith.classes.3.o: nit__nith.classes.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.3.o nit__nith.classes.3.c

nit__nith.classes.4.o: nit__nith.classes.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.4.o nit__nith.classes.4.c

nit__nith.classes.5.o: nit__nith.classes.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.5.o nit__nith.classes.5.c

nit__nith.classes.6.o: nit__nith.classes.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.classes.6.o nit__nith.classes.6.c

nit__nith.main.1.o: nit__nith.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.main.1.o nit__nith.main.1.c

nit__nith.sep.1.o: nit__nith.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.sep.1.o nit__nith.sep.1.c

nit__modelize_property.sep.1.o: nit__modelize_property.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_property.sep.1.o nit__modelize_property.sep.1.c

nit__modelize_property.sep.2.o: nit__modelize_property.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_property.sep.2.o nit__modelize_property.sep.2.c

nit__modelize_property.sep.3.o: nit__modelize_property.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_property.sep.3.o nit__modelize_property.sep.3.c

nit__modelize_class.sep.1.o: nit__modelize_class.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelize_class.sep.1.o nit__modelize_class.sep.1.c

nit__modelbuilder.sep.1.o: nit__modelbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelbuilder.sep.1.o nit__modelbuilder.sep.1.c

nit__loader.sep.1.o: nit__loader.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__loader.sep.1.o nit__loader.sep.1.c

nit__modelbuilder_base.sep.1.o: nit__modelbuilder_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__modelbuilder_base.sep.1.o nit__modelbuilder_base.sep.1.c

nit__model.sep.1.o: nit__model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model.sep.1.o nit__model.sep.1.c

nit__model.sep.2.o: nit__model.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model.sep.2.o nit__model.sep.2.c

nit__mmodule.sep.1.o: nit__mmodule.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mmodule.sep.1.o nit__mmodule.sep.1.c

nit__location.sep.1.o: nit__location.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__location.sep.1.o nit__location.sep.1.c

standard__string.sep.1.o: standard__string.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string.sep.1.o standard__string.sep.1.c

standard__string.sep.2.o: standard__string.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string.sep.2.o standard__string.sep.2.c

standard__math.sep.1.o: standard__math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__math.sep.1.o standard__math.sep.1.c

standard__kernel.sep.1.o: standard__kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__kernel.sep.1.o standard__kernel.sep.1.c

standard__abstract_collection.sep.1.o: standard__abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__abstract_collection.sep.1.o standard__abstract_collection.sep.1.c

standard__list.sep.1.o: standard__list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__list.sep.1.o standard__list.sep.1.c

standard__array.sep.1.o: standard__array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__array.sep.1.o standard__array.sep.1.c

standard__sorter.sep.1.o: standard__sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__sorter.sep.1.o standard__sorter.sep.1.c

standard__hash_collection.sep.1.o: standard__hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__hash_collection.sep.1.o standard__hash_collection.sep.1.c

standard__environ.sep.1.o: standard__environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__environ.sep.1.o standard__environ.sep.1.c

standard__file.sep.1.o: standard__file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__file.sep.1.o standard__file.sep.1.c

standard__stream.sep.1.o: standard__stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__stream.sep.1.o standard__stream.sep.1.c

standard__ropes.sep.1.o: standard__ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__ropes.sep.1.o standard__ropes.sep.1.c

standard__error.sep.1.o: standard__error.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__error.sep.1.o standard__error.sep.1.c

standard__bytes.sep.1.o: standard__bytes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__bytes.sep.1.o standard__bytes.sep.1.c

standard__string_search.sep.1.o: standard__string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__string_search.sep.1.o standard__string_search.sep.1.c

standard__time.sep.1.o: standard__time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__time.sep.1.o standard__time.sep.1.c

standard__exec.sep.1.o: standard__exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o standard__exec.sep.1.o standard__exec.sep.1.c

nit__mproject.sep.1.o: nit__mproject.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mproject.sep.1.o nit__mproject.sep.1.c

nit__model_base.sep.1.o: nit__model_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__model_base.sep.1.o nit__model_base.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o more_collections.sep.1.o more_collections.sep.1.c

poset.sep.1.o: poset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o poset.sep.1.o poset.sep.1.c

nit__mdoc.sep.1.o: nit__mdoc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mdoc.sep.1.o nit__mdoc.sep.1.c

ordered_tree.sep.1.o: ordered_tree.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o ordered_tree.sep.1.o ordered_tree.sep.1.c

nit__toolcontext.sep.1.o: nit__toolcontext.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__toolcontext.sep.1.o nit__toolcontext.sep.1.c

opts.sep.1.o: opts.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o opts.sep.1.o opts.sep.1.c

nit__version.sep.1.o: nit__version.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__version.sep.1.o nit__version.sep.1.c

template.sep.1.o: template.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o template.sep.1.o template.sep.1.c

nit__parser.sep.1.o: nit__parser.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.1.o nit__parser.sep.1.c

nit__parser.sep.2.o: nit__parser.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.2.o nit__parser.sep.2.c

nit__parser.sep.3.o: nit__parser.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.3.o nit__parser.sep.3.c

nit__parser.sep.4.o: nit__parser.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.4.o nit__parser.sep.4.c

nit__parser.sep.5.o: nit__parser.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.5.o nit__parser.sep.5.c

nit__parser.sep.6.o: nit__parser.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser.sep.6.o nit__parser.sep.6.c

nit__parser_prod.sep.1.o: nit__parser_prod.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.1.o nit__parser_prod.sep.1.c

nit__parser_prod.sep.2.o: nit__parser_prod.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.2.o nit__parser_prod.sep.2.c

nit__parser_prod.sep.3.o: nit__parser_prod.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.3.o nit__parser_prod.sep.3.c

nit__parser_prod.sep.4.o: nit__parser_prod.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.4.o nit__parser_prod.sep.4.c

nit__parser_prod.sep.5.o: nit__parser_prod.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.5.o nit__parser_prod.sep.5.c

nit__parser_prod.sep.6.o: nit__parser_prod.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_prod.sep.6.o nit__parser_prod.sep.6.c

nit__lexer.sep.1.o: nit__lexer.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__lexer.sep.1.o nit__lexer.sep.1.c

nit__parser_nodes.sep.1.o: nit__parser_nodes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_nodes.sep.1.o nit__parser_nodes.sep.1.c

nit__lexer_work.sep.1.o: nit__lexer_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__lexer_work.sep.1.o nit__lexer_work.sep.1.c

nit__tables.sep.1.o: nit__tables.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__tables.sep.1.o nit__tables.sep.1.c

nit__parser_work.sep.1.o: nit__parser_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__parser_work.sep.1.o nit__parser_work.sep.1.c

nit__phase.sep.1.o: nit__phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__phase.sep.1.o nit__phase.sep.1.c

nit__annotation.sep.1.o: nit__annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__annotation.sep.1.o nit__annotation.sep.1.c

nit__literal.sep.1.o: nit__literal.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__literal.sep.1.o nit__literal.sep.1.c

nit__transform.sep.1.o: nit__transform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__transform.sep.1.o nit__transform.sep.1.c

nit__astbuilder.sep.1.o: nit__astbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__astbuilder.sep.1.o nit__astbuilder.sep.1.c

nit__typing.sep.1.o: nit__typing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__typing.sep.1.o nit__typing.sep.1.c

nit__typing.sep.2.o: nit__typing.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__typing.sep.2.o nit__typing.sep.2.c

nit__typing.sep.3.o: nit__typing.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__typing.sep.3.o nit__typing.sep.3.c

nit__local_var_init.sep.1.o: nit__local_var_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__local_var_init.sep.1.o nit__local_var_init.sep.1.c

nit__flow.sep.1.o: nit__flow.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__flow.sep.1.o nit__flow.sep.1.c

nit__scope.sep.1.o: nit__scope.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__scope.sep.1.o nit__scope.sep.1.c

nit__astvalidation.sep.1.o: nit__astvalidation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__astvalidation.sep.1.o nit__astvalidation.sep.1.c

nit__auto_super_init.sep.1.o: nit__auto_super_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__auto_super_init.sep.1.o nit__auto_super_init.sep.1.c

nit__rapid_type_analysis.sep.1.o: nit__rapid_type_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__rapid_type_analysis.sep.1.o nit__rapid_type_analysis.sep.1.c

csv.sep.1.o: csv.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o csv.sep.1.o csv.sep.1.c

nit__separate_erasure_compiler.sep.1.o: nit__separate_erasure_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_erasure_compiler.sep.1.o nit__separate_erasure_compiler.sep.1.c

nit__separate_erasure_compiler.sep.2.o: nit__separate_erasure_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_erasure_compiler.sep.2.o nit__separate_erasure_compiler.sep.2.c

nit__separate_compiler.sep.1.o: nit__separate_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_compiler.sep.1.o nit__separate_compiler.sep.1.c

nit__separate_compiler.sep.2.o: nit__separate_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_compiler.sep.2.o nit__separate_compiler.sep.2.c

nit__separate_compiler.sep.3.o: nit__separate_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_compiler.sep.3.o nit__separate_compiler.sep.3.c

nit__separate_compiler.sep.4.o: nit__separate_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_compiler.sep.4.o nit__separate_compiler.sep.4.c

nit__separate_compiler.sep.5.o: nit__separate_compiler.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__separate_compiler.sep.5.o nit__separate_compiler.sep.5.c

nit__abstract_compiler.sep.1.o: nit__abstract_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__abstract_compiler.sep.1.o nit__abstract_compiler.sep.1.c

nit__abstract_compiler.sep.2.o: nit__abstract_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__abstract_compiler.sep.2.o nit__abstract_compiler.sep.2.c

nit__abstract_compiler.sep.3.o: nit__abstract_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__abstract_compiler.sep.3.o nit__abstract_compiler.sep.3.c

nit__abstract_compiler.sep.4.o: nit__abstract_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__abstract_compiler.sep.4.o nit__abstract_compiler.sep.4.c

nit__abstract_compiler.sep.5.o: nit__abstract_compiler.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__abstract_compiler.sep.5.o nit__abstract_compiler.sep.5.c

nit__platform.sep.1.o: nit__platform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__platform.sep.1.o nit__platform.sep.1.c

nit__c_tools.sep.1.o: nit__c_tools.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__c_tools.sep.1.o nit__c_tools.sep.1.c

nit__mixin.sep.1.o: nit__mixin.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__mixin.sep.1.o nit__mixin.sep.1.c

counter.sep.1.o: counter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o counter.sep.1.o counter.sep.1.c

nit__coloring.sep.1.o: nit__coloring.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__coloring.sep.1.o nit__coloring.sep.1.c

nit__light_only.sep.1.o: nit__light_only.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__light_only.sep.1.o nit__light_only.sep.1.c

nit__light.sep.1.o: nit__light.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__light.sep.1.o nit__light.sep.1.c

nit__light_ffi.sep.1.o: nit__light_ffi.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__light_ffi.sep.1.o nit__light_ffi.sep.1.c

nit__nitni_utilities.sep.1.o: nit__nitni_utilities.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nitni_utilities.sep.1.o nit__nitni_utilities.sep.1.c

nit__nitni_base.sep.1.o: nit__nitni_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nitni_base.sep.1.o nit__nitni_base.sep.1.c

nit__light_ffi_base.sep.1.o: nit__light_ffi_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__light_ffi_base.sep.1.o nit__light_ffi_base.sep.1.c

nit__extern_classes.sep.1.o: nit__extern_classes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__extern_classes.sep.1.o nit__extern_classes.sep.1.c

nit__light_c.sep.1.o: nit__light_c.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__light_c.sep.1.o nit__light_c.sep.1.c

nit__nith.types.1.o: nit__nith.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.1.o nit__nith.types.1.c

nit__nith.types.2.o: nit__nith.types.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.2.o nit__nith.types.2.c

nit__nith.types.3.o: nit__nith.types.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.3.o nit__nith.types.3.c

nit__nith.types.4.o: nit__nith.types.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.4.o nit__nith.types.4.c

nit__nith.types.5.o: nit__nith.types.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.5.o nit__nith.types.5.c

nit__nith.types.6.o: nit__nith.types.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.6.o nit__nith.types.6.c

nit__nith.types.7.o: nit__nith.types.7.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.7.o nit__nith.types.7.c

nit__nith.types.8.o: nit__nith.types.8.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.8.o nit__nith.types.8.c

nit__nith.types.9.o: nit__nith.types.9.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.9.o nit__nith.types.9.c

nit__nith.types.10.o: nit__nith.types.10.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.10.o nit__nith.types.10.c

nit__nith.types.11.o: nit__nith.types.11.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.11.o nit__nith.types.11.c

nit__nith.types.12.o: nit__nith.types.12.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.12.o nit__nith.types.12.c

nit__nith.types.13.o: nit__nith.types.13.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.13.o nit__nith.types.13.c

nit__nith.types.14.o: nit__nith.types.14.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.14.o nit__nith.types.14.c

nit__nith.types.15.o: nit__nith.types.15.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.15.o nit__nith.types.15.c

nit__nith.types.16.o: nit__nith.types.16.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.16.o nit__nith.types.16.c

nit__nith.types.17.o: nit__nith.types.17.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.17.o nit__nith.types.17.c

nit__nith.types.18.o: nit__nith.types.18.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.18.o nit__nith.types.18.c

nit__nith.types.19.o: nit__nith.types.19.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.19.o nit__nith.types.19.c

nit__nith.types.20.o: nit__nith.types.20.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.20.o nit__nith.types.20.c

nit__nith.types.21.o: nit__nith.types.21.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nit__nith.types.21.o nit__nith.types.21.c

# does pkg-config exists?
ifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)
$(error "Command `pkg-config` not found. Please install it")
endif
# Check for library bdw-gc
ifneq ($(shell pkg-config --exists 'bdw-gc'; echo $$?), 0)
$(error "pkg-config: package bdw-gc is not found.")
endif
time_nit.extern.o: time_nit.c
	$(CC) $(CFLAGS) -Wall   -c -o time_nit.extern.o time_nit.c

string_nit.extern.o: string_nit.c
	$(CC) $(CFLAGS) -Wall   -c -o string_nit.extern.o string_nit.c

file_nit.extern.o: file_nit.c
	$(CC) $(CFLAGS) -Wall   -c -o file_nit.extern.o file_nit.c

exec_nit.extern.o: exec_nit.c
	$(CC) $(CFLAGS) -Wall   -c -o exec_nit.extern.o exec_nit.c

tables_nit.extern.o: tables_nit.c
	$(CC) $(CFLAGS) -Wall   -c -o tables_nit.extern.o tables_nit.c

c_functions_hash.extern.o: c_functions_hash.c
	$(CC) $(CFLAGS) -Wall   -c -o c_functions_hash.extern.o c_functions_hash.c

gc_chooser.extern.o: gc_chooser.c
	$(CC) $(CFLAGS) -Wall -DWITH_LIBGC `pkg-config --cflags bdw-gc` -c -o gc_chooser.extern.o gc_chooser.c

nitg: nit__nith.classes.1.o nit__nith.classes.2.o nit__nith.classes.3.o nit__nith.classes.4.o nit__nith.classes.5.o nit__nith.classes.6.o nit__nith.main.1.o nit__nith.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_property.sep.3.o nit__modelize_class.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__bytes.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__exec.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__parser_prod.sep.5.o nit__parser_prod.sep.6.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__annotation.sep.1.o nit__literal.sep.1.o nit__transform.sep.1.o nit__astbuilder.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__typing.sep.3.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__astvalidation.sep.1.o nit__auto_super_init.sep.1.o nit__rapid_type_analysis.sep.1.o csv.sep.1.o nit__separate_erasure_compiler.sep.1.o nit__separate_erasure_compiler.sep.2.o nit__separate_compiler.sep.1.o nit__separate_compiler.sep.2.o nit__separate_compiler.sep.3.o nit__separate_compiler.sep.4.o nit__separate_compiler.sep.5.o nit__abstract_compiler.sep.1.o nit__abstract_compiler.sep.2.o nit__abstract_compiler.sep.3.o nit__abstract_compiler.sep.4.o nit__abstract_compiler.sep.5.o nit__platform.sep.1.o nit__c_tools.sep.1.o nit__mixin.sep.1.o counter.sep.1.o nit__coloring.sep.1.o nit__light_only.sep.1.o nit__light.sep.1.o nit__light_ffi.sep.1.o nit__nitni_utilities.sep.1.o nit__nitni_base.sep.1.o nit__light_ffi_base.sep.1.o nit__extern_classes.sep.1.o nit__light_c.sep.1.o nit__nith.types.1.o nit__nith.types.2.o nit__nith.types.3.o nit__nith.types.4.o nit__nith.types.5.o nit__nith.types.6.o nit__nith.types.7.o nit__nith.types.8.o nit__nith.types.9.o nit__nith.types.10.o nit__nith.types.11.o nit__nith.types.12.o nit__nith.types.13.o nit__nith.types.14.o nit__nith.types.15.o nit__nith.types.16.o nit__nith.types.17.o nit__nith.types.18.o nit__nith.types.19.o nit__nith.types.20.o nit__nith.types.21.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o
	$(CC) $(LDFLAGS) -o 'nitg' nit__nith.classes.1.o nit__nith.classes.2.o nit__nith.classes.3.o nit__nith.classes.4.o nit__nith.classes.5.o nit__nith.classes.6.o nit__nith.main.1.o nit__nith.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_property.sep.3.o nit__modelize_class.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__bytes.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__exec.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__parser_prod.sep.5.o nit__parser_prod.sep.6.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__annotation.sep.1.o nit__literal.sep.1.o nit__transform.sep.1.o nit__astbuilder.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__typing.sep.3.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__astvalidation.sep.1.o nit__auto_super_init.sep.1.o nit__rapid_type_analysis.sep.1.o csv.sep.1.o nit__separate_erasure_compiler.sep.1.o nit__separate_erasure_compiler.sep.2.o nit__separate_compiler.sep.1.o nit__separate_compiler.sep.2.o nit__separate_compiler.sep.3.o nit__separate_compiler.sep.4.o nit__separate_compiler.sep.5.o nit__abstract_compiler.sep.1.o nit__abstract_compiler.sep.2.o nit__abstract_compiler.sep.3.o nit__abstract_compiler.sep.4.o nit__abstract_compiler.sep.5.o nit__platform.sep.1.o nit__c_tools.sep.1.o nit__mixin.sep.1.o counter.sep.1.o nit__coloring.sep.1.o nit__light_only.sep.1.o nit__light.sep.1.o nit__light_ffi.sep.1.o nit__nitni_utilities.sep.1.o nit__nitni_base.sep.1.o nit__light_ffi_base.sep.1.o nit__extern_classes.sep.1.o nit__light_c.sep.1.o nit__nith.types.1.o nit__nith.types.2.o nit__nith.types.3.o nit__nith.types.4.o nit__nith.types.5.o nit__nith.types.6.o nit__nith.types.7.o nit__nith.types.8.o nit__nith.types.9.o nit__nith.types.10.o nit__nith.types.11.o nit__nith.types.12.o nit__nith.types.13.o nit__nith.types.14.o nit__nith.types.15.o nit__nith.types.16.o nit__nith.types.17.o nit__nith.types.18.o nit__nith.types.19.o nit__nith.types.20.o nit__nith.types.21.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o $(LDLIBS) `pkg-config --libs bdw-gc`

clean:
	rm nit__nith.classes.1.o nit__nith.classes.2.o nit__nith.classes.3.o nit__nith.classes.4.o nit__nith.classes.5.o nit__nith.classes.6.o nit__nith.main.1.o nit__nith.sep.1.o nit__modelize_property.sep.1.o nit__modelize_property.sep.2.o nit__modelize_property.sep.3.o nit__modelize_class.sep.1.o nit__modelbuilder.sep.1.o nit__loader.sep.1.o nit__modelbuilder_base.sep.1.o nit__model.sep.1.o nit__model.sep.2.o nit__mmodule.sep.1.o nit__location.sep.1.o standard__string.sep.1.o standard__string.sep.2.o standard__math.sep.1.o standard__kernel.sep.1.o standard__abstract_collection.sep.1.o standard__list.sep.1.o standard__array.sep.1.o standard__sorter.sep.1.o standard__hash_collection.sep.1.o standard__environ.sep.1.o standard__file.sep.1.o standard__stream.sep.1.o standard__ropes.sep.1.o standard__error.sep.1.o standard__bytes.sep.1.o standard__string_search.sep.1.o standard__time.sep.1.o standard__exec.sep.1.o nit__mproject.sep.1.o nit__model_base.sep.1.o more_collections.sep.1.o poset.sep.1.o nit__mdoc.sep.1.o ordered_tree.sep.1.o nit__toolcontext.sep.1.o opts.sep.1.o nit__version.sep.1.o template.sep.1.o nit__parser.sep.1.o nit__parser.sep.2.o nit__parser.sep.3.o nit__parser.sep.4.o nit__parser.sep.5.o nit__parser.sep.6.o nit__parser_prod.sep.1.o nit__parser_prod.sep.2.o nit__parser_prod.sep.3.o nit__parser_prod.sep.4.o nit__parser_prod.sep.5.o nit__parser_prod.sep.6.o nit__lexer.sep.1.o nit__parser_nodes.sep.1.o nit__lexer_work.sep.1.o nit__tables.sep.1.o nit__parser_work.sep.1.o nit__phase.sep.1.o nit__annotation.sep.1.o nit__literal.sep.1.o nit__transform.sep.1.o nit__astbuilder.sep.1.o nit__typing.sep.1.o nit__typing.sep.2.o nit__typing.sep.3.o nit__local_var_init.sep.1.o nit__flow.sep.1.o nit__scope.sep.1.o nit__astvalidation.sep.1.o nit__auto_super_init.sep.1.o nit__rapid_type_analysis.sep.1.o csv.sep.1.o nit__separate_erasure_compiler.sep.1.o nit__separate_erasure_compiler.sep.2.o nit__separate_compiler.sep.1.o nit__separate_compiler.sep.2.o nit__separate_compiler.sep.3.o nit__separate_compiler.sep.4.o nit__separate_compiler.sep.5.o nit__abstract_compiler.sep.1.o nit__abstract_compiler.sep.2.o nit__abstract_compiler.sep.3.o nit__abstract_compiler.sep.4.o nit__abstract_compiler.sep.5.o nit__platform.sep.1.o nit__c_tools.sep.1.o nit__mixin.sep.1.o counter.sep.1.o nit__coloring.sep.1.o nit__light_only.sep.1.o nit__light.sep.1.o nit__light_ffi.sep.1.o nit__nitni_utilities.sep.1.o nit__nitni_base.sep.1.o nit__light_ffi_base.sep.1.o nit__extern_classes.sep.1.o nit__light_c.sep.1.o nit__nith.types.1.o nit__nith.types.2.o nit__nith.types.3.o nit__nith.types.4.o nit__nith.types.5.o nit__nith.types.6.o nit__nith.types.7.o nit__nith.types.8.o nit__nith.types.9.o nit__nith.types.10.o nit__nith.types.11.o nit__nith.types.12.o nit__nith.types.13.o nit__nith.types.14.o nit__nith.types.15.o nit__nith.types.16.o nit__nith.types.17.o nit__nith.types.18.o nit__nith.types.19.o nit__nith.types.20.o nit__nith.types.21.o time_nit.extern.o string_nit.extern.o file_nit.extern.o exec_nit.extern.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o 2>/dev/null
