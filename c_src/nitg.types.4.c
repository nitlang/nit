#include "nitg.types.0.h"
/* runtime type nullable HashMapNode[String, Array[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass = {
25,
"nullable HashMapNode[String, Array[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
339, /* MapIterator[String, Array[MClass]] */
1530, /* HashMapIterator[String, Array[MClass]] */
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
339,
"MapIterator[String, Array[MClass]]", /* class_name_string */
2,
0,
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
7,
{
0, /* nullable Object */
1, /* Object */
2099, /* HashMapKeys[String, Array[MProperty]] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
1531, /* Collection[Array[MProperty]] */
1901, /* HashMapValues[String, Array[MProperty]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MProperty, /* RemovableCollection#0: Array[MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MProperty, /* Collection#0: Array[MProperty] */
&type_abstract_collection__Collectionarray__Arraymodel__MProperty, /* Collection[Collection#0]: Collection[Array[MProperty]] */
}
};
/* runtime type Collection[Array[MProperty]] */
const struct type type_abstract_collection__Collectionarray__Arraymodel__MProperty = {
1531,
"Collection[Array[MProperty]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
340,
"NativeArray[nullable HashMapNode[String, Array[MProperty]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
340, /* NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray#0: nullable HashMapNode[String, Array[MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
}
};
/* runtime type HashMapNode[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
1532,
"HashMapNode[String, Array[MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
26, /* nullable HashMapNode[String, Array[MProperty]] */
1532, /* HashMapNode[String, Array[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_array__Arraymodel__MProperty, /* HashMapNode#1: Array[MProperty] */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* nullable N: nullable HashMapNode[String, Array[MProperty]] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Array[MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty = {
26,
"nullable HashMapNode[String, Array[MProperty]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
341, /* MapIterator[String, Array[MProperty]] */
1533, /* HashMapIterator[String, Array[MProperty]] */
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
341,
"MapIterator[String, Array[MProperty]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
342,
"HashMap[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
342, /* HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* MapRead#0: MModule */
&type_hash_collection__HashMapKeysmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
&type_hash_collection__HashMapValuesmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_hash_collection__HashMapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* Map#0: MModule */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Map#1: HashMap2[MType, String, nullable MProperty] */
&type_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MModule, HashMap2[MType, String, nullable MProperty]] not a live type) */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* MapRead#1: HashMap2[MType, String, nullable MProperty] */
&type_mmodule__MModule, /* HashCollection#0: MModule */
&type_nullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* nullable HashCollection#1: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashCollection#1: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nullable_mmodule__MModule, /* nullable HashCollection#0: nullable MModule */
}
};
/* runtime type HashMap2[MType, String, nullable MProperty] */
const struct type type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
343,
"HashMap2[MType, String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
343, /* HashMap2[MType, String, nullable MProperty] */
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
/* runtime type ArrayIterator[String] */
const struct type type_array__ArrayIteratorstring__String = {
1902,
"ArrayIterator[String]", /* class_name_string */
4,
0,
&resolution_table_array__ArrayIteratorstring__String,
5,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1534, /* ArrayIterator[Streamable] */
1902, /* ArrayIterator[String] */
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
321, /* ArrayIterator[Object] */
1534, /* ArrayIterator[Streamable] */
},
};
const struct types resolution_table_array__ArrayIteratorstream__Streamable = {
0, /* dummy */
{
&type_array__Arraystream__Streamable, /* Array[Iterator#0]: Array[Streamable] */
&type_array__AbstractArrayReadstream__Streamable, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Streamable] */
}
};
/* runtime type HashMapKeys[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"HashMapKeys[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath,
7,
{
0, /* nullable Object */
1, /* Object */
2100, /* HashMapKeys[String, nullable ModulePath] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
344, /* Collection[nullable ModulePath] */
1535, /* HashMapValues[String, nullable ModulePath] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_modelbuilder__ModulePath, /* RemovableCollection#0: nullable ModulePath */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_modelbuilder__ModulePath, /* Collection#0: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[Collection#0]: Collection[nullable ModulePath] */
}
};
/* runtime type Collection[nullable ModulePath] */
const struct type type_abstract_collection__Collectionnullable_modelbuilder__ModulePath = {
344,
"Collection[nullable ModulePath]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
345,
"NativeArray[nullable HashMapNode[String, nullable ModulePath]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath,
3,
{
0, /* nullable Object */
1, /* Object */
345, /* NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray#0: nullable HashMapNode[String, nullable ModulePath] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
}
};
/* runtime type HashMapNode[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
1536,
"HashMapNode[String, nullable ModulePath]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath,
4,
{
0, /* nullable Object */
1, /* Object */
27, /* nullable HashMapNode[String, nullable ModulePath] */
1536, /* HashMapNode[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_nullable_modelbuilder__ModulePath, /* HashMapNode#1: nullable ModulePath */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* nullable N: nullable HashMapNode[String, nullable ModulePath] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, nullable ModulePath] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath = {
27,
"nullable HashMapNode[String, nullable ModulePath]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
346, /* MapIterator[String, nullable ModulePath] */
1537, /* HashMapIterator[String, nullable ModulePath] */
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
346,
"MapIterator[String, nullable ModulePath]", /* class_name_string */
2,
0,
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
7,
{
0, /* nullable Object */
1, /* Object */
2101, /* HashMapKeys[String, nullable MGroup] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
150, /* Collection[nullable MGroup] */
1538, /* HashMapValues[String, nullable MGroup] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_mproject__MGroup, /* RemovableCollection#0: nullable MGroup */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_mproject__MGroup, /* Collection#0: nullable MGroup */
&type_abstract_collection__Collectionnullable_mproject__MGroup, /* Collection[Collection#0]: Collection[nullable MGroup] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, nullable MGroup]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
347,
"NativeArray[nullable HashMapNode[String, nullable MGroup]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
347, /* NativeArray[nullable HashMapNode[String, nullable MGroup]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray#0: nullable HashMapNode[String, nullable MGroup] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, nullable MGroup]] */
}
};
/* runtime type HashMapNode[String, nullable MGroup] */
const struct type type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
1539,
"HashMapNode[String, nullable MGroup]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
28, /* nullable HashMapNode[String, nullable MGroup] */
1539, /* HashMapNode[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_nullable_mproject__MGroup, /* HashMapNode#1: nullable MGroup */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* nullable N: nullable HashMapNode[String, nullable MGroup] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, nullable MGroup] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup = {
28,
"nullable HashMapNode[String, nullable MGroup]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
348, /* MapIterator[String, nullable MGroup] */
1540, /* HashMapIterator[String, nullable MGroup] */
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
348,
"MapIterator[String, nullable MGroup]", /* class_name_string */
2,
0,
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
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
1903, /* ArrayIterator[Prod] */
2102, /* ArrayIterator[AModule] */
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
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
1903, /* ArrayIterator[Prod] */
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
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
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
2103,
"NativeArray[AModule]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AModule,
6,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
1904, /* NativeArray[Prod] */
2103, /* NativeArray[AModule] */
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
1904,
"NativeArray[Prod]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayparser_nodes__Prod,
5,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
1904, /* NativeArray[Prod] */
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
1542,
"NativeArray[ANode]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
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
5,
{
0, /* nullable Object */
1, /* Object */
644, /* Collection[MModule] */
1905, /* HashMapKeys[MModule, AModule] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
2395, /* HashMapValues[MModule, AModule] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2035, /* Collection[AModule] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AModule, /* RemovableCollection#0: AModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AModule, /* Collection#0: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[Collection#0]: Collection[AModule] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MModule, AModule]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
349,
"NativeArray[nullable HashMapNode[MModule, AModule]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
349, /* NativeArray[nullable HashMapNode[MModule, AModule]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray#0: nullable HashMapNode[MModule, AModule] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, AModule]] */
}
};
/* runtime type HashMapNode[MModule, AModule] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
1543,
"HashMapNode[MModule, AModule]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule,
4,
{
0, /* nullable Object */
1, /* Object */
29, /* nullable HashMapNode[MModule, AModule] */
1543, /* HashMapNode[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_parser_nodes__AModule, /* HashMapNode#1: AModule */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* nullable N: nullable HashMapNode[MModule, AModule] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, AModule] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule = {
29,
"nullable HashMapNode[MModule, AModule]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
350, /* MapIterator[MModule, AModule] */
1544, /* HashMapIterator[MModule, AModule] */
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
350,
"MapIterator[MModule, AModule]", /* class_name_string */
2,
0,
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
5,
{
0, /* nullable Object */
1, /* Object */
647, /* Collection[MClassDef] */
1906, /* HashMapKeys[MClassDef, AClassdef] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* RemovableCollection#0: MClassDef */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
2396, /* HashMapValues[MClassDef, AClassdef] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2045, /* Collection[AClassdef] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* RemovableCollection#0: AClassdef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* Collection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Collection#0]: Collection[AClassdef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
351,
"NativeArray[nullable HashMapNode[MClassDef, AClassdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
351, /* NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray#0: nullable HashMapNode[MClassDef, AClassdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
}
};
/* runtime type HashMapNode[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
1545,
"HashMapNode[MClassDef, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
30, /* nullable HashMapNode[MClassDef, AClassdef] */
1545, /* HashMapNode[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_parser_nodes__AClassdef, /* HashMapNode#1: AClassdef */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* nullable N: nullable HashMapNode[MClassDef, AClassdef] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, AClassdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef = {
30,
"nullable HashMapNode[MClassDef, AClassdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
352, /* MapIterator[MClassDef, AClassdef] */
1546, /* HashMapIterator[MClassDef, AClassdef] */
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
352,
"MapIterator[MClassDef, AClassdef]", /* class_name_string */
2,
0,
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
11,
{
0, /* nullable Object */
1, /* Object */
2397, /* HashMapKeys[MPropDef, APropdef] */
-1, /* empty */
92, /* Collection[Object] */
124, /* Collection[nullable MPropDef] */
646, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2042, /* Collection[MPropDef] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MPropDef, /* RemovableCollection#0: MPropDef */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
2398, /* HashMapValues[MPropDef, APropdef] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2046, /* Collection[APropdef] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
353,
"NativeArray[nullable HashMapNode[MPropDef, APropdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
353, /* NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray#0: nullable HashMapNode[MPropDef, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
}
};
/* runtime type HashMapNode[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
1547,
"HashMapNode[MPropDef, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
31, /* nullable HashMapNode[MPropDef, APropdef] */
1547, /* HashMapNode[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_model__MPropDef, /* HashMapNode#0: MPropDef */
&type_parser_nodes__APropdef, /* HashMapNode#1: APropdef */
&type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* nullable N: nullable HashMapNode[MPropDef, APropdef] */
&type_model__MPropDef, /* HashNode#0: MPropDef */
}
};
/* runtime type nullable HashMapNode[MPropDef, APropdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef = {
31,
"nullable HashMapNode[MPropDef, APropdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
354, /* MapIterator[MPropDef, APropdef] */
1548, /* HashMapIterator[MPropDef, APropdef] */
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
354,
"MapIterator[MPropDef, APropdef]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetNode[MModule] */
const struct type type_hash_collection__HashSetNodemmodule__MModule = {
2104,
"HashSetNode[MModule]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemmodule__MModule,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
355, /* nullable HashSetNode[MModule] */
1549, /* HashSetNode[Object] */
2104, /* HashSetNode[MModule] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemmodule__MModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashSetNode#0: MModule */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemmodule__MModule, /* nullable N: nullable HashSetNode[MModule] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashSetNode[Object] */
const struct type type_hash_collection__HashSetNodekernel__Object = {
1549,
"HashSetNode[Object]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashSetNodekernel__Object,
5,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
-1, /* empty */
1549, /* HashSetNode[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetNodekernel__Object = {
0, /* dummy */
{
&type_kernel__Object, /* HashSetNode#0: Object */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodekernel__Object, /* nullable N: nullable HashSetNode[Object] */
&type_kernel__Object, /* HashNode#0: Object */
}
};
/* runtime type nullable HashSetNode[MModule] */
const struct type type_nullable_hash_collection__HashSetNodemmodule__MModule = {
355,
"nullable HashSetNode[MModule]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[Object] */
const struct type type_nullable_hash_collection__HashSetNodekernel__Object = {
32,
"nullable HashSetNode[Object]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1550, /* HashSetIterator[MModule] */
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
356, /* HashSetIterator[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorkernel__Object = {
0, /* dummy */
{
&type_array__Arraykernel__Object, /* Array[Iterator#0]: Array[Object] */
&type_hash_collection__HashSetkernel__Object, /* HashSet[HashSetIterator#0]: HashSet[Object] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MModule]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule = {
1551,
"NativeArray[nullable HashSetNode[MModule]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1551, /* NativeArray[nullable HashSetNode[MModule]] */
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
357,
"NativeArray[nullable HashSetNode[Object]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodekernel__Object, /* NativeArray#0: nullable HashSetNode[Object] */
&type_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[Object]] */
}
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
321, /* ArrayIterator[Object] */
1552, /* ArrayIterator[MClassDef] */
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
1553,
"NativeArray[MClassDef]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1553, /* NativeArray[MClassDef] */
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
7,
{
0, /* nullable Object */
1, /* Object */
2105, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
2399, /* HashMapKeys[MClass, Set[MProperty]] */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapKeys[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
7,
{
0, /* nullable Object */
1, /* Object */
2105, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
8,
{
0, /* nullable Object */
1, /* Object */
1554, /* Collection[Set[PropertyLayoutElement]] */
1907, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
92, /* Collection[Object] */
1908, /* Collection[Set[MProperty]] */
-1, /* empty */
2400, /* HashMapValues[MClass, Set[MProperty]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MProperty, /* RemovableCollection#0: Set[MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MProperty, /* Collection#0: Set[MProperty] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty, /* Collection[Collection#0]: Collection[Set[MProperty]] */
}
};
/* runtime type HashMapValues[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
5,
{
0, /* nullable Object */
1, /* Object */
1554, /* Collection[Set[PropertyLayoutElement]] */
1907, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
92, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setlayout_builders__PropertyLayoutElement, /* RemovableCollection#0: Set[PropertyLayoutElement] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setlayout_builders__PropertyLayoutElement, /* Collection#0: Set[PropertyLayoutElement] */
&type_abstract_collection__Collectionabstract_collection__Setlayout_builders__PropertyLayoutElement, /* Collection[Collection#0]: Collection[Set[PropertyLayoutElement]] */
}
};
/* runtime type Collection[Set[MProperty]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty = {
1908,
"Collection[Set[MProperty]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setlayout_builders__PropertyLayoutElement = {
1554,
"Collection[Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
1555,
"NativeArray[nullable HashMapNode[MClass, Set[MProperty]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
358, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1555, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
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
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
358,
"NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
358, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* NativeArray#0: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
}
};
/* runtime type HashMapNode[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
2106,
"HashMapNode[MClass, Set[MProperty]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
33, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
359, /* nullable HashMapNode[MClass, Set[MProperty]] */
1556, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
2106, /* HashMapNode[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MProperty, /* HashMapNode#1: Set[MProperty] */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* nullable N: nullable HashMapNode[MClass, Set[MProperty]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapNode[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
1556,
"HashMapNode[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
5,
{
0, /* nullable Object */
1, /* Object */
33, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1556, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setlayout_builders__PropertyLayoutElement, /* HashMapNode#1: Set[PropertyLayoutElement] */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* nullable N: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty = {
359,
"nullable HashMapNode[MClass, Set[MProperty]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
33,
"nullable HashMapNode[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
360, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1557, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1558, /* MapIterator[MClass, Set[MProperty]] */
-1, /* empty */
2107, /* HashMapIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[MProperty]] */
}
};
/* runtime type HashMapIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
360, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1557, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Set[PropertyLayoutElement]] */
}
};
/* runtime type MapIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
1558,
"MapIterator[MClass, Set[MProperty]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
360,
"MapIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[Char] */
const struct type type_array__ArrayIteratorkernel__Char = {
-1, /*CAST DEAD*/
"ArrayIterator[Char]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorkernel__Char,
4,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1559, /* ArrayIterator[Char] */
},
};
const struct types resolution_table_array__ArrayIteratorkernel__Char = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[Iterator#0]: Array[Char] */
&type_array__AbstractArrayReadkernel__Char, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Char] */
}
};
/* runtime type Array[Char] */
const struct type type_array__Arraykernel__Char = {
2707,
"Array[Char]", /* class_name_string */
2,
0,
&resolution_table_array__Arraykernel__Char,
10,
{
0, /* nullable Object */
1, /* Object */
2707, /* Array[Char] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
-1, /* empty */
657, /* Collection[Char] */
1838, /* AbstractArrayRead[Object] */
2246, /* AbstractArrayRead[Char] */
2029, /* Array[Object] */
},
};
const struct types resolution_table_array__Arraykernel__Char = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[Array#0]: Array[Char] */
&type_array__NativeArraykernel__Char, /* NativeArray[Array#0]: NativeArray[Char] */
&type_kernel__Char, /* Sequence#0: Char */
&type_kernel__Char, /* SimpleCollection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Array#0]: Collection[Char] */
&type_kernel__Char, /* Array#0: Char */
&type_array__NativeArraykernel__Char, /* NativeArray[ArrayCapable#0]: NativeArray[Char] */
&type_kernel__Char, /* AbstractArray#0: Char */
&type_kernel__Char, /* RemovableCollection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Sequence#0]: Collection[Char] */
&type_array__Arraykernel__Char, /* Array[Sequence#0]: Array[Char] */
&type_abstract_collection__Collectionkernel__Char, /* Collection[SimpleCollection#0]: Collection[Char] */
&type_kernel__Char, /* Collection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Collection#0]: Collection[Char] */
&type_kernel__Char, /* SequenceRead#0: Char */
&type_kernel__Char, /* AbstractArrayRead#0: Char */
&type_array__Arraykernel__Char, /* Array[AbstractArrayRead#0]: Array[Char] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[Char] not a live type) */
&type_array__ArrayIteratorkernel__Char, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Char] */
}
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
321, /* ArrayIterator[Object] */
1560, /* ArrayIterator[Option] */
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
7,
{
0, /* nullable Object */
1, /* Object */
2108, /* HashMapKeys[String, Option] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
658, /* Collection[Option] */
1909, /* HashMapValues[String, Option] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_opts__Option, /* RemovableCollection#0: Option */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_opts__Option, /* Collection#0: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[Collection#0]: Collection[Option] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Option]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option = {
361,
"NativeArray[nullable HashMapNode[String, Option]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
361, /* NativeArray[nullable HashMapNode[String, Option]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray#0: nullable HashMapNode[String, Option] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Option]] */
}
};
/* runtime type HashMapNode[String, Option] */
const struct type type_hash_collection__HashMapNodestring__Stringopts__Option = {
1561,
"HashMapNode[String, Option]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringopts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
34, /* nullable HashMapNode[String, Option] */
1561, /* HashMapNode[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringopts__Option = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_opts__Option, /* HashMapNode#1: Option */
&type_nullable_hash_collection__HashMapNodestring__Stringopts__Option, /* nullable N: nullable HashMapNode[String, Option] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Option] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringopts__Option = {
34,
"nullable HashMapNode[String, Option]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
362, /* MapIterator[String, Option] */
1562, /* HashMapIterator[String, Option] */
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
362,
"MapIterator[String, Option]", /* class_name_string */
2,
0,
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
363, /* IteratorRange[Int] */
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
364, /* ArraySetIterator[MModule] */
},
};
const struct types resolution_table_array__ArraySetIteratormmodule__MModule = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[Iterator#0]: Array[MModule] */
&type_array__ArrayIteratormmodule__MModule, /* ArrayIterator[ArraySetIterator#0]: ArrayIterator[MModule] */
}
};
/* runtime type HashSetNode[MType] */
const struct type type_hash_collection__HashSetNodemodel__MType = {
2629,
"HashSetNode[MType]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashSetNodemodel__MType,
9,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
365, /* nullable HashSetNode[NitniCallback] */
1549, /* HashSetNode[Object] */
1563, /* nullable HashSetNode[MType] */
-1, /* empty */
2109, /* HashSetNode[NitniCallback] */
2629, /* HashSetNode[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashSetNode#0: MType */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MType, /* nullable N: nullable HashSetNode[MType] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type HashSetNode[NitniCallback] */
const struct type type_hash_collection__HashSetNodenitni_callbacks__NitniCallback = {
2109,
"HashSetNode[NitniCallback]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashSetNodenitni_callbacks__NitniCallback,
8,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
365, /* nullable HashSetNode[NitniCallback] */
1549, /* HashSetNode[Object] */
-1, /* empty */
-1, /* empty */
2109, /* HashSetNode[NitniCallback] */
},
};
const struct types resolution_table_hash_collection__HashSetNodenitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_nitni_callbacks__NitniCallback, /* HashSetNode#0: NitniCallback */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback, /* nullable N: nullable HashSetNode[NitniCallback] */
&type_nitni_callbacks__NitniCallback, /* HashNode#0: NitniCallback */
}
};
/* runtime type nullable HashSetNode[MType] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MType = {
1563,
"nullable HashSetNode[MType]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[NitniCallback] */
const struct type type_nullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback = {
365,
"nullable HashSetNode[NitniCallback]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetIterator[MType] */
const struct type type_hash_collection__HashSetIteratormodel__MType = {
-1, /*CAST DEAD*/
"HashSetIterator[MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1564, /* HashSetIterator[NitniCallback] */
1910, /* HashSetIterator[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
&type_hash_collection__HashSetmodel__MType, /* HashSet[HashSetIterator#0]: HashSet[MType] */
}
};
/* runtime type HashSetIterator[NitniCallback] */
const struct type type_hash_collection__HashSetIteratornitni_callbacks__NitniCallback = {
-1, /*CAST DEAD*/
"HashSetIterator[NitniCallback]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratornitni_callbacks__NitniCallback,
4,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1564, /* HashSetIterator[NitniCallback] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratornitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_array__Arraynitni_callbacks__NitniCallback, /* Array[Iterator#0]: Array[NitniCallback] */
&type_hash_collection__HashSetnitni_callbacks__NitniCallback, /* HashSet[HashSetIterator#0]: HashSet[NitniCallback] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType = {
1911,
"NativeArray[nullable HashSetNode[MType]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1565, /* NativeArray[nullable HashSetNode[NitniCallback]] */
1911, /* NativeArray[nullable HashSetNode[MType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MType, /* NativeArray#0: nullable HashSetNode[MType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MType]] */
}
};
/* runtime type NativeArray[nullable HashSetNode[NitniCallback]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback = {
1565,
"NativeArray[nullable HashSetNode[NitniCallback]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1565, /* NativeArray[nullable HashSetNode[NitniCallback]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback, /* NativeArray#0: nullable HashSetNode[NitniCallback] */
&type_array__NativeArraynullable_hash_collection__HashSetNodenitni_callbacks__NitniCallback, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[NitniCallback]] */
}
};
/* runtime type HashMapKeys[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
647, /* Collection[MClassDef] */
1912, /* HashMapKeys[MClassDef, HashSet[MType]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* RemovableCollection#0: MClassDef */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1566, /* Collection[Set[NitniCallback]] */
2401, /* HashMapValues[MClassDef, HashSet[MType]] */
92, /* Collection[Object] */
1913, /* Collection[Set[MType]] */
2110, /* Collection[HashSet[MType]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashSetmodel__MType, /* RemovableCollection#0: HashSet[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashSetmodel__MType, /* Collection#0: HashSet[MType] */
&type_abstract_collection__Collectionhash_collection__HashSetmodel__MType, /* Collection[Collection#0]: Collection[HashSet[MType]] */
}
};
/* runtime type Collection[HashSet[MType]] */
const struct type type_abstract_collection__Collectionhash_collection__HashSetmodel__MType = {
2110,
"Collection[HashSet[MType]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Set[MType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MType = {
1913,
"Collection[Set[MType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Set[NitniCallback]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setnitni_callbacks__NitniCallback = {
1566,
"Collection[Set[NitniCallback]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
366,
"NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
366, /* NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray#0: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
}
};
/* runtime type HashMapNode[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
1567,
"HashMapNode[MClassDef, HashSet[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
35, /* nullable HashMapNode[MClassDef, HashSet[MType]] */
1567, /* HashMapNode[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_hash_collection__HashSetmodel__MType, /* HashMapNode#1: HashSet[MType] */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* nullable N: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, HashSet[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType = {
35,
"nullable HashMapNode[MClassDef, HashSet[MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
367, /* MapIterator[MClassDef, HashSet[MType]] */
1568, /* HashMapIterator[MClassDef, HashSet[MType]] */
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
367,
"MapIterator[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
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
2111, /* HashMapKeys[MClass, Int] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
6,
{
0, /* nullable Object */
1, /* Object */
1914, /* HashMapValues[MClass, Int] */
-1, /* empty */
92, /* Collection[Object] */
661, /* Collection[Int] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* RemovableCollection#0: Int */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
368,
"NativeArray[nullable HashMapNode[MClass, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
368, /* NativeArray[nullable HashMapNode[MClass, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray#0: nullable HashMapNode[MClass, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Int]] */
}
};
/* runtime type HashMapNode[MClass, Int] */
const struct type type_hash_collection__HashMapNodemodel__MClasskernel__Int = {
1569,
"HashMapNode[MClass, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClasskernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
36, /* nullable HashMapNode[MClass, Int] */
1569, /* HashMapNode[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClasskernel__Int = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* nullable N: nullable HashMapNode[MClass, Int] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int = {
36,
"nullable HashMapNode[MClass, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
369, /* MapIterator[MClass, Int] */
1570, /* HashMapIterator[MClass, Int] */
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
369,
"MapIterator[MClass, Int]", /* class_name_string */
2,
0,
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
11,
{
0, /* nullable Object */
1, /* Object */
2402, /* HashMapKeys[MType, Array[nullable MType]] */
-1, /* empty */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
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
6,
{
0, /* nullable Object */
1, /* Object */
370, /* Collection[nullable Array[nullable MType]] */
2112, /* HashMapValues[MType, Array[nullable MType]] */
92, /* Collection[Object] */
1915, /* Collection[Array[nullable MType]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* RemovableCollection#0: Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* Collection#0: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[Array[nullable MType]] */
}
};
/* runtime type Collection[Array[nullable MType]] */
const struct type type_abstract_collection__Collectionarray__Arraynullable_model__MType = {
1915,
"Collection[Array[nullable MType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable Array[nullable MType]] */
const struct type type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType = {
370,
"Collection[nullable Array[nullable MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
371,
"NativeArray[nullable HashMapNode[MType, Array[nullable MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
371, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[MType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
}
};
/* runtime type HashMapNode[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
1571,
"HashMapNode[MType, Array[nullable MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType,
5,
{
0, /* nullable Object */
1, /* Object */
37, /* nullable HashMapNode[MType, Array[nullable MType]] */
-1, /* empty */
1571, /* HashMapNode[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_array__Arraynullable_model__MType, /* HashMapNode#1: Array[nullable MType] */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* nullable N: nullable HashMapNode[MType, Array[nullable MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MType, Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType = {
37,
"nullable HashMapNode[MType, Array[nullable MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
372, /* MapIterator[MType, Array[nullable MType]] */
1572, /* HashMapIterator[MType, Array[nullable MType]] */
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
372,
"MapIterator[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
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
2402, /* HashMapKeys[MType, Array[nullable MType]] */
2708, /* HashMapKeys[MClassType, Array[nullable MType]] */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
2240, /* Collection[MClassType] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
370, /* Collection[nullable Array[nullable MType]] */
2112, /* HashMapValues[MType, Array[nullable MType]] */
92, /* Collection[Object] */
1915, /* Collection[Array[nullable MType]] */
2403, /* HashMapValues[MClassType, Array[nullable MType]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* RemovableCollection#0: Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MType, /* Collection#0: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[Array[nullable MType]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
1573,
"NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
371, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
1573, /* NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
}
};
/* runtime type HashMapNode[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
2113,
"HashMapNode[MClassType, Array[nullable MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType,
6,
{
0, /* nullable Object */
1, /* Object */
37, /* nullable HashMapNode[MType, Array[nullable MType]] */
373, /* nullable HashMapNode[MClassType, Array[nullable MType]] */
1571, /* HashMapNode[MType, Array[nullable MType]] */
2113, /* HashMapNode[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_array__Arraynullable_model__MType, /* HashMapNode#1: Array[nullable MType] */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* nullable N: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashMapNode[MClassType, Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType = {
373,
"nullable HashMapNode[MClassType, Array[nullable MType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
372, /* MapIterator[MType, Array[nullable MType]] */
1572, /* HashMapIterator[MType, Array[nullable MType]] */
1574, /* MapIterator[MClassType, Array[nullable MType]] */
2114, /* HashMapIterator[MClassType, Array[nullable MType]] */
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
1574,
"MapIterator[MClassType, Array[nullable MType]]", /* class_name_string */
4,
0,
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
2115, /* HashMapKeys[MClass, Array[nullable MPropDef]] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
1575, /* Collection[Array[nullable MPropDef]] */
1916, /* HashMapValues[MClass, Array[nullable MPropDef]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MPropDef, /* RemovableCollection#0: Array[nullable MPropDef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MPropDef, /* Collection#0: Array[nullable MPropDef] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef, /* Collection[Collection#0]: Collection[Array[nullable MPropDef]] */
}
};
/* runtime type Collection[Array[nullable MPropDef]] */
const struct type type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef = {
1575,
"Collection[Array[nullable MPropDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
374,
"NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
374, /* NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray#0: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
}
};
/* runtime type HashMapNode[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
1576,
"HashMapNode[MClass, Array[nullable MPropDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
38, /* nullable HashMapNode[MClass, Array[nullable MPropDef]] */
1576, /* HashMapNode[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_array__Arraynullable_model__MPropDef, /* HashMapNode#1: Array[nullable MPropDef] */
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* nullable N: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Array[nullable MPropDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef = {
38,
"nullable HashMapNode[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
375, /* MapIterator[MClass, Array[nullable MPropDef]] */
1577, /* HashMapIterator[MClass, Array[nullable MPropDef]] */
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
375,
"MapIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
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
7,
{
0, /* nullable Object */
1, /* Object */
2116, /* HashMapKeys[String, String] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
2117, /* HashMapValues[String, String] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String = {
376,
"NativeArray[nullable HashMapNode[String, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
376, /* NativeArray[nullable HashMapNode[String, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray#0: nullable HashMapNode[String, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, String]] */
}
};
/* runtime type HashMapNode[String, String] */
const struct type type_hash_collection__HashMapNodestring__Stringstring__String = {
1578,
"HashMapNode[String, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
39, /* nullable HashMapNode[String, String] */
1578, /* HashMapNode[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringstring__String = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_string__String, /* HashMapNode#1: String */
&type_nullable_hash_collection__HashMapNodestring__Stringstring__String, /* nullable N: nullable HashMapNode[String, String] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, String] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringstring__String = {
39,
"nullable HashMapNode[String, String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
377, /* MapIterator[String, String] */
1579, /* HashMapIterator[String, String] */
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
377,
"MapIterator[String, String]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[CodeFile] */
const struct type type_list__ListNodeabstract_compiler__CodeFile = {
2404,
"ListNode[CodeFile]", /* class_name_string */
6,
0,
&resolution_table_list__ListNodeabstract_compiler__CodeFile,
7,
{
0, /* nullable Object */
1, /* Object */
40, /* nullable ListNode[CodeFile] */
1917, /* Container[CodeFile] */
92, /* Collection[Object] */
665, /* Collection[CodeFile] */
2404, /* ListNode[CodeFile] */
},
};
const struct types resolution_table_list__ListNodeabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_abstract_compiler__CodeFile, /* ListNode#0: CodeFile */
&type_nullable_list__ListNodeabstract_compiler__CodeFile, /* nullable ListNode[ListNode#0]: nullable ListNode[CodeFile] */
&type_abstract_collection__ContainerIteratorabstract_compiler__CodeFile, /* ContainerIterator[Container#0]: ContainerIterator[CodeFile] */
&type_abstract_compiler__CodeFile, /* Container#0: CodeFile */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
40,
"nullable ListNode[CodeFile]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[CodeFile] */
const struct type type_abstract_collection__Containerabstract_compiler__CodeFile = {
1917,
"Container[CodeFile]", /* class_name_string */
3,
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
378, /* ListIterator[CodeFile] */
},
};
const struct types resolution_table_list__ListIteratorabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeFile, /* Array[Iterator#0]: Array[CodeFile] */
&type_abstract_compiler__CodeFile, /* ListIterator#0: CodeFile */
&type_list__Listabstract_compiler__CodeFile, /* List[ListIterator#0]: List[CodeFile] */
}
};
/* runtime type Array[CodeFile] */
const struct type type_array__Arrayabstract_compiler__CodeFile = {
2709,
"Array[CodeFile]", /* class_name_string */
6,
0,
&resolution_table_array__Arrayabstract_compiler__CodeFile,
10,
{
0, /* nullable Object */
1, /* Object */
2405, /* AbstractArrayRead[CodeFile] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
665, /* Collection[CodeFile] */
2709, /* Array[CodeFile] */
1838, /* AbstractArrayRead[Object] */
-1, /* empty */
2029, /* Array[Object] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeFile, /* Array[Array#0]: Array[CodeFile] */
&type_array__NativeArrayabstract_compiler__CodeFile, /* NativeArray[Array#0]: NativeArray[CodeFile] */
&type_abstract_compiler__CodeFile, /* Sequence#0: CodeFile */
&type_abstract_compiler__CodeFile, /* SimpleCollection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Array#0]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* Array#0: CodeFile */
&type_array__NativeArrayabstract_compiler__CodeFile, /* NativeArray[ArrayCapable#0]: NativeArray[CodeFile] */
&type_abstract_compiler__CodeFile, /* AbstractArray#0: CodeFile */
&type_abstract_compiler__CodeFile, /* RemovableCollection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Sequence#0]: Collection[CodeFile] */
&type_array__Arrayabstract_compiler__CodeFile, /* Array[Sequence#0]: Array[CodeFile] */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[SimpleCollection#0]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* Collection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Collection#0]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* SequenceRead#0: CodeFile */
&type_abstract_compiler__CodeFile, /* AbstractArrayRead#0: CodeFile */
&type_array__Arrayabstract_compiler__CodeFile, /* Array[AbstractArrayRead#0]: Array[CodeFile] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[CodeFile] not a live type) */
&type_array__ArrayIteratorabstract_compiler__CodeFile, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[CodeFile] */
}
};
/* runtime type AbstractArrayRead[CodeFile] */
const struct type type_array__AbstractArrayReadabstract_compiler__CodeFile = {
2405,
"AbstractArrayRead[CodeFile]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, ANode] */
const struct type type_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"HashMapKeys[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode,
7,
{
0, /* nullable Object */
1, /* Object */
2118, /* HashMapKeys[String, ANode] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
6,
{
0, /* nullable Object */
1, /* Object */
1918, /* HashMapValues[String, ANode] */
-1, /* empty */
92, /* Collection[Object] */
653, /* Collection[ANode] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__ANode, /* RemovableCollection#0: ANode */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, ANode]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
379,
"NativeArray[nullable HashMapNode[String, ANode]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
379, /* NativeArray[nullable HashMapNode[String, ANode]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray#0: nullable HashMapNode[String, ANode] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, ANode]] */
}
};
/* runtime type HashMapNode[String, ANode] */
const struct type type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
1580,
"HashMapNode[String, ANode]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
41, /* nullable HashMapNode[String, ANode] */
1580, /* HashMapNode[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_parser_nodes__ANode, /* HashMapNode#1: ANode */
&type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* nullable N: nullable HashMapNode[String, ANode] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, ANode] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode = {
41,
"nullable HashMapNode[String, ANode]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
380, /* MapIterator[String, ANode] */
1581, /* HashMapIterator[String, ANode] */
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
380,
"MapIterator[String, ANode]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[ExternFile] */
const struct type type_array__ArrayIteratorffi_base__ExternFile = {
-1, /*CAST DEAD*/
"ArrayIterator[ExternFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorffi_base__ExternFile,
4,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1582, /* ArrayIterator[ExternFile] */
},
};
const struct types resolution_table_array__ArrayIteratorffi_base__ExternFile = {
0, /* dummy */
{
&type_array__Arrayffi_base__ExternFile, /* Array[Iterator#0]: Array[ExternFile] */
&type_array__AbstractArrayReadffi_base__ExternFile, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ExternFile] */
}
};
/* runtime type NativeArray[ExternFile] */
const struct type type_array__NativeArrayffi_base__ExternFile = {
1583,
"NativeArray[ExternFile]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayffi_base__ExternFile,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1583, /* NativeArray[ExternFile] */
},
};
const struct types resolution_table_array__NativeArrayffi_base__ExternFile = {
0, /* dummy */
{
&type_ffi_base__ExternFile, /* NativeArray#0: ExternFile */
&type_array__NativeArrayffi_base__ExternFile, /* NativeArray[NativeArray#0]: NativeArray[ExternFile] */
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
381, /* ArraySetIterator[String] */
},
};
const struct types resolution_table_array__ArraySetIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_array__ArrayIteratorstring__String, /* ArrayIterator[ArraySetIterator#0]: ArrayIterator[String] */
}
};
/* runtime type HashSetNode[MClassType] */
const struct type type_hash_collection__HashSetNodemodel__MClassType = {
2766,
"HashSetNode[MClassType]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClassType,
10,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
365, /* nullable HashSetNode[NitniCallback] */
1549, /* HashSetNode[Object] */
1563, /* nullable HashSetNode[MType] */
1919, /* nullable HashSetNode[MClassType] */
2109, /* HashSetNode[NitniCallback] */
2629, /* HashSetNode[MType] */
2766, /* HashSetNode[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* HashSetNode#0: MClassType */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MClassType, /* nullable N: nullable HashSetNode[MClassType] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashSetNode[MClassType] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClassType = {
1919,
"nullable HashSetNode[MClassType]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetIterator[MClassType] */
const struct type type_hash_collection__HashSetIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"HashSetIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1564, /* HashSetIterator[NitniCallback] */
1910, /* HashSetIterator[MType] */
2119, /* HashSetIterator[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_hash_collection__HashSetmodel__MClassType, /* HashSet[HashSetIterator#0]: HashSet[MClassType] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClassType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType = {
2120,
"NativeArray[nullable HashSetNode[MClassType]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1565, /* NativeArray[nullable HashSetNode[NitniCallback]] */
1911, /* NativeArray[nullable HashSetNode[MType]] */
2120, /* NativeArray[nullable HashSetNode[MClassType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray#0: nullable HashSetNode[MClassType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MClassType]] */
}
};
/* runtime type HashSetNode[MClass] */
const struct type type_hash_collection__HashSetNodemodel__MClass = {
2121,
"HashSetNode[MClass]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClass,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
382, /* nullable HashSetNode[MClass] */
1549, /* HashSetNode[Object] */
2121, /* HashSetNode[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClass = {
0, /* dummy */
{
&type_model__MClass, /* HashSetNode#0: MClass */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MClass, /* nullable N: nullable HashSetNode[MClass] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashSetNode[MClass] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClass = {
382,
"nullable HashSetNode[MClass]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1584, /* HashSetIterator[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClass = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
&type_hash_collection__HashSetmodel__MClass, /* HashSet[HashSetIterator#0]: HashSet[MClass] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClass]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass = {
1585,
"NativeArray[nullable HashSetNode[MClass]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1585, /* NativeArray[nullable HashSetNode[MClass]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray#0: nullable HashSetNode[MClass] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MClass]] */
}
};
/* runtime type HashSetNode[MMethodDef] */
const struct type type_hash_collection__HashSetNodemodel__MMethodDef = {
2630,
"HashSetNode[MMethodDef]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashSetNodemodel__MMethodDef,
8,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
1586, /* nullable HashSetNode[MMethodDef] */
2630, /* HashSetNode[MMethodDef] */
2122, /* HashSetNode[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* HashSetNode#0: MMethodDef */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MMethodDef, /* nullable N: nullable HashSetNode[MMethodDef] */
&type_model__MMethodDef, /* HashNode#0: MMethodDef */
}
};
/* runtime type HashSetNode[PropertyLayoutElement] */
const struct type type_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement = {
2122,
"HashSetNode[PropertyLayoutElement]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement,
8,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
-1, /* empty */
-1, /* empty */
2122, /* HashSetNode[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_layout_builders__PropertyLayoutElement, /* HashSetNode#0: PropertyLayoutElement */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement, /* nullable N: nullable HashSetNode[PropertyLayoutElement] */
&type_layout_builders__PropertyLayoutElement, /* HashNode#0: PropertyLayoutElement */
}
};
/* runtime type nullable HashSetNode[MMethodDef] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MMethodDef = {
1586,
"nullable HashSetNode[MMethodDef]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[PropertyLayoutElement] */
const struct type type_nullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement = {
383,
"nullable HashSetNode[PropertyLayoutElement]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
1920, /* HashSetIterator[MMethodDef] */
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
const struct type type_hash_collection__HashSetIteratorlayout_builders__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"HashSetIterator[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorlayout_builders__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__Arraylayout_builders__PropertyLayoutElement, /* Array[Iterator#0]: Array[PropertyLayoutElement] */
&type_hash_collection__HashSetlayout_builders__PropertyLayoutElement, /* HashSet[HashSetIterator#0]: HashSet[PropertyLayoutElement] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MMethodDef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef = {
1921,
"NativeArray[nullable HashSetNode[MMethodDef]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef,
5,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1921, /* NativeArray[nullable HashSetNode[MMethodDef]] */
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
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement = {
1588,
"NativeArray[nullable HashSetNode[PropertyLayoutElement]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement, /* NativeArray#0: nullable HashSetNode[PropertyLayoutElement] */
&type_array__NativeArraynullable_hash_collection__HashSetNodelayout_builders__PropertyLayoutElement, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
}
};
/* runtime type HashSetNode[MMethod] */
const struct type type_hash_collection__HashSetNodemodel__MMethod = {
2767,
"HashSetNode[MMethod]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MMethod,
10,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
1589, /* nullable HashSetNode[MProperty] */
1922, /* nullable HashSetNode[MMethod] */
2122, /* HashSetNode[PropertyLayoutElement] */
2631, /* HashSetNode[MProperty] */
2767, /* HashSetNode[MMethod] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MMethod = {
0, /* dummy */
{
&type_model__MMethod, /* HashSetNode#0: MMethod */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MMethod, /* nullable N: nullable HashSetNode[MMethod] */
&type_model__MMethod, /* HashNode#0: MMethod */
}
};
/* runtime type HashSetNode[MProperty] */
const struct type type_hash_collection__HashSetNodemodel__MProperty = {
2631,
"HashSetNode[MProperty]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashSetNodemodel__MProperty,
9,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
1589, /* nullable HashSetNode[MProperty] */
-1, /* empty */
2122, /* HashSetNode[PropertyLayoutElement] */
2631, /* HashSetNode[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MProperty = {
0, /* dummy */
{
&type_model__MProperty, /* HashSetNode#0: MProperty */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MProperty, /* nullable N: nullable HashSetNode[MProperty] */
&type_model__MProperty, /* HashNode#0: MProperty */
}
};
/* runtime type nullable HashSetNode[MMethod] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MMethod = {
1922,
"nullable HashSetNode[MMethod]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashSetNode[MProperty] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MProperty = {
1589,
"nullable HashSetNode[MProperty]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
1923, /* HashSetIterator[MProperty] */
2123, /* HashSetIterator[MMethod] */
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
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
1923, /* HashSetIterator[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MProperty = {
0, /* dummy */
{
&type_array__Arraymodel__MProperty, /* Array[Iterator#0]: Array[MProperty] */
&type_hash_collection__HashSetmodel__MProperty, /* HashSet[HashSetIterator#0]: HashSet[MProperty] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MMethod]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod = {
2124,
"NativeArray[nullable HashSetNode[MMethod]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod,
6,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1924, /* NativeArray[nullable HashSetNode[MProperty]] */
2124, /* NativeArray[nullable HashSetNode[MMethod]] */
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
1924,
"NativeArray[nullable HashSetNode[MProperty]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty,
5,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1924, /* NativeArray[nullable HashSetNode[MProperty]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray#0: nullable HashSetNode[MProperty] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MProperty]] */
}
};
/* runtime type ListNode[MMethodDef] */
const struct type type_list__ListNodemodel__MMethodDef = {
2768,
"ListNode[MMethodDef]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodemodel__MMethodDef,
13,
{
0, /* nullable Object */
1, /* Object */
42, /* nullable ListNode[MMethodDef] */
2632, /* Container[MMethodDef] */
92, /* Collection[Object] */
124, /* Collection[nullable MPropDef] */
646, /* Collection[PropertyLayoutElement] */
2768, /* ListNode[MMethodDef] */
-1, /* empty */
-1, /* empty */
2042, /* Collection[MPropDef] */
-1, /* empty */
2251, /* Collection[MMethodDef] */
},
};
const struct types resolution_table_list__ListNodemodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* ListNode#0: MMethodDef */
&type_nullable_list__ListNodemodel__MMethodDef, /* nullable ListNode[ListNode#0]: nullable ListNode[MMethodDef] */
&type_abstract_collection__ContainerIteratormodel__MMethodDef, /* ContainerIterator[Container#0]: ContainerIterator[MMethodDef] */
&type_model__MMethodDef, /* Container#0: MMethodDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
42,
"nullable ListNode[MMethodDef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[MMethodDef] */
const struct type type_abstract_collection__Containermodel__MMethodDef = {
2632,
"Container[MMethodDef]", /* class_name_string */
3,
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
384, /* ListIterator[MMethodDef] */
},
};
const struct types resolution_table_list__ListIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[Iterator#0]: Array[MMethodDef] */
&type_model__MMethodDef, /* ListIterator#0: MMethodDef */
&type_list__Listmodel__MMethodDef, /* List[ListIterator#0]: List[MMethodDef] */
}
};
/* runtime type Array[MMethodDef] */
const struct type type_array__Arraymodel__MMethodDef = {
2869,
"Array[MMethodDef]", /* class_name_string */
17,
0,
&resolution_table_array__Arraymodel__MMethodDef,
18,
{
0, /* nullable Object */
1, /* Object */
1880, /* AbstractArrayRead[nullable MPropDef] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
124, /* Collection[nullable MPropDef] */
646, /* Collection[PropertyLayoutElement] */
1838, /* AbstractArrayRead[Object] */
2048, /* Array[nullable MPropDef] */
2029, /* Array[Object] */
2042, /* Collection[MPropDef] */
2239, /* AbstractArrayRead[PropertyLayoutElement] */
2251, /* Collection[MMethodDef] */
2661, /* Array[PropertyLayoutElement] */
2780, /* AbstractArrayRead[MPropDef] */
2830, /* AbstractArrayRead[MMethodDef] */
2843, /* Array[MPropDef] */
2869, /* Array[MMethodDef] */
},
};
const struct types resolution_table_array__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[Array#0]: Array[MMethodDef] */
&type_array__NativeArraymodel__MMethodDef, /* NativeArray[Array#0]: NativeArray[MMethodDef] */
&type_model__MMethodDef, /* Sequence#0: MMethodDef */
&type_model__MMethodDef, /* SimpleCollection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Array#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Array#0: MMethodDef */
&type_array__NativeArraymodel__MMethodDef, /* NativeArray[ArrayCapable#0]: NativeArray[MMethodDef] */
&type_model__MMethodDef, /* AbstractArray#0: MMethodDef */
&type_model__MMethodDef, /* RemovableCollection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Sequence#0]: Collection[MMethodDef] */
&type_array__Arraymodel__MMethodDef, /* Array[Sequence#0]: Array[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[SimpleCollection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* SequenceRead#0: MMethodDef */
&type_model__MMethodDef, /* AbstractArrayRead#0: MMethodDef */
&type_array__Arraymodel__MMethodDef, /* Array[AbstractArrayRead#0]: Array[MMethodDef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[MMethodDef] not a live type) */
&type_array__ArrayIteratormodel__MMethodDef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MMethodDef] */
}
};
/* runtime type AbstractArrayRead[MMethodDef] */
const struct type type_array__AbstractArrayReadmodel__MMethodDef = {
2830,
"AbstractArrayRead[MMethodDef]", /* class_name_string */
15,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClassType, String] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypestring__String = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypestring__String,
12,
{
0, /* nullable Object */
1, /* Object */
2633, /* HashMapKeys[MClassType, String] */
-1, /* empty */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
2240, /* Collection[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypestring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypestring__String, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassType, String] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypestring__String, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassType, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type HashMapValues[MClassType, String] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypestring__String = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypestring__String,
7,
{
0, /* nullable Object */
1, /* Object */
2125, /* HashMapValues[MClassType, String] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypestring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypestring__String, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassType, String] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypestring__String, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassType, String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypestring__String = {
385,
"NativeArray[nullable HashMapNode[MClassType, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypestring__String,
3,
{
0, /* nullable Object */
1, /* Object */
385, /* NativeArray[nullable HashMapNode[MClassType, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypestring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypestring__String, /* NativeArray#0: nullable HashMapNode[MClassType, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypestring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassType, String]] */
}
};
/* runtime type HashMapNode[MClassType, String] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypestring__String = {
1590,
"HashMapNode[MClassType, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
43, /* nullable HashMapNode[MClassType, String] */
1590, /* HashMapNode[MClassType, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypestring__String = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_string__String, /* HashMapNode#1: String */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypestring__String, /* nullable N: nullable HashMapNode[MClassType, String] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashMapNode[MClassType, String] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypestring__String = {
43,
"nullable HashMapNode[MClassType, String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[MClassType, String] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypestring__String = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassType, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
386, /* MapIterator[MClassType, String] */
1591, /* HashMapIterator[MClassType, String] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypestring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypestring__String, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassType, String] */
}
};
/* runtime type MapIterator[MClassType, String] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypestring__String = {
386,
"MapIterator[MClassType, String]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[AbstractRuntimeFunction] */
const struct type type_list__ListNodeabstract_compiler__AbstractRuntimeFunction = {
2406,
"ListNode[AbstractRuntimeFunction]", /* class_name_string */
6,
0,
&resolution_table_list__ListNodeabstract_compiler__AbstractRuntimeFunction,
7,
{
0, /* nullable Object */
1, /* Object */
44, /* nullable ListNode[AbstractRuntimeFunction] */
1925, /* Container[AbstractRuntimeFunction] */
92, /* Collection[Object] */
668, /* Collection[AbstractRuntimeFunction] */
2406, /* ListNode[AbstractRuntimeFunction] */
},
};
const struct types resolution_table_list__ListNodeabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_abstract_compiler__AbstractRuntimeFunction, /* ListNode#0: AbstractRuntimeFunction */
&type_nullable_list__ListNodeabstract_compiler__AbstractRuntimeFunction, /* nullable ListNode[ListNode#0]: nullable ListNode[AbstractRuntimeFunction] */
&type_abstract_collection__ContainerIteratorabstract_compiler__AbstractRuntimeFunction, /* ContainerIterator[Container#0]: ContainerIterator[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* Container#0: AbstractRuntimeFunction */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__AbstractRuntimeFunction, /* Collection#0: AbstractRuntimeFunction */
&type_abstract_collection__Collectionabstract_compiler__AbstractRuntimeFunction, /* Collection[Collection#0]: Collection[AbstractRuntimeFunction] */
}
};
/* runtime type nullable ListNode[AbstractRuntimeFunction] */
const struct type type_nullable_list__ListNodeabstract_compiler__AbstractRuntimeFunction = {
44,
"nullable ListNode[AbstractRuntimeFunction]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[AbstractRuntimeFunction] */
const struct type type_abstract_collection__Containerabstract_compiler__AbstractRuntimeFunction = {
1925,
"Container[AbstractRuntimeFunction]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListIterator[AbstractRuntimeFunction] */
const struct type type_list__ListIteratorabstract_compiler__AbstractRuntimeFunction = {
-1, /*CAST DEAD*/
"ListIterator[AbstractRuntimeFunction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_list__ListIteratorabstract_compiler__AbstractRuntimeFunction,
3,
{
0, /* nullable Object */
1, /* Object */
387, /* ListIterator[AbstractRuntimeFunction] */
},
};
const struct types resolution_table_list__ListIteratorabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[Iterator#0]: Array[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* ListIterator#0: AbstractRuntimeFunction */
&type_list__Listabstract_compiler__AbstractRuntimeFunction, /* List[ListIterator#0]: List[AbstractRuntimeFunction] */
}
};
/* runtime type Array[AbstractRuntimeFunction] */
const struct type type_array__Arrayabstract_compiler__AbstractRuntimeFunction = {
2710,
"Array[AbstractRuntimeFunction]", /* class_name_string */
6,
0,
&resolution_table_array__Arrayabstract_compiler__AbstractRuntimeFunction,
10,
{
0, /* nullable Object */
1, /* Object */
2407, /* AbstractArrayRead[AbstractRuntimeFunction] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
668, /* Collection[AbstractRuntimeFunction] */
2710, /* Array[AbstractRuntimeFunction] */
1838, /* AbstractArrayRead[Object] */
-1, /* empty */
2029, /* Array[Object] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[Array#0]: Array[AbstractRuntimeFunction] */
&type_array__NativeArrayabstract_compiler__AbstractRuntimeFunction, /* NativeArray[Array#0]: NativeArray[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* Sequence#0: AbstractRuntimeFunction */
&type_abstract_compiler__AbstractRuntimeFunction, /* SimpleCollection#0: AbstractRuntimeFunction */
&type_abstract_collection__Collectionabstract_compiler__AbstractRuntimeFunction, /* Collection[Array#0]: Collection[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* Array#0: AbstractRuntimeFunction */
&type_array__NativeArrayabstract_compiler__AbstractRuntimeFunction, /* NativeArray[ArrayCapable#0]: NativeArray[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* AbstractArray#0: AbstractRuntimeFunction */
&type_abstract_compiler__AbstractRuntimeFunction, /* RemovableCollection#0: AbstractRuntimeFunction */
&type_abstract_collection__Collectionabstract_compiler__AbstractRuntimeFunction, /* Collection[Sequence#0]: Collection[AbstractRuntimeFunction] */
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[Sequence#0]: Array[AbstractRuntimeFunction] */
&type_abstract_collection__Collectionabstract_compiler__AbstractRuntimeFunction, /* Collection[SimpleCollection#0]: Collection[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* Collection#0: AbstractRuntimeFunction */
&type_abstract_collection__Collectionabstract_compiler__AbstractRuntimeFunction, /* Collection[Collection#0]: Collection[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* SequenceRead#0: AbstractRuntimeFunction */
&type_abstract_compiler__AbstractRuntimeFunction, /* AbstractArrayRead#0: AbstractRuntimeFunction */
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[AbstractArrayRead#0]: Array[AbstractRuntimeFunction] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AbstractRuntimeFunction] not a live type) */
&type_array__ArrayIteratorabstract_compiler__AbstractRuntimeFunction, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AbstractRuntimeFunction] */
}
};
/* runtime type AbstractArrayRead[AbstractRuntimeFunction] */
const struct type type_array__AbstractArrayReadabstract_compiler__AbstractRuntimeFunction = {
2407,
"AbstractArrayRead[AbstractRuntimeFunction]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetNode[AbstractRuntimeFunction] */
const struct type type_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction = {
2126,
"HashSetNode[AbstractRuntimeFunction]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
388, /* nullable HashSetNode[AbstractRuntimeFunction] */
1549, /* HashSetNode[Object] */
2126, /* HashSetNode[AbstractRuntimeFunction] */
},
};
const struct types resolution_table_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_abstract_compiler__AbstractRuntimeFunction, /* HashSetNode#0: AbstractRuntimeFunction */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction, /* nullable N: nullable HashSetNode[AbstractRuntimeFunction] */
&type_abstract_compiler__AbstractRuntimeFunction, /* HashNode#0: AbstractRuntimeFunction */
}
};
/* runtime type nullable HashSetNode[AbstractRuntimeFunction] */
const struct type type_nullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction = {
388,
"nullable HashSetNode[AbstractRuntimeFunction]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetIterator[AbstractRuntimeFunction] */
const struct type type_hash_collection__HashSetIteratorabstract_compiler__AbstractRuntimeFunction = {
-1, /*CAST DEAD*/
"HashSetIterator[AbstractRuntimeFunction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratorabstract_compiler__AbstractRuntimeFunction,
4,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1592, /* HashSetIterator[AbstractRuntimeFunction] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[Iterator#0]: Array[AbstractRuntimeFunction] */
&type_hash_collection__HashSetabstract_compiler__AbstractRuntimeFunction, /* HashSet[HashSetIterator#0]: HashSet[AbstractRuntimeFunction] */
}
};
/* runtime type NativeArray[nullable HashSetNode[AbstractRuntimeFunction]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction = {
1593,
"NativeArray[nullable HashSetNode[AbstractRuntimeFunction]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1593, /* NativeArray[nullable HashSetNode[AbstractRuntimeFunction]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction, /* NativeArray#0: nullable HashSetNode[AbstractRuntimeFunction] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeabstract_compiler__AbstractRuntimeFunction, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[AbstractRuntimeFunction]] */
}
};
/* runtime type HashMapKeys[MType, Array[MClassType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Array[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MClassType,
11,
{
0, /* nullable Object */
1, /* Object */
2402, /* HashMapKeys[MType, Array[nullable MType]] */
2634, /* HashMapKeys[MType, Array[MType]] */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
2711, /* HashMapKeys[MType, Array[MClassType]] */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, Array[MClassType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MClassType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, Array[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type HashMapKeys[MType, Array[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Array[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MType,
11,
{
0, /* nullable Object */
1, /* Object */
2402, /* HashMapKeys[MType, Array[nullable MType]] */
2634, /* HashMapKeys[MType, Array[MType]] */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, Array[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, Array[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type HashMapValues[MType, Array[MClassType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Array[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MClassType,
12,
{
0, /* nullable Object */
1, /* Object */
370, /* Collection[nullable Array[nullable MType]] */
2112, /* HashMapValues[MType, Array[nullable MType]] */
92, /* Collection[Object] */
1915, /* Collection[Array[nullable MType]] */
2635, /* HashMapValues[MType, Array[MType]] */
2769, /* HashMapValues[MType, Array[MClassType]] */
2127, /* Collection[Array[MType]] */
-1, /* empty */
-1, /* empty */
2408, /* Collection[Array[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, Array[MClassType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MClassType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, Array[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MClassType, /* RemovableCollection#0: Array[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MClassType, /* Collection#0: Array[MClassType] */
&type_abstract_collection__Collectionarray__Arraymodel__MClassType, /* Collection[Collection#0]: Collection[Array[MClassType]] */
}
};
/* runtime type HashMapValues[MType, Array[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Array[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MType,
9,
{
0, /* nullable Object */
1, /* Object */
370, /* Collection[nullable Array[nullable MType]] */
2112, /* HashMapValues[MType, Array[nullable MType]] */
92, /* Collection[Object] */
1915, /* Collection[Array[nullable MType]] */
2635, /* HashMapValues[MType, Array[MType]] */
-1, /* empty */
2127, /* Collection[Array[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, Array[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, Array[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MType, /* RemovableCollection#0: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraymodel__MType, /* Collection#0: Array[MType] */
&type_abstract_collection__Collectionarray__Arraymodel__MType, /* Collection[Collection#0]: Collection[Array[MType]] */
}
};
/* runtime type Collection[Array[MClassType]] */
const struct type type_abstract_collection__Collectionarray__Arraymodel__MClassType = {
2408,
"Collection[Array[MClassType]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Array[MType]] */
const struct type type_abstract_collection__Collectionarray__Arraymodel__MType = {
2127,
"Collection[Array[MType]]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType = {
1926,
"NativeArray[nullable HashMapNode[MType, Array[MClassType]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
371, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
1594, /* NativeArray[nullable HashMapNode[MType, Array[MType]]] */
1926, /* NativeArray[nullable HashMapNode[MType, Array[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType, /* NativeArray#0: nullable HashMapNode[MType, Array[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Array[MClassType]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Array[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType = {
1594,
"NativeArray[nullable HashMapNode[MType, Array[MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
371, /* NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
1594, /* NativeArray[nullable HashMapNode[MType, Array[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType, /* NativeArray#0: nullable HashMapNode[MType, Array[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Array[MType]]] */
}
};
/* runtime type HashMapNode[MType, Array[MClassType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType = {
2636,
"HashMapNode[MType, Array[MClassType]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType,
8,
{
0, /* nullable Object */
1, /* Object */
37, /* nullable HashMapNode[MType, Array[nullable MType]] */
389, /* nullable HashMapNode[MType, Array[MType]] */
1571, /* HashMapNode[MType, Array[nullable MType]] */
1595, /* nullable HashMapNode[MType, Array[MClassType]] */
2128, /* HashMapNode[MType, Array[MType]] */
2636, /* HashMapNode[MType, Array[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_array__Arraymodel__MClassType, /* HashMapNode#1: Array[MClassType] */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType, /* nullable N: nullable HashMapNode[MType, Array[MClassType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type HashMapNode[MType, Array[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType = {
2128,
"HashMapNode[MType, Array[MType]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
37, /* nullable HashMapNode[MType, Array[nullable MType]] */
389, /* nullable HashMapNode[MType, Array[MType]] */
1571, /* HashMapNode[MType, Array[nullable MType]] */
-1, /* empty */
2128, /* HashMapNode[MType, Array[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_array__Arraymodel__MType, /* HashMapNode#1: Array[MType] */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType, /* nullable N: nullable HashMapNode[MType, Array[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MType, Array[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MClassType = {
1595,
"nullable HashMapNode[MType, Array[MClassType]]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MType, Array[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MType = {
389,
"nullable HashMapNode[MType, Array[MType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[MType, Array[MClassType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Array[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MClassType,
8,
{
0, /* nullable Object */
1, /* Object */
372, /* MapIterator[MType, Array[nullable MType]] */
1572, /* HashMapIterator[MType, Array[nullable MType]] */
1596, /* MapIterator[MType, Array[MType]] */
1927, /* MapIterator[MType, Array[MClassType]] */
2129, /* HashMapIterator[MType, Array[MType]] */
2637, /* HashMapIterator[MType, Array[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, Array[MClassType]] */
}
};
/* runtime type HashMapIterator[MType, Array[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Array[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
372, /* MapIterator[MType, Array[nullable MType]] */
1572, /* HashMapIterator[MType, Array[nullable MType]] */
1596, /* MapIterator[MType, Array[MType]] */
-1, /* empty */
2129, /* HashMapIterator[MType, Array[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, Array[MType]] */
}
};
/* runtime type MapIterator[MType, Array[MClassType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MClassType = {
1927,
"MapIterator[MType, Array[MClassType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MType, Array[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MType = {
1596,
"MapIterator[MType, Array[MType]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, Int] */
const struct type type_hash_collection__HashMapKeysstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringkernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
2130, /* HashMapKeys[String, Int] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
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
6,
{
0, /* nullable Object */
1, /* Object */
1928, /* HashMapValues[String, Int] */
-1, /* empty */
92, /* Collection[Object] */
661, /* Collection[Int] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* RemovableCollection#0: Int */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
390,
"NativeArray[nullable HashMapNode[String, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
390, /* NativeArray[nullable HashMapNode[String, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray#0: nullable HashMapNode[String, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Int]] */
}
};
/* runtime type HashMapNode[String, Int] */
const struct type type_hash_collection__HashMapNodestring__Stringkernel__Int = {
1597,
"HashMapNode[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
45, /* nullable HashMapNode[String, Int] */
1597, /* HashMapNode[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* nullable N: nullable HashMapNode[String, Int] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Int] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
45,
"nullable HashMapNode[String, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
391, /* MapIterator[String, Int] */
1598, /* HashMapIterator[String, Int] */
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
391,
"MapIterator[String, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClass, Array[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass = {
1599,
"HashMap[MClass, Array[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
158, /* HashMap[MClass, Array[nullable MClass]] */
1599, /* HashMap[MClass, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapKeysmodel__MClassarray__Arraymodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Array[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Array[MClass]]] */
&type_hash_collection__HashMapValuesmodel__MClassarray__Arraymodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Array[MClass]] */
&type_hash_collection__HashMapIteratormodel__MClassarray__Arraymodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Array[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_array__Arraymodel__MClass, /* Map#1: Array[MClass] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Array[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, Array[MClass]] not a live type) */
&type_array__Arraymodel__MClass, /* MapRead#1: Array[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[MClass, Array[MClass]] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* HashCollection#1: HashMapNode[MClass, Array[MClass]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Layout[MClass] */
const struct type type_layout_builders__Layoutmodel__MClass = {
-1, /*CAST DEAD*/
"Layout[MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_layout_builders__Layoutmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
392, /* Layout[MClass] */
},
};
const struct types resolution_table_layout_builders__Layoutmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[Layout#0, Int]: HashMap[MClass, Int] */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* Map[Layout#0, Int]: Map[MClass, Int] */
}
};
/* runtime type HashMap[MClass, HashSet[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClasshash_collection__HashSetmodel__MClass = {
2131,
"HashMap[MClass, HashSet[MClass]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClasshash_collection__HashSetmodel__MClass,
6,
{
0, /* nullable Object */
1, /* Object */
46, /* nullable HashMap[MClass, Set[MClass]] */
393, /* Map[MClass, Set[MClass]] */
1929, /* HashMap[MClass, Set[MClass]] */
2131, /* HashMap[MClass, HashSet[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClasshash_collection__HashSetmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapKeysmodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, HashSet[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, HashSet[MClass]]] */
&type_hash_collection__HashMapValuesmodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, HashSet[MClass]] */
&type_hash_collection__HashMapIteratormodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, HashSet[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_hash_collection__HashSetmodel__MClass, /* Map#1: HashSet[MClass] */
&type_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, HashSet[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, HashSet[MClass]] not a live type) */
&type_hash_collection__HashSetmodel__MClass, /* MapRead#1: HashSet[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[MClass, HashSet[MClass]] */
&type_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* HashCollection#1: HashMapNode[MClass, HashSet[MClass]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type HashMap[MClass, Set[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
1929,
"HashMap[MClass, Set[MClass]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
46, /* nullable HashMap[MClass, Set[MClass]] */
393, /* Map[MClass, Set[MClass]] */
1929, /* HashMap[MClass, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[MClass]]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[MClass]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setmodel__MClass, /* Map#1: Set[MClass] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[Map#0, Map#1]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* MapRead#1: Set[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[MClass, Set[MClass]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* HashCollection#1: HashMapNode[MClass, Set[MClass]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MClass]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass = {
393,
"Map[MClass, Set[MClass]]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMap[MClass, Set[MClass]] */
const struct type type_nullable_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
46,
"nullable HashMap[MClass, Set[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type PHLayout[MClass, MClass] */
const struct type type_layout_builders__PHLayoutmodel__MClassmodel__MClass = {
1600,
"PHLayout[MClass, MClass]", /* class_name_string */
3,
0,
&resolution_table_layout_builders__PHLayoutmodel__MClassmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
392, /* Layout[MClass] */
1600, /* PHLayout[MClass, MClass] */
},
};
const struct types resolution_table_layout_builders__PHLayoutmodel__MClassmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[Layout#0, Int]: HashMap[MClass, Int] */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* Map[Layout#0, Int]: Map[MClass, Int] */
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[PHLayout#0, Int]: HashMap[MClass, Int] */
&type_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMap[PHLayout#0, Map[PHLayout#1, Int]]: HashMap[MClass, Map[MClass, Int]] */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* Map[PHLayout#0, Int]: Map[MClass, Int] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* Map[PHLayout#0, Map[PHLayout#1, Int]]: Map[MClass, Map[MClass, Int]] */
}
};
/* runtime type HashMap[MClass, Map[MClass, Int]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int = {
1601,
"HashMap[MClass, Map[MClass, Int]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
394, /* Map[MClass, Map[MClass, Int]] */
1601, /* HashMap[MClass, Map[MClass, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Map[MClass, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Map[MClass, Int]]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Map[MClass, Int]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Map[MClass, Int]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* Map#1: Map[MClass, Int] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Map[MClass, Int]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* Map[Map#0, Map#1]: Map[MClass, Map[MClass, Int]] */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* MapRead#1: Map[MClass, Int] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MClass, Map[MClass, Int]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashCollection#1: HashMapNode[MClass, Map[MClass, Int]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Map[MClass, Map[MClass, Int]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int = {
394,
"Map[MClass, Map[MClass, Int]]", /* class_name_string */
2,
0,
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
8,
{
0, /* nullable Object */
1, /* Object */
2105, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
2399, /* HashMapKeys[MClass, Set[MProperty]] */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
2638, /* HashMapKeys[MClass, Set[MVirtualTypeProp]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
9,
{
0, /* nullable Object */
1, /* Object */
1554, /* Collection[Set[PropertyLayoutElement]] */
1907, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
92, /* Collection[Object] */
1908, /* Collection[Set[MProperty]] */
2132, /* Collection[Set[MVirtualTypeProp]] */
2400, /* HashMapValues[MClass, Set[MProperty]] */
2712, /* HashMapValues[MClass, Set[MVirtualTypeProp]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* RemovableCollection#0: Set[MVirtualTypeProp] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* Collection#0: Set[MVirtualTypeProp] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[Collection#0]: Collection[Set[MVirtualTypeProp]] */
}
};
/* runtime type Collection[Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp = {
2132,
"Collection[Set[MVirtualTypeProp]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1930,
"NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
358, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1555, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1930, /* NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray#0: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
}
};
/* runtime type HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
2639,
"HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
33, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
359, /* nullable HashMapNode[MClass, Set[MProperty]] */
1556, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1602, /* nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
2106, /* HashMapNode[MClass, Set[MProperty]] */
2639, /* HashMapNode[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode#1: Set[MVirtualTypeProp] */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* nullable N: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1602,
"nullable HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
360, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1557, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1558, /* MapIterator[MClass, Set[MProperty]] */
1931, /* MapIterator[MClass, Set[MVirtualTypeProp]] */
2107, /* HashMapIterator[MClass, Set[MProperty]] */
2640, /* HashMapIterator[MClass, Set[MVirtualTypeProp]] */
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
1931,
"MapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetNode[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2770,
"HashSetNode[MVirtualTypeProp]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp,
10,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
1589, /* nullable HashSetNode[MProperty] */
1932, /* nullable HashSetNode[MVirtualTypeProp] */
2122, /* HashSetNode[PropertyLayoutElement] */
2631, /* HashSetNode[MProperty] */
2770, /* HashSetNode[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* HashSetNode#0: MVirtualTypeProp */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* nullable N: nullable HashSetNode[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* HashNode#0: MVirtualTypeProp */
}
};
/* runtime type nullable HashSetNode[MVirtualTypeProp] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1932,
"nullable HashSetNode[MVirtualTypeProp]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
1923, /* HashSetIterator[MProperty] */
2133, /* HashSetIterator[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualTypeProp, /* Array[Iterator#0]: Array[MVirtualTypeProp] */
&type_hash_collection__HashSetmodel__MVirtualTypeProp, /* HashSet[HashSetIterator#0]: HashSet[MVirtualTypeProp] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2134,
"NativeArray[nullable HashSetNode[MVirtualTypeProp]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1924, /* NativeArray[nullable HashSetNode[MProperty]] */
2134, /* NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray#0: nullable HashSetNode[MVirtualTypeProp] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
}
};
/* runtime type HashMap[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
2135,
"HashMap[MVirtualTypeProp, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
395, /* Map[PropertyLayoutElement, Int] */
1603, /* HashMap[PropertyLayoutElement, Int] */
1604, /* Map[MVirtualTypeProp, Int] */
2135, /* HashMap[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* MapRead#0: MVirtualTypeProp */
&type_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MVirtualTypeProp, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
&type_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* Map#0: MVirtualTypeProp */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MVirtualTypeProp, Int] */
&type_abstract_collection__Mapmodel__MVirtualTypePropkernel__Int, /* Map[Map#0, Map#1]: Map[MVirtualTypeProp, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MVirtualTypeProp, /* HashCollection#0: MVirtualTypeProp */
&type_nullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashCollection#1: HashMapNode[MVirtualTypeProp, Int] */
&type_nullable_model__MVirtualTypeProp, /* nullable HashCollection#0: nullable MVirtualTypeProp */
}
};
/* runtime type HashMap[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int = {
1603,
"HashMap[PropertyLayoutElement, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
395, /* Map[PropertyLayoutElement, Int] */
1603, /* HashMap[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_layout_builders__PropertyLayoutElement, /* MapRead#0: PropertyLayoutElement */
&type_hash_collection__HashMapKeyslayout_builders__PropertyLayoutElementkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[PropertyLayoutElement, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
&type_hash_collection__HashMapValueslayout_builders__PropertyLayoutElementkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapIteratorlayout_builders__PropertyLayoutElementkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[PropertyLayoutElement, Int] */
&type_layout_builders__PropertyLayoutElement, /* Map#0: PropertyLayoutElement */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[PropertyLayoutElement, Int] */
&type_abstract_collection__Maplayout_builders__PropertyLayoutElementkernel__Int, /* Map[Map#0, Map#1]: Map[PropertyLayoutElement, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_layout_builders__PropertyLayoutElement, /* HashCollection#0: PropertyLayoutElement */
&type_nullable_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* nullable HashCollection#1: nullable HashMapNode[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* HashCollection#1: HashMapNode[PropertyLayoutElement, Int] */
&type_nullable_layout_builders__PropertyLayoutElement, /* nullable HashCollection#0: nullable PropertyLayoutElement */
}
};
/* runtime type Map[MVirtualTypeProp, Int] */
const struct type type_abstract_collection__Mapmodel__MVirtualTypePropkernel__Int = {
1604,
"Map[MVirtualTypeProp, Int]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Map[PropertyLayoutElement, Int] */
const struct type type_abstract_collection__Maplayout_builders__PropertyLayoutElementkernel__Int = {
395,
"Map[PropertyLayoutElement, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Layout[MVirtualTypeProp] */
const struct type type_layout_builders__Layoutmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"Layout[MVirtualTypeProp]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_layout_builders__Layoutmodel__MVirtualTypeProp,
4,
{
0, /* nullable Object */
1, /* Object */
396, /* Layout[PropertyLayoutElement] */
1605, /* Layout[MVirtualTypeProp] */
},
};
const struct types resolution_table_layout_builders__Layoutmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[Layout#0, Int]: HashMap[MVirtualTypeProp, Int] */
&type_abstract_collection__Mapmodel__MVirtualTypePropkernel__Int, /* Map[Layout#0, Int]: Map[MVirtualTypeProp, Int] */
}
};
/* runtime type Layout[PropertyLayoutElement] */
const struct type type_layout_builders__Layoutlayout_builders__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"Layout[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_layout_builders__Layoutlayout_builders__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
396, /* Layout[PropertyLayoutElement] */
},
};
const struct types resolution_table_layout_builders__Layoutlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int, /* HashMap[Layout#0, Int]: HashMap[PropertyLayoutElement, Int] */
&type_abstract_collection__Maplayout_builders__PropertyLayoutElementkernel__Int, /* Map[Layout#0, Int]: Map[PropertyLayoutElement, Int] */
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
321, /* ArrayIterator[Object] */
1606, /* ArrayIterator[CodeWriter] */
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
1607,
"NativeArray[CodeWriter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__CodeWriter,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1607, /* NativeArray[CodeWriter] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_abstract_compiler__CodeWriter, /* NativeArray#0: CodeWriter */
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[NativeArray#0]: NativeArray[CodeWriter] */
}
};
/* runtime type HashSetNode[String] */
const struct type type_hash_collection__HashSetNodestring__String = {
2136,
"HashSetNode[String]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodestring__String,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
397, /* nullable HashSetNode[String] */
1549, /* HashSetNode[Object] */
2136, /* HashSetNode[String] */
},
};
const struct types resolution_table_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_string__String, /* HashSetNode#0: String */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodestring__String, /* nullable N: nullable HashSetNode[String] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashSetNode[String] */
const struct type type_nullable_hash_collection__HashSetNodestring__String = {
397,
"nullable HashSetNode[String]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1608, /* HashSetIterator[String] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_hash_collection__HashSetstring__String, /* HashSet[HashSetIterator#0]: HashSet[String] */
}
};
/* runtime type NativeArray[nullable HashSetNode[String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
1609,
"NativeArray[nullable HashSetNode[String]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1609, /* NativeArray[nullable HashSetNode[String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodestring__String, /* NativeArray#0: nullable HashSetNode[String] */
&type_array__NativeArraynullable_hash_collection__HashSetNodestring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[String]] */
}
};
/* runtime type HashMap[MAttribute, Int] */
const struct type type_hash_collection__HashMapmodel__MAttributekernel__Int = {
2137,
"HashMap[MAttribute, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
395, /* Map[PropertyLayoutElement, Int] */
1603, /* HashMap[PropertyLayoutElement, Int] */
1610, /* Map[MAttribute, Int] */
2137, /* HashMap[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MAttribute, /* MapRead#0: MAttribute */
&type_hash_collection__HashMapKeysmodel__MAttributekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MAttribute, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
&type_hash_collection__HashMapValuesmodel__MAttributekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MAttribute, Int] */
&type_hash_collection__HashMapIteratormodel__MAttributekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MAttribute, Int] */
&type_model__MAttribute, /* Map#0: MAttribute */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MAttribute, Int] */
&type_abstract_collection__Mapmodel__MAttributekernel__Int, /* Map[Map#0, Map#1]: Map[MAttribute, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MAttribute, /* HashCollection#0: MAttribute */
&type_nullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MAttribute, Int] */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashCollection#1: HashMapNode[MAttribute, Int] */
&type_nullable_model__MAttribute, /* nullable HashCollection#0: nullable MAttribute */
}
};
/* runtime type Map[MAttribute, Int] */
const struct type type_abstract_collection__Mapmodel__MAttributekernel__Int = {
1610,
"Map[MAttribute, Int]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Layout[MAttribute] */
const struct type type_layout_builders__Layoutmodel__MAttribute = {
-1, /*CAST DEAD*/
"Layout[MAttribute]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_layout_builders__Layoutmodel__MAttribute,
4,
{
0, /* nullable Object */
1, /* Object */
396, /* Layout[PropertyLayoutElement] */
1611, /* Layout[MAttribute] */
},
};
const struct types resolution_table_layout_builders__Layoutmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[Layout#0, Int]: HashMap[MAttribute, Int] */
&type_abstract_collection__Mapmodel__MAttributekernel__Int, /* Map[Layout#0, Int]: Map[MAttribute, Int] */
}
};
/* runtime type HashMapKeys[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
2105, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
2399, /* HashMapKeys[MClass, Set[MProperty]] */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
2641, /* HashMapKeys[MClass, Set[MAttribute]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
9,
{
0, /* nullable Object */
1, /* Object */
1554, /* Collection[Set[PropertyLayoutElement]] */
1907, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
92, /* Collection[Object] */
1908, /* Collection[Set[MProperty]] */
2138, /* Collection[Set[MAttribute]] */
2400, /* HashMapValues[MClass, Set[MProperty]] */
2713, /* HashMapValues[MClass, Set[MAttribute]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MAttribute, /* RemovableCollection#0: Set[MAttribute] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MAttribute, /* Collection#0: Set[MAttribute] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[Collection#0]: Collection[Set[MAttribute]] */
}
};
/* runtime type Collection[Set[MAttribute]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute = {
2138,
"Collection[Set[MAttribute]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1933,
"NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
358, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1555, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1933, /* NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray#0: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
}
};
/* runtime type HashMapNode[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
2642,
"HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
33, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
359, /* nullable HashMapNode[MClass, Set[MProperty]] */
1556, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1612, /* nullable HashMapNode[MClass, Set[MAttribute]] */
2106, /* HashMapNode[MClass, Set[MProperty]] */
2642, /* HashMapNode[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* HashMapNode#1: Set[MAttribute] */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* nullable N: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MAttribute]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1612,
"nullable HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
360, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1557, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1558, /* MapIterator[MClass, Set[MProperty]] */
1934, /* MapIterator[MClass, Set[MAttribute]] */
2107, /* HashMapIterator[MClass, Set[MProperty]] */
2643, /* HashMapIterator[MClass, Set[MAttribute]] */
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
1934,
"MapIterator[MClass, Set[MAttribute]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetNode[MAttribute] */
const struct type type_hash_collection__HashSetNodemodel__MAttribute = {
2771,
"HashSetNode[MAttribute]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MAttribute,
10,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
383, /* nullable HashSetNode[PropertyLayoutElement] */
1549, /* HashSetNode[Object] */
1589, /* nullable HashSetNode[MProperty] */
1935, /* nullable HashSetNode[MAttribute] */
2122, /* HashSetNode[PropertyLayoutElement] */
2631, /* HashSetNode[MProperty] */
2771, /* HashSetNode[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* HashSetNode#0: MAttribute */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* nullable N: nullable HashSetNode[MAttribute] */
&type_model__MAttribute, /* HashNode#0: MAttribute */
}
};
/* runtime type nullable HashSetNode[MAttribute] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MAttribute = {
1935,
"nullable HashSetNode[MAttribute]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1587, /* HashSetIterator[PropertyLayoutElement] */
1923, /* HashSetIterator[MProperty] */
2139, /* HashSetIterator[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MAttribute = {
0, /* dummy */
{
&type_array__Arraymodel__MAttribute, /* Array[Iterator#0]: Array[MAttribute] */
&type_hash_collection__HashSetmodel__MAttribute, /* HashSet[HashSetIterator#0]: HashSet[MAttribute] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MAttribute]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
2140,
"NativeArray[nullable HashSetNode[MAttribute]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1588, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1924, /* NativeArray[nullable HashSetNode[MProperty]] */
2140, /* NativeArray[nullable HashSetNode[MAttribute]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray#0: nullable HashSetNode[MAttribute] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MAttribute]] */
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
321, /* ArrayIterator[Object] */
1613, /* ArrayIterator[RuntimeVariable] */
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
1614,
"NativeArray[RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1614, /* NativeArray[RuntimeVariable] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_abstract_compiler__RuntimeVariable, /* NativeArray#0: RuntimeVariable */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[NativeArray#0]: NativeArray[RuntimeVariable] */
}
};
/* runtime type ArrayIterator[MType] */
const struct type type_array__ArrayIteratormodel__MType = {
2141,
"ArrayIterator[MType]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratormodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
398, /* ArrayIterator[nullable MType] */
1615, /* ArrayIterator[NitniCallback] */
2141, /* ArrayIterator[MType] */
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
398, /* ArrayIterator[nullable MType] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MType = {
0, /* dummy */
{
&type_array__Arraynullable_model__MType, /* Array[Iterator#0]: Array[nullable MType] */
&type_array__AbstractArrayReadnullable_model__MType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MType] */
}
};
/* runtime type ArrayIterator[NitniCallback] */
const struct type type_array__ArrayIteratornitni_callbacks__NitniCallback = {
-1, /*CAST DEAD*/
"ArrayIterator[NitniCallback]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornitni_callbacks__NitniCallback,
5,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
-1, /* empty */
1615, /* ArrayIterator[NitniCallback] */
},
};
const struct types resolution_table_array__ArrayIteratornitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_array__Arraynitni_callbacks__NitniCallback, /* Array[Iterator#0]: Array[NitniCallback] */
&type_array__AbstractArrayReadnitni_callbacks__NitniCallback, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[NitniCallback] */
}
};
/* runtime type NativeArray[MType] */
const struct type type_array__NativeArraymodel__MType = {
2142,
"NativeArray[MType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
399, /* NativeArray[nullable MType] */
1616, /* NativeArray[NitniCallback] */
2142, /* NativeArray[MType] */
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
399,
"NativeArray[nullable MType]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
399, /* NativeArray[nullable MType] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_model__MType, /* NativeArray#0: nullable MType */
&type_array__NativeArraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable MType] */
}
};
/* runtime type NativeArray[NitniCallback] */
const struct type type_array__NativeArraynitni_callbacks__NitniCallback = {
1616,
"NativeArray[NitniCallback]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynitni_callbacks__NitniCallback,
5,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
-1, /* empty */
1616, /* NativeArray[NitniCallback] */
},
};
const struct types resolution_table_array__NativeArraynitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_nitni_callbacks__NitniCallback, /* NativeArray#0: NitniCallback */
&type_array__NativeArraynitni_callbacks__NitniCallback, /* NativeArray[NativeArray#0]: NativeArray[NitniCallback] */
}
};
/* runtime type ListNode[MClassType] */
const struct type type_list__ListNodemodel__MClassType = {
2772,
"ListNode[MClassType]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodemodel__MClassType,
12,
{
0, /* nullable Object */
1, /* Object */
47, /* nullable ListNode[MClassType] */
2644, /* Container[MClassType] */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
2772, /* ListNode[MClassType] */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
2240, /* Collection[MClassType] */
},
};
const struct types resolution_table_list__ListNodemodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* ListNode#0: MClassType */
&type_nullable_list__ListNodemodel__MClassType, /* nullable ListNode[ListNode#0]: nullable ListNode[MClassType] */
&type_abstract_collection__ContainerIteratormodel__MClassType, /* ContainerIterator[Container#0]: ContainerIterator[MClassType] */
&type_model__MClassType, /* Container#0: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
47,
"nullable ListNode[MClassType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[MClassType] */
const struct type type_abstract_collection__Containermodel__MClassType = {
2644,
"Container[MClassType]", /* class_name_string */
3,
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
400, /* ListIterator[MClassType] */
},
};
const struct types resolution_table_list__ListIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_model__MClassType, /* ListIterator#0: MClassType */
&type_list__Listmodel__MClassType, /* List[ListIterator#0]: List[MClassType] */
}
};
/* runtime type ListNode[String] */
const struct type type_list__ListNodestring__String = {
2645,
"ListNode[String]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodestring__String,
8,
{
0, /* nullable Object */
1, /* Object */
48, /* nullable ListNode[String] */
2143, /* Container[String] */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
2645, /* ListNode[String] */
},
};
const struct types resolution_table_list__ListNodestring__String = {
0, /* dummy */
{
&type_string__String, /* ListNode#0: String */
&type_nullable_list__ListNodestring__String, /* nullable ListNode[ListNode#0]: nullable ListNode[String] */
&type_abstract_collection__ContainerIteratorstring__String, /* ContainerIterator[Container#0]: ContainerIterator[String] */
&type_string__String, /* Container#0: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
48,
"nullable ListNode[String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[String] */
const struct type type_abstract_collection__Containerstring__String = {
2143,
"Container[String]", /* class_name_string */
3,
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
401, /* ListIterator[String] */
},
};
const struct types resolution_table_list__ListIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_string__String, /* ListIterator#0: String */
&type_list__Liststring__String, /* List[ListIterator#0]: List[String] */
}
};
/* runtime type ArrayIterator[MClassType] */
const struct type type_array__ArrayIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"ArrayIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MClassType,
7,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
398, /* ArrayIterator[nullable MType] */
1615, /* ArrayIterator[NitniCallback] */
2141, /* ArrayIterator[MType] */
2409, /* ArrayIterator[MClassType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_array__AbstractArrayReadmodel__MClassType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MClassType] */
}
};
/* runtime type NativeArray[MClassType] */
const struct type type_array__NativeArraymodel__MClassType = {
2410,
"NativeArray[MClassType]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MClassType,
7,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
399, /* NativeArray[nullable MType] */
1616, /* NativeArray[NitniCallback] */
2142, /* NativeArray[MType] */
2410, /* NativeArray[MClassType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* NativeArray#0: MClassType */
&type_array__NativeArraymodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[MClassType] */
}
};
/* runtime type HashMap[MType, Map[MType, Int]] */
const struct type type_hash_collection__HashMapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int = {
1617,
"HashMap[MType, Map[MType, Int]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
402, /* Map[MType, Map[MType, Int]] */
1617, /* HashMap[MType, Map[MType, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* MapRead#0: MType */
&type_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, Map[MType, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, Map[MType, Int]]] */
&type_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, Map[MType, Int]] */
&type_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, Map[MType, Int]] */
&type_model__MType, /* Map#0: MType */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* Map#1: Map[MType, Int] */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* Map[Map#0, Map#1]: Map[MType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* MapRead#1: Map[MType, Int] */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MType, Map[MType, Int]] */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashCollection#1: HashMapNode[MType, Map[MType, Int]] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type Map[MType, Map[MType, Int]] */
const struct type type_abstract_collection__Mapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int = {
402,
"Map[MType, Map[MType, Int]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MType, HashSet[MType]] */
const struct type type_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType = {
2144,
"HashMap[MType, HashSet[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashMap[MType, Set[MType]] */
165, /* Map[MType, Set[MType]] */
2144, /* HashMap[MType, HashSet[MType]] */
1884, /* HashMap[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* MapRead#0: MType */
&type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashSetmodel__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, HashSet[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, HashSet[MType]]] */
&type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashSetmodel__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, HashSet[MType]] */
&type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashSetmodel__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, HashSet[MType]] */
&type_model__MType, /* Map#0: MType */
&type_hash_collection__HashSetmodel__MType, /* Map#1: HashSet[MType] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, HashSet[MType]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MType, HashSet[MType]] not a live type) */
&type_hash_collection__HashSetmodel__MType, /* MapRead#1: HashSet[MType] */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* nullable HashCollection#1: nullable HashMapNode[MType, HashSet[MType]] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* HashCollection#1: HashMapNode[MType, HashSet[MType]] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type HashMapKeys[EscapeMark, String] */
const struct type type_hash_collection__HashMapKeysscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"HashMapKeys[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysscope__EscapeMarkstring__String,
5,
{
0, /* nullable Object */
1, /* Object */
1618, /* Collection[EscapeMark] */
1936, /* HashMapKeys[EscapeMark, String] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* RemovableCollection#0: EscapeMark */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* Collection#0: EscapeMark */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[Collection#0]: Collection[EscapeMark] */
}
};
/* runtime type Collection[EscapeMark] */
const struct type type_abstract_collection__Collectionscope__EscapeMark = {
1618,
"Collection[EscapeMark]", /* class_name_string */
2,
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
7,
{
0, /* nullable Object */
1, /* Object */
2145, /* HashMapValues[EscapeMark, String] */
-1, /* empty */
92, /* Collection[Object] */
652, /* Collection[Streamable] */
1870, /* Collection[String] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type NativeArray[nullable HashMapNode[EscapeMark, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
403,
"NativeArray[nullable HashMapNode[EscapeMark, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
403, /* NativeArray[nullable HashMapNode[EscapeMark, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray#0: nullable HashMapNode[EscapeMark, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
}
};
/* runtime type HashMapNode[EscapeMark, String] */
const struct type type_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
1619,
"HashMapNode[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
49, /* nullable HashMapNode[EscapeMark, String] */
1619, /* HashMapNode[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_scope__EscapeMark, /* HashMapNode#0: EscapeMark */
&type_string__String, /* HashMapNode#1: String */
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* nullable N: nullable HashMapNode[EscapeMark, String] */
&type_scope__EscapeMark, /* HashNode#0: EscapeMark */
}
};
/* runtime type nullable HashMapNode[EscapeMark, String] */
const struct type type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
49,
"nullable HashMapNode[EscapeMark, String]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
404, /* MapIterator[EscapeMark, String] */
1620, /* HashMapIterator[EscapeMark, String] */
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
404,
"MapIterator[EscapeMark, String]", /* class_name_string */
2,
0,
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
5,
{
0, /* nullable Object */
1, /* Object */
700, /* Collection[Variable] */
1937, /* HashMapKeys[Variable, RuntimeVariable] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* RemovableCollection#0: Variable */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
676, /* Collection[RuntimeVariable] */
1938, /* HashMapValues[Variable, RuntimeVariable] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__RuntimeVariable, /* RemovableCollection#0: RuntimeVariable */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__RuntimeVariable, /* Collection#0: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[Collection#0]: Collection[RuntimeVariable] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
405,
"NativeArray[nullable HashMapNode[Variable, RuntimeVariable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
405, /* NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray#0: nullable HashMapNode[Variable, RuntimeVariable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
}
};
/* runtime type HashMapNode[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
1621,
"HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
50, /* nullable HashMapNode[Variable, RuntimeVariable] */
1621, /* HashMapNode[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_abstract_compiler__RuntimeVariable, /* HashMapNode#1: RuntimeVariable */
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* nullable N: nullable HashMapNode[Variable, RuntimeVariable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, RuntimeVariable] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
50,
"nullable HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
406, /* MapIterator[Variable, RuntimeVariable] */
1622, /* HashMapIterator[Variable, RuntimeVariable] */
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
406,
"MapIterator[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup = {
407,
"HashMap[MGroup, POSetElement[MGroup]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
407, /* HashMap[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mproject__MGroup, /* MapRead#0: MGroup */
&type_hash_collection__HashMapKeysmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MGroup, POSetElement[MGroup]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
&type_hash_collection__HashMapValuesmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MGroup, POSetElement[MGroup]] */
&type_hash_collection__HashMapIteratormproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MGroup, POSetElement[MGroup]] */
&type_mproject__MGroup, /* Map#0: MGroup */
&type_poset__POSetElementmproject__MGroup, /* Map#1: POSetElement[MGroup] */
&type_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MGroup, POSetElement[MGroup]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MGroup, POSetElement[MGroup]] not a live type) */
&type_poset__POSetElementmproject__MGroup, /* MapRead#1: POSetElement[MGroup] */
&type_mproject__MGroup, /* HashCollection#0: MGroup */
&type_nullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* nullable HashCollection#1: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
&type_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* HashCollection#1: HashMapNode[MGroup, POSetElement[MGroup]] */
&type_nullable_mproject__MGroup, /* nullable HashCollection#0: nullable MGroup */
}
};
/* runtime type POSetElement[MGroup] */
const struct type type_poset__POSetElementmproject__MGroup = {
408,
"POSetElement[MGroup]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
408, /* POSetElement[MGroup] */
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
321, /* ArrayIterator[Object] */
1623, /* ArrayIterator[Int] */
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
1624,
"NativeArray[Int]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraykernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1624, /* NativeArray[Int] */
},
};
const struct types resolution_table_array__NativeArraykernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* NativeArray#0: Int */
&type_array__NativeArraykernel__Int, /* NativeArray[NativeArray#0]: NativeArray[Int] */
}
};
/* runtime type ArrayIterator[AStdClassdef] */
const struct type type_array__ArrayIteratorparser_nodes__AStdClassdef = {
-1, /*CAST DEAD*/
"ArrayIterator[AStdClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AStdClassdef,
7,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
1903, /* ArrayIterator[Prod] */
2146, /* ArrayIterator[AClassdef] */
2411, /* ArrayIterator[AStdClassdef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AStdClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AStdClassdef, /* Array[Iterator#0]: Array[AStdClassdef] */
&type_array__AbstractArrayReadparser_nodes__AStdClassdef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AStdClassdef] */
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
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
1903, /* ArrayIterator[Prod] */
2146, /* ArrayIterator[AClassdef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[Iterator#0]: Array[AClassdef] */
&type_array__AbstractArrayReadparser_nodes__AClassdef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AClassdef] */
}
};
/* runtime type NativeArray[AStdClassdef] */
const struct type type_array__NativeArrayparser_nodes__AStdClassdef = {
2412,
"NativeArray[AStdClassdef]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AStdClassdef,
7,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
1904, /* NativeArray[Prod] */
2147, /* NativeArray[AClassdef] */
2412, /* NativeArray[AStdClassdef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AStdClassdef = {
0, /* dummy */
{
&type_parser_nodes__AStdClassdef, /* NativeArray#0: AStdClassdef */
&type_array__NativeArrayparser_nodes__AStdClassdef, /* NativeArray[NativeArray#0]: NativeArray[AStdClassdef] */
}
};
/* runtime type NativeArray[AClassdef] */
const struct type type_array__NativeArrayparser_nodes__AClassdef = {
2147,
"NativeArray[AClassdef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AClassdef,
6,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
1904, /* NativeArray[Prod] */
2147, /* NativeArray[AClassdef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AClassdef = {
0, /* dummy */
{
&type_parser_nodes__AClassdef, /* NativeArray#0: AClassdef */
&type_array__NativeArrayparser_nodes__AClassdef, /* NativeArray[NativeArray#0]: NativeArray[AClassdef] */
}
};
/* runtime type Array[APropdef] */
const struct type type_array__Arrayparser_nodes__APropdef = {
2847,
"Array[APropdef]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__APropdef,
15,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2046, /* Collection[APropdef] */
1838, /* AbstractArrayRead[Object] */
2243, /* AbstractArrayRead[ANode] */
2029, /* Array[Object] */
2785, /* AbstractArrayRead[APropdef] */
2664, /* Array[ANode] */
2665, /* AbstractArrayRead[Prod] */
2847, /* Array[APropdef] */
2802, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__APropdef, /* Array[Array#0]: Array[APropdef] */
&type_array__NativeArrayparser_nodes__APropdef, /* NativeArray[Array#0]: NativeArray[APropdef] */
&type_parser_nodes__APropdef, /* Sequence#0: APropdef */
&type_parser_nodes__APropdef, /* SimpleCollection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Array#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* Array#0: APropdef */
&type_array__NativeArrayparser_nodes__APropdef, /* NativeArray[ArrayCapable#0]: NativeArray[APropdef] */
&type_parser_nodes__APropdef, /* AbstractArray#0: APropdef */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Sequence#0]: Collection[APropdef] */
&type_array__Arrayparser_nodes__APropdef, /* Array[Sequence#0]: Array[APropdef] */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[SimpleCollection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* SequenceRead#0: APropdef */
&type_parser_nodes__APropdef, /* AbstractArrayRead#0: APropdef */
&type_array__Arrayparser_nodes__APropdef, /* Array[AbstractArrayRead#0]: Array[APropdef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[APropdef] not a live type) */
&type_array__ArrayIteratorparser_nodes__APropdef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[APropdef] */
}
};
/* runtime type AbstractArrayRead[APropdef] */
const struct type type_array__AbstractArrayReadparser_nodes__APropdef = {
2785,
"AbstractArrayRead[APropdef]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[ANode] */
const struct type type_list__ListNodeparser_nodes__ANode = {
2413,
"ListNode[ANode]", /* class_name_string */
6,
0,
&resolution_table_list__ListNodeparser_nodes__ANode,
7,
{
0, /* nullable Object */
1, /* Object */
51, /* nullable ListNode[ANode] */
1939, /* Container[ANode] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2413, /* ListNode[ANode] */
},
};
const struct types resolution_table_list__ListNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* ListNode#0: ANode */
&type_nullable_list__ListNodeparser_nodes__ANode, /* nullable ListNode[ListNode#0]: nullable ListNode[ANode] */
&type_abstract_collection__ContainerIteratorparser_nodes__ANode, /* ContainerIterator[Container#0]: ContainerIterator[ANode] */
&type_parser_nodes__ANode, /* Container#0: ANode */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
51,
"nullable ListNode[ANode]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[ANode] */
const struct type type_abstract_collection__Containerparser_nodes__ANode = {
1939,
"Container[ANode]", /* class_name_string */
3,
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
409, /* ListIterator[ANode] */
},
};
const struct types resolution_table_list__ListIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_parser_nodes__ANode, /* ListIterator#0: ANode */
&type_list__Listparser_nodes__ANode, /* List[ListIterator#0]: List[ANode] */
}
};
/* runtime type HashSetNode[ANode] */
const struct type type_hash_collection__HashSetNodeparser_nodes__ANode = {
2148,
"HashSetNode[ANode]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodeparser_nodes__ANode,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
410, /* nullable HashSetNode[ANode] */
1549, /* HashSetNode[Object] */
2148, /* HashSetNode[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* HashSetNode#0: ANode */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* nullable N: nullable HashSetNode[ANode] */
&type_parser_nodes__ANode, /* HashNode#0: ANode */
}
};
/* runtime type nullable HashSetNode[ANode] */
const struct type type_nullable_hash_collection__HashSetNodeparser_nodes__ANode = {
410,
"nullable HashSetNode[ANode]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1625, /* HashSetIterator[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_hash_collection__HashSetparser_nodes__ANode, /* HashSet[HashSetIterator#0]: HashSet[ANode] */
}
};
/* runtime type NativeArray[nullable HashSetNode[ANode]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
1626,
"NativeArray[nullable HashSetNode[ANode]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1626, /* NativeArray[nullable HashSetNode[ANode]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray#0: nullable HashSetNode[ANode] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[ANode]] */
}
};
/* runtime type HashMapKeys[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, Array[nullable MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
2149, /* HashMapKeys[MClass, Array[nullable MClass]] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Array[nullable MClass]] */
&type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MClass, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Array[nullable MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
}
};
/* runtime type HashMapValues[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Array[nullable MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
1528, /* Collection[Array[nullable MClass]] */
1940, /* HashMapValues[MClass, Array[nullable MClass]] */
92, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, Array[nullable MClass]] */
&type_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MClass, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, Array[nullable MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MClass, /* RemovableCollection#0: Array[nullable MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MClass, /* Collection#0: Array[nullable MClass] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MClass, /* Collection[Collection#0]: Collection[Array[nullable MClass]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
411,
"NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
411, /* NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* NativeArray#0: nullable HashMapNode[MClass, Array[nullable MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
}
};
/* runtime type HashMapNode[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
1627,
"HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
52, /* nullable HashMapNode[MClass, Array[nullable MClass]] */
-1, /* empty */
1627, /* HashMapNode[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_array__Arraynullable_model__MClass, /* HashMapNode#1: Array[nullable MClass] */
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* nullable N: nullable HashMapNode[MClass, Array[nullable MClass]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Array[nullable MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
52,
"nullable HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, Array[nullable MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
412, /* MapIterator[MClass, Array[nullable MClass]] */
1628, /* HashMapIterator[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, Array[nullable MClass]] */
}
};
/* runtime type MapIterator[MClass, Array[nullable MClass]] */
const struct type type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MClass = {
412,
"MapIterator[MClass, Array[nullable MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
413, /* ArrayIterator[nullable MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MPropDef = {
0, /* dummy */
{
&type_array__Arraynullable_model__MPropDef, /* Array[Iterator#0]: Array[nullable MPropDef] */
&type_array__AbstractArrayReadnullable_model__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MPropDef] */
}
};
/* runtime type NativeArray[nullable MPropDef] */
const struct type type_array__NativeArraynullable_model__MPropDef = {
414,
"NativeArray[nullable MPropDef]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
414, /* NativeArray[nullable MPropDef] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MPropDef = {
0, /* dummy */
{
&type_nullable_model__MPropDef, /* NativeArray#0: nullable MPropDef */
&type_array__NativeArraynullable_model__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[nullable MPropDef] */
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
321, /* ArrayIterator[Object] */
413, /* ArrayIterator[nullable MPropDef] */
1524, /* ArrayIterator[PropertyLayoutElement] */
2150, /* ArrayIterator[MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MPropDef = {
0, /* dummy */
{
&type_array__Arraymodel__MPropDef, /* Array[Iterator#0]: Array[MPropDef] */
&type_array__AbstractArrayReadmodel__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MPropDef] */
}
};
/* runtime type NativeArray[MPropDef] */
const struct type type_array__NativeArraymodel__MPropDef = {
2151,
"NativeArray[MPropDef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MPropDef,
6,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
414, /* NativeArray[nullable MPropDef] */
1525, /* NativeArray[PropertyLayoutElement] */
2151, /* NativeArray[MPropDef] */
},
};
const struct types resolution_table_array__NativeArraymodel__MPropDef = {
0, /* dummy */
{
&type_model__MPropDef, /* NativeArray#0: MPropDef */
&type_array__NativeArraymodel__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[MPropDef] */
}
};
/* runtime type HashMapKeys[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef,
5,
{
0, /* nullable Object */
1, /* Object */
644, /* Collection[MModule] */
1941, /* HashMapKeys[MModule, Set[MClassDef]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
1629, /* Collection[Set[MClassDef]] */
1942, /* HashMapValues[MModule, Set[MClassDef]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassDef, /* RemovableCollection#0: Set[MClassDef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassDef, /* Collection#0: Set[MClassDef] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef, /* Collection[Collection#0]: Collection[Set[MClassDef]] */
}
};
/* runtime type Collection[Set[MClassDef]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef = {
1629,
"Collection[Set[MClassDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
415,
"NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
415, /* NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
1630,
"HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
53, /* nullable HashMapNode[MModule, Set[MClassDef]] */
1630, /* HashMapNode[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassDef, /* HashMapNode#1: Set[MClassDef] */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* nullable N: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassDef]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef = {
53,
"nullable HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
416, /* MapIterator[MModule, Set[MClassDef]] */
1631, /* HashMapIterator[MModule, Set[MClassDef]] */
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
416,
"MapIterator[MModule, Set[MClassDef]]", /* class_name_string */
2,
0,
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
5,
{
0, /* nullable Object */
1, /* Object */
644, /* Collection[MModule] */
1943, /* HashMapKeys[MModule, Set[MClass]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
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
5,
{
0, /* nullable Object */
1, /* Object */
1632, /* Collection[Set[MClass]] */
1944, /* HashMapValues[MModule, Set[MClass]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClass, /* RemovableCollection#0: Set[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClass, /* Collection#0: Set[MClass] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClass, /* Collection[Collection#0]: Collection[Set[MClass]] */
}
};
/* runtime type Collection[Set[MClass]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClass = {
1632,
"Collection[Set[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
417,
"NativeArray[nullable HashMapNode[MModule, Set[MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
417, /* NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
1633,
"HashMapNode[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
54, /* nullable HashMapNode[MModule, Set[MClass]] */
1633, /* HashMapNode[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClass, /* HashMapNode#1: Set[MClass] */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* nullable N: nullable HashMapNode[MModule, Set[MClass]] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass = {
54,
"nullable HashMapNode[MModule, Set[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
418, /* MapIterator[MModule, Set[MClass]] */
1634, /* HashMapIterator[MModule, Set[MClass]] */
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
418,
"MapIterator[MModule, Set[MClass]]", /* class_name_string */
2,
0,
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
5,
{
0, /* nullable Object */
1, /* Object */
644, /* Collection[MModule] */
1945, /* HashMapKeys[MModule, Set[MClassType]] */
92, /* Collection[Object] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1566, /* Collection[Set[NitniCallback]] */
2414, /* HashMapValues[MModule, Set[MClassType]] */
92, /* Collection[Object] */
1913, /* Collection[Set[MType]] */
2152, /* Collection[Set[MClassType]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassType, /* RemovableCollection#0: Set[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MClassType, /* Collection#0: Set[MClassType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType, /* Collection[Collection#0]: Collection[Set[MClassType]] */
}
};
/* runtime type Collection[Set[MClassType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType = {
2152,
"Collection[Set[MClassType]]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
419,
"NativeArray[nullable HashMapNode[MModule, Set[MClassType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
419, /* NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
1635,
"HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
55, /* nullable HashMapNode[MModule, Set[MClassType]] */
1635, /* HashMapNode[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_mmodule__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassType, /* HashMapNode#1: Set[MClassType] */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* nullable N: nullable HashMapNode[MModule, Set[MClassType]] */
&type_mmodule__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType = {
55,
"nullable HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
420, /* MapIterator[MModule, Set[MClassType]] */
1636, /* HashMapIterator[MModule, Set[MClassType]] */
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
420,
"MapIterator[MModule, Set[MClassType]]", /* class_name_string */
2,
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
8,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
398, /* ArrayIterator[nullable MType] */
1615, /* ArrayIterator[NitniCallback] */
2141, /* ArrayIterator[MType] */
2409, /* ArrayIterator[MClassType] */
2646, /* ArrayIterator[MGenericType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MGenericType = {
0, /* dummy */
{
&type_array__Arraymodel__MGenericType, /* Array[Iterator#0]: Array[MGenericType] */
&type_array__AbstractArrayReadmodel__MGenericType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MGenericType] */
}
};
/* runtime type NativeArray[MGenericType] */
const struct type type_array__NativeArraymodel__MGenericType = {
2647,
"NativeArray[MGenericType]", /* class_name_string */
7,
0,
&resolution_table_array__NativeArraymodel__MGenericType,
8,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
399, /* NativeArray[nullable MType] */
1616, /* NativeArray[NitniCallback] */
2142, /* NativeArray[MType] */
2410, /* NativeArray[MClassType] */
2647, /* NativeArray[MGenericType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MGenericType = {
0, /* dummy */
{
&type_model__MGenericType, /* NativeArray#0: MGenericType */
&type_array__NativeArraymodel__MGenericType, /* NativeArray[NativeArray#0]: NativeArray[MGenericType] */
}
};
/* runtime type HashSetNode[MClassDef] */
const struct type type_hash_collection__HashSetNodemodel__MClassDef = {
2153,
"HashSetNode[MClassDef]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClassDef,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
421, /* nullable HashSetNode[MClassDef] */
1549, /* HashSetNode[Object] */
2153, /* HashSetNode[MClassDef] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashSetNode#0: MClassDef */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodemodel__MClassDef, /* nullable N: nullable HashSetNode[MClassDef] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashSetNode[MClassDef] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClassDef = {
421,
"nullable HashSetNode[MClassDef]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSetIterator[MClassDef] */
const struct type type_hash_collection__HashSetIteratormodel__MClassDef = {
-1, /*CAST DEAD*/
"HashSetIterator[MClassDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashSetIteratormodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
356, /* HashSetIterator[Object] */
1637, /* HashSetIterator[MClassDef] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClassDef = {
0, /* dummy */
{
&type_array__Arraymodel__MClassDef, /* Array[Iterator#0]: Array[MClassDef] */
&type_hash_collection__HashSetmodel__MClassDef, /* HashSet[HashSetIterator#0]: HashSet[MClassDef] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClassDef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef = {
1638,
"NativeArray[nullable HashSetNode[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1638, /* NativeArray[nullable HashSetNode[MClassDef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MClassDef, /* NativeArray#0: nullable HashSetNode[MClassDef] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[MClassDef]] */
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
2415, /* HashMapKeys[MType, Set[MType]] */
2714, /* HashMapKeys[MClassType, Set[MType]] */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
2240, /* Collection[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassType, Set[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassType, Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type HashMapKeys[MType, Set[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType,
11,
{
0, /* nullable Object */
1, /* Object */
2415, /* HashMapKeys[MType, Set[MType]] */
-1, /* empty */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, Set[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type HashMapValues[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
1566, /* Collection[Set[NitniCallback]] */
2154, /* HashMapValues[MType, Set[MType]] */
92, /* Collection[Object] */
1913, /* Collection[Set[MType]] */
2416, /* HashMapValues[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassType, Set[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassType, Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* RemovableCollection#0: Set[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* Collection#0: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[Collection#0]: Collection[Set[MType]] */
}
};
/* runtime type HashMapValues[MType, Set[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
1566, /* Collection[Set[NitniCallback]] */
2154, /* HashMapValues[MType, Set[MType]] */
92, /* Collection[Object] */
1913, /* Collection[Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, Set[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* RemovableCollection#0: Set[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* Collection#0: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[Collection#0]: Collection[Set[MType]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
1639,
"NativeArray[nullable HashMapNode[MClassType, Set[MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
422, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
1639, /* NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* NativeArray#0: nullable HashMapNode[MClassType, Set[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Set[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
422,
"NativeArray[nullable HashMapNode[MType, Set[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
422, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* NativeArray#0: nullable HashMapNode[MType, Set[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Set[MType]]] */
}
};
/* runtime type HashMapNode[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
2155,
"HashMapNode[MClassType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
56, /* nullable HashMapNode[MType, Set[MType]] */
423, /* nullable HashMapNode[MClassType, Set[MType]] */
1640, /* HashMapNode[MType, Set[MType]] */
2155, /* HashMapNode[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* nullable N: nullable HashMapNode[MClassType, Set[MType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type HashMapNode[MType, Set[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
1640,
"HashMapNode[MType, Set[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
56, /* nullable HashMapNode[MType, Set[MType]] */
-1, /* empty */
1640, /* HashMapNode[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* nullable N: nullable HashMapNode[MType, Set[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MClassType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
423,
"nullable HashMapNode[MClassType, Set[MType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
56,
"nullable HashMapNode[MType, Set[MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
424, /* MapIterator[MType, Set[MType]] */
1641, /* HashMapIterator[MType, Set[MType]] */
1642, /* MapIterator[MClassType, Set[MType]] */
2156, /* HashMapIterator[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassType, Set[MType]] */
}
};
/* runtime type HashMapIterator[MType, Set[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
424, /* MapIterator[MType, Set[MType]] */
1641, /* HashMapIterator[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, Set[MType]] */
}
};
/* runtime type MapIterator[MClassType, Set[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
1642,
"MapIterator[MClassType, Set[MType]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MType, Set[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
424,
"MapIterator[MType, Set[MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClassType, Int] */
const struct type type_hash_collection__HashMapmodel__MClassTypekernel__Int = {
2157,
"HashMap[MClassType, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
169, /* Map[MType, Int] */
692, /* HashMap[MType, Int] */
1643, /* Map[MClassType, Int] */
2157, /* HashMap[MClassType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_hash_collection__HashMapKeysmodel__MClassTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, Int]] */
&type_hash_collection__HashMapValuesmodel__MClassTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, Int] */
&type_hash_collection__HashMapIteratormodel__MClassTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, Int] */
&type_model__MClassType, /* Map#0: MClassType */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, Int] */
&type_abstract_collection__Mapmodel__MClassTypekernel__Int, /* Map[Map#0, Map#1]: Map[MClassType, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MClassType, Int] */
&type_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* HashCollection#1: HashMapNode[MClassType, Int] */
&type_nullable_model__MClassType, /* nullable HashCollection#0: nullable MClassType */
}
};
/* runtime type Map[MClassType, Int] */
const struct type type_abstract_collection__Mapmodel__MClassTypekernel__Int = {
1643,
"Map[MClassType, Int]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClassType, Map[MType, Int]] */
const struct type type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
2158,
"HashMap[MClassType, Map[MType, Int]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
402, /* Map[MType, Map[MType, Int]] */
1617, /* HashMap[MType, Map[MType, Int]] */
1644, /* Map[MClassType, Map[MType, Int]] */
2158, /* HashMap[MClassType, Map[MType, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, Map[MType, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, Map[MType, Int]]] */
&type_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, Map[MType, Int]] */
&type_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, Map[MType, Int]] */
&type_model__MClassType, /* Map#0: MClassType */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* Map#1: Map[MType, Int] */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* Map[Map#0, Map#1]: Map[MClassType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* MapRead#1: Map[MType, Int] */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MClassType, Map[MType, Int]] */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashCollection#1: HashMapNode[MClassType, Map[MType, Int]] */
&type_nullable_model__MClassType, /* nullable HashCollection#0: nullable MClassType */
}
};
/* runtime type Map[MClassType, Map[MType, Int]] */
const struct type type_abstract_collection__Mapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
1644,
"Map[MClassType, Map[MType, Int]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MType, Int] */
const struct type type_hash_collection__HashMapKeysmodel__MTypekernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypekernel__Int,
11,
{
0, /* nullable Object */
1, /* Object */
2417, /* HashMapKeys[MType, Int] */
-1, /* empty */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, Int] */
&type_abstract_collection__MapKeysIteratormodel__MTypekernel__Int, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* RemovableCollection#0: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type HashMapValues[MType, Int] */
const struct type type_hash_collection__HashMapValuesmodel__MTypekernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
1946, /* HashMapValues[MType, Int] */
-1, /* empty */
92, /* Collection[Object] */
661, /* Collection[Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, Int] */
&type_abstract_collection__MapValuesIteratormodel__MTypekernel__Int, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* RemovableCollection#0: Int */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
425,
"NativeArray[nullable HashMapNode[MType, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
425, /* NativeArray[nullable HashMapNode[MType, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int, /* NativeArray#0: nullable HashMapNode[MType, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, Int]] */
}
};
/* runtime type HashMapNode[MType, Int] */
const struct type type_hash_collection__HashMapNodemodel__MTypekernel__Int = {
1645,
"HashMapNode[MType, Int]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
57, /* nullable HashMapNode[MType, Int] */
-1, /* empty */
1645, /* HashMapNode[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int, /* nullable N: nullable HashMapNode[MType, Int] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MType, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
57,
"nullable HashMapNode[MType, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[MType, Int] */
const struct type type_hash_collection__HashMapIteratormodel__MTypekernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
426, /* MapIterator[MType, Int] */
1646, /* HashMapIterator[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, Int] */
}
};
/* runtime type MapIterator[MType, Int] */
const struct type type_abstract_collection__MapIteratormodel__MTypekernel__Int = {
426,
"MapIterator[MType, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[State] */
const struct type type_array__ArrayIteratorparser__State = {
-1, /*CAST DEAD*/
"ArrayIterator[State]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser__State,
4,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1647, /* ArrayIterator[State] */
},
};
const struct types resolution_table_array__ArrayIteratorparser__State = {
0, /* dummy */
{
&type_array__Arrayparser__State, /* Array[Iterator#0]: Array[State] */
&type_array__AbstractArrayReadparser__State, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[State] */
}
};
/* runtime type NativeArray[State] */
const struct type type_array__NativeArrayparser__State = {
1648,
"NativeArray[State]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser__State,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1648, /* NativeArray[State] */
},
};
const struct types resolution_table_array__NativeArrayparser__State = {
0, /* dummy */
{
&type_parser__State, /* NativeArray#0: State */
&type_array__NativeArrayparser__State, /* NativeArray[NativeArray#0]: NativeArray[State] */
}
};
/* runtime type Array[AImport] */
const struct type type_array__Arrayparser_nodes__AImport = {
2848,
"Array[AImport]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AImport,
15,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2052, /* Collection[AImport] */
1838, /* AbstractArrayRead[Object] */
2243, /* AbstractArrayRead[ANode] */
2029, /* Array[Object] */
2786, /* AbstractArrayRead[AImport] */
2664, /* Array[ANode] */
2665, /* AbstractArrayRead[Prod] */
2848, /* Array[AImport] */
2802, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AImport = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AImport, /* Array[Array#0]: Array[AImport] */
&type_array__NativeArrayparser_nodes__AImport, /* NativeArray[Array#0]: NativeArray[AImport] */
&type_parser_nodes__AImport, /* Sequence#0: AImport */
&type_parser_nodes__AImport, /* SimpleCollection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Array#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* Array#0: AImport */
&type_array__NativeArrayparser_nodes__AImport, /* NativeArray[ArrayCapable#0]: NativeArray[AImport] */
&type_parser_nodes__AImport, /* AbstractArray#0: AImport */
&type_parser_nodes__AImport, /* RemovableCollection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Sequence#0]: Collection[AImport] */
&type_array__Arrayparser_nodes__AImport, /* Array[Sequence#0]: Array[AImport] */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[SimpleCollection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* Collection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Collection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* SequenceRead#0: AImport */
&type_parser_nodes__AImport, /* AbstractArrayRead#0: AImport */
&type_array__Arrayparser_nodes__AImport, /* Array[AbstractArrayRead#0]: Array[AImport] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AImport] not a live type) */
&type_array__ArrayIteratorparser_nodes__AImport, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AImport] */
}
};
/* runtime type AbstractArrayRead[AImport] */
const struct type type_array__AbstractArrayReadparser_nodes__AImport = {
2786,
"AbstractArrayRead[AImport]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[AAnnotation] */
const struct type type_array__ArrayIteratorparser_nodes__AAnnotation = {
-1, /*CAST DEAD*/
"ArrayIterator[AAnnotation]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AAnnotation,
6,
{
0, /* nullable Object */
1, /* Object */
321, /* ArrayIterator[Object] */
1541, /* ArrayIterator[ANode] */
1903, /* ArrayIterator[Prod] */
2159, /* ArrayIterator[AAnnotation] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AAnnotation, /* Array[Iterator#0]: Array[AAnnotation] */
&type_array__AbstractArrayReadparser_nodes__AAnnotation, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AAnnotation] */
}
};
/* runtime type NativeArray[AAnnotation] */
const struct type type_array__NativeArrayparser_nodes__AAnnotation = {
2160,
"NativeArray[AAnnotation]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AAnnotation,
6,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1542, /* NativeArray[ANode] */
1904, /* NativeArray[Prod] */
2160, /* NativeArray[AAnnotation] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_parser_nodes__AAnnotation, /* NativeArray#0: AAnnotation */
&type_array__NativeArrayparser_nodes__AAnnotation, /* NativeArray[NativeArray#0]: NativeArray[AAnnotation] */
}
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
2161, /* HashMapKeys[MClass, MClassType] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
2648, /* HashMapValues[MClass, MClassType] */
-1, /* empty */
92, /* Collection[Object] */
101, /* Collection[nullable MType] */
648, /* Collection[NitniCallback] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2033, /* Collection[MType] */
2240, /* Collection[MClassType] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, MClassType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
427,
"NativeArray[nullable HashMapNode[MClass, MClassType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
427, /* NativeArray[nullable HashMapNode[MClass, MClassType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MClass, MClassType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
}
};
/* runtime type HashMapNode[MClass, MClassType] */
const struct type type_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
1649,
"HashMapNode[MClass, MClassType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
58, /* nullable HashMapNode[MClass, MClassType] */
1649, /* HashMapNode[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_model__MClassType, /* HashMapNode#1: MClassType */
&type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* nullable N: nullable HashMapNode[MClass, MClassType] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, MClassType] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
58,
"nullable HashMapNode[MClass, MClassType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
428, /* MapIterator[MClass, MClassType] */
1650, /* HashMapIterator[MClass, MClassType] */
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
428,
"MapIterator[MClass, MClassType]", /* class_name_string */
2,
0,
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
2162, /* ArrayMapKeys[MClass, AType] */
-1, /* empty */
92, /* Collection[Object] */
99, /* Collection[nullable MClass] */
1866, /* Collection[MClass] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* RemovableCollection#0: MClass */
NULL, /* empty */
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
7,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
2418, /* ArrayMapValues[MClass, AType] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2068, /* Collection[AType] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AType, /* RemovableCollection#0: AType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AType, /* Collection#0: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[Collection#0]: Collection[AType] */
}
};
/* runtime type Couple[MClass, AType] */
const struct type type_abstract_collection__Couplemodel__MClassparser_nodes__AType = {
429,
"Couple[MClass, AType]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__Couplemodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
429, /* Couple[MClass, AType] */
},
};
const struct types resolution_table_abstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_model__MClass, /* Couple#0: MClass */
&type_parser_nodes__AType, /* Couple#1: AType */
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
430, /* MapIterator[MClass, AType] */
1651, /* CoupleMapIterator[MClass, AType] */
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
430,
"MapIterator[MClass, AType]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[Couple[MClass, AType]] */
const struct type type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
2715,
"Array[Couple[MClass, AType]]", /* class_name_string */
6,
0,
&resolution_table_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType,
10,
{
0, /* nullable Object */
1, /* Object */
1652, /* Collection[Couple[MClass, AType]] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
2419, /* AbstractArrayRead[Couple[MClass, AType]] */
2715, /* Array[Couple[MClass, AType]] */
1838, /* AbstractArrayRead[Object] */
-1, /* empty */
2029, /* Array[Object] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[Array#0]: Array[Couple[MClass, AType]] */
&type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* NativeArray[Array#0]: NativeArray[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Sequence#0: Couple[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* SimpleCollection#0: Couple[MClass, AType] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[Array#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array#0: Couple[MClass, AType] */
&type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* NativeArray[ArrayCapable#0]: NativeArray[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* AbstractArray#0: Couple[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* RemovableCollection#0: Couple[MClass, AType] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[Sequence#0]: Collection[Couple[MClass, AType]] */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[Sequence#0]: Array[Couple[MClass, AType]] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[SimpleCollection#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection#0: Couple[MClass, AType] */
&type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Collection[Collection#0]: Collection[Couple[MClass, AType]] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* SequenceRead#0: Couple[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* AbstractArrayRead#0: Couple[MClass, AType] */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[AbstractArrayRead#0]: Array[Couple[MClass, AType]] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[Couple[MClass, AType]] not a live type) */
&type_array__ArrayIteratorabstract_collection__Couplemodel__MClassparser_nodes__AType, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Couple[MClass, AType]] */
}
};
/* runtime type Collection[Couple[MClass, AType]] */
const struct type type_abstract_collection__Collectionabstract_collection__Couplemodel__MClassparser_nodes__AType = {
1652,
"Collection[Couple[MClass, AType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Couple[MClass, AType]] */
const struct type type_array__AbstractArrayReadabstract_collection__Couplemodel__MClassparser_nodes__AType = {
2419,
"AbstractArrayRead[Couple[MClass, AType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AExternCodeBlock] */
const struct type type_array__Arrayparser_nodes__AExternCodeBlock = {
2849,
"Array[AExternCodeBlock]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AExternCodeBlock,
15,
{
0, /* nullable Object */
1, /* Object */
1871, /* Collection[Prod] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
653, /* Collection[ANode] */
2054, /* Collection[AExternCodeBlock] */
1838, /* AbstractArrayRead[Object] */
2243, /* AbstractArrayRead[ANode] */
2029, /* Array[Object] */
2787, /* AbstractArrayRead[AExternCodeBlock] */
2664, /* Array[ANode] */
2665, /* AbstractArrayRead[Prod] */
2849, /* Array[AExternCodeBlock] */
2802, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AExternCodeBlock = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[Array#0]: Array[AExternCodeBlock] */
&type_array__NativeArrayparser_nodes__AExternCodeBlock, /* NativeArray[Array#0]: NativeArray[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* Sequence#0: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* SimpleCollection#0: AExternCodeBlock */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[Array#0]: Collection[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* Array#0: AExternCodeBlock */
&type_array__NativeArrayparser_nodes__AExternCodeBlock, /* NativeArray[ArrayCapable#0]: NativeArray[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* AbstractArray#0: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* RemovableCollection#0: AExternCodeBlock */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[Sequence#0]: Collection[AExternCodeBlock] */
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[Sequence#0]: Array[AExternCodeBlock] */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[SimpleCollection#0]: Collection[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* Collection#0: AExternCodeBlock */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[Collection#0]: Collection[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* SequenceRead#0: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* AbstractArrayRead#0: AExternCodeBlock */
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[AbstractArrayRead#0]: Array[AExternCodeBlock] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AExternCodeBlock] not a live type) */
&type_array__ArrayIteratorparser_nodes__AExternCodeBlock, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AExternCodeBlock] */
}
};
/* runtime type AbstractArrayRead[AExternCodeBlock] */
const struct type type_array__AbstractArrayReadparser_nodes__AExternCodeBlock = {
2787,
"AbstractArrayRead[AExternCodeBlock]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[Scope] */
const struct type type_list__ListNodescope__Scope = {
2420,
"ListNode[Scope]", /* class_name_string */
6,
0,
&resolution_table_list__ListNodescope__Scope,
7,
{
0, /* nullable Object */
1, /* Object */
59, /* nullable ListNode[Scope] */
1947, /* Container[Scope] */
92, /* Collection[Object] */
698, /* Collection[Scope] */
2420, /* ListNode[Scope] */
},
};
const struct types resolution_table_list__ListNodescope__Scope = {
0, /* dummy */
{
&type_scope__Scope, /* ListNode#0: Scope */
&type_nullable_list__ListNodescope__Scope, /* nullable ListNode[ListNode#0]: nullable ListNode[Scope] */
&type_abstract_collection__ContainerIteratorscope__Scope, /* ContainerIterator[Container#0]: ContainerIterator[Scope] */
&type_scope__Scope, /* Container#0: Scope */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
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
59,
"nullable ListNode[Scope]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[Scope] */
const struct type type_abstract_collection__Containerscope__Scope = {
1947,
"Container[Scope]", /* class_name_string */
3,
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
431, /* ListIterator[Scope] */
},
};
const struct types resolution_table_list__ListIteratorscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[Iterator#0]: Array[Scope] */
&type_scope__Scope, /* ListIterator#0: Scope */
&type_list__Listscope__Scope, /* List[ListIterator#0]: List[Scope] */
}
};
/* runtime type Array[Scope] */
const struct type type_array__Arrayscope__Scope = {
2716,
"Array[Scope]", /* class_name_string */
6,
0,
&resolution_table_array__Arrayscope__Scope,
10,
{
0, /* nullable Object */
1, /* Object */
2421, /* AbstractArrayRead[Scope] */
91, /* SequenceRead[nullable Object] */
92, /* Collection[Object] */
698, /* Collection[Scope] */
2716, /* Array[Scope] */
1838, /* AbstractArrayRead[Object] */
-1, /* empty */
2029, /* Array[Object] */
},
};
const struct types resolution_table_array__Arrayscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[Array#0]: Array[Scope] */
&type_array__NativeArrayscope__Scope, /* NativeArray[Array#0]: NativeArray[Scope] */
&type_scope__Scope, /* Sequence#0: Scope */
&type_scope__Scope, /* SimpleCollection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Array#0]: Collection[Scope] */
&type_scope__Scope, /* Array#0: Scope */
&type_array__NativeArrayscope__Scope, /* NativeArray[ArrayCapable#0]: NativeArray[Scope] */
&type_scope__Scope, /* AbstractArray#0: Scope */
&type_scope__Scope, /* RemovableCollection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Sequence#0]: Collection[Scope] */
&type_array__Arrayscope__Scope, /* Array[Sequence#0]: Array[Scope] */
&type_abstract_collection__Collectionscope__Scope, /* Collection[SimpleCollection#0]: Collection[Scope] */
&type_scope__Scope, /* Collection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Collection#0]: Collection[Scope] */
&type_scope__Scope, /* SequenceRead#0: Scope */
&type_scope__Scope, /* AbstractArrayRead#0: Scope */
&type_array__Arrayscope__Scope, /* Array[AbstractArrayRead#0]: Array[Scope] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[Scope] not a live type) */
&type_array__ArrayIteratorscope__Scope, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Scope] */
}
};
/* runtime type AbstractArrayRead[Scope] */
const struct type type_array__AbstractArrayReadscope__Scope = {
2421,
"AbstractArrayRead[Scope]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
321, /* ArrayIterator[Object] */
1653, /* ArrayIterator[FlowContext] */
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
1654,
"NativeArray[FlowContext]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1654, /* NativeArray[FlowContext] */
},
};
const struct types resolution_table_array__NativeArrayflow__FlowContext = {
0, /* dummy */
{
&type_flow__FlowContext, /* NativeArray#0: FlowContext */
&type_array__NativeArrayflow__FlowContext, /* NativeArray[NativeArray#0]: NativeArray[FlowContext] */
}
};
/* runtime type HashSetNode[Variable] */
const struct type type_hash_collection__HashSetNodescope__Variable = {
2163,
"HashSetNode[Variable]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodescope__Variable,
6,
{
0, /* nullable Object */
1, /* Object */
32, /* nullable HashSetNode[Object] */
432, /* nullable HashSetNode[Variable] */
1549, /* HashSetNode[Object] */
2163, /* HashSetNode[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* HashSetNode#0: Variable */
NULL, /* empty */
&type_nullable_hash_collection__HashSetNodescope__Variable, /* nullable N: nullable HashSetNode[Variable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashSetNode[Variable] */
const struct type type_nullable_hash_collection__HashSetNodescope__Variable = {
432,
"nullable HashSetNode[Variable]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
356, /* HashSetIterator[Object] */
1655, /* HashSetIterator[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorscope__Variable = {
0, /* dummy */
{
&type_array__Arrayscope__Variable, /* Array[Iterator#0]: Array[Variable] */
&type_hash_collection__HashSetscope__Variable, /* HashSet[HashSetIterator#0]: HashSet[Variable] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
1656,
"NativeArray[nullable HashSetNode[Variable]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashSetNode[Object]] */
1656, /* NativeArray[nullable HashSetNode[Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodescope__Variable, /* NativeArray#0: nullable HashSetNode[Variable] */
&type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[Variable]] */
}
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
321, /* ArrayIterator[Object] */
1657, /* ArrayIterator[CallSite] */
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
1658,
"NativeArray[CallSite]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraytyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
115, /* NativeArray[Object] */
1658, /* NativeArray[CallSite] */
},
};
const struct types resolution_table_array__NativeArraytyping__CallSite = {
0, /* dummy */
{
&type_typing__CallSite, /* NativeArray#0: CallSite */
&type_array__NativeArraytyping__CallSite, /* NativeArray[NativeArray#0]: NativeArray[CallSite] */
}
};
/* runtime type HashMapKeys[FFILanguage, Set[NitniCallback]] */
const struct type type_hash_collection__HashMapKeysffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
-1, /*CAST DEAD*/
"HashMapKeys[FFILanguage, Set[NitniCallback]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback,
5,
{
0, /* nullable Object */
1, /* Object */
640, /* Collection[FFILanguage] */
1948, /* HashMapKeys[FFILanguage, Set[NitniCallback]] */
92, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_hash_collection__HashMapffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[FFILanguage, Set[NitniCallback]] */
&type_abstract_collection__MapKeysIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[FFILanguage, Set[NitniCallback]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_ffi_base__FFILanguage, /* RemovableCollection#0: FFILanguage */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_ffi_base__FFILanguage, /* Collection#0: FFILanguage */
&type_abstract_collection__Collectionffi_base__FFILanguage, /* Collection[Collection#0]: Collection[FFILanguage] */
}
};
/* runtime type HashMapValues[FFILanguage, Set[NitniCallback]] */
const struct type type_hash_collection__HashMapValuesffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
-1, /*CAST DEAD*/
"HashMapValues[FFILanguage, Set[NitniCallback]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback,
5,
{
0, /* nullable Object */
1, /* Object */
1566, /* Collection[Set[NitniCallback]] */
1949, /* HashMapValues[FFILanguage, Set[NitniCallback]] */
92, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_hash_collection__HashMapffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[FFILanguage, Set[NitniCallback]] */
&type_abstract_collection__MapValuesIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[FFILanguage, Set[NitniCallback]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setnitni_callbacks__NitniCallback, /* RemovableCollection#0: Set[NitniCallback] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setnitni_callbacks__NitniCallback, /* Collection#0: Set[NitniCallback] */
&type_abstract_collection__Collectionabstract_collection__Setnitni_callbacks__NitniCallback, /* Collection[Collection#0]: Collection[Set[NitniCallback]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[FFILanguage, Set[NitniCallback]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
433,
"NativeArray[nullable HashMapNode[FFILanguage, Set[NitniCallback]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback,
3,
{
0, /* nullable Object */
1, /* Object */
433, /* NativeArray[nullable HashMapNode[FFILanguage, Set[NitniCallback]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* NativeArray#0: nullable HashMapNode[FFILanguage, Set[NitniCallback]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[FFILanguage, Set[NitniCallback]]] */
}
};
/* runtime type HashMapNode[FFILanguage, Set[NitniCallback]] */
const struct type type_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
1659,
"HashMapNode[FFILanguage, Set[NitniCallback]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback,
4,
{
0, /* nullable Object */
1, /* Object */
60, /* nullable HashMapNode[FFILanguage, Set[NitniCallback]] */
1659, /* HashMapNode[FFILanguage, Set[NitniCallback]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_ffi_base__FFILanguage, /* HashMapNode#0: FFILanguage */
&type_abstract_collection__Setnitni_callbacks__NitniCallback, /* HashMapNode#1: Set[NitniCallback] */
&type_nullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* nullable N: nullable HashMapNode[FFILanguage, Set[NitniCallback]] */
&type_ffi_base__FFILanguage, /* HashNode#0: FFILanguage */
}
};
/* runtime type nullable HashMapNode[FFILanguage, Set[NitniCallback]] */
const struct type type_nullable_hash_collection__HashMapNodeffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
60,
"nullable HashMapNode[FFILanguage, Set[NitniCallback]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapIterator[FFILanguage, Set[NitniCallback]] */
const struct type type_hash_collection__HashMapIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
-1, /*CAST DEAD*/
"HashMapIterator[FFILanguage, Set[NitniCallback]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback,
4,
{
0, /* nullable Object */
1, /* Object */
434, /* MapIterator[FFILanguage, Set[NitniCallback]] */
1660, /* HashMapIterator[FFILanguage, Set[NitniCallback]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
0, /* dummy */
{
&type_hash_collection__HashMapffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[FFILanguage, Set[NitniCallback]] */
}
};
/* runtime type MapIterator[FFILanguage, Set[NitniCallback]] */
const struct type type_abstract_collection__MapIteratorffi_base__FFILanguageabstract_collection__Setnitni_callbacks__NitniCallback = {
434,
"MapIterator[FFILanguage, Set[NitniCallback]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
435,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
435, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, POSetElement[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
&type_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_poset__POSetElementmodel__MClass, /* Map#1: POSetElement[MClass] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, POSetElement[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, POSetElement[MClass]] not a live type) */
&type_poset__POSetElementmodel__MClass, /* MapRead#1: POSetElement[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashCollection#1: HashMapNode[MClass, POSetElement[MClass]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type POSetElement[MClass] */
const struct type type_poset__POSetElementmodel__MClass = {
436,
"POSetElement[MClass]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
436, /* POSetElement[MClass] */
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
