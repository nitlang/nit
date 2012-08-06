#!/bin/sh

# Script to call valgrind with the right options

# Disable GC to avoid unpredictable long news (those that trigger the GC)
NIT_GC_OPTION=malloc
export NIT_GC_OPTION

# Skip usual methods with blocks to avoid loops
exec valgrind --tool=callgrind --fn-skip=array___Array___iterate --fn-skip=abstract_collection___Collection___iterate --fn-skip=parser_prod___Visitor___enter_visit --fn-skip=standard___collection___abstract_collection___Collection___iterate --fn-skip=standard___collection___array___Array___iterate "$@"
