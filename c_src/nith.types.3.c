#include "nith.types.0.h"
const struct types resolution_table_array__Arrayparser_nodes__AContinueExpr = {
0, /* dummy */
{
&type_parser_nodes__AContinueExpr, /* Sequence#0: AContinueExpr */
&type_parser_nodes__AContinueExpr, /* SimpleCollection#0: AContinueExpr */
&type_array__NativeArrayparser_nodes__AContinueExpr, /* NativeArray[Array#0]: NativeArray[AContinueExpr] */
&type_array__Arrayparser_nodes__AContinueExpr, /* Array[Array#0]: Array[AContinueExpr] */
&type_array__NativeArrayparser_nodes__AContinueExpr, /* NativeArray[ArrayCapable#0]: NativeArray[AContinueExpr] */
&type_parser_nodes__AContinueExpr, /* RemovableCollection#0: AContinueExpr */
&type_abstract_collection__Collectionparser_nodes__AContinueExpr, /* Collection[Sequence#0]: Collection[AContinueExpr] */
&type_abstract_collection__Collectionparser_nodes__AContinueExpr, /* Collection[SimpleCollection#0]: Collection[AContinueExpr] */
&type_parser_nodes__AContinueExpr, /* Collection#0: AContinueExpr */
&type_abstract_collection__Collectionparser_nodes__AContinueExpr, /* Collection[Collection#0]: Collection[AContinueExpr] */
&type_parser_nodes__AContinueExpr, /* SequenceRead#0: AContinueExpr */
&type_parser_nodes__AContinueExpr, /* AbstractArrayRead#0: AContinueExpr */
&type_array__Arrayparser_nodes__AContinueExpr, /* Array[AbstractArrayRead#0]: Array[AContinueExpr] */
&type_array__ArrayIteratorparser_nodes__AContinueExpr, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AContinueExpr] */
}
};
/* runtime type Collection[AContinueExpr] */
const struct type type_abstract_collection__Collectionparser_nodes__AContinueExpr = {
1795,
"Collection[AContinueExpr]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[AContinueExpr] */
const struct type type_array__AbstractArrayReadparser_nodes__AContinueExpr = {
2169,
"AbstractArrayRead[AContinueExpr]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AVarExpr */
const struct type type_parser_nodes__AVarExpr = {
-1, /*CAST DEAD*/
"AVarExpr", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
8,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
191, /* nullable AExpr */
622, /* ANode */
1328, /* Prod */
1698, /* AExpr */
1996, /* AVarExpr */
},
};
/* runtime type AVarAssignExpr */
const struct type type_parser_nodes__AVarAssignExpr = {
-1, /*CAST DEAD*/
"AVarAssignExpr", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
8,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
191, /* nullable AExpr */
622, /* ANode */
1328, /* Prod */
1698, /* AExpr */
1997, /* AVarAssignExpr */
},
};
/* runtime type AVarReassignExpr */
const struct type type_parser_nodes__AVarReassignExpr = {
-1, /*CAST DEAD*/
"AVarReassignExpr", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
8,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
191, /* nullable AExpr */
622, /* ANode */
1328, /* Prod */
1698, /* AExpr */
1998, /* AVarReassignExpr */
},
};
/* runtime type EscapeMark */
const struct type type_scope__EscapeMark = {
1016,
"EscapeMark", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
15, /* nullable EscapeMark */
1016, /* EscapeMark */
},
};
/* runtime type nullable EscapeMark */
const struct type type_nullable_scope__EscapeMark = {
15,
"nullable EscapeMark", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MPropDefSorter */
const struct type type_model__MPropDefSorter = {
-1, /*CAST DEAD*/
"MPropDefSorter", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_model__MPropDefSorter,
3,
{
0, /* nullable Object */
1, /* Object */
287, /* MPropDefSorter */
},
};
const struct types resolution_table_model__MPropDefSorter = {
0, /* dummy */
{
NULL, /* empty */
&type_array__Arraymodel__MPropDef, /* Array[Comparator#0]: Array[MPropDef] */
}
};
/* runtime type APlaceholderExpr */
const struct type type_astbuilder__APlaceholderExpr = {
-1, /*CAST DEAD*/
"APlaceholderExpr", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
8,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
191, /* nullable AExpr */
622, /* ANode */
1328, /* Prod */
1698, /* AExpr */
1999, /* APlaceholderExpr */
},
};
/* runtime type ArraySet[MMethodDef] */
const struct type type_array__ArraySetmodel__MMethodDef = {
-1, /*CAST DEAD*/
"ArraySet[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetmodel__MMethodDef,
16,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
120, /* Collection[nullable MPropDef] */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
-1, /* empty */
1476, /* Set[PropertyLayoutElement] */
1477, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
1656, /* Collection[MMethodDef] */
2109, /* Set[MMethodDef] */
2130, /* ArraySet[MMethodDef] */
},
};
const struct types resolution_table_array__ArraySetmodel__MMethodDef = {
0, /* dummy */
{
&type_array__ArraySetIteratormodel__MMethodDef, /* ArraySetIterator[ArraySet#0]: ArraySetIterator[MMethodDef] */
&type_model__MMethodDef, /* SimpleCollection#0: MMethodDef */
&type_array__Arraymodel__MMethodDef, /* Array[ArraySet#0]: Array[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Set#0]: Collection[MMethodDef] */
NULL, /* empty */
&type_model__MMethodDef, /* RemovableCollection#0: MMethodDef */
NULL, /* empty */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[SimpleCollection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
}
};
/* runtime type ArrayIterator[Message] */
const struct type type_array__ArrayIteratortoolcontext__Message = {
-1, /*CAST DEAD*/
"ArrayIterator[Message]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratortoolcontext__Message,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1017, /* ArrayIterator[Message] */
},
};
const struct types resolution_table_array__ArrayIteratortoolcontext__Message = {
0, /* dummy */
{
&type_array__Arraytoolcontext__Message, /* Array[Iterator#0]: Array[Message] */
&type_array__AbstractArrayReadtoolcontext__Message, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Message] */
}
};
/* runtime type ArrayIterator[Object] */
const struct type type_array__ArrayIteratorkernel__Object = {
-1, /*CAST DEAD*/
"ArrayIterator[Object]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorkernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
},
};
const struct types resolution_table_array__ArrayIteratorkernel__Object = {
0, /* dummy */
{
&type_array__Arraykernel__Object, /* Array[Iterator#0]: Array[Object] */
&type_array__AbstractArrayReadkernel__Object, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Object] */
}
};
/* runtime type NativeArray[Message] */
const struct type type_array__NativeArraytoolcontext__Message = {
1018,
"NativeArray[Message]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraytoolcontext__Message,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1018, /* NativeArray[Message] */
},
};
const struct types resolution_table_array__NativeArraytoolcontext__Message = {
0, /* dummy */
{
&type_toolcontext__Message, /* NativeArray#0: Message */
&type_array__NativeArraytoolcontext__Message, /* NativeArray[NativeArray#0]: NativeArray[Message] */
}
};
/* runtime type ArrayIterator[String] */
const struct type type_array__ArrayIteratorstring__String = {
1340,
"ArrayIterator[String]", /* class_name_string */
4,
0,
&resolution_table_array__ArrayIteratorstring__String,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1019, /* ArrayIterator[Streamable] */
1340, /* ArrayIterator[String] */
},
};
const struct types resolution_table_array__ArrayIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_array__AbstractArrayReadstring__String, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[String] */
}
};
/* runtime type ArrayIterator[Streamable] */
const struct type type_array__ArrayIteratorstream__Streamable = {
-1, /*CAST DEAD*/
"ArrayIterator[Streamable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorstream__Streamable,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1019, /* ArrayIterator[Streamable] */
},
};
const struct types resolution_table_array__ArrayIteratorstream__Streamable = {
0, /* dummy */
{
&type_array__Arraystream__Streamable, /* Array[Iterator#0]: Array[Streamable] */
&type_array__AbstractArrayReadstream__Streamable, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Streamable] */
}
};
/* runtime type HashMap[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase = {
289,
"HashMap[Phase, POSetElement[Phase]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase,
3,
{
0, /* nullable Object */
1, /* Object */
289, /* HashMap[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_phase__Phase, /* MapRead#0: Phase */
&type_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
&type_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[Phase, POSetElement[Phase]] */
&type_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[Phase, POSetElement[Phase]] */
&type_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* Map#0: Phase */
&type_poset__POSetElementphase__Phase, /* Map#1: POSetElement[Phase] */
&type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* HashCollection#0: Phase */
&type_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* nullable HashCollection#1: nullable HashMapNode[Phase, POSetElement[Phase]] */
&type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* HashCollection#1: HashMapNode[Phase, POSetElement[Phase]] */
&type_nullable_phase__Phase, /* nullable HashCollection#0: nullable Phase */
}
};
/* runtime type POSetElement[Phase] */
const struct type type_poset__POSetElementphase__Phase = {
290,
"POSetElement[Phase]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementphase__Phase,
3,
{
0, /* nullable Object */
1, /* Object */
290, /* POSetElement[Phase] */
},
};
const struct types resolution_table_poset__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashSetphase__Phase, /* HashSet[POSetElement#0]: HashSet[Phase] */
&type_poset__POSetphase__Phase, /* POSet[POSetElement#0]: POSet[Phase] */
&type_phase__Phase, /* POSetElement#0: Phase */
}
};
/* runtime type ArrayIterator[Phase] */
const struct type type_array__ArrayIteratorphase__Phase = {
-1, /*CAST DEAD*/
"ArrayIterator[Phase]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1020, /* ArrayIterator[Phase] */
},
};
const struct types resolution_table_array__ArrayIteratorphase__Phase = {
0, /* dummy */
{
&type_array__Arrayphase__Phase, /* Array[Iterator#0]: Array[Phase] */
&type_array__AbstractArrayReadphase__Phase, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Phase] */
}
};
/* runtime type NativeArray[Phase] */
const struct type type_array__NativeArrayphase__Phase = {
1021,
"NativeArray[Phase]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1021, /* NativeArray[Phase] */
},
};
const struct types resolution_table_array__NativeArrayphase__Phase = {
0, /* dummy */
{
&type_phase__Phase, /* NativeArray#0: Phase */
&type_array__NativeArrayphase__Phase, /* NativeArray[NativeArray#0]: NativeArray[Phase] */
}
};
/* runtime type ArrayIterator[MProject] */
const struct type type_array__ArrayIteratormproject__MProject = {
-1, /*CAST DEAD*/
"ArrayIterator[MProject]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormproject__MProject,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1022, /* ArrayIterator[MProject] */
},
};
const struct types resolution_table_array__ArrayIteratormproject__MProject = {
0, /* dummy */
{
&type_array__Arraymproject__MProject, /* Array[Iterator#0]: Array[MProject] */
&type_array__AbstractArrayReadmproject__MProject, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MProject] */
}
};
/* runtime type NativeArray[MProject] */
const struct type type_array__NativeArraymproject__MProject = {
1023,
"NativeArray[MProject]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymproject__MProject,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1023, /* NativeArray[MProject] */
},
};
const struct types resolution_table_array__NativeArraymproject__MProject = {
0, /* dummy */
{
&type_mproject__MProject, /* NativeArray#0: MProject */
&type_array__NativeArraymproject__MProject, /* NativeArray[NativeArray#0]: NativeArray[MProject] */
}
};
/* runtime type HashMapKeys[String, Array[MProject]] */
const struct type type_hash_collection__HashMapKeysstring__Stringarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymproject__MProject,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1521, /* HashMapKeys[String, Array[MProject]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymproject__MProject, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Array[MProject]] */
&type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymproject__MProject, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Array[MProject]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Array[MProject]] */
const struct type type_hash_collection__HashMapValuesstring__Stringarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"HashMapValues[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymproject__MProject,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1024, /* Collection[Array[MProject]] */
1341, /* HashMapValues[String, Array[MProject]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymproject__MProject, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Array[MProject]] */
&type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymproject__MProject, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Array[MProject]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymproject__MProject, /* RemovableCollection#0: Array[MProject] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymproject__MProject, /* Collection#0: Array[MProject] */
&type_abstract_collection__Collectionarray__Arraymproject__MProject, /* Collection[Collection#0]: Collection[Array[MProject]] */
}
};
/* runtime type Collection[Array[MProject]] */
const struct type type_abstract_collection__Collectionarray__Arraymproject__MProject = {
1024,
"Collection[Array[MProject]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, Array[MProject]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject = {
291,
"NativeArray[nullable HashMapNode[String, Array[MProject]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject,
3,
{
0, /* nullable Object */
1, /* Object */
291, /* NativeArray[nullable HashMapNode[String, Array[MProject]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* NativeArray#0: nullable HashMapNode[String, Array[MProject]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Array[MProject]]] */
}
};
/* runtime type HashMapIterator[String, Array[MProject]] */
const struct type type_hash_collection__HashMapIteratorstring__Stringarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymproject__MProject,
4,
{
0, /* nullable Object */
1, /* Object */
292, /* MapIterator[String, Array[MProject]] */
1025, /* HashMapIterator[String, Array[MProject]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymproject__MProject, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Array[MProject]] */
}
};
/* runtime type MapIterator[String, Array[MProject]] */
const struct type type_abstract_collection__MapIteratorstring__Stringarray__Arraymproject__MProject = {
292,
"MapIterator[String, Array[MProject]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Array[MProject]] */
const struct type type_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject = {
1026,
"HashMapNode[String, Array[MProject]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject,
4,
{
0, /* nullable Object */
1, /* Object */
16, /* nullable HashMapNode[String, Array[MProject]] */
1026, /* HashMapNode[String, Array[MProject]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_array__Arraymproject__MProject, /* HashMapNode#1: Array[MProject] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Array[MProject]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject = {
16,
"nullable HashMapNode[String, Array[MProject]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MModule] */
const struct type type_array__ArrayIteratormmodule__MModule = {
1027,
"ArrayIterator[MModule]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratormmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1027, /* ArrayIterator[MModule] */
},
};
const struct types resolution_table_array__ArrayIteratormmodule__MModule = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[Iterator#0]: Array[MModule] */
&type_array__AbstractArrayReadmmodule__MModule, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MModule] */
}
};
/* runtime type NativeArray[MModule] */
const struct type type_array__NativeArraymmodule__MModule = {
1028,
"NativeArray[MModule]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1028, /* NativeArray[MModule] */
},
};
const struct types resolution_table_array__NativeArraymmodule__MModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* NativeArray#0: MModule */
&type_array__NativeArraymmodule__MModule, /* NativeArray[NativeArray#0]: NativeArray[MModule] */
}
};
/* runtime type HashMap[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule = {
293,
"HashMap[MModule, POSetElement[MModule]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
293, /* HashMap[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* MapRead#0: MModule */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
&type_hash_collection__HashMapKeysmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MModule, POSetElement[MModule]] */
&type_hash_collection__HashMapValuesmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MModule, POSetElement[MModule]] */
&type_hash_collection__HashMapIteratormmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MModule, POSetElement[MModule]] */
&type_mmodule__MModule, /* Map#0: MModule */
&type_poset__POSetElementmmodule__MModule, /* Map#1: POSetElement[MModule] */
&type_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MModule, POSetElement[MModule]] */
&type_mmodule__MModule, /* HashCollection#0: MModule */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* nullable HashCollection#1: nullable HashMapNode[MModule, POSetElement[MModule]] */
&type_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* HashCollection#1: HashMapNode[MModule, POSetElement[MModule]] */
&type_nullable_mmodule__MModule, /* nullable HashCollection#0: nullable MModule */
}
};
/* runtime type POSetElement[MModule] */
const struct type type_poset__POSetElementmmodule__MModule = {
294,
"POSetElement[MModule]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
294, /* POSetElement[MModule] */
},
};
const struct types resolution_table_poset__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashSetmmodule__MModule, /* HashSet[POSetElement#0]: HashSet[MModule] */
&type_poset__POSetmmodule__MModule, /* POSet[POSetElement#0]: POSet[MModule] */
&type_mmodule__MModule, /* POSetElement#0: MModule */
}
};
/* runtime type HashMapKeys[String, Array[MModule]] */
const struct type type_hash_collection__HashMapKeysstring__Stringarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymmodule__MModule,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1522, /* HashMapKeys[String, Array[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymmodule__MModule, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Array[MModule]] */
&type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymmodule__MModule, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Array[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Array[MModule]] */
const struct type type_hash_collection__HashMapValuesstring__Stringarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapValues[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymmodule__MModule,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1029, /* Collection[Array[MModule]] */
1342, /* HashMapValues[String, Array[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymmodule__MModule, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Array[MModule]] */
&type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymmodule__MModule, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Array[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymmodule__MModule, /* RemovableCollection#0: Array[MModule] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymmodule__MModule, /* Collection#0: Array[MModule] */
&type_abstract_collection__Collectionarray__Arraymmodule__MModule, /* Collection[Collection#0]: Collection[Array[MModule]] */
}
};
/* runtime type Collection[Array[MModule]] */
const struct type type_abstract_collection__Collectionarray__Arraymmodule__MModule = {
1029,
"Collection[Array[MModule]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, Array[MModule]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule = {
295,
"NativeArray[nullable HashMapNode[String, Array[MModule]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
295, /* NativeArray[nullable HashMapNode[String, Array[MModule]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* NativeArray#0: nullable HashMapNode[String, Array[MModule]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Array[MModule]]] */
}
};
/* runtime type HashMapIterator[String, Array[MModule]] */
const struct type type_hash_collection__HashMapIteratorstring__Stringarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
296, /* MapIterator[String, Array[MModule]] */
1030, /* HashMapIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymmodule__MModule, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Array[MModule]] */
}
};
/* runtime type MapIterator[String, Array[MModule]] */
const struct type type_abstract_collection__MapIteratorstring__Stringarray__Arraymmodule__MModule = {
296,
"MapIterator[String, Array[MModule]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Array[MModule]] */
const struct type type_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule = {
1031,
"HashMapNode[String, Array[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashMapNode[String, Array[MModule]] */
1031, /* HashMapNode[String, Array[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_array__Arraymmodule__MModule, /* HashMapNode#1: Array[MModule] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Array[MModule]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule = {
17,
"nullable HashMapNode[String, Array[MModule]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MClass] */
const struct type type_array__ArrayIteratormodel__MClass = {
-1, /*CAST DEAD*/
"ArrayIterator[MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
297, /* ArrayIterator[nullable MClass] */
1343, /* ArrayIterator[MClass] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MClass = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
&type_array__AbstractArrayReadmodel__MClass, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MClass] */
}
};
/* runtime type ArrayIterator[nullable MClass] */
const struct type type_array__ArrayIteratornullable_model__MClass = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_model__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
297, /* ArrayIterator[nullable MClass] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MClass = {
0, /* dummy */
{
&type_array__Arraynullable_model__MClass, /* Array[Iterator#0]: Array[nullable MClass] */
&type_array__AbstractArrayReadnullable_model__MClass, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MClass] */
}
};
/* runtime type NativeArray[MClass] */
const struct type type_array__NativeArraymodel__MClass = {
1344,
"NativeArray[MClass]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraymodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
298, /* NativeArray[nullable MClass] */
1344, /* NativeArray[MClass] */
},
};
const struct types resolution_table_array__NativeArraymodel__MClass = {
0, /* dummy */
{
&type_model__MClass, /* NativeArray#0: MClass */
&type_array__NativeArraymodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[MClass] */
}
};
/* runtime type NativeArray[nullable MClass] */
const struct type type_array__NativeArraynullable_model__MClass = {
298,
"NativeArray[nullable MClass]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
298, /* NativeArray[nullable MClass] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MClass = {
0, /* dummy */
{
&type_nullable_model__MClass, /* NativeArray#0: nullable MClass */
&type_array__NativeArraynullable_model__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable MClass] */
}
};
/* runtime type ArrayIterator[MProperty] */
const struct type type_array__ArrayIteratormodel__MProperty = {
-1, /*CAST DEAD*/
"ArrayIterator[MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MProperty,
6,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
299, /* ArrayIterator[nullable MProperty] */
1032, /* ArrayIterator[PropertyLayoutElement] */
1523, /* ArrayIterator[MProperty] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MProperty = {
0, /* dummy */
{
&type_array__Arraymodel__MProperty, /* Array[Iterator#0]: Array[MProperty] */
&type_array__AbstractArrayReadmodel__MProperty, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MProperty] */
}
};
/* runtime type ArrayIterator[PropertyLayoutElement] */
const struct type type_array__ArrayIteratorseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"ArrayIterator[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorseparate_compiler__PropertyLayoutElement,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
-1, /* empty */
1032, /* ArrayIterator[PropertyLayoutElement] */
},
};
const struct types resolution_table_array__ArrayIteratorseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[Iterator#0]: Array[PropertyLayoutElement] */
&type_array__AbstractArrayReadseparate_compiler__PropertyLayoutElement, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[PropertyLayoutElement] */
}
};
/* runtime type ArrayIterator[nullable MProperty] */
const struct type type_array__ArrayIteratornullable_model__MProperty = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
299, /* ArrayIterator[nullable MProperty] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MProperty = {
0, /* dummy */
{
&type_array__Arraynullable_model__MProperty, /* Array[Iterator#0]: Array[nullable MProperty] */
&type_array__AbstractArrayReadnullable_model__MProperty, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MProperty] */
}
};
/* runtime type NativeArray[MProperty] */
const struct type type_array__NativeArraymodel__MProperty = {
1524,
"NativeArray[MProperty]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MProperty,
6,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
300, /* NativeArray[nullable MProperty] */
1033, /* NativeArray[PropertyLayoutElement] */
1524, /* NativeArray[MProperty] */
},
};
const struct types resolution_table_array__NativeArraymodel__MProperty = {
0, /* dummy */
{
&type_model__MProperty, /* NativeArray#0: MProperty */
&type_array__NativeArraymodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[MProperty] */
}
};
/* runtime type NativeArray[PropertyLayoutElement] */
const struct type type_array__NativeArrayseparate_compiler__PropertyLayoutElement = {
1033,
"NativeArray[PropertyLayoutElement]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayseparate_compiler__PropertyLayoutElement,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
-1, /* empty */
1033, /* NativeArray[PropertyLayoutElement] */
},
};
const struct types resolution_table_array__NativeArrayseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_separate_compiler__PropertyLayoutElement, /* NativeArray#0: PropertyLayoutElement */
&type_array__NativeArrayseparate_compiler__PropertyLayoutElement, /* NativeArray[NativeArray#0]: NativeArray[PropertyLayoutElement] */
}
};
/* runtime type NativeArray[nullable MProperty] */
const struct type type_array__NativeArraynullable_model__MProperty = {
300,
"NativeArray[nullable MProperty]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
300, /* NativeArray[nullable MProperty] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MProperty = {
0, /* dummy */
{
&type_nullable_model__MProperty, /* NativeArray#0: nullable MProperty */
&type_array__NativeArraynullable_model__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable MProperty] */
}
};
/* runtime type HashMap[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef = {
301,
"HashMap[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
301, /* HashMap[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* MapRead#0: MClassDef */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
&type_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassDef, POSetElement[MClassDef]] */
&type_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassDef, POSetElement[MClassDef]] */
&type_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* Map#0: MClassDef */
&type_poset__POSetElementmodel__MClassDef, /* Map#1: POSetElement[MClassDef] */
&type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* HashCollection#0: MClassDef */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* nullable HashCollection#1: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashCollection#1: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_nullable_model__MClassDef, /* nullable HashCollection#0: nullable MClassDef */
}
};
/* runtime type POSetElement[MClassDef] */
const struct type type_poset__POSetElementmodel__MClassDef = {
302,
"POSetElement[MClassDef]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
302, /* POSetElement[MClassDef] */
},
};
const struct types resolution_table_poset__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClassDef, /* HashSet[POSetElement#0]: HashSet[MClassDef] */
&type_poset__POSetmodel__MClassDef, /* POSet[POSetElement#0]: POSet[MClassDef] */
&type_model__MClassDef, /* POSetElement#0: MClassDef */
}
};
/* runtime type HashMap[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType = {
1034,
"HashMap[MClassType, POSetElement[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
303, /* HashMap[MType, POSetElement[MType]] */
1034, /* HashMap[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
&type_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, POSetElement[MClassType]] */
&type_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, POSetElement[MClassType]] */
&type_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* Map#0: MClassType */
&type_poset__POSetElementmodel__MClassType, /* Map#1: POSetElement[MClassType] */
&type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* nullable HashCollection#1: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
&type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashCollection#1: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_nullable_model__MClassType, /* nullable HashCollection#0: nullable MClassType */
}
};
/* runtime type HashMap[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType = {
303,
"HashMap[MType, POSetElement[MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
303, /* HashMap[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* MapRead#0: MType */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
&type_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, POSetElement[MType]] */
&type_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, POSetElement[MType]] */
&type_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, POSetElement[MType]] */
&type_model__MType, /* Map#0: MType */
&type_poset__POSetElementmodel__MType, /* Map#1: POSetElement[MType] */
&type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, POSetElement[MType]] */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* nullable HashCollection#1: nullable HashMapNode[MType, POSetElement[MType]] */
&type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* HashCollection#1: HashMapNode[MType, POSetElement[MType]] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type POSetElement[MClassType] */
const struct type type_poset__POSetElementmodel__MClassType = {
1035,
"POSetElement[MClassType]", /* class_name_string */
3,
0,
&resolution_table_poset__POSetElementmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
304, /* POSetElement[MType] */
1035, /* POSetElement[MClassType] */
},
};
const struct types resolution_table_poset__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClassType, /* HashSet[POSetElement#0]: HashSet[MClassType] */
&type_poset__POSetmodel__MClassType, /* POSet[POSetElement#0]: POSet[MClassType] */
&type_model__MClassType, /* POSetElement#0: MClassType */
}
};
/* runtime type POSetElement[MType] */
const struct type type_poset__POSetElementmodel__MType = {
304,
"POSetElement[MType]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
304, /* POSetElement[MType] */
},
};
const struct types resolution_table_poset__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MType, /* HashSet[POSetElement#0]: HashSet[MType] */
&type_poset__POSetmodel__MType, /* POSet[POSetElement#0]: POSet[MType] */
&type_model__MType, /* POSetElement#0: MType */
}
};
/* runtime type HashMapKeys[String, Array[MClass]] */
const struct type type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MClass,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1525, /* HashMapKeys[String, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MClass, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Array[MClass]] */
&type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Array[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Array[MClass]] */
const struct type type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MClass,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1036, /* Collection[Array[nullable MClass]] */
1345, /* Collection[Array[MClass]] */
1526, /* HashMapValues[String, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MClass, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Array[MClass]] */
&type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Array[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MClass, /* RemovableCollection#0: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MClass, /* Collection#0: Array[MClass] */
&type_abstract_collection__Collectionarray__Arraymodel__MClass, /* Collection[Collection#0]: Collection[Array[MClass]] */
}
};
/* runtime type Collection[Array[MClass]] */
const struct type type_abstract_collection__Collectionarray__Arraymodel__MClass = {
1345,
"Collection[Array[MClass]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Array[nullable MClass]] */
const struct type type_abstract_collection__Collectionarray__Arraynullable_model__MClass = {
1036,
"Collection[Array[nullable MClass]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, Array[MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
305,
"NativeArray[nullable HashMapNode[String, Array[MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
305, /* NativeArray[nullable HashMapNode[String, Array[MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* NativeArray#0: nullable HashMapNode[String, Array[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Array[MClass]]] */
}
};
/* runtime type HashMapIterator[String, Array[MClass]] */
const struct type type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
306, /* MapIterator[String, Array[MClass]] */
1037, /* HashMapIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MClass, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Array[MClass]] */
}
};
/* runtime type MapIterator[String, Array[MClass]] */
const struct type type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MClass = {
306,
"MapIterator[String, Array[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Array[MClass]] */
const struct type type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
1038,
"HashMapNode[String, Array[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
18, /* nullable HashMapNode[String, Array[MClass]] */
1038, /* HashMapNode[String, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_array__Arraymodel__MClass, /* HashMapNode#1: Array[MClass] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Array[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
18,
"nullable HashMapNode[String, Array[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MProperty,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1527, /* HashMapKeys[String, Array[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MProperty, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Array[MProperty]] */
&type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Array[MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1039, /* Collection[Array[MProperty]] */
1346, /* HashMapValues[String, Array[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MProperty, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Array[MProperty]] */
&type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Array[MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MProperty, /* RemovableCollection#0: Array[MProperty] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MProperty, /* Collection#0: Array[MProperty] */
&type_abstract_collection__Collectionarray__Arraymodel__MProperty, /* Collection[Collection#0]: Collection[Array[MProperty]] */
}
};
/* runtime type Collection[Array[MProperty]] */
const struct type type_abstract_collection__Collectionarray__Arraymodel__MProperty = {
1039,
"Collection[Array[MProperty]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
307,
"NativeArray[nullable HashMapNode[String, Array[MProperty]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
307, /* NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray#0: nullable HashMapNode[String, Array[MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
}
};
/* runtime type HashMapIterator[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
308, /* MapIterator[String, Array[MProperty]] */
1040, /* HashMapIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringarray__Arraymodel__MProperty, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Array[MProperty]] */
}
};
/* runtime type MapIterator[String, Array[MProperty]] */
const struct type type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MProperty = {
308,
"MapIterator[String, Array[MProperty]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
1041,
"HashMapNode[String, Array[MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
19, /* nullable HashMapNode[String, Array[MProperty]] */
1041, /* HashMapNode[String, Array[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_array__Arraymodel__MProperty, /* HashMapNode#1: Array[MProperty] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Array[MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
19,
"nullable HashMapNode[String, Array[MProperty]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
309,
"HashMap[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
309, /* HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* MapRead#0: MModule */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
&type_hash_collection__HashMapKeysmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_hash_collection__HashMapValuesmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_hash_collection__HashMapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* Map#0: MModule */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Map#1: HashMap2[MType, String, nullable MProperty] */
&type_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* HashCollection#0: MModule */
&type_nullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* nullable HashCollection#1: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashCollection#1: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nullable_mmodule__MModule, /* nullable HashCollection#0: nullable MModule */
}
};
/* runtime type HashMap2[MType, String, nullable MProperty] */
const struct type type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
310,
"HashMap2[MType, String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
310, /* HashMap2[MType, String, nullable MProperty] */
},
};
const struct types resolution_table_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MType, HashMap[String, nullable MProperty]] */
&type_model__MType, /* HashMap2#0: MType */
&type_string__String, /* HashMap2#1: String */
&type_nullable_model__MProperty, /* HashMap2#2: nullable MProperty */
&type_hash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[String, nullable MProperty] */
}
};
/* runtime type HashMapKeys[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"HashMapKeys[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1528, /* HashMapKeys[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, nullable ModulePath] */
&type_abstract_collection__MapKeysIteratorstring__Stringnullable_modelbuilder__ModulePath, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, nullable ModulePath] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapValuesstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"HashMapValues[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringnullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
114, /* Collection[nullable ModulePath] */
1042, /* HashMapValues[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, nullable ModulePath] */
&type_abstract_collection__MapValuesIteratorstring__Stringnullable_modelbuilder__ModulePath, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, nullable ModulePath] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_modelbuilder__ModulePath, /* RemovableCollection#0: nullable ModulePath */
NULL, /* empty */
NULL, /* empty */
&type_nullable_modelbuilder__ModulePath, /* Collection#0: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[Collection#0]: Collection[nullable ModulePath] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
311,
"NativeArray[nullable HashMapNode[String, nullable ModulePath]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath,
3,
{
0, /* nullable Object */
1, /* Object */
311, /* NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray#0: nullable HashMapNode[String, nullable ModulePath] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
}
};
/* runtime type HashMapIterator[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapIteratorstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"HashMapIterator[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringnullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
312, /* MapIterator[String, nullable ModulePath] */
1043, /* HashMapIterator[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, nullable ModulePath] */
}
};
/* runtime type MapIterator[String, nullable ModulePath] */
const struct type type_abstract_collection__MapIteratorstring__Stringnullable_modelbuilder__ModulePath = {
312,
"MapIterator[String, nullable ModulePath]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
1044,
"HashMapNode[String, nullable ModulePath]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
20, /* nullable HashMapNode[String, nullable ModulePath] */
1044, /* HashMapNode[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_nullable_modelbuilder__ModulePath, /* HashMapNode#1: nullable ModulePath */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, nullable ModulePath] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
20,
"nullable HashMapNode[String, nullable ModulePath]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, nullable MGroup] */
const struct type type_hash_collection__HashMapKeysstring__Stringnullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapKeys[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringnullable_mproject__MGroup,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1529, /* HashMapKeys[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_mproject__MGroup, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, nullable MGroup] */
&type_abstract_collection__MapKeysIteratorstring__Stringnullable_mproject__MGroup, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, nullable MGroup] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, nullable MGroup] */
const struct type type_hash_collection__HashMapValuesstring__Stringnullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapValues[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringnullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
113, /* Collection[nullable MGroup] */
1045, /* HashMapValues[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_mproject__MGroup, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, nullable MGroup] */
&type_abstract_collection__MapValuesIteratorstring__Stringnullable_mproject__MGroup, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, nullable MGroup] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_mproject__MGroup, /* RemovableCollection#0: nullable MGroup */
NULL, /* empty */
NULL, /* empty */
&type_nullable_mproject__MGroup, /* Collection#0: nullable MGroup */
&type_abstract_collection__Collectionnullable_mproject__MGroup, /* Collection[Collection#0]: Collection[nullable MGroup] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, nullable MGroup]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
313,
"NativeArray[nullable HashMapNode[String, nullable MGroup]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
313, /* NativeArray[nullable HashMapNode[String, nullable MGroup]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray#0: nullable HashMapNode[String, nullable MGroup] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, nullable MGroup]] */
}
};
/* runtime type HashMapIterator[String, nullable MGroup] */
const struct type type_hash_collection__HashMapIteratorstring__Stringnullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapIterator[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringnullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
314, /* MapIterator[String, nullable MGroup] */
1046, /* HashMapIterator[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringnullable_mproject__MGroup, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, nullable MGroup] */
}
};
/* runtime type MapIterator[String, nullable MGroup] */
const struct type type_abstract_collection__MapIteratorstring__Stringnullable_mproject__MGroup = {
314,
"MapIterator[String, nullable MGroup]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, nullable MGroup] */
const struct type type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
1047,
"HashMapNode[String, nullable MGroup]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
21, /* nullable HashMapNode[String, nullable MGroup] */
1047, /* HashMapNode[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_nullable_mproject__MGroup, /* HashMapNode#1: nullable MGroup */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, nullable MGroup] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
21,
"nullable HashMapNode[String, nullable MGroup]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[AModule] */
const struct type type_array__ArrayIteratorparser_nodes__AModule = {
-1, /*CAST DEAD*/
"ArrayIterator[AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AModule,
6,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1048, /* ArrayIterator[ANode] */
1347, /* ArrayIterator[Prod] */
1530, /* ArrayIterator[AModule] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AModule = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AModule, /* Array[Iterator#0]: Array[AModule] */
&type_array__AbstractArrayReadparser_nodes__AModule, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AModule] */
}
};
/* runtime type ArrayIterator[Prod] */
const struct type type_array__ArrayIteratorparser_nodes__Prod = {
-1, /*CAST DEAD*/
"ArrayIterator[Prod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__Prod,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1048, /* ArrayIterator[ANode] */
1347, /* ArrayIterator[Prod] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__Prod = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__Prod, /* Array[Iterator#0]: Array[Prod] */
&type_array__AbstractArrayReadparser_nodes__Prod, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Prod] */
}
};
/* runtime type ArrayIterator[ANode] */
const struct type type_array__ArrayIteratorparser_nodes__ANode = {
-1, /*CAST DEAD*/
"ArrayIterator[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1048, /* ArrayIterator[ANode] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_array__AbstractArrayReadparser_nodes__ANode, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ANode] */
}
};
/* runtime type NativeArray[AModule] */
const struct type type_array__NativeArrayparser_nodes__AModule = {
1531,
"NativeArray[AModule]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AModule,
6,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1049, /* NativeArray[ANode] */
1348, /* NativeArray[Prod] */
1531, /* NativeArray[AModule] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AModule = {
0, /* dummy */
{
&type_parser_nodes__AModule, /* NativeArray#0: AModule */
&type_array__NativeArrayparser_nodes__AModule, /* NativeArray[NativeArray#0]: NativeArray[AModule] */
}
};
/* runtime type NativeArray[Prod] */
const struct type type_array__NativeArrayparser_nodes__Prod = {
1348,
"NativeArray[Prod]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayparser_nodes__Prod,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1049, /* NativeArray[ANode] */
1348, /* NativeArray[Prod] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__Prod = {
0, /* dummy */
{
&type_parser_nodes__Prod, /* NativeArray#0: Prod */
&type_array__NativeArrayparser_nodes__Prod, /* NativeArray[NativeArray#0]: NativeArray[Prod] */
}
};
/* runtime type NativeArray[ANode] */
const struct type type_array__NativeArrayparser_nodes__ANode = {
1049,
"NativeArray[ANode]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1049, /* NativeArray[ANode] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* NativeArray#0: ANode */
&type_array__NativeArrayparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[ANode] */
}
};
/* runtime type HashMapKeys[MModule, AModule] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleparser_nodes__AModule = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleparser_nodes__AModule,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
1349, /* HashMapKeys[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, AModule] */
&type_abstract_collection__MapKeysIteratormmodule__MModuleparser_nodes__AModule, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, AModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, AModule] */
const struct type type_hash_collection__HashMapValuesmmodule__MModuleparser_nodes__AModule = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModuleparser_nodes__AModule,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1465, /* Collection[AModule] */
1796, /* HashMapValues[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, AModule] */
&type_abstract_collection__MapValuesIteratormmodule__MModuleparser_nodes__AModule, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, AModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AModule, /* RemovableCollection#0: AModule */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AModule, /* Collection#0: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[Collection#0]: Collection[AModule] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, AModule]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
315,
"NativeArray[nullable HashMapNode[MModule, AModule]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
315, /* NativeArray[nullable HashMapNode[MModule, AModule]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray#0: nullable HashMapNode[MModule, AModule] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, AModule]] */
}
};
/* runtime type HashMapIterator[MModule, AModule] */
const struct type type_hash_collection__HashMapIteratormmodule__MModuleparser_nodes__AModule = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModuleparser_nodes__AModule,
4,
{
0, /* nullable Object */
1, /* Object */
316, /* MapIterator[MModule, AModule] */
1050, /* HashMapIterator[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, AModule] */
}
};
/* runtime type MapIterator[MModule, AModule] */
const struct type type_abstract_collection__MapIteratormmodule__MModuleparser_nodes__AModule = {
316,
"MapIterator[MModule, AModule]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, AModule] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
1051,
"HashMapNode[MModule, AModule]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule,
4,
{
0, /* nullable Object */
1, /* Object */
22, /* nullable HashMapNode[MModule, AModule] */
1051, /* HashMapNode[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_parser_nodes__AModule, /* HashMapNode#1: AModule */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, AModule] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
22,
"nullable HashMapNode[MModule, AModule]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapKeysmodel__MClassDefparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassDefparser_nodes__AClassdef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
597, /* Collection[MClassDef] */
1350, /* HashMapKeys[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassDef, AClassdef] */
&type_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassDef, AClassdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* RemovableCollection#0: MClassDef */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* Collection#0: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[Collection#0]: Collection[MClassDef] */
}
};
/* runtime type HashMapValues[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapValuesmodel__MClassDefparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapValues[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassDefparser_nodes__AClassdef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1473, /* Collection[AClassdef] */
1797, /* HashMapValues[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassDef, AClassdef] */
&type_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassDef, AClassdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* RemovableCollection#0: AClassdef */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* Collection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Collection#0]: Collection[AClassdef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
317,
"NativeArray[nullable HashMapNode[MClassDef, AClassdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
317, /* NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray#0: nullable HashMapNode[MClassDef, AClassdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
}
};
/* runtime type HashMapIterator[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapIteratormodel__MClassDefparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassDefparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
318, /* MapIterator[MClassDef, AClassdef] */
1052, /* HashMapIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassDef, AClassdef] */
}
};
/* runtime type MapIterator[MClassDef, AClassdef] */
const struct type type_abstract_collection__MapIteratormodel__MClassDefparser_nodes__AClassdef = {
318,
"MapIterator[MClassDef, AClassdef]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
1053,
"HashMapNode[MClassDef, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
23, /* nullable HashMapNode[MClassDef, AClassdef] */
1053, /* HashMapNode[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_parser_nodes__AClassdef, /* HashMapNode#1: AClassdef */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, AClassdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
23,
"nullable HashMapNode[MClassDef, AClassdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapKeysmodel__MPropDefparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapKeys[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MPropDefparser_nodes__APropdef,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
120, /* Collection[nullable MPropDef] */
596, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1477, /* Collection[MPropDef] */
1798, /* HashMapKeys[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MPropDef, APropdef] */
&type_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MPropDef, APropdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MPropDef, /* RemovableCollection#0: MPropDef */
NULL, /* empty */
NULL, /* empty */
&type_model__MPropDef, /* Collection#0: MPropDef */
&type_abstract_collection__Collectionmodel__MPropDef, /* Collection[Collection#0]: Collection[MPropDef] */
}
};
/* runtime type HashMapValues[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapValuesmodel__MPropDefparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapValues[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MPropDefparser_nodes__APropdef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1474, /* Collection[APropdef] */
1799, /* HashMapValues[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MPropDef, APropdef] */
&type_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MPropDef, APropdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
319,
"NativeArray[nullable HashMapNode[MPropDef, APropdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
319, /* NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray#0: nullable HashMapNode[MPropDef, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
}
};
/* runtime type HashMapIterator[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapIteratormodel__MPropDefparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapIterator[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MPropDefparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
320, /* MapIterator[MPropDef, APropdef] */
1054, /* HashMapIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MPropDef, APropdef] */
}
};
/* runtime type MapIterator[MPropDef, APropdef] */
const struct type type_abstract_collection__MapIteratormodel__MPropDefparser_nodes__APropdef = {
320,
"MapIterator[MPropDef, APropdef]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
1055,
"HashMapNode[MPropDef, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
24, /* nullable HashMapNode[MPropDef, APropdef] */
1055, /* HashMapNode[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_model__MPropDef, /* HashMapNode#0: MPropDef */
&type_parser_nodes__APropdef, /* HashMapNode#1: APropdef */
&type_model__MPropDef, /* HashNode#0: MPropDef */
}
};
/* runtime type nullable HashMapNode[MPropDef, APropdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
24,
"nullable HashMapNode[MPropDef, APropdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[FlatBuffer] */
const struct type type_array__Arraystring__FlatBuffer = {
-1, /*CAST DEAD*/
"Array[FlatBuffer]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystring__FlatBuffer,
16,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1351, /* Collection[FlatText] */
1294, /* AbstractArrayRead[Object] */
1532, /* Collection[FlatBuffer] */
1459, /* Array[Object] */
1643, /* AbstractArrayRead[Streamable] */
2016, /* Array[Streamable] */
2064, /* AbstractArrayRead[FlatText] */
2131, /* AbstractArrayRead[FlatBuffer] */
2149, /* Array[FlatText] */
2184, /* Array[FlatBuffer] */
},
};
const struct types resolution_table_array__Arraystring__FlatBuffer = {
0, /* dummy */
{
&type_string__FlatBuffer, /* Sequence#0: FlatBuffer */
&type_string__FlatBuffer, /* SimpleCollection#0: FlatBuffer */
&type_array__NativeArraystring__FlatBuffer, /* NativeArray[Array#0]: NativeArray[FlatBuffer] */
&type_array__Arraystring__FlatBuffer, /* Array[Array#0]: Array[FlatBuffer] */
&type_array__NativeArraystring__FlatBuffer, /* NativeArray[ArrayCapable#0]: NativeArray[FlatBuffer] */
&type_string__FlatBuffer, /* RemovableCollection#0: FlatBuffer */
&type_abstract_collection__Collectionstring__FlatBuffer, /* Collection[Sequence#0]: Collection[FlatBuffer] */
&type_abstract_collection__Collectionstring__FlatBuffer, /* Collection[SimpleCollection#0]: Collection[FlatBuffer] */
&type_string__FlatBuffer, /* Collection#0: FlatBuffer */
&type_abstract_collection__Collectionstring__FlatBuffer, /* Collection[Collection#0]: Collection[FlatBuffer] */
&type_string__FlatBuffer, /* SequenceRead#0: FlatBuffer */
&type_string__FlatBuffer, /* AbstractArrayRead#0: FlatBuffer */
&type_array__Arraystring__FlatBuffer, /* Array[AbstractArrayRead#0]: Array[FlatBuffer] */
&type_array__ArrayIteratorstring__FlatBuffer, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[FlatBuffer] */
}
};
/* runtime type Array[FlatText] */
const struct type type_array__Arraystring__FlatText = {
-1, /*CAST DEAD*/
"Array[FlatText]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystring__FlatText,
15,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1351, /* Collection[FlatText] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1643, /* AbstractArrayRead[Streamable] */
2016, /* Array[Streamable] */
2064, /* AbstractArrayRead[FlatText] */
-1, /* empty */
2149, /* Array[FlatText] */
},
};
const struct types resolution_table_array__Arraystring__FlatText = {
0, /* dummy */
{
&type_string__FlatText, /* Sequence#0: FlatText */
&type_string__FlatText, /* SimpleCollection#0: FlatText */
&type_array__NativeArraystring__FlatText, /* NativeArray[Array#0]: NativeArray[FlatText] */
&type_array__Arraystring__FlatText, /* Array[Array#0]: Array[FlatText] */
&type_array__NativeArraystring__FlatText, /* NativeArray[ArrayCapable#0]: NativeArray[FlatText] */
&type_string__FlatText, /* RemovableCollection#0: FlatText */
&type_abstract_collection__Collectionstring__FlatText, /* Collection[Sequence#0]: Collection[FlatText] */
&type_abstract_collection__Collectionstring__FlatText, /* Collection[SimpleCollection#0]: Collection[FlatText] */
&type_string__FlatText, /* Collection#0: FlatText */
&type_abstract_collection__Collectionstring__FlatText, /* Collection[Collection#0]: Collection[FlatText] */
&type_string__FlatText, /* SequenceRead#0: FlatText */
&type_string__FlatText, /* AbstractArrayRead#0: FlatText */
&type_array__Arraystring__FlatText, /* Array[AbstractArrayRead#0]: Array[FlatText] */
&type_array__ArrayIteratorstring__FlatText, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[FlatText] */
}
};
/* runtime type Collection[FlatBuffer] */
const struct type type_abstract_collection__Collectionstring__FlatBuffer = {
1532,
"Collection[FlatBuffer]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[FlatText] */
const struct type type_abstract_collection__Collectionstring__FlatText = {
1351,
"Collection[FlatText]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[FlatBuffer] */
const struct type type_array__AbstractArrayReadstring__FlatBuffer = {
2131,
"AbstractArrayRead[FlatBuffer]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[FlatText] */
const struct type type_array__AbstractArrayReadstring__FlatText = {
2064,
"AbstractArrayRead[FlatText]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[Option] */
const struct type type_array__ArrayIteratoropts__Option = {
-1, /*CAST DEAD*/
"ArrayIterator[Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratoropts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1056, /* ArrayIterator[Option] */
},
};
const struct types resolution_table_array__ArrayIteratoropts__Option = {
0, /* dummy */
{
&type_array__Arrayopts__Option, /* Array[Iterator#0]: Array[Option] */
&type_array__AbstractArrayReadopts__Option, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Option] */
}
};
/* runtime type HashMapKeys[String, Option] */
const struct type type_hash_collection__HashMapKeysstring__Stringopts__Option = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringopts__Option,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1533, /* HashMapKeys[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringopts__Option = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringopts__Option, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Option] */
&type_abstract_collection__MapKeysIteratorstring__Stringopts__Option, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Option] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Option] */
const struct type type_hash_collection__HashMapValuesstring__Stringopts__Option = {
-1, /*CAST DEAD*/
"HashMapValues[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringopts__Option,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
604, /* Collection[Option] */
1352, /* HashMapValues[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringopts__Option = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringopts__Option, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Option] */
&type_abstract_collection__MapValuesIteratorstring__Stringopts__Option, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Option] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_opts__Option, /* RemovableCollection#0: Option */
NULL, /* empty */
NULL, /* empty */
&type_opts__Option, /* Collection#0: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[Collection#0]: Collection[Option] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Option]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option = {
321,
"NativeArray[nullable HashMapNode[String, Option]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
321, /* NativeArray[nullable HashMapNode[String, Option]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray#0: nullable HashMapNode[String, Option] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Option]] */
}
};
/* runtime type HashMapIterator[String, Option] */
const struct type type_hash_collection__HashMapIteratorstring__Stringopts__Option = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringopts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
322, /* MapIterator[String, Option] */
1057, /* HashMapIterator[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringopts__Option = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringopts__Option, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Option] */
}
};
/* runtime type MapIterator[String, Option] */
const struct type type_abstract_collection__MapIteratorstring__Stringopts__Option = {
322,
"MapIterator[String, Option]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Option] */
const struct type type_hash_collection__HashMapNodestring__Stringopts__Option = {
1058,
"HashMapNode[String, Option]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringopts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
25, /* nullable HashMapNode[String, Option] */
1058, /* HashMapNode[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringopts__Option = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_opts__Option, /* HashMapNode#1: Option */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Option] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringopts__Option = {
25,
"nullable HashMapNode[String, Option]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArraySetIterator[MModule] */
const struct type type_array__ArraySetIteratormmodule__MModule = {
-1, /*CAST DEAD*/
"ArraySetIterator[MModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetIteratormmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
323, /* ArraySetIterator[MModule] */
},
};
const struct types resolution_table_array__ArraySetIteratormmodule__MModule = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[Iterator#0]: Array[MModule] */
&type_array__ArrayIteratormmodule__MModule, /* ArrayIterator[ArraySetIterator#0]: ArrayIterator[MModule] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MModule]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule = {
1059,
"NativeArray[nullable HashSetNode[MModule]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1059, /* NativeArray[nullable HashSetNode[MModule]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemmodule__MModule, /* NativeArray#0: nullable HashSetNode[MModule] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MModule]] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Object]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object = {
324,
"NativeArray[nullable HashSetNode[Object]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodekernel__Object, /* NativeArray#0: nullable HashSetNode[Object] */
&type_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[Object]] */
}
};
/* runtime type HashSetIterator[MModule] */
const struct type type_hash_collection__HashSetIteratormmodule__MModule = {
-1, /*CAST DEAD*/
"HashSetIterator[MModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1060, /* HashSetIterator[MModule] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormmodule__MModule = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[Iterator#0]: Array[MModule] */
&type_hash_collection__HashSetmmodule__MModule, /* HashSet[HashSetIterator#0]: HashSet[MModule] */
}
};
/* runtime type HashSetIterator[Object] */
const struct type type_hash_collection__HashSetIteratorkernel__Object = {
-1, /*CAST DEAD*/
"HashSetIterator[Object]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorkernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorkernel__Object = {
0, /* dummy */
{
&type_array__Arraykernel__Object, /* Array[Iterator#0]: Array[Object] */
&type_hash_collection__HashSetkernel__Object, /* HashSet[HashSetIterator#0]: HashSet[Object] */
}
};
/* runtime type HashSetNode[MModule] */
const struct type type_hash_collection__HashSetNodemmodule__MModule = {
1534,
"HashSetNode[MModule]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemmodule__MModule,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
326, /* nullable HashSetNode[MModule] */
1061, /* HashSetNode[Object] */
1534, /* HashSetNode[MModule] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemmodule__MModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashSetNode#0: MModule */
NULL, /* empty */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashSetNode[Object] */
const struct type type_hash_collection__HashSetNodekernel__Object = {
1061,
"HashSetNode[Object]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashSetNodekernel__Object,
5,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
-1, /* empty */
1061, /* HashSetNode[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetNodekernel__Object = {
0, /* dummy */
{
&type_kernel__Object, /* HashSetNode#0: Object */
NULL, /* empty */
&type_kernel__Object, /* HashNode#0: Object */
}
};
/* runtime type nullable HashSetNode[MModule] */
const struct type type_nullable_hash_collection__HashSetNodemmodule__MModule = {
326,
"nullable HashSetNode[MModule]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[Object] */
const struct type type_nullable_hash_collection__HashSetNodekernel__Object = {
26,
"nullable HashSetNode[Object]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MClassDef] */
const struct type type_array__ArrayIteratormodel__MClassDef = {
-1, /*CAST DEAD*/
"ArrayIterator[MClassDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1062, /* ArrayIterator[MClassDef] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MClassDef = {
0, /* dummy */
{
&type_array__Arraymodel__MClassDef, /* Array[Iterator#0]: Array[MClassDef] */
&type_array__AbstractArrayReadmodel__MClassDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MClassDef] */
}
};
/* runtime type NativeArray[MClassDef] */
const struct type type_array__NativeArraymodel__MClassDef = {
1063,
"NativeArray[MClassDef]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1063, /* NativeArray[MClassDef] */
},
};
const struct types resolution_table_array__NativeArraymodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* NativeArray#0: MClassDef */
&type_array__NativeArraymodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[MClassDef] */
}
};
/* runtime type HashMapKeys[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MProperty,
8,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1535, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
1800, /* HashMapKeys[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Set[MProperty]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Set[MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapKeys[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1535, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MProperty,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1064, /* Collection[Set[PropertyLayoutElement]] */
1353, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1354, /* Collection[Set[MProperty]] */
1801, /* HashMapValues[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Set[MProperty]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Set[MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MProperty, /* RemovableCollection#0: Set[MProperty] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MProperty, /* Collection#0: Set[MProperty] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty, /* Collection[Collection#0]: Collection[Set[MProperty]] */
}
};
/* runtime type HashMapValues[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1064, /* Collection[Set[PropertyLayoutElement]] */
1353, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* RemovableCollection#0: Set[PropertyLayoutElement] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Collection#0: Set[PropertyLayoutElement] */
&type_abstract_collection__Collectionabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Collection[Collection#0]: Collection[Set[PropertyLayoutElement]] */
}
};
/* runtime type Collection[Set[MProperty]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty = {
1354,
"Collection[Set[MProperty]]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
1064,
"Collection[Set[PropertyLayoutElement]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
1065,
"NativeArray[nullable HashMapNode[MClass, Set[MProperty]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1065, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* NativeArray#0: nullable HashMapNode[MClass, Set[MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
327,
"NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray#0: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
}
};
/* runtime type HashMapIterator[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
328, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1066, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1067, /* MapIterator[MClass, Set[MProperty]] */
-1, /* empty */
1536, /* HashMapIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[MProperty]] */
}
};
/* runtime type HashMapIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
328, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1066, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
}
};
/* runtime type MapIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
1067,
"MapIterator[MClass, Set[MProperty]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
328,
"MapIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
1537,
"HashMapNode[MClass, Set[MProperty]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
27, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
329, /* nullable HashMapNode[MClass, Set[MProperty]] */
1068, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1537, /* HashMapNode[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MProperty, /* HashMapNode#1: Set[MProperty] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapNode[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
1068,
"HashMapNode[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
5,
{
0, /* nullable Object */
1, /* Object */
27, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1068, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapNode#1: Set[PropertyLayoutElement] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
329,
"nullable HashMapNode[MClass, Set[MProperty]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
27,
"nullable HashMapNode[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type IteratorRange[Int] */
const struct type type_range__IteratorRangekernel__Int = {
-1, /*CAST DEAD*/
"IteratorRange[Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_range__IteratorRangekernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
330, /* IteratorRange[Int] */
},
};
const struct types resolution_table_range__IteratorRangekernel__Int = {
0, /* dummy */
{
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
&type_kernel__Int, /* IteratorRange#0: Int */
&type_range__Rangekernel__Int, /* Range[IteratorRange#0]: Range[Int] */
}
};
/* runtime type Array[Char] */
const struct type type_array__Arraykernel__Char = {
-1, /*CAST DEAD*/
"Array[Char]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraykernel__Char,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
603, /* Collection[Char] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1802, /* AbstractArrayRead[Char] */
1459, /* Array[Object] */
2065, /* Array[Char] */
},
};
const struct types resolution_table_array__Arraykernel__Char = {
0, /* dummy */
{
&type_kernel__Char, /* Sequence#0: Char */
&type_kernel__Char, /* SimpleCollection#0: Char */
&type_array__NativeArraykernel__Char, /* NativeArray[Array#0]: NativeArray[Char] */
&type_array__Arraykernel__Char, /* Array[Array#0]: Array[Char] */
&type_array__NativeArraykernel__Char, /* NativeArray[ArrayCapable#0]: NativeArray[Char] */
&type_kernel__Char, /* RemovableCollection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Sequence#0]: Collection[Char] */
&type_abstract_collection__Collectionkernel__Char, /* Collection[SimpleCollection#0]: Collection[Char] */
&type_kernel__Char, /* Collection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Collection#0]: Collection[Char] */
&type_kernel__Char, /* SequenceRead#0: Char */
&type_kernel__Char, /* AbstractArrayRead#0: Char */
&type_array__Arraykernel__Char, /* Array[AbstractArrayRead#0]: Array[Char] */
&type_array__ArrayIteratorkernel__Char, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Char] */
}
};
/* runtime type AbstractArrayRead[Char] */
const struct type type_array__AbstractArrayReadkernel__Char = {
1802,
"AbstractArrayRead[Char]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup = {
331,
"HashMap[MGroup, POSetElement[MGroup]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
331, /* HashMap[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mproject__MGroup, /* MapRead#0: MGroup */
&type_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
&type_hash_collection__HashMapKeysmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MGroup, POSetElement[MGroup]] */
&type_hash_collection__HashMapValuesmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MGroup, POSetElement[MGroup]] */
&type_hash_collection__HashMapIteratormproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MGroup, POSetElement[MGroup]] */
&type_mproject__MGroup, /* Map#0: MGroup */
&type_poset__POSetElementmproject__MGroup, /* Map#1: POSetElement[MGroup] */
&type_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MGroup, POSetElement[MGroup]] */
&type_mproject__MGroup, /* HashCollection#0: MGroup */
&type_nullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* nullable HashCollection#1: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
&type_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* HashCollection#1: HashMapNode[MGroup, POSetElement[MGroup]] */
&type_nullable_mproject__MGroup, /* nullable HashCollection#0: nullable MGroup */
}
};
/* runtime type POSetElement[MGroup] */
const struct type type_poset__POSetElementmproject__MGroup = {
332,
"POSetElement[MGroup]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
332, /* POSetElement[MGroup] */
},
};
const struct types resolution_table_poset__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashSetmproject__MGroup, /* HashSet[POSetElement#0]: HashSet[MGroup] */
&type_poset__POSetmproject__MGroup, /* POSet[POSetElement#0]: POSet[MGroup] */
&type_mproject__MGroup, /* POSetElement#0: MGroup */
}
};
/* runtime type ArrayIterator[ModulePath] */
const struct type type_array__ArrayIteratormodelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"ArrayIterator[ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodelbuilder__ModulePath,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
333, /* ArrayIterator[nullable ModulePath] */
1355, /* ArrayIterator[ModulePath] */
},
};
const struct types resolution_table_array__ArrayIteratormodelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__Arraymodelbuilder__ModulePath, /* Array[Iterator#0]: Array[ModulePath] */
&type_array__AbstractArrayReadmodelbuilder__ModulePath, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ModulePath] */
}
};
/* runtime type ArrayIterator[nullable ModulePath] */
const struct type type_array__ArrayIteratornullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
333, /* ArrayIterator[nullable ModulePath] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[Iterator#0]: Array[nullable ModulePath] */
&type_array__AbstractArrayReadnullable_modelbuilder__ModulePath, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable ModulePath] */
}
};
/* runtime type NativeArray[ModulePath] */
const struct type type_array__NativeArraymodelbuilder__ModulePath = {
1356,
"NativeArray[ModulePath]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraymodelbuilder__ModulePath,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
334, /* NativeArray[nullable ModulePath] */
1356, /* NativeArray[ModulePath] */
},
};
const struct types resolution_table_array__NativeArraymodelbuilder__ModulePath = {
0, /* dummy */
{
&type_modelbuilder__ModulePath, /* NativeArray#0: ModulePath */
&type_array__NativeArraymodelbuilder__ModulePath, /* NativeArray[NativeArray#0]: NativeArray[ModulePath] */
}
};
/* runtime type NativeArray[nullable ModulePath] */
const struct type type_array__NativeArraynullable_modelbuilder__ModulePath = {
334,
"NativeArray[nullable ModulePath]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
334, /* NativeArray[nullable ModulePath] */
},
};
const struct types resolution_table_array__NativeArraynullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_nullable_modelbuilder__ModulePath, /* NativeArray#0: nullable ModulePath */
&type_array__NativeArraynullable_modelbuilder__ModulePath, /* NativeArray[NativeArray#0]: NativeArray[nullable ModulePath] */
}
};
/* runtime type ArrayIterator[Int] */
const struct type type_array__ArrayIteratorkernel__Int = {
-1, /*CAST DEAD*/
"ArrayIterator[Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1069, /* ArrayIterator[Int] */
},
};
const struct types resolution_table_array__ArrayIteratorkernel__Int = {
0, /* dummy */
{
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
&type_array__AbstractArrayReadkernel__Int, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Int] */
}
};
/* runtime type NativeArray[Int] */
const struct type type_array__NativeArraykernel__Int = {
1070,
"NativeArray[Int]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraykernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1070, /* NativeArray[Int] */
},
};
const struct types resolution_table_array__NativeArraykernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* NativeArray#0: Int */
&type_array__NativeArraykernel__Int, /* NativeArray[NativeArray#0]: NativeArray[Int] */
}
};
/* runtime type Array[APropdef] */
const struct type type_array__Arrayparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"Array[APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__APropdef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
1294, /* AbstractArrayRead[Object] */
1474, /* Collection[APropdef] */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
2132, /* AbstractArrayRead[APropdef] */
2145, /* Array[Prod] */
2185, /* Array[APropdef] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__APropdef = {
0, /* dummy */
{
&type_parser_nodes__APropdef, /* Sequence#0: APropdef */
&type_parser_nodes__APropdef, /* SimpleCollection#0: APropdef */
&type_array__NativeArrayparser_nodes__APropdef, /* NativeArray[Array#0]: NativeArray[APropdef] */
&type_array__Arrayparser_nodes__APropdef, /* Array[Array#0]: Array[APropdef] */
&type_array__NativeArrayparser_nodes__APropdef, /* NativeArray[ArrayCapable#0]: NativeArray[APropdef] */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Sequence#0]: Collection[APropdef] */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[SimpleCollection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* SequenceRead#0: APropdef */
&type_parser_nodes__APropdef, /* AbstractArrayRead#0: APropdef */
&type_array__Arrayparser_nodes__APropdef, /* Array[AbstractArrayRead#0]: Array[APropdef] */
&type_array__ArrayIteratorparser_nodes__APropdef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[APropdef] */
}
};
/* runtime type AbstractArrayRead[APropdef] */
const struct type type_array__AbstractArrayReadparser_nodes__APropdef = {
2132,
"AbstractArrayRead[APropdef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[ANode] */
const struct type type_list__ListNodeparser_nodes__ANode = {
1803,
"ListNode[ANode]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodeparser_nodes__ANode,
8,
{
0, /* nullable Object */
1, /* Object */
28, /* nullable ListNode[ANode] */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1357, /* Container[ANode] */
1803, /* ListNode[ANode] */
},
};
const struct types resolution_table_list__ListNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_list__ListNodeparser_nodes__ANode, /* nullable ListNode[ListNode#0]: nullable ListNode[ANode] */
&type_parser_nodes__ANode, /* ListNode#0: ANode */
&type_abstract_collection__ContainerIteratorparser_nodes__ANode, /* ContainerIterator[Container#0]: ContainerIterator[ANode] */
&type_parser_nodes__ANode, /* Container#0: ANode */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
}
};
/* runtime type nullable ListNode[ANode] */
const struct type type_nullable_list__ListNodeparser_nodes__ANode = {
28,
"nullable ListNode[ANode]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[ANode] */
const struct type type_abstract_collection__Containerparser_nodes__ANode = {
1357,
"Container[ANode]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[ANode] */
const struct type type_list__ListIteratorparser_nodes__ANode = {
-1, /*CAST DEAD*/
"ListIterator[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratorparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
335, /* ListIterator[ANode] */
},
};
const struct types resolution_table_list__ListIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_list__Listparser_nodes__ANode, /* List[ListIterator#0]: List[ANode] */
}
};
/* runtime type NativeArray[nullable HashSetNode[ANode]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
1071,
"NativeArray[nullable HashSetNode[ANode]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1071, /* NativeArray[nullable HashSetNode[ANode]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray#0: nullable HashSetNode[ANode] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[ANode]] */
}
};
/* runtime type HashSetIterator[ANode] */
const struct type type_hash_collection__HashSetIteratorparser_nodes__ANode = {
-1, /*CAST DEAD*/
"HashSetIterator[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1072, /* HashSetIterator[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_hash_collection__HashSetparser_nodes__ANode, /* HashSet[HashSetIterator#0]: HashSet[ANode] */
}
};
/* runtime type HashSetNode[ANode] */
const struct type type_hash_collection__HashSetNodeparser_nodes__ANode = {
1538,
"HashSetNode[ANode]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodeparser_nodes__ANode,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
336, /* nullable HashSetNode[ANode] */
1061, /* HashSetNode[Object] */
1538, /* HashSetNode[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* HashSetNode#0: ANode */
NULL, /* empty */
&type_parser_nodes__ANode, /* HashNode#0: ANode */
}
};
/* runtime type nullable HashSetNode[ANode] */
const struct type type_nullable_hash_collection__HashSetNodeparser_nodes__ANode = {
336,
"nullable HashSetNode[ANode]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MClassType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType = {
1358,
"NativeArray[nullable HashSetNode[MClassType]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1073, /* NativeArray[nullable HashSetNode[MType]] */
1358, /* NativeArray[nullable HashSetNode[MClassType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray#0: nullable HashSetNode[MClassType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MClassType]] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType = {
1073,
"NativeArray[nullable HashSetNode[MType]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1073, /* NativeArray[nullable HashSetNode[MType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MType, /* NativeArray#0: nullable HashSetNode[MType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MType]] */
}
};
/* runtime type HashSetIterator[MClassType] */
const struct type type_hash_collection__HashSetIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"HashSetIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1074, /* HashSetIterator[MType] */
1359, /* HashSetIterator[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_hash_collection__HashSetmodel__MClassType, /* HashSet[HashSetIterator#0]: HashSet[MClassType] */
}
};
/* runtime type HashSetIterator[MType] */
const struct type type_hash_collection__HashSetIteratormodel__MType = {
-1, /*CAST DEAD*/
"HashSetIterator[MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1074, /* HashSetIterator[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
&type_hash_collection__HashSetmodel__MType, /* HashSet[HashSetIterator#0]: HashSet[MType] */
}
};
/* runtime type HashSetNode[MClassType] */
const struct type type_hash_collection__HashSetNodemodel__MClassType = {
2000,
"HashSetNode[MClassType]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClassType,
8,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
337, /* nullable HashSetNode[MType] */
1061, /* HashSetNode[Object] */
1075, /* nullable HashSetNode[MClassType] */
1539, /* HashSetNode[MType] */
2000, /* HashSetNode[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* HashSetNode#0: MClassType */
NULL, /* empty */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type HashSetNode[MType] */
const struct type type_hash_collection__HashSetNodemodel__MType = {
1539,
"HashSetNode[MType]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashSetNodemodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
337, /* nullable HashSetNode[MType] */
1061, /* HashSetNode[Object] */
-1, /* empty */
1539, /* HashSetNode[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashSetNode#0: MType */
NULL, /* empty */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashSetNode[MClassType] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClassType = {
1075,
"nullable HashSetNode[MClassType]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[MType] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MType = {
337,
"nullable HashSetNode[MType]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MClass]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass = {
1076,
"NativeArray[nullable HashSetNode[MClass]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1076, /* NativeArray[nullable HashSetNode[MClass]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray#0: nullable HashSetNode[MClass] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MClass]] */
}
};
/* runtime type HashSetIterator[MClass] */
const struct type type_hash_collection__HashSetIteratormodel__MClass = {
-1, /*CAST DEAD*/
"HashSetIterator[MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1077, /* HashSetIterator[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClass = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
&type_hash_collection__HashSetmodel__MClass, /* HashSet[HashSetIterator#0]: HashSet[MClass] */
}
};
/* runtime type HashSetNode[MClass] */
const struct type type_hash_collection__HashSetNodemodel__MClass = {
1540,
"HashSetNode[MClass]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClass,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
338, /* nullable HashSetNode[MClass] */
1061, /* HashSetNode[Object] */
1540, /* HashSetNode[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClass = {
0, /* dummy */
{
&type_model__MClass, /* HashSetNode#0: MClass */
NULL, /* empty */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashSetNode[MClass] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClass = {
338,
"nullable HashSetNode[MClass]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MMethodDef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef = {
1360,
"NativeArray[nullable HashSetNode[MMethodDef]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef,
5,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1360, /* NativeArray[nullable HashSetNode[MMethodDef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MMethodDef, /* NativeArray#0: nullable HashSetNode[MMethodDef] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MMethodDef]] */
}
};
/* runtime type NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement = {
1078,
"NativeArray[nullable HashSetNode[PropertyLayoutElement]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* NativeArray#0: nullable HashSetNode[PropertyLayoutElement] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
}
};
/* runtime type HashSetIterator[MMethodDef] */
const struct type type_hash_collection__HashSetIteratormodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashSetIterator[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MMethodDef,
5,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
1361, /* HashSetIterator[MMethodDef] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[Iterator#0]: Array[MMethodDef] */
&type_hash_collection__HashSetmodel__MMethodDef, /* HashSet[HashSetIterator#0]: HashSet[MMethodDef] */
}
};
/* runtime type HashSetIterator[PropertyLayoutElement] */
const struct type type_hash_collection__HashSetIteratorseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashSetIterator[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorseparate_compiler__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[Iterator#0]: Array[PropertyLayoutElement] */
&type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement, /* HashSet[HashSetIterator#0]: HashSet[PropertyLayoutElement] */
}
};
/* runtime type HashSetNode[MMethodDef] */
const struct type type_hash_collection__HashSetNodemodel__MMethodDef = {
2001,
"HashSetNode[MMethodDef]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashSetNodemodel__MMethodDef,
9,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
1080, /* nullable HashSetNode[MMethodDef] */
-1, /* empty */
1541, /* HashSetNode[PropertyLayoutElement] */
2001, /* HashSetNode[MMethodDef] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* HashSetNode#0: MMethodDef */
NULL, /* empty */
&type_model__MMethodDef, /* HashNode#0: MMethodDef */
}
};
/* runtime type HashSetNode[PropertyLayoutElement] */
const struct type type_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement = {
1541,
"HashSetNode[PropertyLayoutElement]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement,
8,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
-1, /* empty */
-1, /* empty */
1541, /* HashSetNode[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_separate_compiler__PropertyLayoutElement, /* HashSetNode#0: PropertyLayoutElement */
NULL, /* empty */
&type_separate_compiler__PropertyLayoutElement, /* HashNode#0: PropertyLayoutElement */
}
};
/* runtime type nullable HashSetNode[MMethodDef] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MMethodDef = {
1080,
"nullable HashSetNode[MMethodDef]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[PropertyLayoutElement] */
const struct type type_nullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement = {
339,
"nullable HashSetNode[PropertyLayoutElement]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MMethod]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod = {
1542,
"NativeArray[nullable HashSetNode[MMethod]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod,
6,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1362, /* NativeArray[nullable HashSetNode[MProperty]] */
1542, /* NativeArray[nullable HashSetNode[MMethod]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MMethod, /* NativeArray#0: nullable HashSetNode[MMethod] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MMethod]] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MProperty]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty = {
1362,
"NativeArray[nullable HashSetNode[MProperty]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty,
5,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1362, /* NativeArray[nullable HashSetNode[MProperty]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray#0: nullable HashSetNode[MProperty] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MProperty]] */
}
};
/* runtime type HashSetIterator[MMethod] */
const struct type type_hash_collection__HashSetIteratormodel__MMethod = {
-1, /*CAST DEAD*/
"HashSetIterator[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MMethod,
6,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
1363, /* HashSetIterator[MProperty] */
1543, /* HashSetIterator[MMethod] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MMethod = {
0, /* dummy */
{
&type_array__Arraymodel__MMethod, /* Array[Iterator#0]: Array[MMethod] */
&type_hash_collection__HashSetmodel__MMethod, /* HashSet[HashSetIterator#0]: HashSet[MMethod] */
}
};
/* runtime type HashSetIterator[MProperty] */
const struct type type_hash_collection__HashSetIteratormodel__MProperty = {
-1, /*CAST DEAD*/
"HashSetIterator[MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MProperty,
5,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
1363, /* HashSetIterator[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MProperty = {
0, /* dummy */
{
&type_array__Arraymodel__MProperty, /* Array[Iterator#0]: Array[MProperty] */
&type_hash_collection__HashSetmodel__MProperty, /* HashSet[HashSetIterator#0]: HashSet[MProperty] */
}
};
/* runtime type HashSetNode[MMethod] */
const struct type type_hash_collection__HashSetNodemodel__MMethod = {
2115,
"HashSetNode[MMethod]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MMethod,
10,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
1081, /* nullable HashSetNode[MProperty] */
1364, /* nullable HashSetNode[MMethod] */
1541, /* HashSetNode[PropertyLayoutElement] */
2002, /* HashSetNode[MProperty] */
2115, /* HashSetNode[MMethod] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MMethod = {
0, /* dummy */
{
&type_model__MMethod, /* HashSetNode#0: MMethod */
NULL, /* empty */
&type_model__MMethod, /* HashNode#0: MMethod */
}
};
/* runtime type HashSetNode[MProperty] */
const struct type type_hash_collection__HashSetNodemodel__MProperty = {
2002,
"HashSetNode[MProperty]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashSetNodemodel__MProperty,
9,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
1081, /* nullable HashSetNode[MProperty] */
-1, /* empty */
1541, /* HashSetNode[PropertyLayoutElement] */
2002, /* HashSetNode[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MProperty = {
0, /* dummy */
{
&type_model__MProperty, /* HashSetNode#0: MProperty */
NULL, /* empty */
&type_model__MProperty, /* HashNode#0: MProperty */
}
};
/* runtime type nullable HashSetNode[MMethod] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MMethod = {
1364,
"nullable HashSetNode[MMethod]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[MProperty] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MProperty = {
1081,
"nullable HashSetNode[MProperty]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[CallSite]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite = {
1082,
"NativeArray[nullable HashSetNode[CallSite]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1082, /* NativeArray[nullable HashSetNode[CallSite]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodetyping__CallSite, /* NativeArray#0: nullable HashSetNode[CallSite] */
&type_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[CallSite]] */
}
};
/* runtime type HashSetIterator[CallSite] */
const struct type type_hash_collection__HashSetIteratortyping__CallSite = {
-1, /*CAST DEAD*/
"HashSetIterator[CallSite]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratortyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1083, /* HashSetIterator[CallSite] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratortyping__CallSite = {
0, /* dummy */
{
&type_array__Arraytyping__CallSite, /* Array[Iterator#0]: Array[CallSite] */
&type_hash_collection__HashSettyping__CallSite, /* HashSet[HashSetIterator#0]: HashSet[CallSite] */
}
};
/* runtime type HashSetNode[CallSite] */
const struct type type_hash_collection__HashSetNodetyping__CallSite = {
1544,
"HashSetNode[CallSite]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodetyping__CallSite,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
340, /* nullable HashSetNode[CallSite] */
1061, /* HashSetNode[Object] */
1544, /* HashSetNode[CallSite] */
},
};
const struct types resolution_table_hash_collection__HashSetNodetyping__CallSite = {
0, /* dummy */
{
&type_typing__CallSite, /* HashSetNode#0: CallSite */
NULL, /* empty */
&type_typing__CallSite, /* HashNode#0: CallSite */
}
};
/* runtime type nullable HashSetNode[CallSite] */
const struct type type_nullable_hash_collection__HashSetNodetyping__CallSite = {
340,
"nullable HashSetNode[CallSite]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
341,
"HashMap[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
341, /* HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* MapRead#0: MType */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]] */
&type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_model__MType, /* Map#0: MType */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* Map#1: HashMap[MProperty, Set[MMethodDef]] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* nullable HashCollection#1: nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashCollection#1: HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type HashMap[MProperty, Set[MMethodDef]] */
const struct type type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
342,
"HashMap[MProperty, Set[MMethodDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
342, /* HashMap[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* MapRead#0: MProperty */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]] */
&type_hash_collection__HashMapKeysmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MProperty, Set[MMethodDef]] */
&type_hash_collection__HashMapValuesmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MProperty, Set[MMethodDef]] */
&type_hash_collection__HashMapIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MProperty, Set[MMethodDef]] */
&type_model__MProperty, /* Map#0: MProperty */
&type_abstract_collection__Setmodel__MMethodDef, /* Map#1: Set[MMethodDef] */
&type_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MProperty, Set[MMethodDef]] */
&type_model__MProperty, /* HashCollection#0: MProperty */
&type_nullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* nullable HashCollection#1: nullable HashMapNode[MProperty, Set[MMethodDef]] */
&type_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashCollection#1: HashMapNode[MProperty, Set[MMethodDef]] */
&type_nullable_model__MProperty, /* nullable HashCollection#0: nullable MProperty */
}
};
/* runtime type ArrayIterator[MMethod] */
const struct type type_array__ArrayIteratormodel__MMethod = {
-1, /*CAST DEAD*/
"ArrayIterator[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MMethod,
7,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
299, /* ArrayIterator[nullable MProperty] */
1032, /* ArrayIterator[PropertyLayoutElement] */
1523, /* ArrayIterator[MProperty] */
1804, /* ArrayIterator[MMethod] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MMethod = {
0, /* dummy */
{
&type_array__Arraymodel__MMethod, /* Array[Iterator#0]: Array[MMethod] */
&type_array__AbstractArrayReadmodel__MMethod, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MMethod] */
}
};
/* runtime type NativeArray[MMethod] */
const struct type type_array__NativeArraymodel__MMethod = {
1805,
"NativeArray[MMethod]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MMethod,
7,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
300, /* NativeArray[nullable MProperty] */
1033, /* NativeArray[PropertyLayoutElement] */
1524, /* NativeArray[MProperty] */
1805, /* NativeArray[MMethod] */
},
};
const struct types resolution_table_array__NativeArraymodel__MMethod = {
0, /* dummy */
{
&type_model__MMethod, /* NativeArray#0: MMethod */
&type_array__NativeArraymodel__MMethod, /* NativeArray[NativeArray#0]: NativeArray[MMethod] */
}
};
/* runtime type ListNode[MMethodDef] */
const struct type type_list__ListNodemodel__MMethodDef = {
2116,
"ListNode[MMethodDef]", /* class_name_string */
15,
0,
&resolution_table_list__ListNodemodel__MMethodDef,
16,
{
0, /* nullable Object */
1, /* Object */
29, /* nullable ListNode[MMethodDef] */
-1, /* empty */
84, /* Collection[Object] */
120, /* Collection[nullable MPropDef] */
596, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1477, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
1656, /* Collection[MMethodDef] */
2003, /* Container[MMethodDef] */
2116, /* ListNode[MMethodDef] */
},
};
const struct types resolution_table_list__ListNodemodel__MMethodDef = {
0, /* dummy */
{
&type_nullable_list__ListNodemodel__MMethodDef, /* nullable ListNode[ListNode#0]: nullable ListNode[MMethodDef] */
&type_model__MMethodDef, /* ListNode#0: MMethodDef */
&type_abstract_collection__ContainerIteratormodel__MMethodDef, /* ContainerIterator[Container#0]: ContainerIterator[MMethodDef] */
&type_model__MMethodDef, /* Container#0: MMethodDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
}
};
/* runtime type nullable ListNode[MMethodDef] */
const struct type type_nullable_list__ListNodemodel__MMethodDef = {
29,
"nullable ListNode[MMethodDef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[MMethodDef] */
const struct type type_abstract_collection__Containermodel__MMethodDef = {
2003,
"Container[MMethodDef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[MMethodDef] */
const struct type type_list__ListIteratormodel__MMethodDef = {
-1, /*CAST DEAD*/
"ListIterator[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratormodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
343, /* ListIterator[MMethodDef] */
},
};
const struct types resolution_table_list__ListIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[Iterator#0]: Array[MMethodDef] */
&type_list__Listmodel__MMethodDef, /* List[ListIterator#0]: List[MMethodDef] */
}
};
/* runtime type HashMapKeys[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
597, /* Collection[MClassDef] */
1365, /* HashMapKeys[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassDef, HashSet[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassDef, HashSet[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* RemovableCollection#0: MClassDef */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* Collection#0: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[Collection#0]: Collection[MClassDef] */
}
};
/* runtime type HashMapValues[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassDefhash_collection__HashSetmodel__MType,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1084, /* Collection[Set[MType]] */
1366, /* Collection[HashSet[MType]] */
1545, /* HashMapValues[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassDef, HashSet[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassDef, HashSet[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashSetmodel__MType, /* RemovableCollection#0: HashSet[MType] */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashSetmodel__MType, /* Collection#0: HashSet[MType] */
&type_abstract_collection__Collectionhash_collection__HashSetmodel__MType, /* Collection[Collection#0]: Collection[HashSet[MType]] */
}
};
/* runtime type Collection[HashSet[MType]] */
const struct type type_abstract_collection__Collectionhash_collection__HashSetmodel__MType = {
1366,
"Collection[HashSet[MType]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Set[MType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MType = {
1084,
"Collection[Set[MType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
344,
"NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
344, /* NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray#0: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
}
};
/* runtime type HashMapIterator[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassDefhash_collection__HashSetmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
345, /* MapIterator[MClassDef, HashSet[MType]] */
1085, /* HashMapIterator[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassDef, HashSet[MType]] */
}
};
/* runtime type MapIterator[MClassDef, HashSet[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
345,
"MapIterator[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
1086,
"HashMapNode[MClassDef, HashSet[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
30, /* nullable HashMapNode[MClassDef, HashSet[MType]] */
1086, /* HashMapNode[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_hash_collection__HashSetmodel__MType, /* HashMapNode#1: HashSet[MType] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, HashSet[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
30,
"nullable HashMapNode[MClassDef, HashSet[MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClass, Int] */
const struct type type_hash_collection__HashMapKeysmodel__MClasskernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClasskernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1546, /* HashMapKeys[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClasskernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Int] */
&type_abstract_collection__MapKeysIteratormodel__MClasskernel__Int, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Int] */
const struct type type_hash_collection__HashMapValuesmodel__MClasskernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClasskernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
610, /* Collection[Int] */
1367, /* HashMapValues[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClasskernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Int] */
&type_abstract_collection__MapValuesIteratormodel__MClasskernel__Int, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* RemovableCollection#0: Int */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
346,
"NativeArray[nullable HashMapNode[MClass, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
346, /* NativeArray[nullable HashMapNode[MClass, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray#0: nullable HashMapNode[MClass, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Int]] */
}
};
/* runtime type HashMapIterator[MClass, Int] */
const struct type type_hash_collection__HashMapIteratormodel__MClasskernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClasskernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
347, /* MapIterator[MClass, Int] */
1087, /* HashMapIterator[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClasskernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Int] */
}
};
/* runtime type MapIterator[MClass, Int] */
const struct type type_abstract_collection__MapIteratormodel__MClasskernel__Int = {
347,
"MapIterator[MClass, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Int] */
const struct type type_hash_collection__HashMapNodemodel__MClasskernel__Int = {
1088,
"HashMapNode[MClass, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClasskernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
31, /* nullable HashMapNode[MClass, Int] */
1088, /* HashMapNode[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClasskernel__Int = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
31,
"nullable HashMapNode[MClass, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraynullable_model__MType,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1547, /* HashMapKeys[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, Array[nullable MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type HashMapValues[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraynullable_model__MType,
7,
{
0, /* nullable Object */
1, /* Object */
348, /* Collection[nullable Array[nullable MType]] */
-1, /* empty */
84, /* Collection[Object] */
1368, /* Collection[Array[nullable MType]] */
1548, /* HashMapValues[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, Array[nullable MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* RemovableCollection#0: Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* Collection#0: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[Array[nullable MType]] */
}
};
/* runtime type Collection[Array[nullable MType]] */
const struct type type_abstract_collection__Collectionarray__Arraynullable_model__MType = {
1368,
"Collection[Array[nullable MType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable Array[nullable MType]] */
const struct type type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType = {
348,
"Collection[nullable Array[nullable MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
349,
"NativeArray[nullable HashMapNode[MType, Array[nullable MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
349, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[MType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
}
};
/* runtime type HashMapIterator[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
350, /* MapIterator[MType, Array[nullable MType]] */
1089, /* HashMapIterator[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, Array[nullable MType]] */
}
};
/* runtime type MapIterator[MType, Array[nullable MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypearray__Arraynullable_model__MType = {
350,
"MapIterator[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
1090,
"HashMapNode[MType, Array[nullable MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType,
5,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashMapNode[MType, Array[nullable MType]] */
-1, /* empty */
1090, /* HashMapNode[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_array__Arraynullable_model__MType, /* HashMapNode#1: Array[nullable MType] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MType, Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
32,
"nullable HashMapNode[MType, Array[nullable MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypearray__Arraynullable_model__MType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1547, /* HashMapKeys[MType, Array[nullable MType]] */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
2004, /* HashMapKeys[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassType, Array[nullable MType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassType, Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type HashMapValues[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypearray__Arraynullable_model__MType,
8,
{
0, /* nullable Object */
1, /* Object */
348, /* Collection[nullable Array[nullable MType]] */
-1, /* empty */
84, /* Collection[Object] */
1368, /* Collection[Array[nullable MType]] */
1548, /* HashMapValues[MType, Array[nullable MType]] */
1806, /* HashMapValues[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassType, Array[nullable MType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassType, Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* RemovableCollection#0: Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* Collection#0: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[Array[nullable MType]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
1091,
"NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
349, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
1091, /* NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
}
};
/* runtime type HashMapIterator[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypearray__Arraynullable_model__MType,
6,
{
0, /* nullable Object */
1, /* Object */
350, /* MapIterator[MType, Array[nullable MType]] */
1089, /* HashMapIterator[MType, Array[nullable MType]] */
1092, /* MapIterator[MClassType, Array[nullable MType]] */
1549, /* HashMapIterator[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassType, Array[nullable MType]] */
}
};
/* runtime type MapIterator[MClassType, Array[nullable MType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypearray__Arraynullable_model__MType = {
1092,
"MapIterator[MClassType, Array[nullable MType]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
1550,
"HashMapNode[MClassType, Array[nullable MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashMapNode[MType, Array[nullable MType]] */
351, /* nullable HashMapNode[MClassType, Array[nullable MType]] */
1090, /* HashMapNode[MType, Array[nullable MType]] */
1550, /* HashMapNode[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_array__Arraynullable_model__MType, /* HashMapNode#1: Array[nullable MType] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashMapNode[MClassType, Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
351,
"nullable HashMapNode[MClassType, Array[nullable MType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MPropDef,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1551, /* HashMapKeys[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Array[nullable MPropDef]] */
&type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Array[nullable MPropDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MPropDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1093, /* Collection[Array[nullable MPropDef]] */
1369, /* HashMapValues[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Array[nullable MPropDef]] */
&type_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Array[nullable MPropDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MPropDef, /* RemovableCollection#0: Array[nullable MPropDef] */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MPropDef, /* Collection#0: Array[nullable MPropDef] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef, /* Collection[Collection#0]: Collection[Array[nullable MPropDef]] */
}
};
/* runtime type Collection[Array[nullable MPropDef]] */
const struct type type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef = {
1093,
"Collection[Array[nullable MPropDef]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
352,
"NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
352, /* NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray#0: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
}
};
/* runtime type HashMapIterator[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
353, /* MapIterator[MClass, Array[nullable MPropDef]] */
1094, /* HashMapIterator[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Array[nullable MPropDef]] */
}
};
/* runtime type MapIterator[MClass, Array[nullable MPropDef]] */
const struct type type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
353,
"MapIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
1095,
"HashMapNode[MClass, Array[nullable MPropDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
33, /* nullable HashMapNode[MClass, Array[nullable MPropDef]] */
1095, /* HashMapNode[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_array__Arraynullable_model__MPropDef, /* HashMapNode#1: Array[nullable MPropDef] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Array[nullable MPropDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
33,
"nullable HashMapNode[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, String] */
const struct type type_hash_collection__HashMapKeysstring__Stringstring__String = {
-1, /*CAST DEAD*/
"HashMapKeys[String, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringstring__String,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1552, /* HashMapKeys[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringstring__String, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, String] */
&type_abstract_collection__MapKeysIteratorstring__Stringstring__String, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, String] */
const struct type type_hash_collection__HashMapValuesstring__Stringstring__String = {
-1, /*CAST DEAD*/
"HashMapValues[String, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringstring__String,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1553, /* HashMapValues[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringstring__String, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, String] */
&type_abstract_collection__MapValuesIteratorstring__Stringstring__String, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String = {
354,
"NativeArray[nullable HashMapNode[String, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
354, /* NativeArray[nullable HashMapNode[String, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray#0: nullable HashMapNode[String, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, String]] */
}
};
/* runtime type HashMapIterator[String, String] */
const struct type type_hash_collection__HashMapIteratorstring__Stringstring__String = {
-1, /*CAST DEAD*/
"HashMapIterator[String, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
355, /* MapIterator[String, String] */
1096, /* HashMapIterator[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringstring__String, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, String] */
}
};
/* runtime type MapIterator[String, String] */
const struct type type_abstract_collection__MapIteratorstring__Stringstring__String = {
355,
"MapIterator[String, String]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, String] */
const struct type type_hash_collection__HashMapNodestring__Stringstring__String = {
1097,
"HashMapNode[String, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
34, /* nullable HashMapNode[String, String] */
1097, /* HashMapNode[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringstring__String = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_string__String, /* HashMapNode#1: String */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, String] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringstring__String = {
34,
"nullable HashMapNode[String, String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[CodeFile] */
const struct type type_list__ListNodeabstract_compiler__CodeFile = {
1807,
"ListNode[CodeFile]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodeabstract_compiler__CodeFile,
8,
{
0, /* nullable Object */
1, /* Object */
35, /* nullable ListNode[CodeFile] */
-1, /* empty */
84, /* Collection[Object] */
618, /* Collection[CodeFile] */
1370, /* Container[CodeFile] */
1807, /* ListNode[CodeFile] */
},
};
const struct types resolution_table_list__ListNodeabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_nullable_list__ListNodeabstract_compiler__CodeFile, /* nullable ListNode[ListNode#0]: nullable ListNode[CodeFile] */
&type_abstract_compiler__CodeFile, /* ListNode#0: CodeFile */
&type_abstract_collection__ContainerIteratorabstract_compiler__CodeFile, /* ContainerIterator[Container#0]: ContainerIterator[CodeFile] */
&type_abstract_compiler__CodeFile, /* Container#0: CodeFile */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__CodeFile, /* Collection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Collection#0]: Collection[CodeFile] */
}
};
/* runtime type nullable ListNode[CodeFile] */
const struct type type_nullable_list__ListNodeabstract_compiler__CodeFile = {
35,
"nullable ListNode[CodeFile]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[CodeFile] */
const struct type type_abstract_collection__Containerabstract_compiler__CodeFile = {
1370,
"Container[CodeFile]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[CodeFile] */
const struct type type_list__ListIteratorabstract_compiler__CodeFile = {
-1, /*CAST DEAD*/
"ListIterator[CodeFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratorabstract_compiler__CodeFile,
3,
{
0, /* nullable Object */
1, /* Object */
356, /* ListIterator[CodeFile] */
},
};
const struct types resolution_table_list__ListIteratorabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeFile, /* Array[Iterator#0]: Array[CodeFile] */
&type_list__Listabstract_compiler__CodeFile, /* List[ListIterator#0]: List[CodeFile] */
}
};
/* runtime type HashMapKeys[String, ANode] */
const struct type type_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"HashMapKeys[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1554, /* HashMapKeys[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringparser_nodes__ANode, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, ANode] */
&type_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__ANode, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, ANode] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, ANode] */
const struct type type_hash_collection__HashMapValuesstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"HashMapValues[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringparser_nodes__ANode,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1371, /* HashMapValues[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringparser_nodes__ANode, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, ANode] */
&type_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__ANode, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, ANode] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__ANode, /* RemovableCollection#0: ANode */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, ANode]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
357,
"NativeArray[nullable HashMapNode[String, ANode]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashMapNode[String, ANode]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray#0: nullable HashMapNode[String, ANode] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, ANode]] */
}
};
/* runtime type HashMapIterator[String, ANode] */
const struct type type_hash_collection__HashMapIteratorstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"HashMapIterator[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
358, /* MapIterator[String, ANode] */
1098, /* HashMapIterator[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringparser_nodes__ANode, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, ANode] */
}
};
/* runtime type MapIterator[String, ANode] */
const struct type type_abstract_collection__MapIteratorstring__Stringparser_nodes__ANode = {
358,
"MapIterator[String, ANode]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, ANode] */
const struct type type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
1099,
"HashMapNode[String, ANode]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
36, /* nullable HashMapNode[String, ANode] */
1099, /* HashMapNode[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_parser_nodes__ANode, /* HashMapNode#1: ANode */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, ANode] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
36,
"nullable HashMapNode[String, ANode]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[ExternFile] */
const struct type type_array__ArrayIteratorc_tools__ExternFile = {
-1, /*CAST DEAD*/
"ArrayIterator[ExternFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorc_tools__ExternFile,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1100, /* ArrayIterator[ExternFile] */
},
};
const struct types resolution_table_array__ArrayIteratorc_tools__ExternFile = {
0, /* dummy */
{
&type_array__Arrayc_tools__ExternFile, /* Array[Iterator#0]: Array[ExternFile] */
&type_array__AbstractArrayReadc_tools__ExternFile, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ExternFile] */
}
};
/* runtime type NativeArray[ExternFile] */
const struct type type_array__NativeArrayc_tools__ExternFile = {
1101,
"NativeArray[ExternFile]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayc_tools__ExternFile,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1101, /* NativeArray[ExternFile] */
},
};
const struct types resolution_table_array__NativeArrayc_tools__ExternFile = {
0, /* dummy */
{
&type_c_tools__ExternFile, /* NativeArray#0: ExternFile */
&type_array__NativeArrayc_tools__ExternFile, /* NativeArray[NativeArray#0]: NativeArray[ExternFile] */
}
};
/* runtime type ArraySetIterator[String] */
const struct type type_array__ArraySetIteratorstring__String = {
-1, /*CAST DEAD*/
"ArraySetIterator[String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetIteratorstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
359, /* ArraySetIterator[String] */
},
};
const struct types resolution_table_array__ArraySetIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_array__ArrayIteratorstring__String, /* ArrayIterator[ArraySetIterator#0]: ArrayIterator[String] */
}
};
/* runtime type ArrayIterator[Match] */
const struct type type_array__ArrayIteratorstring_search__Match = {
-1, /*CAST DEAD*/
"ArrayIterator[Match]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorstring_search__Match,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1102, /* ArrayIterator[Match] */
},
};
const struct types resolution_table_array__ArrayIteratorstring_search__Match = {
0, /* dummy */
{
&type_array__Arraystring_search__Match, /* Array[Iterator#0]: Array[Match] */
&type_array__AbstractArrayReadstring_search__Match, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Match] */
}
};
/* runtime type NativeArray[Match] */
const struct type type_array__NativeArraystring_search__Match = {
1103,
"NativeArray[Match]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraystring_search__Match,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1103, /* NativeArray[Match] */
},
};
const struct types resolution_table_array__NativeArraystring_search__Match = {
0, /* dummy */
{
&type_string_search__Match, /* NativeArray#0: Match */
&type_array__NativeArraystring_search__Match, /* NativeArray[NativeArray#0]: NativeArray[Match] */
}
};
/* runtime type ArrayIterator[State] */
const struct type type_array__ArrayIteratorparser_work__State = {
-1, /*CAST DEAD*/
"ArrayIterator[State]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_work__State,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1104, /* ArrayIterator[State] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_work__State = {
0, /* dummy */
{
&type_array__Arrayparser_work__State, /* Array[Iterator#0]: Array[State] */
&type_array__AbstractArrayReadparser_work__State, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[State] */
}
};
/* runtime type NativeArray[State] */
const struct type type_array__NativeArrayparser_work__State = {
1105,
"NativeArray[State]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser_work__State,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1105, /* NativeArray[State] */
},
};
const struct types resolution_table_array__NativeArrayparser_work__State = {
0, /* dummy */
{
&type_parser_work__State, /* NativeArray#0: State */
&type_array__NativeArrayparser_work__State, /* NativeArray[NativeArray#0]: NativeArray[State] */
}
};
/* runtime type Array[AImport] */
const struct type type_array__Arrayparser_nodes__AImport = {
-1, /*CAST DEAD*/
"Array[AImport]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AImport,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
1294, /* AbstractArrayRead[Object] */
1481, /* Collection[AImport] */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
2133, /* AbstractArrayRead[AImport] */
2145, /* Array[Prod] */
2186, /* Array[AImport] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AImport = {
0, /* dummy */
{
&type_parser_nodes__AImport, /* Sequence#0: AImport */
&type_parser_nodes__AImport, /* SimpleCollection#0: AImport */
&type_array__NativeArrayparser_nodes__AImport, /* NativeArray[Array#0]: NativeArray[AImport] */
&type_array__Arrayparser_nodes__AImport, /* Array[Array#0]: Array[AImport] */
&type_array__NativeArrayparser_nodes__AImport, /* NativeArray[ArrayCapable#0]: NativeArray[AImport] */
&type_parser_nodes__AImport, /* RemovableCollection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Sequence#0]: Collection[AImport] */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[SimpleCollection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* Collection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Collection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* SequenceRead#0: AImport */
&type_parser_nodes__AImport, /* AbstractArrayRead#0: AImport */
&type_array__Arrayparser_nodes__AImport, /* Array[AbstractArrayRead#0]: Array[AImport] */
&type_array__ArrayIteratorparser_nodes__AImport, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AImport] */
}
};
/* runtime type AbstractArrayRead[AImport] */
const struct type type_array__AbstractArrayReadparser_nodes__AImport = {
2133,
"AbstractArrayRead[AImport]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[TId] */
const struct type type_array__Arrayparser_nodes__TId = {
-1, /*CAST DEAD*/
"Array[TId]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__TId,
14,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1330, /* Collection[TId] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
2066, /* AbstractArrayRead[TId] */
2023, /* Array[ANode] */
2150, /* Array[TId] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__TId = {
0, /* dummy */
{
&type_parser_nodes__TId, /* Sequence#0: TId */
&type_parser_nodes__TId, /* SimpleCollection#0: TId */
&type_array__NativeArrayparser_nodes__TId, /* NativeArray[Array#0]: NativeArray[TId] */
&type_array__Arrayparser_nodes__TId, /* Array[Array#0]: Array[TId] */
&type_array__NativeArrayparser_nodes__TId, /* NativeArray[ArrayCapable#0]: NativeArray[TId] */
&type_parser_nodes__TId, /* RemovableCollection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Sequence#0]: Collection[TId] */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[SimpleCollection#0]: Collection[TId] */
&type_parser_nodes__TId, /* Collection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Collection#0]: Collection[TId] */
&type_parser_nodes__TId, /* SequenceRead#0: TId */
&type_parser_nodes__TId, /* AbstractArrayRead#0: TId */
&type_array__Arrayparser_nodes__TId, /* Array[AbstractArrayRead#0]: Array[TId] */
&type_array__ArrayIteratorparser_nodes__TId, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[TId] */
}
};
/* runtime type AbstractArrayRead[TId] */
const struct type type_array__AbstractArrayReadparser_nodes__TId = {
2066,
"AbstractArrayRead[TId]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClass, MClassType] */
const struct type type_hash_collection__HashMapKeysmodel__MClassmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassmodel__MClassType,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1555, /* HashMapKeys[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassmodel__MClassType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, MClassType] */
&type_abstract_collection__MapKeysIteratormodel__MClassmodel__MClassType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, MClassType] */
const struct type type_hash_collection__HashMapValuesmodel__MClassmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassmodel__MClassType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
1808, /* HashMapValues[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassmodel__MClassType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, MClassType] */
&type_abstract_collection__MapValuesIteratormodel__MClassmodel__MClassType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, MClassType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
360,
"NativeArray[nullable HashMapNode[MClass, MClassType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
360, /* NativeArray[nullable HashMapNode[MClass, MClassType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MClass, MClassType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
}
};
/* runtime type HashMapIterator[MClass, MClassType] */
const struct type type_hash_collection__HashMapIteratormodel__MClassmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
361, /* MapIterator[MClass, MClassType] */
1106, /* HashMapIterator[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassmodel__MClassType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, MClassType] */
}
};
/* runtime type MapIterator[MClass, MClassType] */
const struct type type_abstract_collection__MapIteratormodel__MClassmodel__MClassType = {
361,
"MapIterator[MClass, MClassType]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, MClassType] */
const struct type type_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
1107,
"HashMapNode[MClass, MClassType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
37, /* nullable HashMapNode[MClass, MClassType] */
1107, /* HashMapNode[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_model__MClassType, /* HashMapNode#1: MClassType */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, MClassType] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
37,
"nullable HashMapNode[MClass, MClassType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayMapKeys[MClass, AType] */
const struct type type_array__ArrayMapKeysmodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"ArrayMapKeys[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayMapKeysmodel__MClassparser_nodes__AType,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1556, /* ArrayMapKeys[MClass, AType] */
},
};
const struct types resolution_table_array__ArrayMapKeysmodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__ArrayMapmodel__MClassparser_nodes__AType, /* ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1]: ArrayMap[MClass, AType] */
&type_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AType, /* MapKeysIterator[ArrayMapKeys#0, ArrayMapKeys#1]: MapKeysIterator[MClass, AType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type ArrayMapValues[MClass, AType] */
const struct type type_array__ArrayMapValuesmodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"ArrayMapValues[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayMapValuesmodel__MClassparser_nodes__AType,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1499, /* Collection[AType] */
1809, /* ArrayMapValues[MClass, AType] */
},
};
const struct types resolution_table_array__ArrayMapValuesmodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__ArrayMapmodel__MClassparser_nodes__AType, /* ArrayMap[ArrayMapValues#0, ArrayMapValues#1]: ArrayMap[MClass, AType] */
&type_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AType, /* MapValuesIterator[ArrayMapValues#0, ArrayMapValues#1]: MapValuesIterator[MClass, AType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AType, /* RemovableCollection#0: AType */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AType, /* Collection#0: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[Collection#0]: Collection[AType] */
}
};
/* runtime type CoupleMapIterator[MClass, AType] */
const struct type type_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"CoupleMapIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType,
4,
{
0, /* nullable Object */
1, /* Object */
362, /* MapIterator[MClass, AType] */
1108, /* CoupleMapIterator[MClass, AType] */
},
};
const struct types resolution_table_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_abstract_collection__Iteratorabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Iterator[Couple[CoupleMapIterator#0, CoupleMapIterator#1]]: Iterator[Couple[MClass, AType]] */
}
};
/* runtime type MapIterator[MClass, AType] */
const struct type type_abstract_collection__MapIteratormodel__MClassparser_nodes__AType = {
362,
"MapIterator[MClass, AType]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Couple[MClass, AType] */
const struct type type_abstract_collection__Couplemodel__MClassparser_nodes__AType = {
363,
"Couple[MClass, AType]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__Couplemodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
363, /* Couple[MClass, AType] */
},
};
const struct types resolution_table_abstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_model__MClass, /* Couple#0: MClass */
&type_parser_nodes__AType, /* Couple#1: AType */
}
};
/* runtime type Array[Couple[MClass, AType]] */
const struct type type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"Array[Couple[MClass, AType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
1109, /* Collection[Couple[MClass, AType]] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1810, /* AbstractArrayRead[Couple[MClass, AType]] */
1459, /* Array[Object] */
2067, /* Array[Couple[MClass, AType]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Sequence#0: Couple[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* SimpleCollection#0: Couple[MClass, AType] */
&type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* NativeArray[Array#0]: NativeArray[Couple[MClass, AType]] */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[Array#0]: Array[Couple[MClass, AType]] */
&type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* NativeArray[ArrayCapable#0]: NativeArray[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* RemovableCollection#0: Couple[MClass, AType] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[Sequence#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[SimpleCollection#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection#0: Couple[MClass, AType] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[Collection#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* SequenceRead#0: Couple[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* AbstractArrayRead#0: Couple[MClass, AType] */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[AbstractArrayRead#0]: Array[Couple[MClass, AType]] */
&type_array__ArrayIteratorabstract_collection__Couplemodel__MClassparser_nodes__AType, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Couple[MClass, AType]] */
}
};
/* runtime type Collection[Couple[MClass, AType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType = {
1109,
"Collection[Couple[MClass, AType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Couple[MClass, AType]] */
const struct type type_array__AbstractArrayReadabstract_collection__Couplemodel__MClassparser_nodes__AType = {
1810,
"AbstractArrayRead[Couple[MClass, AType]]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[Scope] */
const struct type type_list__ListNodescope__Scope = {
1811,
"ListNode[Scope]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodescope__Scope,
8,
{
0, /* nullable Object */
1, /* Object */
38, /* nullable ListNode[Scope] */
-1, /* empty */
84, /* Collection[Object] */
624, /* Collection[Scope] */
1372, /* Container[Scope] */
1811, /* ListNode[Scope] */
},
};
const struct types resolution_table_list__ListNodescope__Scope = {
0, /* dummy */
{
&type_nullable_list__ListNodescope__Scope, /* nullable ListNode[ListNode#0]: nullable ListNode[Scope] */
&type_scope__Scope, /* ListNode#0: Scope */
&type_abstract_collection__ContainerIteratorscope__Scope, /* ContainerIterator[Container#0]: ContainerIterator[Scope] */
&type_scope__Scope, /* Container#0: Scope */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Scope, /* Collection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Collection#0]: Collection[Scope] */
}
};
/* runtime type nullable ListNode[Scope] */
const struct type type_nullable_list__ListNodescope__Scope = {
38,
"nullable ListNode[Scope]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[Scope] */
const struct type type_abstract_collection__Containerscope__Scope = {
1372,
"Container[Scope]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[Scope] */
const struct type type_list__ListIteratorscope__Scope = {
-1, /*CAST DEAD*/
"ListIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratorscope__Scope,
3,
{
0, /* nullable Object */
1, /* Object */
364, /* ListIterator[Scope] */
},
};
const struct types resolution_table_list__ListIteratorscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[Iterator#0]: Array[Scope] */
&type_list__Listscope__Scope, /* List[ListIterator#0]: List[Scope] */
}
};
/* runtime type ArrayIterator[FlowContext] */
const struct type type_array__ArrayIteratorflow__FlowContext = {
-1, /*CAST DEAD*/
"ArrayIterator[FlowContext]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1110, /* ArrayIterator[FlowContext] */
},
};
const struct types resolution_table_array__ArrayIteratorflow__FlowContext = {
0, /* dummy */
{
&type_array__Arrayflow__FlowContext, /* Array[Iterator#0]: Array[FlowContext] */
&type_array__AbstractArrayReadflow__FlowContext, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[FlowContext] */
}
};
/* runtime type NativeArray[FlowContext] */
const struct type type_array__NativeArrayflow__FlowContext = {
1111,
"NativeArray[FlowContext]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1111, /* NativeArray[FlowContext] */
},
};
const struct types resolution_table_array__NativeArrayflow__FlowContext = {
0, /* dummy */
{
&type_flow__FlowContext, /* NativeArray#0: FlowContext */
&type_array__NativeArrayflow__FlowContext, /* NativeArray[NativeArray#0]: NativeArray[FlowContext] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
1112,
"NativeArray[nullable HashSetNode[Variable]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1112, /* NativeArray[nullable HashSetNode[Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodescope__Variable, /* NativeArray#0: nullable HashSetNode[Variable] */
&type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[Variable]] */
}
};
/* runtime type HashSetIterator[Variable] */
const struct type type_hash_collection__HashSetIteratorscope__Variable = {
-1, /*CAST DEAD*/
"HashSetIterator[Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1113, /* HashSetIterator[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorscope__Variable = {
0, /* dummy */
{
&type_array__Arrayscope__Variable, /* Array[Iterator#0]: Array[Variable] */
&type_hash_collection__HashSetscope__Variable, /* HashSet[HashSetIterator#0]: HashSet[Variable] */
}
};
/* runtime type HashSetNode[Variable] */
const struct type type_hash_collection__HashSetNodescope__Variable = {
1557,
"HashSetNode[Variable]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodescope__Variable,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
365, /* nullable HashSetNode[Variable] */
1061, /* HashSetNode[Object] */
1557, /* HashSetNode[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* HashSetNode#0: Variable */
NULL, /* empty */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashSetNode[Variable] */
const struct type type_nullable_hash_collection__HashSetNodescope__Variable = {
365,
"nullable HashSetNode[Variable]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[CallSite] */
const struct type type_array__ArrayIteratortyping__CallSite = {
-1, /*CAST DEAD*/
"ArrayIterator[CallSite]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratortyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1114, /* ArrayIterator[CallSite] */
},
};
const struct types resolution_table_array__ArrayIteratortyping__CallSite = {
0, /* dummy */
{
&type_array__Arraytyping__CallSite, /* Array[Iterator#0]: Array[CallSite] */
&type_array__AbstractArrayReadtyping__CallSite, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[CallSite] */
}
};
/* runtime type NativeArray[CallSite] */
const struct type type_array__NativeArraytyping__CallSite = {
1115,
"NativeArray[CallSite]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraytyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1115, /* NativeArray[CallSite] */
},
};
const struct types resolution_table_array__NativeArraytyping__CallSite = {
0, /* dummy */
{
&type_typing__CallSite, /* NativeArray#0: CallSite */
&type_array__NativeArraytyping__CallSite, /* NativeArray[NativeArray#0]: NativeArray[CallSite] */
}
};
/* runtime type ArrayIterator[MType] */
const struct type type_array__ArrayIteratormodel__MType = {
1373,
"ArrayIterator[MType]", /* class_name_string */
4,
0,
&resolution_table_array__ArrayIteratormodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
366, /* ArrayIterator[nullable MType] */
1373, /* ArrayIterator[MType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
&type_array__AbstractArrayReadmodel__MType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MType] */
}
};
/* runtime type ArrayIterator[nullable MType] */
const struct type type_array__ArrayIteratornullable_model__MType = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
366, /* ArrayIterator[nullable MType] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MType = {
0, /* dummy */
{
&type_array__Arraynullable_model__MType, /* Array[Iterator#0]: Array[nullable MType] */
&type_array__AbstractArrayReadnullable_model__MType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MType] */
}
};
/* runtime type NativeArray[MType] */
const struct type type_array__NativeArraymodel__MType = {
1374,
"NativeArray[MType]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraymodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
367, /* NativeArray[nullable MType] */
1374, /* NativeArray[MType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MType = {
0, /* dummy */
{
&type_model__MType, /* NativeArray#0: MType */
&type_array__NativeArraymodel__MType, /* NativeArray[NativeArray#0]: NativeArray[MType] */
}
};
/* runtime type NativeArray[nullable MType] */
const struct type type_array__NativeArraynullable_model__MType = {
367,
"NativeArray[nullable MType]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
367, /* NativeArray[nullable MType] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_model__MType, /* NativeArray#0: nullable MType */
&type_array__NativeArraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable MType] */
}
};
/* runtime type ListNode[MClassType] */
const struct type type_list__ListNodemodel__MClassType = {
2068,
"ListNode[MClassType]", /* class_name_string */
12,
0,
&resolution_table_list__ListNodemodel__MClassType,
13,
{
0, /* nullable Object */
1, /* Object */
39, /* nullable ListNode[MClassType] */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
1812, /* Container[MClassType] */
2068, /* ListNode[MClassType] */
},
};
const struct types resolution_table_list__ListNodemodel__MClassType = {
0, /* dummy */
{
&type_nullable_list__ListNodemodel__MClassType, /* nullable ListNode[ListNode#0]: nullable ListNode[MClassType] */
&type_model__MClassType, /* ListNode#0: MClassType */
&type_abstract_collection__ContainerIteratormodel__MClassType, /* ContainerIterator[Container#0]: ContainerIterator[MClassType] */
&type_model__MClassType, /* Container#0: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type nullable ListNode[MClassType] */
const struct type type_nullable_list__ListNodemodel__MClassType = {
39,
"nullable ListNode[MClassType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[MClassType] */
const struct type type_abstract_collection__Containermodel__MClassType = {
1812,
"Container[MClassType]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[MClassType] */
const struct type type_list__ListIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"ListIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratormodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
368, /* ListIterator[MClassType] */
},
};
const struct types resolution_table_list__ListIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_list__Listmodel__MClassType, /* List[ListIterator#0]: List[MClassType] */
}
};
/* runtime type HashMapKeys[String, Int] */
const struct type type_hash_collection__HashMapKeysstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringkernel__Int,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1558, /* HashMapKeys[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringkernel__Int, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Int] */
&type_abstract_collection__MapKeysIteratorstring__Stringkernel__Int, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Int] */
const struct type type_hash_collection__HashMapValuesstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringkernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
610, /* Collection[Int] */
1375, /* HashMapValues[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringkernel__Int, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Int] */
&type_abstract_collection__MapValuesIteratorstring__Stringkernel__Int, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* RemovableCollection#0: Int */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
369,
"NativeArray[nullable HashMapNode[String, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
369, /* NativeArray[nullable HashMapNode[String, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray#0: nullable HashMapNode[String, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Int]] */
}
};
/* runtime type HashMapIterator[String, Int] */
const struct type type_hash_collection__HashMapIteratorstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
370, /* MapIterator[String, Int] */
1116, /* HashMapIterator[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringkernel__Int, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Int] */
}
};
/* runtime type MapIterator[String, Int] */
const struct type type_abstract_collection__MapIteratorstring__Stringkernel__Int = {
370,
"MapIterator[String, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Int] */
const struct type type_hash_collection__HashMapNodestring__Stringkernel__Int = {
1117,
"HashMapNode[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
40, /* nullable HashMapNode[String, Int] */
1117, /* HashMapNode[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Int] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
40,
"nullable HashMapNode[String, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[String] */
const struct type type_list__ListNodestring__String = {
2005,
"ListNode[String]", /* class_name_string */
8,
0,
&resolution_table_list__ListNodestring__String,
9,
{
0, /* nullable Object */
1, /* Object */
41, /* nullable ListNode[String] */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1559, /* Container[String] */
2005, /* ListNode[String] */
},
};
const struct types resolution_table_list__ListNodestring__String = {
0, /* dummy */
{
&type_nullable_list__ListNodestring__String, /* nullable ListNode[ListNode#0]: nullable ListNode[String] */
&type_string__String, /* ListNode#0: String */
&type_abstract_collection__ContainerIteratorstring__String, /* ContainerIterator[Container#0]: ContainerIterator[String] */
&type_string__String, /* Container#0: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type nullable ListNode[String] */
const struct type type_nullable_list__ListNodestring__String = {
41,
"nullable ListNode[String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[String] */
const struct type type_abstract_collection__Containerstring__String = {
1559,
"Container[String]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[String] */
const struct type type_list__ListIteratorstring__String = {
-1, /*CAST DEAD*/
"ListIterator[String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratorstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
371, /* ListIterator[String] */
},
};
const struct types resolution_table_list__ListIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_list__Liststring__String, /* List[ListIterator#0]: List[String] */
}
};
/* runtime type ArrayIterator[CodeWriter] */
const struct type type_array__ArrayIteratorabstract_compiler__CodeWriter = {
-1, /*CAST DEAD*/
"ArrayIterator[CodeWriter]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorabstract_compiler__CodeWriter,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1118, /* ArrayIterator[CodeWriter] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[Iterator#0]: Array[CodeWriter] */
&type_array__AbstractArrayReadabstract_compiler__CodeWriter, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[CodeWriter] */
}
};
/* runtime type NativeArray[CodeWriter] */
const struct type type_array__NativeArrayabstract_compiler__CodeWriter = {
1119,
"NativeArray[CodeWriter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__CodeWriter,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1119, /* NativeArray[CodeWriter] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_abstract_compiler__CodeWriter, /* NativeArray#0: CodeWriter */
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[NativeArray#0]: NativeArray[CodeWriter] */
}
};
/* runtime type NativeArray[nullable HashSetNode[String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
1120,
"NativeArray[nullable HashSetNode[String]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1120, /* NativeArray[nullable HashSetNode[String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodestring__String, /* NativeArray#0: nullable HashSetNode[String] */
&type_array__NativeArraynullable_hash_collection__HashSetNodestring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[String]] */
}
};
/* runtime type HashSetIterator[String] */
const struct type type_hash_collection__HashSetIteratorstring__String = {
-1, /*CAST DEAD*/
"HashSetIterator[String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1121, /* HashSetIterator[String] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_hash_collection__HashSetstring__String, /* HashSet[HashSetIterator#0]: HashSet[String] */
}
};
/* runtime type HashSetNode[String] */
const struct type type_hash_collection__HashSetNodestring__String = {
1560,
"HashSetNode[String]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodestring__String,
6,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
372, /* nullable HashSetNode[String] */
1061, /* HashSetNode[Object] */
1560, /* HashSetNode[String] */
},
};
const struct types resolution_table_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_string__String, /* HashSetNode#0: String */
NULL, /* empty */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashSetNode[String] */
const struct type type_nullable_hash_collection__HashSetNodestring__String = {
372,
"nullable HashSetNode[String]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSetConflictGraph[MClass] */
const struct type type_coloring__POSetConflictGraphmodel__MClass = {
373,
"POSetConflictGraph[MClass]", /* class_name_string */
2,
0,
&resolution_table_coloring__POSetConflictGraphmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
373, /* POSetConflictGraph[MClass] */
},
};
const struct types resolution_table_coloring__POSetConflictGraphmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClass, /* HashSet[POSetConflictGraph#0]: HashSet[MClass] */
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass, /* HashMap[POSetConflictGraph#0, Set[POSetConflictGraph#0]]: HashMap[MClass, Set[MClass]] */
&type_poset__POSetmodel__MClass, /* POSet[POSetConflictGraph#0]: POSet[MClass] */
&type_model__MClass, /* POSetConflictGraph#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[POSetConflictGraph#0]: Collection[MClass] */
}
};
/* runtime type HashMapKeys[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute,
9,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1535, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
1800, /* HashMapKeys[MClass, Set[MProperty]] */
2006, /* HashMapKeys[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Set[MAttribute]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Set[MAttribute]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1064, /* Collection[Set[PropertyLayoutElement]] */
1353, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1354, /* Collection[Set[MProperty]] */
1801, /* HashMapValues[MClass, Set[MProperty]] */
1561, /* Collection[Set[MAttribute]] */
2069, /* HashMapValues[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Set[MAttribute]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Set[MAttribute]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MAttribute, /* RemovableCollection#0: Set[MAttribute] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MAttribute, /* Collection#0: Set[MAttribute] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[Collection#0]: Collection[Set[MAttribute]] */
}
};
/* runtime type Collection[Set[MAttribute]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute = {
1561,
"Collection[Set[MAttribute]]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1376,
"NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1065, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1376, /* NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray#0: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
}
};
/* runtime type HashMapIterator[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
328, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1066, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1067, /* MapIterator[MClass, Set[MProperty]] */
1377, /* MapIterator[MClass, Set[MAttribute]] */
1536, /* HashMapIterator[MClass, Set[MProperty]] */
2007, /* HashMapIterator[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[MAttribute]] */
}
};
/* runtime type MapIterator[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
1377,
"MapIterator[MClass, Set[MAttribute]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
2008,
"HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
27, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
329, /* nullable HashMapNode[MClass, Set[MProperty]] */
1068, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1122, /* nullable HashMapNode[MClass, Set[MAttribute]] */
1537, /* HashMapNode[MClass, Set[MProperty]] */
2008, /* HashMapNode[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* HashMapNode#1: Set[MAttribute] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MAttribute]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1122,
"nullable HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MAttribute]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
1562,
"NativeArray[nullable HashSetNode[MAttribute]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1362, /* NativeArray[nullable HashSetNode[MProperty]] */
1562, /* NativeArray[nullable HashSetNode[MAttribute]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray#0: nullable HashSetNode[MAttribute] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MAttribute]] */
}
};
/* runtime type HashSetIterator[MAttribute] */
const struct type type_hash_collection__HashSetIteratormodel__MAttribute = {
-1, /*CAST DEAD*/
"HashSetIterator[MAttribute]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
1363, /* HashSetIterator[MProperty] */
1563, /* HashSetIterator[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MAttribute = {
0, /* dummy */
{
&type_array__Arraymodel__MAttribute, /* Array[Iterator#0]: Array[MAttribute] */
&type_hash_collection__HashSetmodel__MAttribute, /* HashSet[HashSetIterator#0]: HashSet[MAttribute] */
}
};
/* runtime type HashSetNode[MAttribute] */
const struct type type_hash_collection__HashSetNodemodel__MAttribute = {
2117,
"HashSetNode[MAttribute]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MAttribute,
10,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
1081, /* nullable HashSetNode[MProperty] */
1378, /* nullable HashSetNode[MAttribute] */
1541, /* HashSetNode[PropertyLayoutElement] */
2002, /* HashSetNode[MProperty] */
2117, /* HashSetNode[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* HashSetNode#0: MAttribute */
NULL, /* empty */
&type_model__MAttribute, /* HashNode#0: MAttribute */
}
};
/* runtime type nullable HashSetNode[MAttribute] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MAttribute = {
1378,
"nullable HashSetNode[MAttribute]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int = {
374,
"HashMap[PropertyLayoutElement, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
374, /* HashMap[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_separate_compiler__PropertyLayoutElement, /* MapRead#0: PropertyLayoutElement */
&type_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
&type_hash_collection__HashMapKeysseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapValuesseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapIteratorseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* Map#0: PropertyLayoutElement */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* HashCollection#0: PropertyLayoutElement */
&type_nullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* nullable HashCollection#1: nullable HashMapNode[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* HashCollection#1: HashMapNode[PropertyLayoutElement, Int] */
&type_nullable_separate_compiler__PropertyLayoutElement, /* nullable HashCollection#0: nullable PropertyLayoutElement */
}
};
/* runtime type HashMap[MAttribute, Int] */
const struct type type_hash_collection__HashMapmodel__MAttributekernel__Int = {
1123,
"HashMap[MAttribute, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
374, /* HashMap[PropertyLayoutElement, Int] */
1123, /* HashMap[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MAttribute, /* MapRead#0: MAttribute */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
&type_hash_collection__HashMapKeysmodel__MAttributekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MAttribute, Int] */
&type_hash_collection__HashMapValuesmodel__MAttributekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MAttribute, Int] */
&type_hash_collection__HashMapIteratormodel__MAttributekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MAttribute, Int] */
&type_model__MAttribute, /* Map#0: MAttribute */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MAttribute, Int] */
&type_model__MAttribute, /* HashCollection#0: MAttribute */
&type_nullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MAttribute, Int] */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashCollection#1: HashMapNode[MAttribute, Int] */
&type_nullable_model__MAttribute, /* nullable HashCollection#0: nullable MAttribute */
}
};
/* runtime type ArrayIterator[RuntimeVariable] */
const struct type type_array__ArrayIteratorabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"ArrayIterator[RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1124, /* ArrayIterator[RuntimeVariable] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[Iterator#0]: Array[RuntimeVariable] */
&type_array__AbstractArrayReadabstract_compiler__RuntimeVariable, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[RuntimeVariable] */
}
};
/* runtime type NativeArray[RuntimeVariable] */
const struct type type_array__NativeArrayabstract_compiler__RuntimeVariable = {
1125,
"NativeArray[RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1125, /* NativeArray[RuntimeVariable] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_abstract_compiler__RuntimeVariable, /* NativeArray#0: RuntimeVariable */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[NativeArray#0]: NativeArray[RuntimeVariable] */
}
};
/* runtime type POSetConflictGraph[MType] */
const struct type type_coloring__POSetConflictGraphmodel__MType = {
375,
"POSetConflictGraph[MType]", /* class_name_string */
2,
0,
&resolution_table_coloring__POSetConflictGraphmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
375, /* POSetConflictGraph[MType] */
},
};
const struct types resolution_table_coloring__POSetConflictGraphmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MType, /* HashSet[POSetConflictGraph#0]: HashSet[MType] */
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[POSetConflictGraph#0, Set[POSetConflictGraph#0]]: HashMap[MType, Set[MType]] */
&type_poset__POSetmodel__MType, /* POSet[POSetConflictGraph#0]: POSet[MType] */
&type_model__MType, /* POSetConflictGraph#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[POSetConflictGraph#0]: Collection[MType] */
}
};
/* runtime type HashMapKeys[EscapeMark, String] */
const struct type type_hash_collection__HashMapKeysscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"HashMapKeys[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysscope__EscapeMarkstring__String,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1126, /* Collection[EscapeMark] */
1379, /* HashMapKeys[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[EscapeMark, String] */
&type_abstract_collection__MapKeysIteratorscope__EscapeMarkstring__String, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[EscapeMark, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* RemovableCollection#0: EscapeMark */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* Collection#0: EscapeMark */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[Collection#0]: Collection[EscapeMark] */
}
};
/* runtime type Collection[EscapeMark] */
const struct type type_abstract_collection__Collectionscope__EscapeMark = {
1126,
"Collection[EscapeMark]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapValues[EscapeMark, String] */
const struct type type_hash_collection__HashMapValuesscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"HashMapValues[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesscope__EscapeMarkstring__String,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1564, /* HashMapValues[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[EscapeMark, String] */
&type_abstract_collection__MapValuesIteratorscope__EscapeMarkstring__String, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[EscapeMark, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[EscapeMark, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
376,
"NativeArray[nullable HashMapNode[EscapeMark, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
376, /* NativeArray[nullable HashMapNode[EscapeMark, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray#0: nullable HashMapNode[EscapeMark, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
}
};
/* runtime type HashMapIterator[EscapeMark, String] */
const struct type type_hash_collection__HashMapIteratorscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"HashMapIterator[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorscope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
377, /* MapIterator[EscapeMark, String] */
1127, /* HashMapIterator[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[EscapeMark, String] */
}
};
/* runtime type MapIterator[EscapeMark, String] */
const struct type type_abstract_collection__MapIteratorscope__EscapeMarkstring__String = {
377,
"MapIterator[EscapeMark, String]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[EscapeMark, String] */
const struct type type_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
1128,
"HashMapNode[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
42, /* nullable HashMapNode[EscapeMark, String] */
1128, /* HashMapNode[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_scope__EscapeMark, /* HashMapNode#0: EscapeMark */
&type_string__String, /* HashMapNode#1: String */
&type_scope__EscapeMark, /* HashNode#0: EscapeMark */
}
};
/* runtime type nullable HashMapNode[EscapeMark, String] */
const struct type type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
42,
"nullable HashMapNode[EscapeMark, String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"HashMapKeys[Variable, RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
626, /* Collection[Variable] */
1380, /* HashMapKeys[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[Variable, RuntimeVariable] */
&type_abstract_collection__MapKeysIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[Variable, RuntimeVariable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* RemovableCollection#0: Variable */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* Collection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Collection#0]: Collection[Variable] */
}
};
/* runtime type HashMapValues[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"HashMapValues[Variable, RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
631, /* Collection[RuntimeVariable] */
1381, /* HashMapValues[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[Variable, RuntimeVariable] */
&type_abstract_collection__MapValuesIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[Variable, RuntimeVariable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__RuntimeVariable, /* RemovableCollection#0: RuntimeVariable */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__RuntimeVariable, /* Collection#0: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[Collection#0]: Collection[RuntimeVariable] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
378,
"NativeArray[nullable HashMapNode[Variable, RuntimeVariable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
378, /* NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray#0: nullable HashMapNode[Variable, RuntimeVariable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
}
};
/* runtime type HashMapIterator[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"HashMapIterator[Variable, RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
379, /* MapIterator[Variable, RuntimeVariable] */
1129, /* HashMapIterator[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[Variable, RuntimeVariable] */
}
};
/* runtime type MapIterator[Variable, RuntimeVariable] */
const struct type type_abstract_collection__MapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
379,
"MapIterator[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
1130,
"HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
43, /* nullable HashMapNode[Variable, RuntimeVariable] */
1130, /* HashMapNode[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_abstract_compiler__RuntimeVariable, /* HashMapNode#1: RuntimeVariable */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, RuntimeVariable] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
43,
"nullable HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
9,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1535, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
1800, /* HashMapKeys[MClass, Set[MProperty]] */
2009, /* HashMapKeys[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Set[MVirtualTypeProp]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1064, /* Collection[Set[PropertyLayoutElement]] */
1353, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1354, /* Collection[Set[MProperty]] */
1801, /* HashMapValues[MClass, Set[MProperty]] */
1565, /* Collection[Set[MVirtualTypeProp]] */
2070, /* HashMapValues[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Set[MVirtualTypeProp]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* RemovableCollection#0: Set[MVirtualTypeProp] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* Collection#0: Set[MVirtualTypeProp] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[Collection#0]: Collection[Set[MVirtualTypeProp]] */
}
};
/* runtime type Collection[Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp = {
1565,
"Collection[Set[MVirtualTypeProp]]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1382,
"NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1065, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1382, /* NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray#0: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
}
};
/* runtime type HashMapIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
328, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1066, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1067, /* MapIterator[MClass, Set[MProperty]] */
1383, /* MapIterator[MClass, Set[MVirtualTypeProp]] */
1536, /* HashMapIterator[MClass, Set[MProperty]] */
2010, /* HashMapIterator[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[MVirtualTypeProp]] */
}
};
/* runtime type MapIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1383,
"MapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
2011,
"HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
27, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
329, /* nullable HashMapNode[MClass, Set[MProperty]] */
1068, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1131, /* nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
1537, /* HashMapNode[MClass, Set[MProperty]] */
2011, /* HashMapNode[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode#1: Set[MVirtualTypeProp] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1131,
"nullable HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1566,
"NativeArray[nullable HashSetNode[MVirtualTypeProp]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
324, /* NativeArray[nullable HashSetNode[Object]] */
1078, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1362, /* NativeArray[nullable HashSetNode[MProperty]] */
1566, /* NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray#0: nullable HashSetNode[MVirtualTypeProp] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
}
};
/* runtime type HashSetIterator[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"HashSetIterator[MVirtualTypeProp]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
325, /* HashSetIterator[Object] */
1079, /* HashSetIterator[PropertyLayoutElement] */
1363, /* HashSetIterator[MProperty] */
1567, /* HashSetIterator[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualTypeProp, /* Array[Iterator#0]: Array[MVirtualTypeProp] */
&type_hash_collection__HashSetmodel__MVirtualTypeProp, /* HashSet[HashSetIterator#0]: HashSet[MVirtualTypeProp] */
}
};
/* runtime type HashSetNode[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2118,
"HashSetNode[MVirtualTypeProp]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp,
10,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashSetNode[Object] */
339, /* nullable HashSetNode[PropertyLayoutElement] */
1061, /* HashSetNode[Object] */
1081, /* nullable HashSetNode[MProperty] */
1384, /* nullable HashSetNode[MVirtualTypeProp] */
1541, /* HashSetNode[PropertyLayoutElement] */
2002, /* HashSetNode[MProperty] */
2118, /* HashSetNode[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* HashSetNode#0: MVirtualTypeProp */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* HashNode#0: MVirtualTypeProp */
}
};
/* runtime type nullable HashSetNode[MVirtualTypeProp] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1384,
"nullable HashSetNode[MVirtualTypeProp]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
1132,
"HashMap[MVirtualTypeProp, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
374, /* HashMap[PropertyLayoutElement, Int] */
1132, /* HashMap[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* MapRead#0: MVirtualTypeProp */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
&type_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* Map#0: MVirtualTypeProp */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* HashCollection#0: MVirtualTypeProp */
&type_nullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashCollection#1: HashMapNode[MVirtualTypeProp, Int] */
&type_nullable_model__MVirtualTypeProp, /* nullable HashCollection#0: nullable MVirtualTypeProp */
}
};
/* runtime type ArrayIterator[ReduceAction] */
const struct type type_array__ArrayIteratorparser_work__ReduceAction = {
-1, /*CAST DEAD*/
"ArrayIterator[ReduceAction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_work__ReduceAction,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1133, /* ArrayIterator[ReduceAction] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_work__ReduceAction = {
0, /* dummy */
{
&type_array__Arrayparser_work__ReduceAction, /* Array[Iterator#0]: Array[ReduceAction] */
&type_array__AbstractArrayReadparser_work__ReduceAction, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ReduceAction] */
}
};
/* runtime type NativeArray[ReduceAction] */
const struct type type_array__NativeArrayparser_work__ReduceAction = {
1134,
"NativeArray[ReduceAction]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser_work__ReduceAction,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1134, /* NativeArray[ReduceAction] */
},
};
const struct types resolution_table_array__NativeArrayparser_work__ReduceAction = {
0, /* dummy */
{
&type_parser_work__ReduceAction, /* NativeArray#0: ReduceAction */
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[NativeArray#0]: NativeArray[ReduceAction] */
}
};
/* runtime type Array[TComment] */
const struct type type_array__Arrayparser_nodes__TComment = {
-1, /*CAST DEAD*/
"Array[TComment]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__TComment,
14,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1332, /* Collection[TComment] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
2071, /* AbstractArrayRead[TComment] */
2023, /* Array[ANode] */
2151, /* Array[TComment] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__TComment = {
0, /* dummy */
{
&type_parser_nodes__TComment, /* Sequence#0: TComment */
&type_parser_nodes__TComment, /* SimpleCollection#0: TComment */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[Array#0]: NativeArray[TComment] */
&type_array__Arrayparser_nodes__TComment, /* Array[Array#0]: Array[TComment] */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[ArrayCapable#0]: NativeArray[TComment] */
&type_parser_nodes__TComment, /* RemovableCollection#0: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[Sequence#0]: Collection[TComment] */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[SimpleCollection#0]: Collection[TComment] */
&type_parser_nodes__TComment, /* Collection#0: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[Collection#0]: Collection[TComment] */
&type_parser_nodes__TComment, /* SequenceRead#0: TComment */
&type_parser_nodes__TComment, /* AbstractArrayRead#0: TComment */
&type_array__Arrayparser_nodes__TComment, /* Array[AbstractArrayRead#0]: Array[TComment] */
&type_array__ArrayIteratorparser_nodes__TComment, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[TComment] */
}
};
/* runtime type AbstractArrayRead[TComment] */
const struct type type_array__AbstractArrayReadparser_nodes__TComment = {
2071,
"AbstractArrayRead[TComment]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MGenericType] */
const struct type type_array__ArrayIteratormodel__MGenericType = {
-1, /*CAST DEAD*/
"ArrayIterator[MGenericType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MGenericType,
7,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
366, /* ArrayIterator[nullable MType] */
1373, /* ArrayIterator[MType] */
1568, /* ArrayIterator[MClassType] */
1813, /* ArrayIterator[MGenericType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MGenericType = {
0, /* dummy */
{
&type_array__Arraymodel__MGenericType, /* Array[Iterator#0]: Array[MGenericType] */
&type_array__AbstractArrayReadmodel__MGenericType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MGenericType] */
}
};
/* runtime type ArrayIterator[MClassType] */
const struct type type_array__ArrayIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"ArrayIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
366, /* ArrayIterator[nullable MType] */
1373, /* ArrayIterator[MType] */
1568, /* ArrayIterator[MClassType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_array__AbstractArrayReadmodel__MClassType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MClassType] */
}
};
/* runtime type NativeArray[MGenericType] */
const struct type type_array__NativeArraymodel__MGenericType = {
1814,
"NativeArray[MGenericType]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MGenericType,
7,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
367, /* NativeArray[nullable MType] */
1374, /* NativeArray[MType] */
1569, /* NativeArray[MClassType] */
1814, /* NativeArray[MGenericType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MGenericType = {
0, /* dummy */
{
&type_model__MGenericType, /* NativeArray#0: MGenericType */
&type_array__NativeArraymodel__MGenericType, /* NativeArray[NativeArray#0]: NativeArray[MGenericType] */
}
};
/* runtime type NativeArray[MClassType] */
const struct type type_array__NativeArraymodel__MClassType = {
1569,
"NativeArray[MClassType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
367, /* NativeArray[nullable MType] */
1374, /* NativeArray[MType] */
1569, /* NativeArray[MClassType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* NativeArray#0: MClassType */
&type_array__NativeArraymodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[MClassType] */
}
};
/* runtime type ArrayIterator[AClassdef] */
const struct type type_array__ArrayIteratorparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"ArrayIterator[AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AClassdef,
6,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1048, /* ArrayIterator[ANode] */
1347, /* ArrayIterator[Prod] */
1570, /* ArrayIterator[AClassdef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[Iterator#0]: Array[AClassdef] */
&type_array__AbstractArrayReadparser_nodes__AClassdef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AClassdef] */
}
};
/* runtime type NativeArray[AClassdef] */
const struct type type_array__NativeArrayparser_nodes__AClassdef = {
1571,
"NativeArray[AClassdef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AClassdef,
6,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1049, /* NativeArray[ANode] */
1348, /* NativeArray[Prod] */
1571, /* NativeArray[AClassdef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AClassdef = {
0, /* dummy */
{
&type_parser_nodes__AClassdef, /* NativeArray#0: AClassdef */
&type_array__NativeArrayparser_nodes__AClassdef, /* NativeArray[NativeArray#0]: NativeArray[AClassdef] */
}
};
/* runtime type ArrayIterator[MPropDef] */
const struct type type_array__ArrayIteratormodel__MPropDef = {
-1, /*CAST DEAD*/
"ArrayIterator[MPropDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MPropDef,
6,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
380, /* ArrayIterator[nullable MPropDef] */
1032, /* ArrayIterator[PropertyLayoutElement] */
1572, /* ArrayIterator[MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MPropDef = {
0, /* dummy */
{
&type_array__Arraymodel__MPropDef, /* Array[Iterator#0]: Array[MPropDef] */
&type_array__AbstractArrayReadmodel__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MPropDef] */
}
};
/* runtime type ArrayIterator[nullable MPropDef] */
const struct type type_array__ArrayIteratornullable_model__MPropDef = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MPropDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
380, /* ArrayIterator[nullable MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MPropDef = {
0, /* dummy */
{
&type_array__Arraynullable_model__MPropDef, /* Array[Iterator#0]: Array[nullable MPropDef] */
&type_array__AbstractArrayReadnullable_model__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MPropDef] */
}
};
/* runtime type NativeArray[MPropDef] */
const struct type type_array__NativeArraymodel__MPropDef = {
1573,
"NativeArray[MPropDef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MPropDef,
6,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
381, /* NativeArray[nullable MPropDef] */
1033, /* NativeArray[PropertyLayoutElement] */
1573, /* NativeArray[MPropDef] */
},
};
const struct types resolution_table_array__NativeArraymodel__MPropDef = {
0, /* dummy */
{
&type_model__MPropDef, /* NativeArray#0: MPropDef */
&type_array__NativeArraymodel__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[MPropDef] */
}
};
/* runtime type NativeArray[nullable MPropDef] */
const struct type type_array__NativeArraynullable_model__MPropDef = {
381,
"NativeArray[nullable MPropDef]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
381, /* NativeArray[nullable MPropDef] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MPropDef = {
0, /* dummy */
{
&type_nullable_model__MPropDef, /* NativeArray#0: nullable MPropDef */
&type_array__NativeArraynullable_model__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[nullable MPropDef] */
}
};
/* runtime type HashMapKeys[MProperty, APropdef] */
const struct type type_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapKeys[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef,
12,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1462, /* Collection[MProperty] */
1815, /* HashMapKeys[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MProperty, APropdef] */
&type_abstract_collection__MapKeysIteratormodel__MPropertyparser_nodes__APropdef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MProperty, APropdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* RemovableCollection#0: MProperty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* Collection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Collection#0]: Collection[MProperty] */
}
};
/* runtime type HashMapValues[MProperty, APropdef] */
const struct type type_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapValues[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1474, /* Collection[APropdef] */
1816, /* HashMapValues[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MProperty, APropdef] */
&type_abstract_collection__MapValuesIteratormodel__MPropertyparser_nodes__APropdef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MProperty, APropdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MProperty, APropdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
382,
"NativeArray[nullable HashMapNode[MProperty, APropdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
382, /* NativeArray[nullable HashMapNode[MProperty, APropdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* NativeArray#0: nullable HashMapNode[MProperty, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MProperty, APropdef]] */
}
};
/* runtime type HashMapIterator[MProperty, APropdef] */
const struct type type_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"HashMapIterator[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
383, /* MapIterator[MProperty, APropdef] */
1135, /* HashMapIterator[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MProperty, APropdef] */
}
};
/* runtime type MapIterator[MProperty, APropdef] */
const struct type type_abstract_collection__MapIteratormodel__MPropertyparser_nodes__APropdef = {
383,
"MapIterator[MProperty, APropdef]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MProperty, APropdef] */
const struct type type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
1136,
"HashMapNode[MProperty, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
44, /* nullable HashMapNode[MProperty, APropdef] */
1136, /* HashMapNode[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_model__MProperty, /* HashMapNode#0: MProperty */
&type_parser_nodes__APropdef, /* HashMapNode#1: APropdef */
&type_model__MProperty, /* HashNode#0: MProperty */
}
};
/* runtime type nullable HashMapNode[MProperty, APropdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
44,
"nullable HashMapNode[MProperty, APropdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AFormaldef] */
const struct type type_array__Arrayparser_nodes__AFormaldef = {
-1, /*CAST DEAD*/
"Array[AFormaldef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AFormaldef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
1294, /* AbstractArrayRead[Object] */
1484, /* Collection[AFormaldef] */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
2134, /* AbstractArrayRead[AFormaldef] */
2145, /* Array[Prod] */
2187, /* Array[AFormaldef] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AFormaldef = {
0, /* dummy */
{
&type_parser_nodes__AFormaldef, /* Sequence#0: AFormaldef */
&type_parser_nodes__AFormaldef, /* SimpleCollection#0: AFormaldef */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[Array#0]: NativeArray[AFormaldef] */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[Array#0]: Array[AFormaldef] */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[ArrayCapable#0]: NativeArray[AFormaldef] */
&type_parser_nodes__AFormaldef, /* RemovableCollection#0: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[Sequence#0]: Collection[AFormaldef] */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[SimpleCollection#0]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* Collection#0: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[Collection#0]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* SequenceRead#0: AFormaldef */
&type_parser_nodes__AFormaldef, /* AbstractArrayRead#0: AFormaldef */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[AbstractArrayRead#0]: Array[AFormaldef] */
&type_array__ArrayIteratorparser_nodes__AFormaldef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AFormaldef] */
}
};
/* runtime type AbstractArrayRead[AFormaldef] */
const struct type type_array__AbstractArrayReadparser_nodes__AFormaldef = {
2134,
"AbstractArrayRead[AFormaldef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[ASuperclass] */
const struct type type_array__Arrayparser_nodes__ASuperclass = {
-1, /*CAST DEAD*/
"Array[ASuperclass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__ASuperclass,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
1294, /* AbstractArrayRead[Object] */
1485, /* Collection[ASuperclass] */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
2135, /* AbstractArrayRead[ASuperclass] */
2145, /* Array[Prod] */
2188, /* Array[ASuperclass] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__ASuperclass = {
0, /* dummy */
{
&type_parser_nodes__ASuperclass, /* Sequence#0: ASuperclass */
&type_parser_nodes__ASuperclass, /* SimpleCollection#0: ASuperclass */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[Array#0]: NativeArray[ASuperclass] */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[Array#0]: Array[ASuperclass] */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[ArrayCapable#0]: NativeArray[ASuperclass] */
&type_parser_nodes__ASuperclass, /* RemovableCollection#0: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[Sequence#0]: Collection[ASuperclass] */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[SimpleCollection#0]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* Collection#0: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[Collection#0]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* SequenceRead#0: ASuperclass */
&type_parser_nodes__ASuperclass, /* AbstractArrayRead#0: ASuperclass */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[AbstractArrayRead#0]: Array[ASuperclass] */
&type_array__ArrayIteratorparser_nodes__ASuperclass, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ASuperclass] */
}
};
/* runtime type AbstractArrayRead[ASuperclass] */
const struct type type_array__AbstractArrayReadparser_nodes__ASuperclass = {
2135,
"AbstractArrayRead[ASuperclass]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MParameter] */
const struct type type_array__ArrayIteratormodel__MParameter = {
-1, /*CAST DEAD*/
"ArrayIterator[MParameter]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MParameter,
4,
{
0, /* nullable Object */
1, /* Object */
288, /* ArrayIterator[Object] */
1137, /* ArrayIterator[MParameter] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MParameter = {
0, /* dummy */
{
&type_array__Arraymodel__MParameter, /* Array[Iterator#0]: Array[MParameter] */
&type_array__AbstractArrayReadmodel__MParameter, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MParameter] */
}
};
/* runtime type NativeArray[MParameter] */
const struct type type_array__NativeArraymodel__MParameter = {
1138,
"NativeArray[MParameter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymodel__MParameter,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
1138, /* NativeArray[MParameter] */
},
};
const struct types resolution_table_array__NativeArraymodel__MParameter = {
0, /* dummy */
{
&type_model__MParameter, /* NativeArray#0: MParameter */
&type_array__NativeArraymodel__MParameter, /* NativeArray[NativeArray#0]: NativeArray[MParameter] */
}
};
/* runtime type Array[MMethodDef] */
const struct type type_array__Arraymodel__MMethodDef = {
2203,
"Array[MMethodDef]", /* class_name_string */
18,
0,
&resolution_table_array__Arraymodel__MMethodDef,
19,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
120, /* Collection[nullable MPropDef] */
596, /* Collection[PropertyLayoutElement] */
1294, /* AbstractArrayRead[Object] */
1333, /* AbstractArrayRead[nullable MPropDef] */
1459, /* Array[Object] */
1477, /* Collection[MPropDef] */
1483, /* Array[nullable MPropDef] */
1647, /* AbstractArrayRead[PropertyLayoutElement] */
1656, /* Collection[MMethodDef] */
2022, /* Array[PropertyLayoutElement] */
2125, /* AbstractArrayRead[MPropDef] */
2170, /* AbstractArrayRead[MMethodDef] */
2181, /* Array[MPropDef] */
2203, /* Array[MMethodDef] */
},
};
const struct types resolution_table_array__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* Sequence#0: MMethodDef */
&type_model__MMethodDef, /* SimpleCollection#0: MMethodDef */
&type_array__NativeArraymodel__MMethodDef, /* NativeArray[Array#0]: NativeArray[MMethodDef] */
&type_array__Arraymodel__MMethodDef, /* Array[Array#0]: Array[MMethodDef] */
&type_array__NativeArraymodel__MMethodDef, /* NativeArray[ArrayCapable#0]: NativeArray[MMethodDef] */
&type_model__MMethodDef, /* RemovableCollection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Sequence#0]: Collection[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[SimpleCollection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* SequenceRead#0: MMethodDef */
&type_model__MMethodDef, /* AbstractArrayRead#0: MMethodDef */
&type_array__Arraymodel__MMethodDef, /* Array[AbstractArrayRead#0]: Array[MMethodDef] */
&type_array__ArrayIteratormodel__MMethodDef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MMethodDef] */
}
};
/* runtime type AbstractArrayRead[MMethodDef] */
const struct type type_array__AbstractArrayReadmodel__MMethodDef = {
2170,
"AbstractArrayRead[MMethodDef]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap2[MModule, MType, Array[MMethodDef]] */
const struct type type_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
384, /* HashMap2[MModule, MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_mmodule__MModule, /* HashMap2#0: MModule */
&type_model__MType, /* HashMap2#1: MType */
&type_array__Arraymodel__MMethodDef, /* HashMap2#2: Array[MMethodDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[MType, Array[MMethodDef]] */
}
};
/* runtime type HashMapKeys[String, Variable] */
const struct type type_hash_collection__HashMapKeysstring__Stringscope__Variable = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringscope__Variable,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1574, /* HashMapKeys[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[String, Variable] */
&type_abstract_collection__MapKeysIteratorstring__Stringscope__Variable, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[String, Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type HashMapValues[String, Variable] */
const struct type type_hash_collection__HashMapValuesstring__Stringscope__Variable = {
-1, /*CAST DEAD*/
"HashMapValues[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringscope__Variable,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
626, /* Collection[Variable] */
1385, /* HashMapValues[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[String, Variable] */
&type_abstract_collection__MapValuesIteratorstring__Stringscope__Variable, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[String, Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* RemovableCollection#0: Variable */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* Collection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Collection#0]: Collection[Variable] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
385,
"NativeArray[nullable HashMapNode[String, Variable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable,
3,
{
0, /* nullable Object */
1, /* Object */
385, /* NativeArray[nullable HashMapNode[String, Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* NativeArray#0: nullable HashMapNode[String, Variable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Variable]] */
}
};
/* runtime type HashMapIterator[String, Variable] */
const struct type type_hash_collection__HashMapIteratorstring__Stringscope__Variable = {
-1, /*CAST DEAD*/
"HashMapIterator[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
386, /* MapIterator[String, Variable] */
1139, /* HashMapIterator[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[String, Variable] */
}
};
/* runtime type MapIterator[String, Variable] */
const struct type type_abstract_collection__MapIteratorstring__Stringscope__Variable = {
386,
"MapIterator[String, Variable]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Variable] */
const struct type type_hash_collection__HashMapNodestring__Stringscope__Variable = {
1140,
"HashMapNode[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
45, /* nullable HashMapNode[String, Variable] */
1140, /* HashMapNode[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_scope__Variable, /* HashMapNode#1: Variable */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Variable] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
45,
"nullable HashMapNode[String, Variable]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[Variable, nullable MType] */
const struct type type_hash_collection__HashMapKeysscope__Variablenullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysscope__Variablenullable_model__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
626, /* Collection[Variable] */
1386, /* HashMapKeys[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[Variable, nullable MType] */
&type_abstract_collection__MapKeysIteratorscope__Variablenullable_model__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[Variable, nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* RemovableCollection#0: Variable */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* Collection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Collection#0]: Collection[Variable] */
}
};
/* runtime type HashMapValues[Variable, nullable MType] */
const struct type type_hash_collection__HashMapValuesscope__Variablenullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapValues[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesscope__Variablenullable_model__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
-1, /* empty */
93, /* Collection[nullable MType] */
1141, /* HashMapValues[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[Variable, nullable MType] */
&type_abstract_collection__MapValuesIteratorscope__Variablenullable_model__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[Variable, nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_model__MType, /* RemovableCollection#0: nullable MType */
NULL, /* empty */
NULL, /* empty */
&type_nullable_model__MType, /* Collection#0: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[Collection#0]: Collection[nullable MType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable MType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
387,
"NativeArray[nullable HashMapNode[Variable, nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
387, /* NativeArray[nullable HashMapNode[Variable, nullable MType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* NativeArray#0: nullable HashMapNode[Variable, nullable MType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, nullable MType]] */
}
};
/* runtime type HashMapIterator[Variable, nullable MType] */
const struct type type_hash_collection__HashMapIteratorscope__Variablenullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[Variable, nullable MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
388, /* MapIterator[Variable, nullable MType] */
1142, /* HashMapIterator[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[Variable, nullable MType] */
}
};
/* runtime type MapIterator[Variable, nullable MType] */
const struct type type_abstract_collection__MapIteratorscope__Variablenullable_model__MType = {
388,
"MapIterator[Variable, nullable MType]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, nullable MType] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
1143,
"HashMapNode[Variable, nullable MType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
46, /* nullable HashMapNode[Variable, nullable MType] */
1143, /* HashMapNode[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_model__MType, /* HashMapNode#1: nullable MType */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable MType] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
46,
"nullable HashMapNode[Variable, nullable MType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
626, /* Collection[Variable] */
1387, /* HashMapKeys[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[Variable, nullable Array[nullable MType]] */
&type_abstract_collection__MapKeysIteratorscope__Variablenullable_array__Arraynullable_model__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[Variable, nullable Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* RemovableCollection#0: Variable */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* Collection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Collection#0]: Collection[Variable] */
}
};
/* runtime type HashMapValues[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapValues[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
348, /* Collection[nullable Array[nullable MType]] */
1144, /* HashMapValues[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[Variable, nullable Array[nullable MType]] */
&type_abstract_collection__MapValuesIteratorscope__Variablenullable_array__Arraynullable_model__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[Variable, nullable Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_array__Arraynullable_model__MType, /* RemovableCollection#0: nullable Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
&type_nullable_array__Arraynullable_model__MType, /* Collection#0: nullable Array[nullable MType] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[nullable Array[nullable MType]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
389,
"NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
389, /* NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
}
};
/* runtime type HashMapIterator[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
390, /* MapIterator[Variable, nullable Array[nullable MType]] */
1145, /* HashMapIterator[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type MapIterator[Variable, nullable Array[nullable MType]] */
const struct type type_abstract_collection__MapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
390,
"MapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
1146,
"HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
47, /* nullable HashMapNode[Variable, nullable Array[nullable MType]] */
1146, /* HashMapNode[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_array__Arraynullable_model__MType, /* HashMapNode#1: nullable Array[nullable MType] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
47,
"nullable HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
1388, /* HashMapKeys[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClassDef]] */
&type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1147, /* Collection[Set[MClassDef]] */
1389, /* HashMapValues[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClassDef]] */
&type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassDef, /* RemovableCollection#0: Set[MClassDef] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassDef, /* Collection#0: Set[MClassDef] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef, /* Collection[Collection#0]: Collection[Set[MClassDef]] */
}
};
/* runtime type Collection[Set[MClassDef]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef = {
1147,
"Collection[Set[MClassDef]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
391,
"NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
391, /* NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
392, /* MapIterator[MModule, Set[MClassDef]] */
1148, /* HashMapIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClassDef]] */
}
};
/* runtime type MapIterator[MModule, Set[MClassDef]] */
const struct type type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
392,
"MapIterator[MModule, Set[MClassDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
1149,
"HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
48, /* nullable HashMapNode[MModule, Set[MClassDef]] */
1149, /* HashMapNode[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassDef, /* HashMapNode#1: Set[MClassDef] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassDef]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
48,
"nullable HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
1390, /* HashMapKeys[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClass]] */
&type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClass, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1150, /* Collection[Set[MClass]] */
1391, /* HashMapValues[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClass]] */
&type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClass, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClass, /* RemovableCollection#0: Set[MClass] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClass, /* Collection#0: Set[MClass] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClass, /* Collection[Collection#0]: Collection[Set[MClass]] */
}
};
/* runtime type Collection[Set[MClass]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClass = {
1150,
"Collection[Set[MClass]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
393,
"NativeArray[nullable HashMapNode[MModule, Set[MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
393, /* NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
}
};
/* runtime type HashMapIterator[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
394, /* MapIterator[MModule, Set[MClass]] */
1151, /* HashMapIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClass]] */
}
};
/* runtime type MapIterator[MModule, Set[MClass]] */
const struct type type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
394,
"MapIterator[MModule, Set[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
1152,
"HashMapNode[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
49, /* nullable HashMapNode[MModule, Set[MClass]] */
1152, /* HashMapNode[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClass, /* HashMapNode#1: Set[MClass] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
49,
"nullable HashMapNode[MModule, Set[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
1392, /* HashMapKeys[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClassType]] */
&type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassType,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
1084, /* Collection[Set[MType]] */
1393, /* Collection[Set[MClassType]] */
1575, /* HashMapValues[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClassType]] */
&type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassType, /* RemovableCollection#0: Set[MClassType] */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassType, /* Collection#0: Set[MClassType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType, /* Collection[Collection#0]: Collection[Set[MClassType]] */
}
};
/* runtime type Collection[Set[MClassType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType = {
1393,
"Collection[Set[MClassType]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
395,
"NativeArray[nullable HashMapNode[MModule, Set[MClassType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
395, /* NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
396, /* MapIterator[MModule, Set[MClassType]] */
1153, /* HashMapIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClassType]] */
}
};
/* runtime type MapIterator[MModule, Set[MClassType]] */
const struct type type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
396,
"MapIterator[MModule, Set[MClassType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
1154,
"HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
50, /* nullable HashMapNode[MModule, Set[MClassType]] */
1154, /* HashMapNode[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassType, /* HashMapNode#1: Set[MClassType] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
50,
"nullable HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
397,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
397, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
&type_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_poset__POSetElementmodel__MClass, /* Map#1: POSetElement[MClass] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, POSetElement[MClass]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashCollection#1: HashMapNode[MClass, POSetElement[MClass]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type POSetElement[MClass] */
const struct type type_poset__POSetElementmodel__MClass = {
398,
"POSetElement[MClass]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
398, /* POSetElement[MClass] */
},
};
const struct types resolution_table_poset__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClass, /* HashSet[POSetElement#0]: HashSet[MClass] */
&type_poset__POSetmodel__MClass, /* POSet[POSetElement#0]: POSet[MClass] */
&type_model__MClass, /* POSetElement#0: MClass */
}
};
/* runtime type HashMapKeys[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1576, /* HashMapKeys[MType, Set[MType]] */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
2012, /* HashMapKeys[MClassType, Set[MType]] */
},
};
