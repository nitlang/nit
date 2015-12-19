# NAME

nitx - displays specific pieces of API information from Nit source files.

# SYNOPSIS

nitx [*options*] FILE [COMMAND]

# DESCRIPTION

`nitx` in an interactive tool that displays informations about programs and libraries.

A command that query some information can be given as parameter.
This will immediately displays the information then terminates the programs.

If no command are given, the program starts an interactive session where commands are entered until `:q` is given.

# COMMANDS

### `name`
lookup module, class and property with the corresponding 'name'.

### `param: Type`
lookup methods using the corresponding 'Type' as parameter.

### `return: Type`
lookup methods returning the corresponding 'Type'.

### `new: Type`
lookup methods creating new instances of 'Type'.

### `call: Property`
lookup calls to 'Property'.

### `doc: name`
lookup documentation pages about 'name'.

### `code: name`
lookup source code related to 'name'.

### `keywords: query`
lookup entities with a documentation that matches 'query'.

### `:h`
display an help message about the commands.

### `:q`
exit the tool.

# OPTIONS

### `-c`, `--command`
Nitx command to perform.

Execute a command, display results in the console, then quit.

### `--no-attributes`
Ignore the attributes.

### `--private`
Also generate private API.

### `--nlp`
Use NLP phases (default is `no`).

Because the NLP processing can be long for big projects, these phases
are disabled by default.

### `--cp`
Java classpath for StanfordNLP jars.

# FEATURES

## NLP Queries

Thanks to the nit `nlp` library, `nitx` is able to parse natural language queries
and lookup entities with comments that matches.

Usage:

~~~raw
./nitx --nlp --cp "/path/to/stanford_core_nlp/*" lib/
>> keywords: shortest path in a graph
# 9 result(s) for 'keywords: shortest path in a graph'

 M a_star # A* pathfinding in graphs
   a_star::a_star
   module a_star
   lib/a_star.nit:17,1--411,3

 M graph # Provides an interface for services on a Neo4j graphs.
   neo4j::graph::graph
   module graph
   lib/neo4j/graph/graph.nit:11,1--278,3

 M json_graph_store # Provides JSON as a mean to store graphs.
   neo4j::graph::json_graph_store
   module json_graph_store
   lib/neo4j/graph/json_graph_store.nit:11,1--321,3
~~~

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
