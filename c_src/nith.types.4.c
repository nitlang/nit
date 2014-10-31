#include "nith.types.0.h"
/* runtime type NativeArray[nullable HashSetNode[String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
1175,
"NativeArray[nullable HashSetNode[String]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
291, /* NativeArray[nullable HashSetNode[Object]] */
1175, /* NativeArray[nullable HashSetNode[String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodestring__String, /* E: nullable HashSetNode[String] */
&type_array__NativeArraynullable_hash_collection__HashSetNodestring__String, /* NativeArray[E]: NativeArray[nullable HashSetNode[String]] */
}
};
/* runtime type HashSetNode[String] */
const struct type type_hash_collection__HashSetNodestring__String = {
1607,
"HashSetNode[String]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodestring__String,
6,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashSetNode[Object] */
379, /* nullable HashSetNode[String] */
1069, /* HashSetNode[Object] */
1607, /* HashSetNode[String] */
},
};
const struct types resolution_table_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_string__String, /* E: String */
NULL, /* empty */
&type_string__String, /* K: String */
}
};
/* runtime type nullable HashSetNode[String] */
const struct type type_nullable_hash_collection__HashSetNodestring__String = {
379,
"nullable HashSetNode[String]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSetConflictGraph[MClass] */
const struct type type_coloring__POSetConflictGraphmodel__MClass = {
380,
"POSetConflictGraph[MClass]", /* class_name_string */
2,
0,
&resolution_table_coloring__POSetConflictGraphmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
380, /* POSetConflictGraph[MClass] */
},
};
const struct types resolution_table_coloring__POSetConflictGraphmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClass, /* HashSet[E]: HashSet[MClass] */
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass, /* HashMap[E, Set[E]]: HashMap[MClass, Set[MClass]] */
&type_poset__POSetmodel__MClass, /* POSet[E]: POSet[MClass] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
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
83, /* Collection[Object] */
1366, /* Collection[MClass] */
1580, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
1836, /* HashMapKeys[MClass, Set[MProperty]] */
2061, /* HashMapKeys[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[K, V]: HashMap[MClass, Set[MAttribute]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, Set[MAttribute]] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
1405, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
1406, /* Collection[Set[MProperty]] */
1837, /* HashMapValues[MClass, Set[MProperty]] */
1608, /* Collection[Set[MAttribute]] */
2132, /* HashMapValues[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[K, V]: HashMap[MClass, Set[MAttribute]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, Set[MAttribute]] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[E]: Collection[Set[MAttribute]] */
&type_array__Arrayabstract_collection__Setmodel__MAttribute, /* Array[E]: Array[Set[MAttribute]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
}
};
/* runtime type Collection[Set[MAttribute]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute = {
1608,
"Collection[Set[MAttribute]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1434,
"NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1115, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1434, /* NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* E: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
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
1116, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1117, /* MapIterator[MClass, Set[MProperty]] */
1435, /* MapIterator[MClass, Set[MAttribute]] */
1581, /* HashMapIterator[MClass, Set[MProperty]] */
2062, /* HashMapIterator[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMap[K, V]: HashMap[MClass, Set[MAttribute]] */
}
};
/* runtime type MapIterator[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
1435,
"MapIterator[MClass, Set[MAttribute]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
2063,
"HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
28, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
329, /* nullable HashMapNode[MClass, Set[MProperty]] */
1118, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1176, /* nullable HashMapNode[MClass, Set[MAttribute]] */
1582, /* HashMapNode[MClass, Set[MProperty]] */
2063, /* HashMapNode[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* V: Set[MAttribute] */
&type_model__MClass, /* K: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MAttribute]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1176,
"nullable HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
5,
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
290, /* HashSetIterator[Object] */
1128, /* HashSetIterator[PropertyLayoutElement] */
1416, /* HashSetIterator[MProperty] */
1609, /* HashSetIterator[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MAttribute = {
0, /* dummy */
{
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_hash_collection__HashSetmodel__MAttribute, /* HashSet[E]: HashSet[MAttribute] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MAttribute]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
1610,
"NativeArray[nullable HashSetNode[MAttribute]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
291, /* NativeArray[nullable HashSetNode[Object]] */
1129, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1417, /* NativeArray[nullable HashSetNode[MProperty]] */
1610, /* NativeArray[nullable HashSetNode[MAttribute]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* E: nullable HashSetNode[MAttribute] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray[E]: NativeArray[nullable HashSetNode[MAttribute]] */
}
};
/* runtime type HashSetNode[MAttribute] */
const struct type type_hash_collection__HashSetNodemodel__MAttribute = {
2175,
"HashSetNode[MAttribute]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MAttribute,
10,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashSetNode[Object] */
342, /* nullable HashSetNode[PropertyLayoutElement] */
1069, /* HashSetNode[Object] */
1131, /* nullable HashSetNode[MProperty] */
1436, /* nullable HashSetNode[MAttribute] */
1592, /* HashSetNode[PropertyLayoutElement] */
2058, /* HashSetNode[MProperty] */
2175, /* HashSetNode[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* E: MAttribute */
NULL, /* empty */
&type_model__MAttribute, /* K: MAttribute */
}
};
/* runtime type nullable HashSetNode[MAttribute] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MAttribute = {
1436,
"nullable HashSetNode[MAttribute]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MAttribute] */
const struct type type_array__Arraymodel__MAttribute = {
-1, /*CAST DEAD*/
"Array[MAttribute]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MAttribute,
24,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1368, /* AbstractArrayRead[nullable MProperty] */
590, /* Array[nullable Object] */
605, /* Collection[PropertyLayoutElement] */
1345, /* AbstractArrayRead[Object] */
1516, /* Collection[MProperty] */
1512, /* AbstractArray[Object] */
1517, /* AbstractArray[nullable MProperty] */
1702, /* Collection[MAttribute] */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1911, /* Array[nullable MProperty] */
1909, /* Array[Object] */
2178, /* AbstractArrayRead[MProperty] */
2081, /* AbstractArray[PropertyLayoutElement] */
2276, /* AbstractArrayRead[MAttribute] */
2208, /* Array[PropertyLayoutElement] */
2282, /* AbstractArray[MProperty] */
2329, /* AbstractArray[MAttribute] */
2333, /* Array[MProperty] */
2359, /* Array[MAttribute] */
},
};
const struct types resolution_table_array__Arraymodel__MAttribute = {
0, /* dummy */
{
&type_array__NativeArraymodel__MAttribute, /* NativeArray[E]: NativeArray[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_model__MAttribute, /* E: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_model__MAttribute, /* E: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_array__NativeArraymodel__MAttribute, /* NativeArray[E]: NativeArray[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_model__MAttribute, /* E: MAttribute */
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_array__AbstractArraymodel__MAttribute, /* AbstractArray[E]: AbstractArray[MAttribute] */
&type_array__ArrayIteratormodel__MAttribute, /* ArrayIterator[E]: ArrayIterator[MAttribute] */
}
};
/* runtime type AbstractArrayRead[MAttribute] */
const struct type type_array__AbstractArrayReadmodel__MAttribute = {
2276,
"AbstractArrayRead[MAttribute]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MAttribute] */
const struct type type_array__AbstractArraymodel__MAttribute = {
2329,
"AbstractArray[MAttribute]", /* class_name_string */
21,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int = {
381,
"HashMap[PropertyLayoutElement, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
381, /* HashMap[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapKeys[K, V]: HashMapKeys[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapValuesseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapValues[K, V]: HashMapValues[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_hash_collection__HashMapIteratorseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapIterator[K, V]: HashMapIterator[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_kernel__Int, /* V: Int */
&type_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMapNode[K, V]: HashMapNode[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* nullable N: nullable HashMapNode[PropertyLayoutElement, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
&type_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* N: HashMapNode[PropertyLayoutElement, Int] */
&type_nullable_separate_compiler__PropertyLayoutElement, /* nullable K: nullable PropertyLayoutElement */
}
};
/* runtime type HashMap[MAttribute, Int] */
const struct type type_hash_collection__HashMapmodel__MAttributekernel__Int = {
1177,
"HashMap[MAttribute, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
381, /* HashMap[PropertyLayoutElement, Int] */
1177, /* HashMap[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MAttributekernel__Int, /* HashMapKeys[K, V]: HashMapKeys[MAttribute, Int] */
&type_hash_collection__HashMapValuesmodel__MAttributekernel__Int, /* HashMapValues[K, V]: HashMapValues[MAttribute, Int] */
&type_model__MAttribute, /* K: MAttribute */
&type_hash_collection__HashMapIteratormodel__MAttributekernel__Int, /* HashMapIterator[K, V]: HashMapIterator[MAttribute, Int] */
&type_model__MAttribute, /* K: MAttribute */
&type_kernel__Int, /* V: Int */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashMapNode[K, V]: HashMapNode[MAttribute, Int] */
&type_model__MAttribute, /* K: MAttribute */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* nullable N: nullable HashMapNode[MAttribute, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* N: HashMapNode[MAttribute, Int] */
&type_nullable_model__MAttribute, /* nullable K: nullable MAttribute */
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
285, /* ArrayIterator[Object] */
1178, /* ArrayIterator[RuntimeVariable] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
&type_array__AbstractArrayReadabstract_compiler__RuntimeVariable, /* AbstractArrayRead[E]: AbstractArrayRead[RuntimeVariable] */
}
};
/* runtime type NativeArray[RuntimeVariable] */
const struct type type_array__NativeArrayabstract_compiler__RuntimeVariable = {
1179,
"NativeArray[RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1179, /* NativeArray[RuntimeVariable] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[E]: NativeArray[RuntimeVariable] */
}
};
/* runtime type POSetConflictGraph[MType] */
const struct type type_coloring__POSetConflictGraphmodel__MType = {
382,
"POSetConflictGraph[MType]", /* class_name_string */
2,
0,
&resolution_table_coloring__POSetConflictGraphmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
382, /* POSetConflictGraph[MType] */
},
};
const struct types resolution_table_coloring__POSetConflictGraphmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MType, /* HashSet[E]: HashSet[MType] */
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[E, Set[E]]: HashMap[MType, Set[MType]] */
&type_poset__POSetmodel__MType, /* POSet[E]: POSet[MType] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
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
83, /* Collection[Object] */
1180, /* Collection[EscapeMark] */
1437, /* HashMapKeys[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[K, V]: HashMap[EscapeMark, String] */
&type_abstract_collection__MapKeysIteratorscope__EscapeMarkstring__String, /* MapKeysIterator[K, V]: MapKeysIterator[EscapeMark, String] */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[E]: Collection[EscapeMark] */
&type_array__Arrayscope__EscapeMark, /* Array[E]: Array[EscapeMark] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* E: EscapeMark */
}
};
/* runtime type Collection[EscapeMark] */
const struct type type_abstract_collection__Collectionscope__EscapeMark = {
1180,
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
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
-1, /* empty */
1346, /* Collection[Text] */
-1, /* empty */
1513, /* Collection[String] */
1857, /* HashMapValues[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[K, V]: HashMap[EscapeMark, String] */
&type_abstract_collection__MapValuesIteratorscope__EscapeMarkstring__String, /* MapValuesIterator[K, V]: MapValuesIterator[EscapeMark, String] */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* E: String */
}
};
/* runtime type NativeArray[nullable HashMapNode[EscapeMark, String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
383,
"NativeArray[nullable HashMapNode[EscapeMark, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
383, /* NativeArray[nullable HashMapNode[EscapeMark, String]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* E: nullable HashMapNode[EscapeMark, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray[E]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
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
384, /* MapIterator[EscapeMark, String] */
1181, /* HashMapIterator[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__EscapeMarkstring__String, /* HashMap[K, V]: HashMap[EscapeMark, String] */
}
};
/* runtime type MapIterator[EscapeMark, String] */
const struct type type_abstract_collection__MapIteratorscope__EscapeMarkstring__String = {
384,
"MapIterator[EscapeMark, String]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[EscapeMark, String] */
const struct type type_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
1182,
"HashMapNode[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
46, /* nullable HashMapNode[EscapeMark, String] */
1182, /* HashMapNode[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_scope__EscapeMark, /* K: EscapeMark */
&type_string__String, /* V: String */
&type_scope__EscapeMark, /* K: EscapeMark */
}
};
/* runtime type nullable HashMapNode[EscapeMark, String] */
const struct type type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
46,
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
83, /* Collection[Object] */
1051, /* Collection[Variable] */
1438, /* HashMapKeys[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[K, V]: HashMap[Variable, RuntimeVariable] */
&type_abstract_collection__MapKeysIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapKeysIterator[K, V]: MapKeysIterator[Variable, RuntimeVariable] */
&type_scope__Variable, /* E: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[E]: Collection[Variable] */
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* E: Variable */
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
83, /* Collection[Object] */
637, /* Collection[RuntimeVariable] */
1439, /* HashMapValues[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[K, V]: HashMap[Variable, RuntimeVariable] */
&type_abstract_collection__MapValuesIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapValuesIterator[K, V]: MapValuesIterator[Variable, RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[E]: Collection[RuntimeVariable] */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
385,
"NativeArray[nullable HashMapNode[Variable, RuntimeVariable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
385, /* NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* E: nullable HashMapNode[Variable, RuntimeVariable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
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
386, /* MapIterator[Variable, RuntimeVariable] */
1183, /* HashMapIterator[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable, /* HashMap[K, V]: HashMap[Variable, RuntimeVariable] */
}
};
/* runtime type MapIterator[Variable, RuntimeVariable] */
const struct type type_abstract_collection__MapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
386,
"MapIterator[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
1184,
"HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
47, /* nullable HashMapNode[Variable, RuntimeVariable] */
1184, /* HashMapNode[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_scope__Variable, /* K: Variable */
&type_abstract_compiler__RuntimeVariable, /* V: RuntimeVariable */
&type_scope__Variable, /* K: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, RuntimeVariable] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
47,
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
83, /* Collection[Object] */
1366, /* Collection[MClass] */
1580, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
1836, /* HashMapKeys[MClass, Set[MProperty]] */
2064, /* HashMapKeys[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[K, V]: HashMap[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
1405, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
1406, /* Collection[Set[MProperty]] */
1837, /* HashMapValues[MClass, Set[MProperty]] */
1611, /* Collection[Set[MVirtualTypeProp]] */
2133, /* HashMapValues[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[K, V]: HashMap[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[E]: Collection[Set[MVirtualTypeProp]] */
&type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp, /* Array[E]: Array[Set[MVirtualTypeProp]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
}
};
/* runtime type Collection[Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp = {
1611,
"Collection[Set[MVirtualTypeProp]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1440,
"NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
327, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1115, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1440, /* NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* E: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
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
1116, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1117, /* MapIterator[MClass, Set[MProperty]] */
1441, /* MapIterator[MClass, Set[MVirtualTypeProp]] */
1581, /* HashMapIterator[MClass, Set[MProperty]] */
2065, /* HashMapIterator[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMap[K, V]: HashMap[MClass, Set[MVirtualTypeProp]] */
}
};
/* runtime type MapIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1441,
"MapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
2066,
"HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
28, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
329, /* nullable HashMapNode[MClass, Set[MProperty]] */
1118, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1185, /* nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
1582, /* HashMapNode[MClass, Set[MProperty]] */
2066, /* HashMapNode[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* V: Set[MVirtualTypeProp] */
&type_model__MClass, /* K: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1185,
"nullable HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
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
290, /* HashSetIterator[Object] */
1128, /* HashSetIterator[PropertyLayoutElement] */
1416, /* HashSetIterator[MProperty] */
1612, /* HashSetIterator[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_hash_collection__HashSetmodel__MVirtualTypeProp, /* HashSet[E]: HashSet[MVirtualTypeProp] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1613,
"NativeArray[nullable HashSetNode[MVirtualTypeProp]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
291, /* NativeArray[nullable HashSetNode[Object]] */
1129, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1417, /* NativeArray[nullable HashSetNode[MProperty]] */
1613, /* NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* E: nullable HashSetNode[MVirtualTypeProp] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
}
};
/* runtime type HashSetNode[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2176,
"HashSetNode[MVirtualTypeProp]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp,
10,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashSetNode[Object] */
342, /* nullable HashSetNode[PropertyLayoutElement] */
1069, /* HashSetNode[Object] */
1131, /* nullable HashSetNode[MProperty] */
1442, /* nullable HashSetNode[MVirtualTypeProp] */
1592, /* HashSetNode[PropertyLayoutElement] */
2058, /* HashSetNode[MProperty] */
2176, /* HashSetNode[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
}
};
/* runtime type nullable HashSetNode[MVirtualTypeProp] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1442,
"nullable HashSetNode[MVirtualTypeProp]", /* class_name_string */
6,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MVirtualTypeProp] */
const struct type type_array__Arraymodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"Array[MVirtualTypeProp]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MVirtualTypeProp,
24,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1368, /* AbstractArrayRead[nullable MProperty] */
590, /* Array[nullable Object] */
605, /* Collection[PropertyLayoutElement] */
1345, /* AbstractArrayRead[Object] */
1516, /* Collection[MProperty] */
1512, /* AbstractArray[Object] */
1517, /* AbstractArray[nullable MProperty] */
1705, /* Collection[MVirtualTypeProp] */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1911, /* Array[nullable MProperty] */
1909, /* Array[Object] */
2178, /* AbstractArrayRead[MProperty] */
2081, /* AbstractArray[PropertyLayoutElement] */
2277, /* AbstractArrayRead[MVirtualTypeProp] */
2208, /* Array[PropertyLayoutElement] */
2282, /* AbstractArray[MProperty] */
2330, /* AbstractArray[MVirtualTypeProp] */
2333, /* Array[MProperty] */
2360, /* Array[MVirtualTypeProp] */
},
};
const struct types resolution_table_array__Arraymodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__NativeArraymodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_array__NativeArraymodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_array__AbstractArraymodel__MVirtualTypeProp, /* AbstractArray[E]: AbstractArray[MVirtualTypeProp] */
&type_array__ArrayIteratormodel__MVirtualTypeProp, /* ArrayIterator[E]: ArrayIterator[MVirtualTypeProp] */
}
};
/* runtime type AbstractArrayRead[MVirtualTypeProp] */
const struct type type_array__AbstractArrayReadmodel__MVirtualTypeProp = {
2277,
"AbstractArrayRead[MVirtualTypeProp]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MVirtualTypeProp] */
const struct type type_array__AbstractArraymodel__MVirtualTypeProp = {
2330,
"AbstractArray[MVirtualTypeProp]", /* class_name_string */
21,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
1186,
"HashMap[MVirtualTypeProp, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
381, /* HashMap[PropertyLayoutElement, Int] */
1186, /* HashMap[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int, /* HashMapKeys[K, V]: HashMapKeys[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int, /* HashMapValues[K, V]: HashMapValues[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int, /* HashMapIterator[K, V]: HashMapIterator[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_kernel__Int, /* V: Int */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashMapNode[K, V]: HashMapNode[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* nullable N: nullable HashMapNode[MVirtualTypeProp, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* N: HashMapNode[MVirtualTypeProp, Int] */
&type_nullable_model__MVirtualTypeProp, /* nullable K: nullable MVirtualTypeProp */
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
285, /* ArrayIterator[Object] */
1187, /* ArrayIterator[ReduceAction] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_work__ReduceAction = {
0, /* dummy */
{
&type_array__Arrayparser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
&type_array__AbstractArrayReadparser_work__ReduceAction, /* AbstractArrayRead[E]: AbstractArrayRead[ReduceAction] */
}
};
/* runtime type NativeArray[ReduceAction] */
const struct type type_array__NativeArrayparser_work__ReduceAction = {
1188,
"NativeArray[ReduceAction]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser_work__ReduceAction,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1188, /* NativeArray[ReduceAction] */
},
};
const struct types resolution_table_array__NativeArrayparser_work__ReduceAction = {
0, /* dummy */
{
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[E]: NativeArray[ReduceAction] */
}
};
/* runtime type Array[TComment] */
const struct type type_array__Arrayparser_nodes__TComment = {
-1, /*CAST DEAD*/
"Array[TComment]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__TComment,
19,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1384, /* Collection[TComment] */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
2134, /* AbstractArrayRead[TComment] */
-1, /* empty */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2230, /* AbstractArray[TComment] */
2209, /* Array[ANode] */
2309, /* Array[TComment] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__TComment = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[E]: NativeArray[TComment] */
&type_parser_nodes__TComment, /* E: TComment */
&type_parser_nodes__TComment, /* E: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[E]: Collection[TComment] */
&type_array__Arrayparser_nodes__TComment, /* Array[E]: Array[TComment] */
&type_parser_nodes__TComment, /* E: TComment */
&type_parser_nodes__TComment, /* E: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[E]: Collection[TComment] */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[E]: Collection[TComment] */
&type_parser_nodes__TComment, /* E: TComment */
&type_array__Arrayparser_nodes__TComment, /* Array[E]: Array[TComment] */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[E]: NativeArray[TComment] */
&type_parser_nodes__TComment, /* E: TComment */
&type_parser_nodes__TComment, /* E: TComment */
&type_array__Arrayparser_nodes__TComment, /* Array[E]: Array[TComment] */
&type_array__AbstractArrayparser_nodes__TComment, /* AbstractArray[E]: AbstractArray[TComment] */
&type_array__ArrayIteratorparser_nodes__TComment, /* ArrayIterator[E]: ArrayIterator[TComment] */
}
};
/* runtime type AbstractArrayRead[TComment] */
const struct type type_array__AbstractArrayReadparser_nodes__TComment = {
2134,
"AbstractArrayRead[TComment]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[TComment] */
const struct type type_array__AbstractArrayparser_nodes__TComment = {
2230,
"AbstractArray[TComment]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1614, /* ArrayIterator[AClassdef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[E]: Array[AClassdef] */
&type_array__AbstractArrayReadparser_nodes__AClassdef, /* AbstractArrayRead[E]: AbstractArrayRead[AClassdef] */
}
};
/* runtime type NativeArray[AClassdef] */
const struct type type_array__NativeArrayparser_nodes__AClassdef = {
1615,
"NativeArray[AClassdef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AClassdef,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1615, /* NativeArray[AClassdef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AClassdef = {
0, /* dummy */
{
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_array__NativeArrayparser_nodes__AClassdef, /* NativeArray[E]: NativeArray[AClassdef] */
}
};
/* runtime type Array[AFormaldef] */
const struct type type_array__Arrayparser_nodes__AFormaldef = {
-1, /*CAST DEAD*/
"Array[AFormaldef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AFormaldef,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1541, /* Collection[AFormaldef] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2193, /* AbstractArrayRead[AFormaldef] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2296, /* AbstractArray[AFormaldef] */
-1, /* empty */
2305, /* Array[Prod] */
2341, /* Array[AFormaldef] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AFormaldef = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[E]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_array__AbstractArrayparser_nodes__AFormaldef, /* AbstractArray[E]: AbstractArray[AFormaldef] */
&type_array__ArrayIteratorparser_nodes__AFormaldef, /* ArrayIterator[E]: ArrayIterator[AFormaldef] */
}
};
/* runtime type AbstractArrayRead[AFormaldef] */
const struct type type_array__AbstractArrayReadparser_nodes__AFormaldef = {
2193,
"AbstractArrayRead[AFormaldef]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AFormaldef] */
const struct type type_array__AbstractArrayparser_nodes__AFormaldef = {
2296,
"AbstractArray[AFormaldef]", /* class_name_string */
19,
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
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1542, /* Collection[ASuperclass] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2194, /* AbstractArrayRead[ASuperclass] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2297, /* AbstractArray[ASuperclass] */
-1, /* empty */
2305, /* Array[Prod] */
2342, /* Array[ASuperclass] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__ASuperclass = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[E]: NativeArray[ASuperclass] */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[E]: Collection[ASuperclass] */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[E]: Array[ASuperclass] */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[E]: Collection[ASuperclass] */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[E]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[E]: Array[ASuperclass] */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[E]: NativeArray[ASuperclass] */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[E]: Array[ASuperclass] */
&type_array__AbstractArrayparser_nodes__ASuperclass, /* AbstractArray[E]: AbstractArray[ASuperclass] */
&type_array__ArrayIteratorparser_nodes__ASuperclass, /* ArrayIterator[E]: ArrayIterator[ASuperclass] */
}
};
/* runtime type AbstractArrayRead[ASuperclass] */
const struct type type_array__AbstractArrayReadparser_nodes__ASuperclass = {
2194,
"AbstractArrayRead[ASuperclass]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[ASuperclass] */
const struct type type_array__AbstractArrayparser_nodes__ASuperclass = {
2297,
"AbstractArray[ASuperclass]", /* class_name_string */
19,
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
387, /* HashMap2[MModule, MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_mmodule__MModule, /* K1: MModule */
&type_model__MType, /* K2: MType */
&type_array__Arraymodel__MMethodDef, /* V: Array[MMethodDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[K2, V]: HashMap[MType, Array[MMethodDef]] */
}
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
285, /* ArrayIterator[Object] */
1189, /* ArrayIterator[MParameter] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MParameter = {
0, /* dummy */
{
&type_array__Arraymodel__MParameter, /* Array[E]: Array[MParameter] */
&type_array__AbstractArrayReadmodel__MParameter, /* AbstractArrayRead[E]: AbstractArrayRead[MParameter] */
}
};
/* runtime type NativeArray[MParameter] */
const struct type type_array__NativeArraymodel__MParameter = {
1190,
"NativeArray[MParameter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymodel__MParameter,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1190, /* NativeArray[MParameter] */
},
};
const struct types resolution_table_array__NativeArraymodel__MParameter = {
0, /* dummy */
{
&type_model__MParameter, /* E: MParameter */
&type_array__NativeArraymodel__MParameter, /* NativeArray[E]: NativeArray[MParameter] */
}
};
/* runtime type Array[Scope] */
const struct type type_array__Arrayscope__Scope = {
-1, /*CAST DEAD*/
"Array[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayscope__Scope,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1049, /* Collection[Scope] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1858, /* AbstractArrayRead[Scope] */
1512, /* AbstractArray[Object] */
2135, /* AbstractArray[Scope] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2231, /* Array[Scope] */
},
};
const struct types resolution_table_array__Arrayscope__Scope = {
0, /* dummy */
{
&type_array__NativeArrayscope__Scope, /* NativeArray[E]: NativeArray[Scope] */
&type_scope__Scope, /* E: Scope */
&type_scope__Scope, /* E: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[E]: Collection[Scope] */
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_scope__Scope, /* E: Scope */
&type_scope__Scope, /* E: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[E]: Collection[Scope] */
&type_abstract_collection__Collectionscope__Scope, /* Collection[E]: Collection[Scope] */
&type_scope__Scope, /* E: Scope */
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_array__NativeArrayscope__Scope, /* NativeArray[E]: NativeArray[Scope] */
&type_scope__Scope, /* E: Scope */
&type_scope__Scope, /* E: Scope */
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_array__AbstractArrayscope__Scope, /* AbstractArray[E]: AbstractArray[Scope] */
&type_array__ArrayIteratorscope__Scope, /* ArrayIterator[E]: ArrayIterator[Scope] */
}
};
/* runtime type AbstractArrayRead[Scope] */
const struct type type_array__AbstractArrayReadscope__Scope = {
1858,
"AbstractArrayRead[Scope]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Scope] */
const struct type type_array__AbstractArrayscope__Scope = {
2135,
"AbstractArray[Scope]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ListNode[Scope] */
const struct type type_list__ListNodescope__Scope = {
1859,
"ListNode[Scope]", /* class_name_string */
7,
0,
&resolution_table_list__ListNodescope__Scope,
8,
{
0, /* nullable Object */
1, /* Object */
48, /* nullable ListNode[Scope] */
-1, /* empty */
83, /* Collection[Object] */
1049, /* Collection[Scope] */
1443, /* Container[Scope] */
1859, /* ListNode[Scope] */
},
};
const struct types resolution_table_list__ListNodescope__Scope = {
0, /* dummy */
{
&type_nullable_list__ListNodescope__Scope, /* nullable ListNode[E]: nullable ListNode[Scope] */
&type_scope__Scope, /* E: Scope */
&type_scope__Scope, /* E: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[E]: Collection[Scope] */
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_abstract_collection__ContainerIteratorscope__Scope, /* ContainerIterator[E]: ContainerIterator[Scope] */
&type_scope__Scope, /* E: Scope */
}
};
/* runtime type nullable ListNode[Scope] */
const struct type type_nullable_list__ListNodescope__Scope = {
48,
"nullable ListNode[Scope]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Container[Scope] */
const struct type type_abstract_collection__Containerscope__Scope = {
1443,
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
388, /* ListIterator[Scope] */
},
};
const struct types resolution_table_list__ListIteratorscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_list__Listscope__Scope, /* List[E]: List[Scope] */
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
285, /* ArrayIterator[Object] */
1191, /* ArrayIterator[FlowContext] */
},
};
const struct types resolution_table_array__ArrayIteratorflow__FlowContext = {
0, /* dummy */
{
&type_array__Arrayflow__FlowContext, /* Array[E]: Array[FlowContext] */
&type_array__AbstractArrayReadflow__FlowContext, /* AbstractArrayRead[E]: AbstractArrayRead[FlowContext] */
}
};
/* runtime type NativeArray[FlowContext] */
const struct type type_array__NativeArrayflow__FlowContext = {
1192,
"NativeArray[FlowContext]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1192, /* NativeArray[FlowContext] */
},
};
const struct types resolution_table_array__NativeArrayflow__FlowContext = {
0, /* dummy */
{
&type_flow__FlowContext, /* E: FlowContext */
&type_array__NativeArrayflow__FlowContext, /* NativeArray[E]: NativeArray[FlowContext] */
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
290, /* HashSetIterator[Object] */
1193, /* HashSetIterator[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorscope__Variable = {
0, /* dummy */
{
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
&type_hash_collection__HashSetscope__Variable, /* HashSet[E]: HashSet[Variable] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
1194,
"NativeArray[nullable HashSetNode[Variable]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
291, /* NativeArray[nullable HashSetNode[Object]] */
1194, /* NativeArray[nullable HashSetNode[Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodescope__Variable, /* E: nullable HashSetNode[Variable] */
&type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable, /* NativeArray[E]: NativeArray[nullable HashSetNode[Variable]] */
}
};
/* runtime type HashSetNode[Variable] */
const struct type type_hash_collection__HashSetNodescope__Variable = {
1616,
"HashSetNode[Variable]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodescope__Variable,
6,
{
0, /* nullable Object */
1, /* Object */
17, /* nullable HashSetNode[Object] */
389, /* nullable HashSetNode[Variable] */
1069, /* HashSetNode[Object] */
1616, /* HashSetNode[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* E: Variable */
NULL, /* empty */
&type_scope__Variable, /* K: Variable */
}
};
/* runtime type nullable HashSetNode[Variable] */
const struct type type_nullable_hash_collection__HashSetNodescope__Variable = {
389,
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
285, /* ArrayIterator[Object] */
1195, /* ArrayIterator[CallSite] */
},
};
const struct types resolution_table_array__ArrayIteratortyping__CallSite = {
0, /* dummy */
{
&type_array__Arraytyping__CallSite, /* Array[E]: Array[CallSite] */
&type_array__AbstractArrayReadtyping__CallSite, /* AbstractArrayRead[E]: AbstractArrayRead[CallSite] */
}
};
/* runtime type NativeArray[CallSite] */
const struct type type_array__NativeArraytyping__CallSite = {
1196,
"NativeArray[CallSite]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraytyping__CallSite,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1196, /* NativeArray[CallSite] */
},
};
const struct types resolution_table_array__NativeArraytyping__CallSite = {
0, /* dummy */
{
&type_typing__CallSite, /* E: CallSite */
&type_array__NativeArraytyping__CallSite, /* NativeArray[E]: NativeArray[CallSite] */
}
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
390,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
390, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, POSetElement[MClass]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_model__MClass, /* K: MClass */
&type_poset__POSetElementmodel__MClass, /* V: POSetElement[MClass] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, POSetElement[MClass]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* nullable N: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* N: HashMapNode[MClass, POSetElement[MClass]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type POSetElement[MClass] */
const struct type type_poset__POSetElementmodel__MClass = {
391,
"POSetElement[MClass]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
391, /* POSetElement[MClass] */
},
};
const struct types resolution_table_poset__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClass, /* HashSet[E]: HashSet[MClass] */
&type_poset__POSetmodel__MClass, /* POSet[E]: POSet[MClass] */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapKeys[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType,
13,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1617, /* HashMapKeys[MType, Set[MType]] */
-1, /* empty */
-1, /* empty */
1519, /* Collection[MClassType] */
2067, /* HashMapKeys[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MClassType, Set[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapKeysIterator[K, V]: MapKeysIterator[MClassType, Set[MType]] */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* E: MClassType */
}
};
/* runtime type HashMapKeys[MType, Set[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1617, /* HashMapKeys[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MType, Set[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapKeysIterator[K, V]: MapKeysIterator[MType, Set[MType]] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1134, /* Collection[Set[MType]] */
1444, /* HashMapValues[MType, Set[MType]] */
1618, /* HashMapValues[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MClassType, Set[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapValuesIterator[K, V]: MapValuesIterator[MClassType, Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[E]: Collection[Set[MType]] */
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
}
};
/* runtime type HashMapValues[MType, Set[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1134, /* Collection[Set[MType]] */
1444, /* HashMapValues[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MType, Set[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapValuesIterator[K, V]: MapValuesIterator[MType, Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[E]: Collection[Set[MType]] */
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
1197,
"NativeArray[nullable HashMapNode[MClassType, Set[MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
392, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
1197, /* NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* E: nullable HashMapNode[MClassType, Set[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Set[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
392,
"NativeArray[nullable HashMapNode[MType, Set[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
392, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* E: nullable HashMapNode[MType, Set[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Set[MType]]] */
}
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
393, /* MapIterator[MType, Set[MType]] */
1198, /* HashMapIterator[MType, Set[MType]] */
1199, /* MapIterator[MClassType, Set[MType]] */
1619, /* HashMapIterator[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MClassType, Set[MType]] */
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
393, /* MapIterator[MType, Set[MType]] */
1198, /* HashMapIterator[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType, /* HashMap[K, V]: HashMap[MType, Set[MType]] */
}
};
/* runtime type MapIterator[MClassType, Set[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
1199,
"MapIterator[MClassType, Set[MType]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MType, Set[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
393,
"MapIterator[MType, Set[MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
1620,
"HashMapNode[MClassType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
49, /* nullable HashMapNode[MType, Set[MType]] */
394, /* nullable HashMapNode[MClassType, Set[MType]] */
1200, /* HashMapNode[MType, Set[MType]] */
1620, /* HashMapNode[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MClassType, /* K: MClassType */
&type_abstract_collection__Setmodel__MType, /* V: Set[MType] */
&type_model__MClassType, /* K: MClassType */
}
};
/* runtime type HashMapNode[MType, Set[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
1200,
"HashMapNode[MType, Set[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
49, /* nullable HashMapNode[MType, Set[MType]] */
-1, /* empty */
1200, /* HashMapNode[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* K: MType */
&type_abstract_collection__Setmodel__MType, /* V: Set[MType] */
&type_model__MType, /* K: MType */
}
};
/* runtime type nullable HashMapNode[MClassType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
394,
"nullable HashMapNode[MClassType, Set[MType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
49,
"nullable HashMapNode[MType, Set[MType]]", /* class_name_string */
2,
1,
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
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1621, /* HashMapKeys[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[K, V]: HashMap[MType, Int] */
&type_abstract_collection__MapKeysIteratormodel__MTypekernel__Int, /* MapKeysIterator[K, V]: MapKeysIterator[MType, Int] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MType, Int] */
const struct type type_hash_collection__HashMapValuesmodel__MTypekernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[MType, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypekernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
620, /* Collection[Int] */
1445, /* HashMapValues[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[K, V]: HashMap[MType, Int] */
&type_abstract_collection__MapValuesIteratormodel__MTypekernel__Int, /* MapValuesIterator[K, V]: MapValuesIterator[MType, Int] */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* E: Int */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
395,
"NativeArray[nullable HashMapNode[MType, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
395, /* NativeArray[nullable HashMapNode[MType, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int, /* E: nullable HashMapNode[MType, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Int]] */
}
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
396, /* MapIterator[MType, Int] */
1201, /* HashMapIterator[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[K, V]: HashMap[MType, Int] */
}
};
/* runtime type MapIterator[MType, Int] */
const struct type type_abstract_collection__MapIteratormodel__MTypekernel__Int = {
396,
"MapIterator[MType, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MType, Int] */
const struct type type_hash_collection__HashMapNodemodel__MTypekernel__Int = {
1202,
"HashMapNode[MType, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
50, /* nullable HashMapNode[MType, Int] */
1202, /* HashMapNode[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_model__MType, /* K: MType */
&type_kernel__Int, /* V: Int */
&type_model__MType, /* K: MType */
}
};
/* runtime type nullable HashMapNode[MType, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
50,
"nullable HashMapNode[MType, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
91, /* Collection[nullable MClass] */
-1, /* empty */
83, /* Collection[Object] */
1366, /* Collection[MClass] */
1622, /* HashMapKeys[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[K, V]: HashMap[MClass, Array[nullable MClass]] */
&type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MClass, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, Array[nullable MClass]] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, Array[nullable MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1087, /* Collection[Array[nullable MClass]] */
1446, /* HashMapValues[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[K, V]: HashMap[MClass, Array[nullable MClass]] */
&type_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MClass, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, Array[nullable MClass]] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MClass, /* Collection[E]: Collection[Array[nullable MClass]] */
&type_array__Arrayarray__Arraynullable_model__MClass, /* Array[E]: Array[Array[nullable MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
397,
"NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
397, /* NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* E: nullable HashMapNode[MClass, Array[nullable MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
}
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
398, /* MapIterator[MClass, Array[nullable MClass]] */
1203, /* HashMapIterator[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass, /* HashMap[K, V]: HashMap[MClass, Array[nullable MClass]] */
}
};
/* runtime type MapIterator[MClass, Array[nullable MClass]] */
const struct type type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MClass = {
398,
"MapIterator[MClass, Array[nullable MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
1204,
"HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
51, /* nullable HashMapNode[MClass, Array[nullable MClass]] */
1204, /* HashMapNode[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_model__MClass, /* K: MClass */
&type_array__Arraynullable_model__MClass, /* V: Array[nullable MClass] */
&type_model__MClass, /* K: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Array[nullable MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
51,
"nullable HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AExternCodeBlock] */
const struct type type_array__Arrayparser_nodes__AExternCodeBlock = {
-1, /*CAST DEAD*/
"Array[AExternCodeBlock]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AExternCodeBlock,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1546, /* Collection[AExternCodeBlock] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2195, /* AbstractArrayRead[AExternCodeBlock] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2298, /* AbstractArray[AExternCodeBlock] */
-1, /* empty */
2305, /* Array[Prod] */
2343, /* Array[AExternCodeBlock] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AExternCodeBlock = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AExternCodeBlock, /* NativeArray[E]: NativeArray[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_abstract_collection__Collectionparser_nodes__AExternCodeBlock, /* Collection[E]: Collection[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_array__NativeArrayparser_nodes__AExternCodeBlock, /* NativeArray[E]: NativeArray[AExternCodeBlock] */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_parser_nodes__AExternCodeBlock, /* E: AExternCodeBlock */
&type_array__Arrayparser_nodes__AExternCodeBlock, /* Array[E]: Array[AExternCodeBlock] */
&type_array__AbstractArrayparser_nodes__AExternCodeBlock, /* AbstractArray[E]: AbstractArray[AExternCodeBlock] */
&type_array__ArrayIteratorparser_nodes__AExternCodeBlock, /* ArrayIterator[E]: ArrayIterator[AExternCodeBlock] */
}
};
/* runtime type AbstractArrayRead[AExternCodeBlock] */
const struct type type_array__AbstractArrayReadparser_nodes__AExternCodeBlock = {
2195,
"AbstractArrayRead[AExternCodeBlock]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AExternCodeBlock] */
const struct type type_array__AbstractArrayparser_nodes__AExternCodeBlock = {
2298,
"AbstractArray[AExternCodeBlock]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClass, AClassdef] */
const struct type type_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
83, /* Collection[Object] */
1366, /* Collection[MClass] */
1623, /* HashMapKeys[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
&type_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AClassdef, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, AClassdef] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, AClassdef] */
const struct type type_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1351, /* Collection[Prod] */
-1, /* empty */
1529, /* Collection[AClassdef] */
1860, /* HashMapValues[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
&type_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AClassdef, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, AClassdef] */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[E]: Collection[AClassdef] */
&type_array__Arrayparser_nodes__AClassdef, /* Array[E]: Array[AClassdef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* E: AClassdef */
}
};
/* runtime type NativeArray[nullable HashMapNode[MClass, AClassdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
399,
"NativeArray[nullable HashMapNode[MClass, AClassdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
399, /* NativeArray[nullable HashMapNode[MClass, AClassdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* E: nullable HashMapNode[MClass, AClassdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, AClassdef]] */
}
};
/* runtime type HashMapIterator[MClass, AClassdef] */
const struct type type_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
400, /* MapIterator[MClass, AClassdef] */
1205, /* HashMapIterator[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[K, V]: HashMap[MClass, AClassdef] */
}
};
/* runtime type MapIterator[MClass, AClassdef] */
const struct type type_abstract_collection__MapIteratormodel__MClassparser_nodes__AClassdef = {
400,
"MapIterator[MClass, AClassdef]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, AClassdef] */
const struct type type_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
1206,
"HashMapNode[MClass, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
52, /* nullable HashMapNode[MClass, AClassdef] */
1206, /* HashMapNode[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_model__MClass, /* K: MClass */
&type_parser_nodes__AClassdef, /* V: AClassdef */
&type_model__MClass, /* K: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, AClassdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
52,
"nullable HashMapNode[MClass, AClassdef]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AParam] */
const struct type type_array__Arrayparser_nodes__AParam = {
-1, /*CAST DEAD*/
"Array[AParam]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AParam,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1550, /* Collection[AParam] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2196, /* AbstractArrayRead[AParam] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2299, /* AbstractArray[AParam] */
-1, /* empty */
2305, /* Array[Prod] */
2344, /* Array[AParam] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AParam = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AParam, /* NativeArray[E]: NativeArray[AParam] */
&type_parser_nodes__AParam, /* E: AParam */
&type_parser_nodes__AParam, /* E: AParam */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[E]: Collection[AParam] */
&type_array__Arrayparser_nodes__AParam, /* Array[E]: Array[AParam] */
&type_parser_nodes__AParam, /* E: AParam */
&type_parser_nodes__AParam, /* E: AParam */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[E]: Collection[AParam] */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[E]: Collection[AParam] */
&type_parser_nodes__AParam, /* E: AParam */
&type_array__Arrayparser_nodes__AParam, /* Array[E]: Array[AParam] */
&type_array__NativeArrayparser_nodes__AParam, /* NativeArray[E]: NativeArray[AParam] */
&type_parser_nodes__AParam, /* E: AParam */
&type_parser_nodes__AParam, /* E: AParam */
&type_array__Arrayparser_nodes__AParam, /* Array[E]: Array[AParam] */
&type_array__AbstractArrayparser_nodes__AParam, /* AbstractArray[E]: AbstractArray[AParam] */
&type_array__ArrayIteratorparser_nodes__AParam, /* ArrayIterator[E]: ArrayIterator[AParam] */
}
};
/* runtime type AbstractArrayRead[AParam] */
const struct type type_array__AbstractArrayReadparser_nodes__AParam = {
2196,
"AbstractArrayRead[AParam]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AParam] */
const struct type type_array__AbstractArrayparser_nodes__AParam = {
2299,
"AbstractArray[AParam]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AExternCall] */
const struct type type_array__Arrayparser_nodes__AExternCall = {
-1, /*CAST DEAD*/
"Array[AExternCall]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AExternCall,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1552, /* Collection[AExternCall] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2197, /* AbstractArrayRead[AExternCall] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2300, /* AbstractArray[AExternCall] */
-1, /* empty */
2305, /* Array[Prod] */
2345, /* Array[AExternCall] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AExternCall = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AExternCall, /* NativeArray[E]: NativeArray[AExternCall] */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_array__Arrayparser_nodes__AExternCall, /* Array[E]: Array[AExternCall] */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[E]: Collection[AExternCall] */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_array__Arrayparser_nodes__AExternCall, /* Array[E]: Array[AExternCall] */
&type_array__NativeArrayparser_nodes__AExternCall, /* NativeArray[E]: NativeArray[AExternCall] */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_parser_nodes__AExternCall, /* E: AExternCall */
&type_array__Arrayparser_nodes__AExternCall, /* Array[E]: Array[AExternCall] */
&type_array__AbstractArrayparser_nodes__AExternCall, /* AbstractArray[E]: AbstractArray[AExternCall] */
&type_array__ArrayIteratorparser_nodes__AExternCall, /* ArrayIterator[E]: ArrayIterator[AExternCall] */
}
};
/* runtime type AbstractArrayRead[AExternCall] */
const struct type type_array__AbstractArrayReadparser_nodes__AExternCall = {
2197,
"AbstractArrayRead[AExternCall]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AExternCall] */
const struct type type_array__AbstractArrayparser_nodes__AExternCall = {
2300,
"AbstractArray[AExternCall]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[AType] */
const struct type type_array__Arrayparser_nodes__AType = {
-1, /*CAST DEAD*/
"Array[AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AType,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
1351, /* Collection[Prod] */
1345, /* AbstractArrayRead[Object] */
1553, /* Collection[AType] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2198, /* AbstractArrayRead[AType] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2301, /* AbstractArray[AType] */
-1, /* empty */
2305, /* Array[Prod] */
2346, /* Array[AType] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AType = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AType, /* NativeArray[E]: NativeArray[AType] */
&type_parser_nodes__AType, /* E: AType */
&type_parser_nodes__AType, /* E: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[E]: Collection[AType] */
&type_array__Arrayparser_nodes__AType, /* Array[E]: Array[AType] */
&type_parser_nodes__AType, /* E: AType */
&type_parser_nodes__AType, /* E: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[E]: Collection[AType] */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[E]: Collection[AType] */
&type_parser_nodes__AType, /* E: AType */
&type_array__Arrayparser_nodes__AType, /* Array[E]: Array[AType] */
&type_array__NativeArrayparser_nodes__AType, /* NativeArray[E]: NativeArray[AType] */
&type_parser_nodes__AType, /* E: AType */
&type_parser_nodes__AType, /* E: AType */
&type_array__Arrayparser_nodes__AType, /* Array[E]: Array[AType] */
&type_array__AbstractArrayparser_nodes__AType, /* AbstractArray[E]: AbstractArray[AType] */
&type_array__ArrayIteratorparser_nodes__AType, /* ArrayIterator[E]: ArrayIterator[AType] */
}
};
/* runtime type AbstractArrayRead[AType] */
const struct type type_array__AbstractArrayReadparser_nodes__AType = {
2198,
"AbstractArrayRead[AType]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AType] */
const struct type type_array__AbstractArrayparser_nodes__AType = {
2301,
"AbstractArray[AType]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[String, Variable] */
const struct type type_hash_collection__HashMapKeysstring__Stringscope__Variable = {
-1, /*CAST DEAD*/
"HashMapKeys[String, Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringscope__Variable,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
-1, /* empty */
1346, /* Collection[Text] */
-1, /* empty */
1513, /* Collection[String] */
1861, /* HashMapKeys[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
&type_abstract_collection__MapKeysIteratorstring__Stringscope__Variable, /* MapKeysIterator[K, V]: MapKeysIterator[String, Variable] */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* E: String */
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
83, /* Collection[Object] */
1051, /* Collection[Variable] */
1447, /* HashMapValues[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
&type_abstract_collection__MapValuesIteratorstring__Stringscope__Variable, /* MapValuesIterator[K, V]: MapValuesIterator[String, Variable] */
&type_scope__Variable, /* E: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[E]: Collection[Variable] */
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* E: Variable */
}
};
/* runtime type NativeArray[nullable HashMapNode[String, Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
401,
"NativeArray[nullable HashMapNode[String, Variable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable,
3,
{
0, /* nullable Object */
1, /* Object */
401, /* NativeArray[nullable HashMapNode[String, Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* E: nullable HashMapNode[String, Variable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Variable]] */
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
402, /* MapIterator[String, Variable] */
1207, /* HashMapIterator[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorstring__Stringscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashMapstring__Stringscope__Variable, /* HashMap[K, V]: HashMap[String, Variable] */
}
};
/* runtime type MapIterator[String, Variable] */
const struct type type_abstract_collection__MapIteratorstring__Stringscope__Variable = {
402,
"MapIterator[String, Variable]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[String, Variable] */
const struct type type_hash_collection__HashMapNodestring__Stringscope__Variable = {
1208,
"HashMapNode[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
53, /* nullable HashMapNode[String, Variable] */
1208, /* HashMapNode[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_string__String, /* K: String */
&type_scope__Variable, /* V: Variable */
&type_string__String, /* K: String */
}
};
/* runtime type nullable HashMapNode[String, Variable] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
53,
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
83, /* Collection[Object] */
1051, /* Collection[Variable] */
1448, /* HashMapKeys[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
&type_abstract_collection__MapKeysIteratorscope__Variablenullable_model__MType, /* MapKeysIterator[K, V]: MapKeysIterator[Variable, nullable MType] */
&type_scope__Variable, /* E: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[E]: Collection[Variable] */
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* E: Variable */
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
1209, /* HashMapValues[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
&type_abstract_collection__MapValuesIteratorscope__Variablenullable_model__MType, /* MapValuesIterator[K, V]: MapValuesIterator[Variable, nullable MType] */
&type_nullable_model__MType, /* E: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[E]: Collection[nullable MType] */
&type_array__Arraynullable_model__MType, /* Array[E]: Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_model__MType, /* E: nullable MType */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable MType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
403,
"NativeArray[nullable HashMapNode[Variable, nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
403, /* NativeArray[nullable HashMapNode[Variable, nullable MType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* E: nullable HashMapNode[Variable, nullable MType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, nullable MType]] */
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
404, /* MapIterator[Variable, nullable MType] */
1210, /* HashMapIterator[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable MType] */
}
};
/* runtime type MapIterator[Variable, nullable MType] */
const struct type type_abstract_collection__MapIteratorscope__Variablenullable_model__MType = {
404,
"MapIterator[Variable, nullable MType]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, nullable MType] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
1211,
"HashMapNode[Variable, nullable MType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
54, /* nullable HashMapNode[Variable, nullable MType] */
1211, /* HashMapNode[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* K: Variable */
&type_nullable_model__MType, /* V: nullable MType */
&type_scope__Variable, /* K: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable MType] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
54,
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
83, /* Collection[Object] */
1051, /* Collection[Variable] */
1449, /* HashMapKeys[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
&type_abstract_collection__MapKeysIteratorscope__Variablenullable_array__Arraynullable_model__MType, /* MapKeysIterator[K, V]: MapKeysIterator[Variable, nullable Array[nullable MType]] */
&type_scope__Variable, /* E: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[E]: Collection[Variable] */
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* E: Variable */
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
351, /* Collection[nullable Array[nullable MType]] */
1212, /* HashMapValues[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
&type_abstract_collection__MapValuesIteratorscope__Variablenullable_array__Arraynullable_model__MType, /* MapValuesIterator[K, V]: MapValuesIterator[Variable, nullable Array[nullable MType]] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_array__Arraynullable_array__Arraynullable_model__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
405,
"NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
405, /* NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* E: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
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
406, /* MapIterator[Variable, nullable Array[nullable MType]] */
1213, /* HashMapIterator[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType, /* HashMap[K, V]: HashMap[Variable, nullable Array[nullable MType]] */
}
};
/* runtime type MapIterator[Variable, nullable Array[nullable MType]] */
const struct type type_abstract_collection__MapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
406,
"MapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
1214,
"HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
55, /* nullable HashMapNode[Variable, nullable Array[nullable MType]] */
1214, /* HashMapNode[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* K: Variable */
&type_nullable_array__Arraynullable_model__MType, /* V: nullable Array[nullable MType] */
&type_scope__Variable, /* K: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
55,
"nullable HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MAttributeDef] */
const struct type type_array__Arraymodel__MAttributeDef = {
2361,
"Array[MAttributeDef]", /* class_name_string */
24,
0,
&resolution_table_array__Arraymodel__MAttributeDef,
25,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
110, /* Collection[nullable MPropDef] */
590, /* Array[nullable Object] */
605, /* Collection[PropertyLayoutElement] */
1345, /* AbstractArrayRead[Object] */
1375, /* AbstractArrayRead[nullable MPropDef] */
1512, /* AbstractArray[Object] */
1524, /* Collection[MPropDef] */
1525, /* AbstractArray[nullable MPropDef] */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1862, /* Collection[MAttributeDef] */
1909, /* Array[Object] */
1913, /* Array[nullable MPropDef] */
2081, /* AbstractArray[PropertyLayoutElement] */
2182, /* AbstractArrayRead[MPropDef] */
2208, /* Array[PropertyLayoutElement] */
2278, /* AbstractArrayRead[MAttributeDef] */
2286, /* AbstractArray[MPropDef] */
2331, /* AbstractArray[MAttributeDef] */
2336, /* Array[MPropDef] */
2361, /* Array[MAttributeDef] */
},
};
const struct types resolution_table_array__Arraymodel__MAttributeDef = {
0, /* dummy */
{
&type_array__NativeArraymodel__MAttributeDef, /* NativeArray[E]: NativeArray[MAttributeDef] */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_array__Arraymodel__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[E]: Collection[MAttributeDef] */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_array__Arraymodel__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_array__NativeArraymodel__MAttributeDef, /* NativeArray[E]: NativeArray[MAttributeDef] */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_model__MAttributeDef, /* E: MAttributeDef */
&type_array__Arraymodel__MAttributeDef, /* Array[E]: Array[MAttributeDef] */
&type_array__AbstractArraymodel__MAttributeDef, /* AbstractArray[E]: AbstractArray[MAttributeDef] */
&type_array__ArrayIteratormodel__MAttributeDef, /* ArrayIterator[E]: ArrayIterator[MAttributeDef] */
}
};
/* runtime type Collection[MAttributeDef] */
const struct type type_abstract_collection__Collectionmodel__MAttributeDef = {
1862,
"Collection[MAttributeDef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MAttributeDef] */
const struct type type_array__AbstractArrayReadmodel__MAttributeDef = {
2278,
"AbstractArrayRead[MAttributeDef]", /* class_name_string */
20,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MAttributeDef] */
const struct type type_array__AbstractArraymodel__MAttributeDef = {
2331,
"AbstractArray[MAttributeDef]", /* class_name_string */
22,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap2[MModule, MType, Array[MAttributeDef]] */
const struct type type_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MAttributeDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MAttributeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MAttributeDef,
3,
{
0, /* nullable Object */
1, /* Object */
407, /* HashMap2[MModule, MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MAttributeDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MAttributeDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_mmodule__MModule, /* K1: MModule */
&type_model__MType, /* K2: MType */
&type_array__Arraymodel__MAttributeDef, /* V: Array[MAttributeDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MAttributeDef, /* HashMap[K2, V]: HashMap[MType, Array[MAttributeDef]] */
}
};
/* runtime type Array[MVirtualTypeDef] */
const struct type type_array__Arraymodel__MVirtualTypeDef = {
2362,
"Array[MVirtualTypeDef]", /* class_name_string */
24,
0,
&resolution_table_array__Arraymodel__MVirtualTypeDef,
25,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
110, /* Collection[nullable MPropDef] */
590, /* Array[nullable Object] */
605, /* Collection[PropertyLayoutElement] */
1345, /* AbstractArrayRead[Object] */
1375, /* AbstractArrayRead[nullable MPropDef] */
1512, /* AbstractArray[Object] */
1524, /* Collection[MPropDef] */
1525, /* AbstractArray[nullable MPropDef] */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1863, /* Collection[MVirtualTypeDef] */
1909, /* Array[Object] */
1913, /* Array[nullable MPropDef] */
2081, /* AbstractArray[PropertyLayoutElement] */
2182, /* AbstractArrayRead[MPropDef] */
2208, /* Array[PropertyLayoutElement] */
2279, /* AbstractArrayRead[MVirtualTypeDef] */
2286, /* AbstractArray[MPropDef] */
2332, /* AbstractArray[MVirtualTypeDef] */
2336, /* Array[MPropDef] */
2362, /* Array[MVirtualTypeDef] */
},
};
const struct types resolution_table_array__Arraymodel__MVirtualTypeDef = {
0, /* dummy */
{
&type_array__NativeArraymodel__MVirtualTypeDef, /* NativeArray[E]: NativeArray[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_array__Arraymodel__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[E]: Collection[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_array__Arraymodel__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_array__NativeArraymodel__MVirtualTypeDef, /* NativeArray[E]: NativeArray[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_array__Arraymodel__MVirtualTypeDef, /* Array[E]: Array[MVirtualTypeDef] */
&type_array__AbstractArraymodel__MVirtualTypeDef, /* AbstractArray[E]: AbstractArray[MVirtualTypeDef] */
&type_array__ArrayIteratormodel__MVirtualTypeDef, /* ArrayIterator[E]: ArrayIterator[MVirtualTypeDef] */
}
};
/* runtime type Collection[MVirtualTypeDef] */
const struct type type_abstract_collection__Collectionmodel__MVirtualTypeDef = {
1863,
"Collection[MVirtualTypeDef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MVirtualTypeDef] */
const struct type type_array__AbstractArrayReadmodel__MVirtualTypeDef = {
2279,
"AbstractArrayRead[MVirtualTypeDef]", /* class_name_string */
20,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MVirtualTypeDef] */
const struct type type_array__AbstractArraymodel__MVirtualTypeDef = {
2332,
"AbstractArray[MVirtualTypeDef]", /* class_name_string */
22,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
const struct type type_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef = {
-1, /*CAST DEAD*/
"HashMap2[MModule, MType, Array[MVirtualTypeDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef,
3,
{
0, /* nullable Object */
1, /* Object */
408, /* HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2mmodule__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MVirtualTypeDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_mmodule__MModule, /* K1: MModule */
&type_model__MType, /* K2: MType */
&type_array__Arraymodel__MVirtualTypeDef, /* V: Array[MVirtualTypeDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MVirtualTypeDef, /* HashMap[K2, V]: HashMap[MType, Array[MVirtualTypeDef]] */
}
};
/* runtime type ArrayIterator[MVirtualType] */
const struct type type_array__ArrayIteratormodel__MVirtualType = {
-1, /*CAST DEAD*/
"ArrayIterator[MVirtualType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MVirtualType,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
330, /* ArrayIterator[nullable MType] */
1407, /* ArrayIterator[MType] */
1624, /* ArrayIterator[MVirtualType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MVirtualType = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualType, /* Array[E]: Array[MVirtualType] */
&type_array__AbstractArrayReadmodel__MVirtualType, /* AbstractArrayRead[E]: AbstractArrayRead[MVirtualType] */
}
};
/* runtime type NativeArray[MVirtualType] */
const struct type type_array__NativeArraymodel__MVirtualType = {
1625,
"NativeArray[MVirtualType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MVirtualType,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
331, /* NativeArray[nullable MType] */
1408, /* NativeArray[MType] */
1625, /* NativeArray[MVirtualType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MVirtualType = {
0, /* dummy */
{
&type_model__MVirtualType, /* E: MVirtualType */
&type_array__NativeArraymodel__MVirtualType, /* NativeArray[E]: NativeArray[MVirtualType] */
}
};
/* runtime type ArrayIterator[AExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AExpr,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1626, /* ArrayIterator[AExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AExpr = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AExpr, /* Array[E]: Array[AExpr] */
&type_array__AbstractArrayReadparser_nodes__AExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AExpr] */
}
};
/* runtime type NativeArray[AExpr] */
const struct type type_array__NativeArrayparser_nodes__AExpr = {
1627,
"NativeArray[AExpr]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AExpr,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1627, /* NativeArray[AExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AExpr = {
0, /* dummy */
{
&type_parser_nodes__AExpr, /* E: AExpr */
&type_array__NativeArrayparser_nodes__AExpr, /* NativeArray[E]: NativeArray[AExpr] */
}
};
/* runtime type ArrayIterator[AVarExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AVarExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AVarExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AVarExpr,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1626, /* ArrayIterator[AExpr] */
1864, /* ArrayIterator[AVarExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AVarExpr = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AVarExpr, /* Array[E]: Array[AVarExpr] */
&type_array__AbstractArrayReadparser_nodes__AVarExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AVarExpr] */
}
};
/* runtime type NativeArray[AVarExpr] */
const struct type type_array__NativeArrayparser_nodes__AVarExpr = {
1865,
"NativeArray[AVarExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AVarExpr,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1627, /* NativeArray[AExpr] */
1865, /* NativeArray[AVarExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AVarExpr = {
0, /* dummy */
{
&type_parser_nodes__AVarExpr, /* E: AVarExpr */
&type_array__NativeArrayparser_nodes__AVarExpr, /* NativeArray[E]: NativeArray[AVarExpr] */
}
};
/* runtime type ArrayIterator[AIntExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AIntExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AIntExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AIntExpr,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1626, /* ArrayIterator[AExpr] */
1866, /* ArrayIterator[AIntExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AIntExpr = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AIntExpr, /* Array[E]: Array[AIntExpr] */
&type_array__AbstractArrayReadparser_nodes__AIntExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AIntExpr] */
}
};
/* runtime type NativeArray[AIntExpr] */
const struct type type_array__NativeArrayparser_nodes__AIntExpr = {
1867,
"NativeArray[AIntExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AIntExpr,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1627, /* NativeArray[AExpr] */
1867, /* NativeArray[AIntExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AIntExpr = {
0, /* dummy */
{
&type_parser_nodes__AIntExpr, /* E: AIntExpr */
&type_array__NativeArrayparser_nodes__AIntExpr, /* NativeArray[E]: NativeArray[AIntExpr] */
}
};
/* runtime type ArrayIterator[Variable] */
const struct type type_array__ArrayIteratorscope__Variable = {
-1, /*CAST DEAD*/
"ArrayIterator[Variable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1215, /* ArrayIterator[Variable] */
},
};
const struct types resolution_table_array__ArrayIteratorscope__Variable = {
0, /* dummy */
{
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
&type_array__AbstractArrayReadscope__Variable, /* AbstractArrayRead[E]: AbstractArrayRead[Variable] */
}
};
/* runtime type NativeArray[Variable] */
const struct type type_array__NativeArrayscope__Variable = {
1216,
"NativeArray[Variable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1216, /* NativeArray[Variable] */
},
};
const struct types resolution_table_array__NativeArrayscope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* E: Variable */
&type_array__NativeArrayscope__Variable, /* NativeArray[E]: NativeArray[Variable] */
}
};
/* runtime type ArraySetIterator[MType] */
const struct type type_array__ArraySetIteratormodel__MType = {
-1, /*CAST DEAD*/
"ArraySetIterator[MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetIteratormodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
409, /* ArraySetIterator[MType] */
},
};
const struct types resolution_table_array__ArraySetIteratormodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_array__ArrayIteratormodel__MType, /* ArrayIterator[E]: ArrayIterator[MType] */
}
};
/* runtime type ArrayIterator[AEscapeExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AEscapeExpr = {
-1, /*CAST DEAD*/
"ArrayIterator[AEscapeExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AEscapeExpr,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1626, /* ArrayIterator[AExpr] */
1868, /* ArrayIterator[AEscapeExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AEscapeExpr = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AEscapeExpr, /* Array[E]: Array[AEscapeExpr] */
&type_array__AbstractArrayReadparser_nodes__AEscapeExpr, /* AbstractArrayRead[E]: AbstractArrayRead[AEscapeExpr] */
}
};
/* runtime type NativeArray[AEscapeExpr] */
const struct type type_array__NativeArrayparser_nodes__AEscapeExpr = {
1869,
"NativeArray[AEscapeExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AEscapeExpr,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1627, /* NativeArray[AExpr] */
1869, /* NativeArray[AEscapeExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AEscapeExpr = {
0, /* dummy */
{
&type_parser_nodes__AEscapeExpr, /* E: AEscapeExpr */
&type_array__NativeArrayparser_nodes__AEscapeExpr, /* NativeArray[E]: NativeArray[AEscapeExpr] */
}
};
/* runtime type ArraySetIterator[MMethodDef] */
const struct type type_array__ArraySetIteratormodel__MMethodDef = {
-1, /*CAST DEAD*/
"ArraySetIterator[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetIteratormodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
410, /* ArraySetIterator[MMethodDef] */
},
};
const struct types resolution_table_array__ArraySetIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_array__ArrayIteratormodel__MMethodDef, /* ArrayIterator[E]: ArrayIterator[MMethodDef] */
}
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
285, /* ArrayIterator[Object] */
1217, /* ArrayIterator[Char] */
},
};
const struct types resolution_table_array__ArrayIteratorkernel__Char = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[E]: Array[Char] */
&type_array__AbstractArrayReadkernel__Char, /* AbstractArrayRead[E]: AbstractArrayRead[Char] */
}
};
/* runtime type NativeArray[Char] */
const struct type type_array__NativeArraykernel__Char = {
1218,
"NativeArray[Char]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraykernel__Char,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1218, /* NativeArray[Char] */
},
};
const struct types resolution_table_array__NativeArraykernel__Char = {
0, /* dummy */
{
&type_kernel__Char, /* E: Char */
&type_array__NativeArraykernel__Char, /* NativeArray[E]: NativeArray[Char] */
}
};
/* runtime type ArrayIterator[FlatBuffer] */
const struct type type_array__ArrayIteratorstring__FlatBuffer = {
-1, /*CAST DEAD*/
"ArrayIterator[FlatBuffer]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorstring__FlatBuffer,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1064, /* ArrayIterator[Streamable] */
1390, /* ArrayIterator[Text] */
1628, /* ArrayIterator[FlatText] */
1870, /* ArrayIterator[FlatBuffer] */
},
};
const struct types resolution_table_array__ArrayIteratorstring__FlatBuffer = {
0, /* dummy */
{
&type_array__Arraystring__FlatBuffer, /* Array[E]: Array[FlatBuffer] */
&type_array__AbstractArrayReadstring__FlatBuffer, /* AbstractArrayRead[E]: AbstractArrayRead[FlatBuffer] */
}
};
/* runtime type ArrayIterator[FlatText] */
const struct type type_array__ArrayIteratorstring__FlatText = {
-1, /*CAST DEAD*/
"ArrayIterator[FlatText]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorstring__FlatText,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1064, /* ArrayIterator[Streamable] */
1390, /* ArrayIterator[Text] */
1628, /* ArrayIterator[FlatText] */
},
};
const struct types resolution_table_array__ArrayIteratorstring__FlatText = {
0, /* dummy */
{
&type_array__Arraystring__FlatText, /* Array[E]: Array[FlatText] */
&type_array__AbstractArrayReadstring__FlatText, /* AbstractArrayRead[E]: AbstractArrayRead[FlatText] */
}
};
/* runtime type NativeArray[FlatBuffer] */
const struct type type_array__NativeArraystring__FlatBuffer = {
1871,
"NativeArray[FlatBuffer]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraystring__FlatBuffer,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
610, /* NativeArray[Streamable] */
1372, /* NativeArray[Text] */
1629, /* NativeArray[FlatText] */
1871, /* NativeArray[FlatBuffer] */
},
};
const struct types resolution_table_array__NativeArraystring__FlatBuffer = {
0, /* dummy */
{
&type_string__FlatBuffer, /* E: FlatBuffer */
&type_array__NativeArraystring__FlatBuffer, /* NativeArray[E]: NativeArray[FlatBuffer] */
}
};
/* runtime type NativeArray[FlatText] */
const struct type type_array__NativeArraystring__FlatText = {
1629,
"NativeArray[FlatText]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraystring__FlatText,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
610, /* NativeArray[Streamable] */
1372, /* NativeArray[Text] */
1629, /* NativeArray[FlatText] */
},
};
const struct types resolution_table_array__NativeArraystring__FlatText = {
0, /* dummy */
{
&type_string__FlatText, /* E: FlatText */
&type_array__NativeArraystring__FlatText, /* NativeArray[E]: NativeArray[FlatText] */
}
};
/* runtime type MapKeysIterator[String, Option] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringopts__Option = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
411, /* MapKeysIterator[String, Option] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringopts__Option = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringopts__Option, /* MapIterator[K, V]: MapIterator[String, Option] */
}
};
/* runtime type MapValuesIterator[String, Option] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringopts__Option = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
412, /* MapValuesIterator[String, Option] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringopts__Option = {
0, /* dummy */
{
&type_array__Arrayopts__Option, /* Array[E]: Array[Option] */
&type_abstract_collection__MapIteratorstring__Stringopts__Option, /* MapIterator[K, V]: MapIterator[String, Option] */
}
};
/* runtime type HashMapKeys[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase = {
-1, /*CAST DEAD*/
"HashMapKeys[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
597, /* Collection[Phase] */
1450, /* HashMapKeys[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
&type_abstract_collection__MapKeysIteratorphase__Phaseposet__POSetElementphase__Phase, /* MapKeysIterator[K, V]: MapKeysIterator[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* E: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_phase__Phase, /* E: Phase */
}
};
/* runtime type HashMapValues[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase = {
-1, /*CAST DEAD*/
"HashMapValues[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1219, /* Collection[POSetElement[Phase]] */
1451, /* HashMapValues[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
&type_abstract_collection__MapValuesIteratorphase__Phaseposet__POSetElementphase__Phase, /* MapValuesIterator[K, V]: MapValuesIterator[Phase, POSetElement[Phase]] */
&type_poset__POSetElementphase__Phase, /* E: POSetElement[Phase] */
&type_abstract_collection__Collectionposet__POSetElementphase__Phase, /* Collection[E]: Collection[POSetElement[Phase]] */
&type_array__Arrayposet__POSetElementphase__Phase, /* Array[E]: Array[POSetElement[Phase]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementphase__Phase, /* E: POSetElement[Phase] */
}
};
/* runtime type Collection[POSetElement[Phase]] */
const struct type type_abstract_collection__Collectionposet__POSetElementphase__Phase = {
1219,
"Collection[POSetElement[Phase]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
413,
"NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase,
3,
{
0, /* nullable Object */
1, /* Object */
413, /* NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* E: nullable HashMapNode[Phase, POSetElement[Phase]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* NativeArray[E]: NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
}
};
/* runtime type HashMapIterator[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase = {
-1, /*CAST DEAD*/
"HashMapIterator[Phase, POSetElement[Phase]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
414, /* MapIterator[Phase, POSetElement[Phase]] */
1220, /* HashMapIterator[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[K, V]: HashMap[Phase, POSetElement[Phase]] */
}
};
/* runtime type MapIterator[Phase, POSetElement[Phase]] */
const struct type type_abstract_collection__MapIteratorphase__Phaseposet__POSetElementphase__Phase = {
414,
"MapIterator[Phase, POSetElement[Phase]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
1221,
"HashMapNode[Phase, POSetElement[Phase]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
56, /* nullable HashMapNode[Phase, POSetElement[Phase]] */
1221, /* HashMapNode[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_phase__Phase, /* K: Phase */
&type_poset__POSetElementphase__Phase, /* V: POSetElement[Phase] */
&type_phase__Phase, /* K: Phase */
}
};
/* runtime type nullable HashMapNode[Phase, POSetElement[Phase]] */
const struct type type_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
56,
"nullable HashMapNode[Phase, POSetElement[Phase]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[Phase] */
const struct type type_hash_collection__HashSetphase__Phase = {
1872,
"HashSet[Phase]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetphase__Phase,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
597, /* Collection[Phase] */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
1872, /* HashSet[Phase] */
},
};
const struct types resolution_table_hash_collection__HashSetphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashSetNodephase__Phase, /* HashSetNode[E]: HashSetNode[Phase] */
&type_hash_collection__HashSetIteratorphase__Phase, /* HashSetIterator[E]: HashSetIterator[Phase] */
&type_phase__Phase, /* E: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_phase__Phase, /* E: Phase */
&type_phase__Phase, /* K: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_phase__Phase, /* E: Phase */
&type_nullable_hash_collection__HashSetNodephase__Phase, /* nullable N: nullable HashSetNode[Phase] */
&type_array__NativeArraynullable_hash_collection__HashSetNodephase__Phase, /* NativeArray[E]: NativeArray[nullable HashSetNode[Phase]] */
&type_hash_collection__HashSetNodephase__Phase, /* N: HashSetNode[Phase] */
&type_nullable_phase__Phase, /* nullable K: nullable Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
}
};
/* runtime type MapKeysIterator[String, Array[MProject]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymproject__MProject,
3,
{
0, /* nullable Object */
1, /* Object */
415, /* MapKeysIterator[String, Array[MProject]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymproject__MProject, /* MapIterator[K, V]: MapIterator[String, Array[MProject]] */
}
};
/* runtime type MapValuesIterator[String, Array[MProject]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymproject__MProject,
3,
{
0, /* nullable Object */
1, /* Object */
416, /* MapValuesIterator[String, Array[MProject]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_array__Arrayarray__Arraymproject__MProject, /* Array[E]: Array[Array[MProject]] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymproject__MProject, /* MapIterator[K, V]: MapIterator[String, Array[MProject]] */
}
};
/* runtime type Array[Array[MProject]] */
const struct type type_array__Arrayarray__Arraymproject__MProject = {
-1, /*CAST DEAD*/
"Array[Array[MProject]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraymproject__MProject,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1075, /* Collection[Array[MProject]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1873, /* AbstractArrayRead[Array[MProject]] */
1512, /* AbstractArray[Object] */
2136, /* AbstractArray[Array[MProject]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2232, /* Array[Array[MProject]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraymproject__MProject = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraymproject__MProject, /* NativeArray[E]: NativeArray[Array[MProject]] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_abstract_collection__Collectionarray__Arraymproject__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_array__Arrayarray__Arraymproject__MProject, /* Array[E]: Array[Array[MProject]] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_abstract_collection__Collectionarray__Arraymproject__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_abstract_collection__Collectionarray__Arraymproject__MProject, /* Collection[E]: Collection[Array[MProject]] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_array__Arrayarray__Arraymproject__MProject, /* Array[E]: Array[Array[MProject]] */
&type_array__NativeArrayarray__Arraymproject__MProject, /* NativeArray[E]: NativeArray[Array[MProject]] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_array__Arraymproject__MProject, /* E: Array[MProject] */
&type_array__Arrayarray__Arraymproject__MProject, /* Array[E]: Array[Array[MProject]] */
&type_array__AbstractArrayarray__Arraymproject__MProject, /* AbstractArray[E]: AbstractArray[Array[MProject]] */
&type_array__ArrayIteratorarray__Arraymproject__MProject, /* ArrayIterator[E]: ArrayIterator[Array[MProject]] */
}
};
/* runtime type AbstractArrayRead[Array[MProject]] */
const struct type type_array__AbstractArrayReadarray__Arraymproject__MProject = {
1873,
"AbstractArrayRead[Array[MProject]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[MProject]] */
const struct type type_array__AbstractArrayarray__Arraymproject__MProject = {
2136,
"AbstractArray[Array[MProject]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModuleposet__POSetElementmmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModuleposet__POSetElementmmodule__MModule,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
603, /* Collection[MModule] */
1452, /* HashMapKeys[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
&type_abstract_collection__MapKeysIteratormmodule__MModuleposet__POSetElementmmodule__MModule, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, POSetElement[MModule]] */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapValuesmmodule__MModuleposet__POSetElementmmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModuleposet__POSetElementmmodule__MModule,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1222, /* Collection[POSetElement[MModule]] */
1453, /* HashMapValues[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
&type_abstract_collection__MapValuesIteratormmodule__MModuleposet__POSetElementmmodule__MModule, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, POSetElement[MModule]] */
&type_poset__POSetElementmmodule__MModule, /* E: POSetElement[MModule] */
&type_abstract_collection__Collectionposet__POSetElementmmodule__MModule, /* Collection[E]: Collection[POSetElement[MModule]] */
&type_array__Arrayposet__POSetElementmmodule__MModule, /* Array[E]: Array[POSetElement[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmmodule__MModule, /* E: POSetElement[MModule] */
}
};
/* runtime type Collection[POSetElement[MModule]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmmodule__MModule = {
1222,
"Collection[POSetElement[MModule]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule = {
417,
"NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
417, /* NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* E: nullable HashMapNode[MModule, POSetElement[MModule]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
}
};
/* runtime type HashMapIterator[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapIteratormmodule__MModuleposet__POSetElementmmodule__MModule = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, POSetElement[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModuleposet__POSetElementmmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
418, /* MapIterator[MModule, POSetElement[MModule]] */
1223, /* HashMapIterator[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMap[K, V]: HashMap[MModule, POSetElement[MModule]] */
}
};
/* runtime type MapIterator[MModule, POSetElement[MModule]] */
const struct type type_abstract_collection__MapIteratormmodule__MModuleposet__POSetElementmmodule__MModule = {
418,
"MapIterator[MModule, POSetElement[MModule]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule = {
1224,
"HashMapNode[MModule, POSetElement[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
57, /* nullable HashMapNode[MModule, POSetElement[MModule]] */
1224, /* HashMapNode[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* K: MModule */
&type_poset__POSetElementmmodule__MModule, /* V: POSetElement[MModule] */
&type_mmodule__MModule, /* K: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, POSetElement[MModule]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModuleposet__POSetElementmmodule__MModule = {
57,
"nullable HashMapNode[MModule, POSetElement[MModule]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[String, Array[MModule]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
419, /* MapKeysIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymmodule__MModule, /* MapIterator[K, V]: MapIterator[String, Array[MModule]] */
}
};
/* runtime type MapValuesIterator[String, Array[MModule]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymmodule__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
420, /* MapValuesIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_array__Arrayarray__Arraymmodule__MModule, /* Array[E]: Array[Array[MModule]] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymmodule__MModule, /* MapIterator[K, V]: MapIterator[String, Array[MModule]] */
}
};
/* runtime type Array[Array[MModule]] */
const struct type type_array__Arrayarray__Arraymmodule__MModule = {
-1, /*CAST DEAD*/
"Array[Array[MModule]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraymmodule__MModule,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1080, /* Collection[Array[MModule]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1874, /* AbstractArrayRead[Array[MModule]] */
1512, /* AbstractArray[Object] */
2137, /* AbstractArray[Array[MModule]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2233, /* Array[Array[MModule]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraymmodule__MModule = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraymmodule__MModule, /* NativeArray[E]: NativeArray[Array[MModule]] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_abstract_collection__Collectionarray__Arraymmodule__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_array__Arrayarray__Arraymmodule__MModule, /* Array[E]: Array[Array[MModule]] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_abstract_collection__Collectionarray__Arraymmodule__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_abstract_collection__Collectionarray__Arraymmodule__MModule, /* Collection[E]: Collection[Array[MModule]] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_array__Arrayarray__Arraymmodule__MModule, /* Array[E]: Array[Array[MModule]] */
&type_array__NativeArrayarray__Arraymmodule__MModule, /* NativeArray[E]: NativeArray[Array[MModule]] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_array__Arraymmodule__MModule, /* E: Array[MModule] */
&type_array__Arrayarray__Arraymmodule__MModule, /* Array[E]: Array[Array[MModule]] */
&type_array__AbstractArrayarray__Arraymmodule__MModule, /* AbstractArray[E]: AbstractArray[Array[MModule]] */
&type_array__ArrayIteratorarray__Arraymmodule__MModule, /* ArrayIterator[E]: ArrayIterator[Array[MModule]] */
}
};
/* runtime type AbstractArrayRead[Array[MModule]] */
const struct type type_array__AbstractArrayReadarray__Arraymmodule__MModule = {
1874,
"AbstractArrayRead[Array[MModule]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[MModule]] */
const struct type type_array__AbstractArrayarray__Arraymmodule__MModule = {
2137,
"AbstractArray[Array[MModule]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
606, /* Collection[MClassDef] */
1454, /* HashMapKeys[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_abstract_collection__MapKeysIteratormodel__MClassDefposet__POSetElementmodel__MClassDef, /* MapKeysIterator[K, V]: MapKeysIterator[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* E: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* E: MClassDef */
}
};
/* runtime type HashMapValues[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapValues[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1225, /* Collection[POSetElement[MClassDef]] */
1455, /* HashMapValues[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_abstract_collection__MapValuesIteratormodel__MClassDefposet__POSetElementmodel__MClassDef, /* MapValuesIterator[K, V]: MapValuesIterator[MClassDef, POSetElement[MClassDef]] */
&type_poset__POSetElementmodel__MClassDef, /* E: POSetElement[MClassDef] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MClassDef, /* Collection[E]: Collection[POSetElement[MClassDef]] */
&type_array__Arrayposet__POSetElementmodel__MClassDef, /* Array[E]: Array[POSetElement[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassDef, /* E: POSetElement[MClassDef] */
}
};
/* runtime type Collection[POSetElement[MClassDef]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MClassDef = {
1225,
"Collection[POSetElement[MClassDef]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
421,
"NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
421, /* NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* E: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
}
};
/* runtime type HashMapIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
422, /* MapIterator[MClassDef, POSetElement[MClassDef]] */
1226, /* HashMapIterator[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[K, V]: HashMap[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type MapIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_abstract_collection__MapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
422,
"MapIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
1227,
"HashMapNode[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
58, /* nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
1227, /* HashMapNode[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* K: MClassDef */
&type_poset__POSetElementmodel__MClassDef, /* V: POSetElement[MClassDef] */
&type_model__MClassDef, /* K: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
58,
"nullable HashMapNode[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapKeys[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType,
13,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1630, /* HashMapKeys[MType, POSetElement[MType]] */
-1, /* empty */
-1, /* empty */
1519, /* Collection[MClassType] */
2068, /* HashMapKeys[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypeposet__POSetElementmodel__MClassType, /* MapKeysIterator[K, V]: MapKeysIterator[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* E: MClassType */
}
};
/* runtime type HashMapKeys[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, POSetElement[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1630, /* HashMapKeys[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[K, V]: HashMap[MType, POSetElement[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypeposet__POSetElementmodel__MType, /* MapKeysIterator[K, V]: MapKeysIterator[MType, POSetElement[MType]] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapValues[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1228, /* Collection[POSetElement[MType]] */
1456, /* HashMapValues[MType, POSetElement[MType]] */
1457, /* Collection[POSetElement[MClassType]] */
1875, /* HashMapValues[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypeposet__POSetElementmodel__MClassType, /* MapValuesIterator[K, V]: MapValuesIterator[MClassType, POSetElement[MClassType]] */
&type_poset__POSetElementmodel__MClassType, /* E: POSetElement[MClassType] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MClassType, /* Collection[E]: Collection[POSetElement[MClassType]] */
&type_array__Arrayposet__POSetElementmodel__MClassType, /* Array[E]: Array[POSetElement[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassType, /* E: POSetElement[MClassType] */
}
};
/* runtime type HashMapValues[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType = {
-1, /*CAST DEAD*/
"HashMapValues[MType, POSetElement[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1228, /* Collection[POSetElement[MType]] */
1456, /* HashMapValues[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[K, V]: HashMap[MType, POSetElement[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypeposet__POSetElementmodel__MType, /* MapValuesIterator[K, V]: MapValuesIterator[MType, POSetElement[MType]] */
&type_poset__POSetElementmodel__MType, /* E: POSetElement[MType] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MType, /* Collection[E]: Collection[POSetElement[MType]] */
&type_array__Arrayposet__POSetElementmodel__MType, /* Array[E]: Array[POSetElement[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MType, /* E: POSetElement[MType] */
}
};
/* runtime type Collection[POSetElement[MClassType]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MClassType = {
1457,
"Collection[POSetElement[MClassType]]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[POSetElement[MType]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MType = {
1228,
"Collection[POSetElement[MType]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
1229,
"NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
423, /* NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
1229, /* NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* E: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
423,
"NativeArray[nullable HashMapNode[MType, POSetElement[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
423, /* NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* E: nullable HashMapNode[MType, POSetElement[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
}
};
/* runtime type HashMapIterator[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
-1, /*CAST DEAD*/
"HashMapIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
424, /* MapIterator[MType, POSetElement[MType]] */
1230, /* HashMapIterator[MType, POSetElement[MType]] */
1231, /* MapIterator[MClassType, POSetElement[MClassType]] */
1631, /* HashMapIterator[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[K, V]: HashMap[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type HashMapIterator[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, POSetElement[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
424, /* MapIterator[MType, POSetElement[MType]] */
1230, /* HashMapIterator[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[K, V]: HashMap[MType, POSetElement[MType]] */
}
};
/* runtime type MapIterator[MClassType, POSetElement[MClassType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
1231,
"MapIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapIterator[MType, POSetElement[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypeposet__POSetElementmodel__MType = {
424,
"MapIterator[MType, POSetElement[MType]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
1632,
"HashMapNode[MClassType, POSetElement[MClassType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
59, /* nullable HashMapNode[MType, POSetElement[MType]] */
425, /* nullable HashMapNode[MClassType, POSetElement[MClassType]] */
1232, /* HashMapNode[MType, POSetElement[MType]] */
1632, /* HashMapNode[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* K: MClassType */
&type_poset__POSetElementmodel__MClassType, /* V: POSetElement[MClassType] */
&type_model__MClassType, /* K: MClassType */
}
};
/* runtime type HashMapNode[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
1232,
"HashMapNode[MType, POSetElement[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
59, /* nullable HashMapNode[MType, POSetElement[MType]] */
-1, /* empty */
1232, /* HashMapNode[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* K: MType */
&type_poset__POSetElementmodel__MType, /* V: POSetElement[MType] */
&type_model__MType, /* K: MType */
}
};
/* runtime type nullable HashMapNode[MClassType, POSetElement[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
425,
"nullable HashMapNode[MClassType, POSetElement[MClassType]]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable HashMapNode[MType, POSetElement[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
59,
"nullable HashMapNode[MType, POSetElement[MType]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[String, Array[MClass]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
426, /* MapKeysIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MClass, /* MapIterator[K, V]: MapIterator[String, Array[MClass]] */
}
};
/* runtime type MapValuesIterator[String, Array[MClass]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
427, /* MapValuesIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_array__Arrayarray__Arraymodel__MClass, /* Array[E]: Array[Array[MClass]] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MClass, /* MapIterator[K, V]: MapIterator[String, Array[MClass]] */
}
};
/* runtime type Array[Array[MClass]] */
const struct type type_array__Arrayarray__Arraymodel__MClass = {
-1, /*CAST DEAD*/
"Array[Array[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraymodel__MClass,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1087, /* Collection[Array[nullable MClass]] */
590, /* Array[nullable Object] */
1398, /* Collection[Array[MClass]] */
1345, /* AbstractArrayRead[Object] */
1876, /* AbstractArrayRead[Array[nullable MClass]] */
1512, /* AbstractArray[Object] */
2138, /* AbstractArrayRead[Array[MClass]] */
2139, /* AbstractArray[Array[nullable MClass]] */
2235, /* AbstractArray[Array[MClass]] */
-1, /* empty */
1909, /* Array[Object] */
2234, /* Array[Array[nullable MClass]] */
2310, /* Array[Array[MClass]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraymodel__MClass, /* NativeArray[E]: NativeArray[Array[MClass]] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_abstract_collection__Collectionarray__Arraymodel__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_array__Arrayarray__Arraymodel__MClass, /* Array[E]: Array[Array[MClass]] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_abstract_collection__Collectionarray__Arraymodel__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_abstract_collection__Collectionarray__Arraymodel__MClass, /* Collection[E]: Collection[Array[MClass]] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_array__Arrayarray__Arraymodel__MClass, /* Array[E]: Array[Array[MClass]] */
&type_array__NativeArrayarray__Arraymodel__MClass, /* NativeArray[E]: NativeArray[Array[MClass]] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_array__Arraymodel__MClass, /* E: Array[MClass] */
&type_array__Arrayarray__Arraymodel__MClass, /* Array[E]: Array[Array[MClass]] */
&type_array__AbstractArrayarray__Arraymodel__MClass, /* AbstractArray[E]: AbstractArray[Array[MClass]] */
&type_array__ArrayIteratorarray__Arraymodel__MClass, /* ArrayIterator[E]: ArrayIterator[Array[MClass]] */
}
};
/* runtime type Array[Array[nullable MClass]] */
const struct type type_array__Arrayarray__Arraynullable_model__MClass = {
-1, /*CAST DEAD*/
"Array[Array[nullable MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraynullable_model__MClass,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1087, /* Collection[Array[nullable MClass]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1876, /* AbstractArrayRead[Array[nullable MClass]] */
1512, /* AbstractArray[Object] */
-1, /* empty */
2139, /* AbstractArray[Array[nullable MClass]] */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2234, /* Array[Array[nullable MClass]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraynullable_model__MClass, /* NativeArray[E]: NativeArray[Array[nullable MClass]] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MClass, /* Collection[E]: Collection[Array[nullable MClass]] */
&type_array__Arrayarray__Arraynullable_model__MClass, /* Array[E]: Array[Array[nullable MClass]] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MClass, /* Collection[E]: Collection[Array[nullable MClass]] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MClass, /* Collection[E]: Collection[Array[nullable MClass]] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_array__Arrayarray__Arraynullable_model__MClass, /* Array[E]: Array[Array[nullable MClass]] */
&type_array__NativeArrayarray__Arraynullable_model__MClass, /* NativeArray[E]: NativeArray[Array[nullable MClass]] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_array__Arraynullable_model__MClass, /* E: Array[nullable MClass] */
&type_array__Arrayarray__Arraynullable_model__MClass, /* Array[E]: Array[Array[nullable MClass]] */
&type_array__AbstractArrayarray__Arraynullable_model__MClass, /* AbstractArray[E]: AbstractArray[Array[nullable MClass]] */
&type_array__ArrayIteratorarray__Arraynullable_model__MClass, /* ArrayIterator[E]: ArrayIterator[Array[nullable MClass]] */
}
};
/* runtime type AbstractArrayRead[Array[MClass]] */
const struct type type_array__AbstractArrayReadarray__Arraymodel__MClass = {
2138,
"AbstractArrayRead[Array[MClass]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Array[nullable MClass]] */
const struct type type_array__AbstractArrayReadarray__Arraynullable_model__MClass = {
1876,
"AbstractArrayRead[Array[nullable MClass]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[MClass]] */
const struct type type_array__AbstractArrayarray__Arraymodel__MClass = {
2235,
"AbstractArray[Array[MClass]]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[nullable MClass]] */
const struct type type_array__AbstractArrayarray__Arraynullable_model__MClass = {
2139,
"AbstractArray[Array[nullable MClass]]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[String, Array[MProperty]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
428, /* MapKeysIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MProperty, /* MapIterator[K, V]: MapIterator[String, Array[MProperty]] */
}
};
/* runtime type MapValuesIterator[String, Array[MProperty]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
429, /* MapValuesIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_array__Arrayarray__Arraymodel__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MProperty, /* MapIterator[K, V]: MapIterator[String, Array[MProperty]] */
}
};
/* runtime type Array[Array[MProperty]] */
const struct type type_array__Arrayarray__Arraymodel__MProperty = {
-1, /*CAST DEAD*/
"Array[Array[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraymodel__MProperty,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1090, /* Collection[Array[MProperty]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1877, /* AbstractArrayRead[Array[MProperty]] */
1512, /* AbstractArray[Object] */
2140, /* AbstractArray[Array[MProperty]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2236, /* Array[Array[MProperty]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraymodel__MProperty, /* NativeArray[E]: NativeArray[Array[MProperty]] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_abstract_collection__Collectionarray__Arraymodel__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_array__Arrayarray__Arraymodel__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_abstract_collection__Collectionarray__Arraymodel__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_abstract_collection__Collectionarray__Arraymodel__MProperty, /* Collection[E]: Collection[Array[MProperty]] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_array__Arrayarray__Arraymodel__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_array__NativeArrayarray__Arraymodel__MProperty, /* NativeArray[E]: NativeArray[Array[MProperty]] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_array__Arraymodel__MProperty, /* E: Array[MProperty] */
&type_array__Arrayarray__Arraymodel__MProperty, /* Array[E]: Array[Array[MProperty]] */
&type_array__AbstractArrayarray__Arraymodel__MProperty, /* AbstractArray[E]: AbstractArray[Array[MProperty]] */
&type_array__ArrayIteratorarray__Arraymodel__MProperty, /* ArrayIterator[E]: ArrayIterator[Array[MProperty]] */
}
};
/* runtime type AbstractArrayRead[Array[MProperty]] */
const struct type type_array__AbstractArrayReadarray__Arraymodel__MProperty = {
1877,
"AbstractArrayRead[Array[MProperty]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[MProperty]] */
const struct type type_array__AbstractArrayarray__Arraymodel__MProperty = {
2140,
"AbstractArray[Array[MProperty]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapKeysmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
-1, /*CAST DEAD*/
"HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
603, /* Collection[MModule] */
1458, /* HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_abstract_collection__MapKeysIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* MapKeysIterator[K, V]: MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* E: MModule */
}
};
/* runtime type HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapValuesmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
-1, /*CAST DEAD*/
"HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1233, /* Collection[HashMap2[MType, String, nullable MProperty]] */
1459, /* HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_abstract_collection__MapValuesIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* MapValuesIterator[K, V]: MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_abstract_collection__Collectionmore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Collection[E]: Collection[HashMap2[MType, String, nullable MProperty]] */
&type_array__Arraymore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Array[E]: Array[HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
}
};
/* runtime type Collection[HashMap2[MType, String, nullable MProperty]] */
const struct type type_abstract_collection__Collectionmore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1233,
"Collection[HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
430,
"NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
430, /* NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* E: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
}
};
/* runtime type HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
-1, /*CAST DEAD*/
"HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
431, /* MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
1234, /* HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[K, V]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_abstract_collection__MapIteratormmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
431,
"MapIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1235,
"HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
60, /* nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
1235, /* HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_mmodule__MModule, /* K: MModule */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* V: HashMap2[MType, String, nullable MProperty] */
&type_mmodule__MModule, /* K: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodemmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
60,
"nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MType, HashMap[String, nullable MProperty]] */
const struct type type_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty = {
432,
"HashMap[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
432, /* HashMap[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MType, HashMap[String, nullable MProperty]] */
&type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapValues[K, V]: HashMapValues[MType, HashMap[String, nullable MProperty]] */
&type_model__MType, /* K: MType */
&type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MType, HashMap[String, nullable MProperty]] */
&type_model__MType, /* K: MType */
&type_hash_collection__HashMapstring__Stringnullable_model__MProperty, /* V: HashMap[String, nullable MProperty] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapNode[K, V]: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_model__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* nullable N: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* N: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_nullable_model__MType, /* nullable K: nullable MType */
}
};
/* runtime type HashMap[String, nullable MProperty] */
const struct type type_hash_collection__HashMapstring__Stringnullable_model__MProperty = {
433,
"HashMap[String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
433, /* HashMap[String, nullable MProperty] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringnullable_model__MProperty, /* HashMapKeys[K, V]: HashMapKeys[String, nullable MProperty] */
&type_hash_collection__HashMapValuesstring__Stringnullable_model__MProperty, /* HashMapValues[K, V]: HashMapValues[String, nullable MProperty] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringnullable_model__MProperty, /* HashMapIterator[K, V]: HashMapIterator[String, nullable MProperty] */
&type_string__String, /* K: String */
&type_nullable_model__MProperty, /* V: nullable MProperty */
&type_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* HashMapNode[K, V]: HashMapNode[String, nullable MProperty] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* nullable N: nullable HashMapNode[String, nullable MProperty] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, nullable MProperty]] */
&type_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* N: HashMapNode[String, nullable MProperty] */
&type_nullable_string__String, /* nullable K: nullable String */
}
};
/* runtime type MapKeysIterator[String, nullable ModulePath] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringnullable_modelbuilder__ModulePath,
3,
{
0, /* nullable Object */
1, /* Object */
434, /* MapKeysIterator[String, nullable ModulePath] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringnullable_modelbuilder__ModulePath, /* MapIterator[K, V]: MapIterator[String, nullable ModulePath] */
}
};
/* runtime type MapValuesIterator[String, nullable ModulePath] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringnullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringnullable_modelbuilder__ModulePath,
3,
{
0, /* nullable Object */
1, /* Object */
435, /* MapValuesIterator[String, nullable ModulePath] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_abstract_collection__MapIteratorstring__Stringnullable_modelbuilder__ModulePath, /* MapIterator[K, V]: MapIterator[String, nullable ModulePath] */
}
};
/* runtime type MapKeysIterator[String, nullable MGroup] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringnullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringnullable_mproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
436, /* MapKeysIterator[String, nullable MGroup] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringnullable_mproject__MGroup, /* MapIterator[K, V]: MapIterator[String, nullable MGroup] */
}
};
/* runtime type MapValuesIterator[String, nullable MGroup] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringnullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringnullable_mproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
437, /* MapValuesIterator[String, nullable MGroup] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
&type_array__Arraynullable_mproject__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_abstract_collection__MapIteratorstring__Stringnullable_mproject__MGroup, /* MapIterator[K, V]: MapIterator[String, nullable MGroup] */
}
};
/* runtime type MapKeysIterator[MModule, AModule] */
const struct type type_abstract_collection__MapKeysIteratormmodule__MModuleparser_nodes__AModule = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
438, /* MapKeysIterator[MModule, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_abstract_collection__MapIteratormmodule__MModuleparser_nodes__AModule, /* MapIterator[K, V]: MapIterator[MModule, AModule] */
}
};
/* runtime type MapValuesIterator[MModule, AModule] */
const struct type type_abstract_collection__MapValuesIteratormmodule__MModuleparser_nodes__AModule = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
439, /* MapValuesIterator[MModule, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AModule, /* Array[E]: Array[AModule] */
&type_abstract_collection__MapIteratormmodule__MModuleparser_nodes__AModule, /* MapIterator[K, V]: MapIterator[MModule, AModule] */
}
};
/* runtime type MapKeysIterator[MClassDef, AClassdef] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
440, /* MapKeysIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_abstract_collection__MapIteratormodel__MClassDefparser_nodes__AClassdef, /* MapIterator[K, V]: MapIterator[MClassDef, AClassdef] */
}
};
/* runtime type MapValuesIterator[MClassDef, AClassdef] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassDef, AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
441, /* MapValuesIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[E]: Array[AClassdef] */
&type_abstract_collection__MapIteratormodel__MClassDefparser_nodes__AClassdef, /* MapIterator[K, V]: MapIterator[MClassDef, AClassdef] */
}
};
/* runtime type MapKeysIterator[String, MModuleData[AAnnotation]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation,
3,
{
0, /* nullable Object */
1, /* Object */
442, /* MapKeysIterator[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* MapIterator[K, V]: MapIterator[String, MModuleData[AAnnotation]] */
}
};
/* runtime type MapValuesIterator[String, MModuleData[AAnnotation]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation,
3,
{
0, /* nullable Object */
1, /* Object */
443, /* MapValuesIterator[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_abstract_collection__MapIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* MapIterator[K, V]: MapIterator[String, MModuleData[AAnnotation]] */
}
};
/* runtime type Array[MModuleData[AAnnotation]] */
const struct type type_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation = {
-1, /*CAST DEAD*/
"Array[MModuleData[AAnnotation]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1105, /* Collection[MModuleData[AAnnotation]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1878, /* AbstractArrayRead[MModuleData[AAnnotation]] */
1512, /* AbstractArray[Object] */
2141, /* AbstractArray[MModuleData[AAnnotation]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2237, /* Array[MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__NativeArraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* NativeArray[E]: NativeArray[MModuleData[AAnnotation]] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_abstract_collection__Collectionmmodule_data__MModuleDataparser_nodes__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_abstract_collection__Collectionmmodule_data__MModuleDataparser_nodes__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_abstract_collection__Collectionmmodule_data__MModuleDataparser_nodes__AAnnotation, /* Collection[E]: Collection[MModuleData[AAnnotation]] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_array__NativeArraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* NativeArray[E]: NativeArray[MModuleData[AAnnotation]] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_array__Arraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* Array[E]: Array[MModuleData[AAnnotation]] */
&type_array__AbstractArraymmodule_data__MModuleDataparser_nodes__AAnnotation, /* AbstractArray[E]: AbstractArray[MModuleData[AAnnotation]] */
&type_array__ArrayIteratormmodule_data__MModuleDataparser_nodes__AAnnotation, /* ArrayIterator[E]: ArrayIterator[MModuleData[AAnnotation]] */
}
};
/* runtime type AbstractArrayRead[MModuleData[AAnnotation]] */
const struct type type_array__AbstractArrayReadmmodule_data__MModuleDataparser_nodes__AAnnotation = {
1878,
"AbstractArrayRead[MModuleData[AAnnotation]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MModuleData[AAnnotation]] */
const struct type type_array__AbstractArraymmodule_data__MModuleDataparser_nodes__AAnnotation = {
2141,
"AbstractArray[MModuleData[AAnnotation]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MPropDef, APropdef] */
const struct type type_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
444, /* MapKeysIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arraymodel__MPropDef, /* Array[E]: Array[MPropDef] */
&type_abstract_collection__MapIteratormodel__MPropDefparser_nodes__APropdef, /* MapIterator[K, V]: MapIterator[MPropDef, APropdef] */
}
};
/* runtime type MapValuesIterator[MPropDef, APropdef] */
const struct type type_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MPropDef, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
445, /* MapValuesIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__APropdef, /* Array[E]: Array[APropdef] */
&type_abstract_collection__MapIteratormodel__MPropDefparser_nodes__APropdef, /* MapIterator[K, V]: MapIterator[MPropDef, APropdef] */
}
};
/* runtime type MapKeysIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
446, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
1236, /* MapKeysIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapIterator[K, V]: MapIterator[MClass, Set[MProperty]] */
}
};
/* runtime type MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
446, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* MapIterator[K, V]: MapIterator[MClass, Set[PropertyLayoutElement]] */
}
};
/* runtime type MapValuesIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
447, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
1237, /* MapValuesIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MProperty, /* Array[E]: Array[Set[MProperty]] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapIterator[K, V]: MapIterator[MClass, Set[MProperty]] */
}
};
/* runtime type MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
447, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[Set[PropertyLayoutElement]] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* MapIterator[K, V]: MapIterator[MClass, Set[PropertyLayoutElement]] */
}
};
/* runtime type Array[Set[MProperty]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MProperty = {
-1, /*CAST DEAD*/
"Array[Set[MProperty]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MProperty,
20,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
590, /* Array[nullable Object] */
1406, /* Collection[Set[MProperty]] */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1879, /* AbstractArrayRead[Set[PropertyLayoutElement]] */
2142, /* AbstractArrayRead[Set[MProperty]] */
2143, /* AbstractArray[Set[PropertyLayoutElement]] */
-1, /* empty */
1909, /* Array[Object] */
2238, /* Array[Set[PropertyLayoutElement]] */
2239, /* AbstractArray[Set[MProperty]] */
-1, /* empty */
2311, /* Array[Set[MProperty]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MProperty, /* NativeArray[E]: NativeArray[Set[MProperty]] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty, /* Collection[E]: Collection[Set[MProperty]] */
&type_array__Arrayabstract_collection__Setmodel__MProperty, /* Array[E]: Array[Set[MProperty]] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty, /* Collection[E]: Collection[Set[MProperty]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MProperty, /* Collection[E]: Collection[Set[MProperty]] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_array__Arrayabstract_collection__Setmodel__MProperty, /* Array[E]: Array[Set[MProperty]] */
&type_array__NativeArrayabstract_collection__Setmodel__MProperty, /* NativeArray[E]: NativeArray[Set[MProperty]] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_abstract_collection__Setmodel__MProperty, /* E: Set[MProperty] */
&type_array__Arrayabstract_collection__Setmodel__MProperty, /* Array[E]: Array[Set[MProperty]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MProperty, /* AbstractArray[E]: AbstractArray[Set[MProperty]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MProperty, /* ArrayIterator[E]: ArrayIterator[Set[MProperty]] */
}
};
/* runtime type Array[Set[PropertyLayoutElement]] */
const struct type type_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"Array[Set[PropertyLayoutElement]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1879, /* AbstractArrayRead[Set[PropertyLayoutElement]] */
-1, /* empty */
2143, /* AbstractArray[Set[PropertyLayoutElement]] */
-1, /* empty */
1909, /* Array[Object] */
2238, /* Array[Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[Set[PropertyLayoutElement]] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_abstract_collection__Collectionabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[Set[PropertyLayoutElement]] */
&type_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[Set[PropertyLayoutElement]] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_abstract_collection__Collectionabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[Set[PropertyLayoutElement]] */
&type_abstract_collection__Collectionabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[Set[PropertyLayoutElement]] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[Set[PropertyLayoutElement]] */
&type_array__NativeArrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[Set[PropertyLayoutElement]] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_array__Arrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[Set[PropertyLayoutElement]] */
&type_array__AbstractArrayabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* AbstractArray[E]: AbstractArray[Set[PropertyLayoutElement]] */
&type_array__ArrayIteratorabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* ArrayIterator[E]: ArrayIterator[Set[PropertyLayoutElement]] */
}
};
/* runtime type AbstractArrayRead[Set[MProperty]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MProperty = {
2142,
"AbstractArrayRead[Set[MProperty]]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Set[PropertyLayoutElement]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
1879,
"AbstractArrayRead[Set[PropertyLayoutElement]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MProperty]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MProperty = {
2239,
"AbstractArray[Set[MProperty]]", /* class_name_string */
17,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[PropertyLayoutElement]] */
const struct type type_array__AbstractArrayabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
2143,
"AbstractArray[Set[PropertyLayoutElement]]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MProperty, APropdef] */
const struct type type_abstract_collection__MapKeysIteratormodel__MPropertyparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
448, /* MapKeysIterator[MProperty, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
&type_abstract_collection__MapIteratormodel__MPropertyparser_nodes__APropdef, /* MapIterator[K, V]: MapIterator[MProperty, APropdef] */
}
};
/* runtime type MapValuesIterator[MProperty, APropdef] */
const struct type type_abstract_collection__MapValuesIteratormodel__MPropertyparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MProperty, APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
449, /* MapValuesIterator[MProperty, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__APropdef, /* Array[E]: Array[APropdef] */
&type_abstract_collection__MapIteratormodel__MPropertyparser_nodes__APropdef, /* MapIterator[K, V]: MapIterator[MProperty, APropdef] */
}
};
/* runtime type HashMapKeys[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapKeysmproject__MGroupposet__POSetElementmproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapKeys[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmproject__MGroupposet__POSetElementmproject__MGroup,
7,
{
0, /* nullable Object */
1, /* Object */
115, /* Collection[nullable MGroup] */
-1, /* empty */
83, /* Collection[Object] */
1376, /* Collection[MGroup] */
1633, /* HashMapKeys[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
&type_abstract_collection__MapKeysIteratormproject__MGroupposet__POSetElementmproject__MGroup, /* MapKeysIterator[K, V]: MapKeysIterator[MGroup, POSetElement[MGroup]] */
&type_mproject__MGroup, /* E: MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_array__Arraymproject__MGroup, /* Array[E]: Array[MGroup] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mproject__MGroup, /* E: MGroup */
}
};
/* runtime type HashMapValues[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapValuesmproject__MGroupposet__POSetElementmproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapValues[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmproject__MGroupposet__POSetElementmproject__MGroup,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1238, /* Collection[POSetElement[MGroup]] */
1460, /* HashMapValues[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
&type_abstract_collection__MapValuesIteratormproject__MGroupposet__POSetElementmproject__MGroup, /* MapValuesIterator[K, V]: MapValuesIterator[MGroup, POSetElement[MGroup]] */
&type_poset__POSetElementmproject__MGroup, /* E: POSetElement[MGroup] */
&type_abstract_collection__Collectionposet__POSetElementmproject__MGroup, /* Collection[E]: Collection[POSetElement[MGroup]] */
&type_array__Arrayposet__POSetElementmproject__MGroup, /* Array[E]: Array[POSetElement[MGroup]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmproject__MGroup, /* E: POSetElement[MGroup] */
}
};
/* runtime type Collection[POSetElement[MGroup]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmproject__MGroup = {
1238,
"Collection[POSetElement[MGroup]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup = {
450,
"NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
450, /* NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* E: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup, /* NativeArray[E]: NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
}
};
/* runtime type HashMapIterator[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapIteratormproject__MGroupposet__POSetElementmproject__MGroup = {
-1, /*CAST DEAD*/
"HashMapIterator[MGroup, POSetElement[MGroup]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormproject__MGroupposet__POSetElementmproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
451, /* MapIterator[MGroup, POSetElement[MGroup]] */
1239, /* HashMapIterator[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMap[K, V]: HashMap[MGroup, POSetElement[MGroup]] */
}
};
/* runtime type MapIterator[MGroup, POSetElement[MGroup]] */
const struct type type_abstract_collection__MapIteratormproject__MGroupposet__POSetElementmproject__MGroup = {
451,
"MapIterator[MGroup, POSetElement[MGroup]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MGroup, POSetElement[MGroup]] */
const struct type type_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup = {
1240,
"HashMapNode[MGroup, POSetElement[MGroup]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
61, /* nullable HashMapNode[MGroup, POSetElement[MGroup]] */
1240, /* HashMapNode[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup = {
0, /* dummy */
{
&type_mproject__MGroup, /* K: MGroup */
&type_poset__POSetElementmproject__MGroup, /* V: POSetElement[MGroup] */
&type_mproject__MGroup, /* K: MGroup */
}
};
/* runtime type nullable HashMapNode[MGroup, POSetElement[MGroup]] */
const struct type type_nullable_hash_collection__HashMapNodemproject__MGroupposet__POSetElementmproject__MGroup = {
61,
"nullable HashMapNode[MGroup, POSetElement[MGroup]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MGroup] */
const struct type type_hash_collection__HashSetmproject__MGroup = {
2069,
"HashSet[MGroup]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetmproject__MGroup,
10,
{
0, /* nullable Object */
1, /* Object */
115, /* Collection[nullable MGroup] */
-1, /* empty */
83, /* Collection[Object] */
1376, /* Collection[MGroup] */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
2069, /* HashSet[MGroup] */
},
};
const struct types resolution_table_hash_collection__HashSetmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemproject__MGroup, /* HashSetNode[E]: HashSetNode[MGroup] */
&type_hash_collection__HashSetIteratormproject__MGroup, /* HashSetIterator[E]: HashSetIterator[MGroup] */
&type_mproject__MGroup, /* E: MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_array__Arraymproject__MGroup, /* Array[E]: Array[MGroup] */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_mproject__MGroup, /* E: MGroup */
&type_mproject__MGroup, /* K: MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_mproject__MGroup, /* E: MGroup */
&type_nullable_hash_collection__HashSetNodemproject__MGroup, /* nullable N: nullable HashSetNode[MGroup] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemproject__MGroup, /* NativeArray[E]: NativeArray[nullable HashSetNode[MGroup]] */
&type_hash_collection__HashSetNodemproject__MGroup, /* N: HashSetNode[MGroup] */
&type_nullable_mproject__MGroup, /* nullable K: nullable MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
}
};
/* runtime type ArrayIterator[MGroup] */
const struct type type_array__ArrayIteratormproject__MGroup = {
-1, /*CAST DEAD*/
"ArrayIterator[MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormproject__MGroup,
5,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
452, /* ArrayIterator[nullable MGroup] */
1461, /* ArrayIterator[MGroup] */
},
};
const struct types resolution_table_array__ArrayIteratormproject__MGroup = {
0, /* dummy */
{
&type_array__Arraymproject__MGroup, /* Array[E]: Array[MGroup] */
&type_array__AbstractArrayReadmproject__MGroup, /* AbstractArrayRead[E]: AbstractArrayRead[MGroup] */
}
};
/* runtime type ArrayIterator[nullable MGroup] */
const struct type type_array__ArrayIteratornullable_mproject__MGroup = {
-1, /*CAST DEAD*/
"ArrayIterator[nullable MGroup]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratornullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
452, /* ArrayIterator[nullable MGroup] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_mproject__MGroup = {
0, /* dummy */
{
&type_array__Arraynullable_mproject__MGroup, /* Array[E]: Array[nullable MGroup] */
&type_array__AbstractArrayReadnullable_mproject__MGroup, /* AbstractArrayRead[E]: AbstractArrayRead[nullable MGroup] */
}
};
/* runtime type NativeArray[MGroup] */
const struct type type_array__NativeArraymproject__MGroup = {
1462,
"NativeArray[MGroup]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraymproject__MGroup,
5,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
453, /* NativeArray[nullable MGroup] */
1462, /* NativeArray[MGroup] */
},
};
const struct types resolution_table_array__NativeArraymproject__MGroup = {
0, /* dummy */
{
&type_mproject__MGroup, /* E: MGroup */
&type_array__NativeArraymproject__MGroup, /* NativeArray[E]: NativeArray[MGroup] */
}
};
/* runtime type NativeArray[nullable MGroup] */
const struct type type_array__NativeArraynullable_mproject__MGroup = {
453,
"NativeArray[nullable MGroup]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_mproject__MGroup,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
453, /* NativeArray[nullable MGroup] */
},
};
const struct types resolution_table_array__NativeArraynullable_mproject__MGroup = {
0, /* dummy */
{
&type_nullable_mproject__MGroup, /* E: nullable MGroup */
&type_array__NativeArraynullable_mproject__MGroup, /* NativeArray[E]: NativeArray[nullable MGroup] */
}
};
/* runtime type ArrayIterator[APropdef] */
const struct type type_array__ArrayIteratorparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"ArrayIterator[APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__APropdef,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1634, /* ArrayIterator[APropdef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__APropdef, /* Array[E]: Array[APropdef] */
&type_array__AbstractArrayReadparser_nodes__APropdef, /* AbstractArrayRead[E]: AbstractArrayRead[APropdef] */
}
};
/* runtime type NativeArray[APropdef] */
const struct type type_array__NativeArrayparser_nodes__APropdef = {
1635,
"NativeArray[APropdef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__APropdef,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1635, /* NativeArray[APropdef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__APropdef = {
0, /* dummy */
{
&type_parser_nodes__APropdef, /* E: APropdef */
&type_array__NativeArrayparser_nodes__APropdef, /* NativeArray[E]: NativeArray[APropdef] */
}
};
/* runtime type ArrayIterator[MMethodDef] */
const struct type type_array__ArrayIteratormodel__MMethodDef = {
1880,
"ArrayIterator[MMethodDef]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratormodel__MMethodDef,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
332, /* ArrayIterator[nullable MPropDef] */
1083, /* ArrayIterator[PropertyLayoutElement] */
1585, /* ArrayIterator[MPropDef] */
1880, /* ArrayIterator[MMethodDef] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_array__AbstractArrayReadmodel__MMethodDef, /* AbstractArrayRead[E]: AbstractArrayRead[MMethodDef] */
}
};
/* runtime type NativeArray[MMethodDef] */
const struct type type_array__NativeArraymodel__MMethodDef = {
1881,
"NativeArray[MMethodDef]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MMethodDef,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
333, /* NativeArray[nullable MPropDef] */
1084, /* NativeArray[PropertyLayoutElement] */
1586, /* NativeArray[MPropDef] */
1881, /* NativeArray[MMethodDef] */
},
};
const struct types resolution_table_array__NativeArraymodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* E: MMethodDef */
&type_array__NativeArraymodel__MMethodDef, /* NativeArray[E]: NativeArray[MMethodDef] */
}
};
/* runtime type HashMapKeys[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
1636, /* HashMapKeys[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_abstract_collection__MapKeysIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* MapKeysIterator[K, V]: MapKeysIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* E: MType */
}
};
/* runtime type HashMapValues[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapValues[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1241, /* Collection[HashMap[MProperty, Set[MMethodDef]]] */
1463, /* HashMapValues[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_abstract_collection__MapValuesIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* MapValuesIterator[K, V]: MapValuesIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* E: HashMap[MProperty, Set[MMethodDef]] */
&type_abstract_collection__Collectionhash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* Collection[E]: Collection[HashMap[MProperty, Set[MMethodDef]]] */
&type_array__Arrayhash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* Array[E]: Array[HashMap[MProperty, Set[MMethodDef]]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* E: HashMap[MProperty, Set[MMethodDef]] */
}
};
/* runtime type Collection[HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_abstract_collection__Collectionhash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
1241,
"Collection[HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
454,
"NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
454, /* NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* E: nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]] */
}
};
/* runtime type HashMapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
4,
{
0, /* nullable Object */
1, /* Object */
455, /* MapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
1242, /* HashMapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
}
};
/* runtime type MapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_abstract_collection__MapIteratormodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
455,
"MapIterator[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
1243,
"HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
4,
{
0, /* nullable Object */
1, /* Object */
62, /* nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
1243, /* HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_model__MType, /* K: MType */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* V: HashMap[MProperty, Set[MMethodDef]] */
&type_model__MType, /* K: MType */
}
};
/* runtime type nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
62,
"nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MProperty, Set[MMethodDef]] */
const struct type type_hash_collection__HashMapKeysmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapKeys[MProperty, Set[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
11,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
83, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
605, /* Collection[PropertyLayoutElement] */
-1, /* empty */
1516, /* Collection[MProperty] */
1882, /* HashMapKeys[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MProperty, Set[MMethodDef]] */
&type_abstract_collection__MapKeysIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* MapKeysIterator[K, V]: MapKeysIterator[MProperty, Set[MMethodDef]] */
&type_model__MProperty, /* E: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* E: MProperty */
}
};
/* runtime type HashMapValues[MProperty, Set[MMethodDef]] */
const struct type type_hash_collection__HashMapValuesmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapValues[MProperty, Set[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MPropertyabstract_collection__Setmodel__MMethodDef,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
-1, /* empty */
1464, /* Collection[Set[MMethodDef]] */
1637, /* HashMapValues[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MProperty, Set[MMethodDef]] */
&type_abstract_collection__MapValuesIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* MapValuesIterator[K, V]: MapValuesIterator[MProperty, Set[MMethodDef]] */
&type_abstract_collection__Setmodel__MMethodDef, /* E: Set[MMethodDef] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MMethodDef, /* Collection[E]: Collection[Set[MMethodDef]] */
&type_array__Arrayabstract_collection__Setmodel__MMethodDef, /* Array[E]: Array[Set[MMethodDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Setmodel__MMethodDef, /* E: Set[MMethodDef] */
}
};
/* runtime type Collection[Set[MMethodDef]] */
const struct type type_abstract_collection__Collectionabstract_collection__Setmodel__MMethodDef = {
1464,
"Collection[Set[MMethodDef]]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
456,
"NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
456, /* NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* E: nullable HashMapNode[MProperty, Set[MMethodDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]] */
}
};
/* runtime type HashMapIterator[MProperty, Set[MMethodDef]] */
const struct type type_hash_collection__HashMapIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMapIterator[MProperty, Set[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef,
4,
{
0, /* nullable Object */
1, /* Object */
457, /* MapIterator[MProperty, Set[MMethodDef]] */
1244, /* HashMapIterator[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K, V]: HashMap[MProperty, Set[MMethodDef]] */
}
};
/* runtime type MapIterator[MProperty, Set[MMethodDef]] */
const struct type type_abstract_collection__MapIteratormodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
457,
"MapIterator[MProperty, Set[MMethodDef]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MProperty, Set[MMethodDef]] */
const struct type type_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
1245,
"HashMapNode[MProperty, Set[MMethodDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef,
4,
{
0, /* nullable Object */
1, /* Object */
63, /* nullable HashMapNode[MProperty, Set[MMethodDef]] */
1245, /* HashMapNode[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_model__MProperty, /* K: MProperty */
&type_abstract_collection__Setmodel__MMethodDef, /* V: Set[MMethodDef] */
&type_model__MProperty, /* K: MProperty */
}
};
/* runtime type nullable HashMapNode[MProperty, Set[MMethodDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
63,
"nullable HashMapNode[MProperty, Set[MMethodDef]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ContainerIterator[MMethodDef] */
const struct type type_abstract_collection__ContainerIteratormodel__MMethodDef = {
-1, /*CAST DEAD*/
"ContainerIterator[MMethodDef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratormodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
458, /* ContainerIterator[MMethodDef] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_array__Arraymodel__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_abstract_collection__Containermodel__MMethodDef, /* Container[E]: Container[MMethodDef] */
}
};
/* runtime type MapKeysIterator[MClassDef, HashSet[MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
459, /* MapKeysIterator[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_abstract_collection__MapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapIterator[K, V]: MapIterator[MClassDef, HashSet[MType]] */
}
};
/* runtime type MapValuesIterator[MClassDef, HashSet[MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassDef, HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
460, /* MapValuesIterator[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_array__Arrayhash_collection__HashSetmodel__MType, /* Array[E]: Array[HashSet[MType]] */
&type_abstract_collection__MapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapIterator[K, V]: MapIterator[MClassDef, HashSet[MType]] */
}
};
/* runtime type Array[HashSet[MType]] */
const struct type type_array__Arrayhash_collection__HashSetmodel__MType = {
-1, /*CAST DEAD*/
"Array[HashSet[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayhash_collection__HashSetmodel__MType,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1134, /* Collection[Set[MType]] */
590, /* Array[nullable Object] */
1420, /* Collection[HashSet[MType]] */
1345, /* AbstractArrayRead[Object] */
1883, /* AbstractArrayRead[Set[MType]] */
1512, /* AbstractArray[Object] */
2144, /* AbstractArrayRead[HashSet[MType]] */
2145, /* AbstractArray[Set[MType]] */
2241, /* AbstractArray[HashSet[MType]] */
-1, /* empty */
1909, /* Array[Object] */
2240, /* Array[Set[MType]] */
2312, /* Array[HashSet[MType]] */
},
};
const struct types resolution_table_array__Arrayhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_array__NativeArrayhash_collection__HashSetmodel__MType, /* NativeArray[E]: NativeArray[HashSet[MType]] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_abstract_collection__Collectionhash_collection__HashSetmodel__MType, /* Collection[E]: Collection[HashSet[MType]] */
&type_array__Arrayhash_collection__HashSetmodel__MType, /* Array[E]: Array[HashSet[MType]] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_abstract_collection__Collectionhash_collection__HashSetmodel__MType, /* Collection[E]: Collection[HashSet[MType]] */
&type_abstract_collection__Collectionhash_collection__HashSetmodel__MType, /* Collection[E]: Collection[HashSet[MType]] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_array__Arrayhash_collection__HashSetmodel__MType, /* Array[E]: Array[HashSet[MType]] */
&type_array__NativeArrayhash_collection__HashSetmodel__MType, /* NativeArray[E]: NativeArray[HashSet[MType]] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_hash_collection__HashSetmodel__MType, /* E: HashSet[MType] */
&type_array__Arrayhash_collection__HashSetmodel__MType, /* Array[E]: Array[HashSet[MType]] */
&type_array__AbstractArrayhash_collection__HashSetmodel__MType, /* AbstractArray[E]: AbstractArray[HashSet[MType]] */
&type_array__ArrayIteratorhash_collection__HashSetmodel__MType, /* ArrayIterator[E]: ArrayIterator[HashSet[MType]] */
}
};
/* runtime type Array[Set[MType]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"Array[Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MType,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1134, /* Collection[Set[MType]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1883, /* AbstractArrayRead[Set[MType]] */
1512, /* AbstractArray[Object] */
-1, /* empty */
2145, /* AbstractArray[Set[MType]] */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2240, /* Array[Set[MType]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MType, /* NativeArray[E]: NativeArray[Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[E]: Collection[Set[MType]] */
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[E]: Collection[Set[MType]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MType, /* Collection[E]: Collection[Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
&type_array__NativeArrayabstract_collection__Setmodel__MType, /* NativeArray[E]: NativeArray[Set[MType]] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_abstract_collection__Setmodel__MType, /* E: Set[MType] */
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MType, /* AbstractArray[E]: AbstractArray[Set[MType]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MType, /* ArrayIterator[E]: ArrayIterator[Set[MType]] */
}
};
/* runtime type AbstractArrayRead[HashSet[MType]] */
const struct type type_array__AbstractArrayReadhash_collection__HashSetmodel__MType = {
2144,
"AbstractArrayRead[HashSet[MType]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Set[MType]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MType = {
1883,
"AbstractArrayRead[Set[MType]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[HashSet[MType]] */
const struct type type_array__AbstractArrayhash_collection__HashSetmodel__MType = {
2241,
"AbstractArray[HashSet[MType]]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MType]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MType = {
2145,
"AbstractArray[Set[MType]]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MClass, Int] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClasskernel__Int = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
461, /* MapKeysIterator[MClass, Int] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClasskernel__Int = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClasskernel__Int, /* MapIterator[K, V]: MapIterator[MClass, Int] */
}
};
/* runtime type MapValuesIterator[MClass, Int] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClasskernel__Int = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
462, /* MapValuesIterator[MClass, Int] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClasskernel__Int = {
0, /* dummy */
{
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
&type_abstract_collection__MapIteratormodel__MClasskernel__Int, /* MapIterator[K, V]: MapIterator[MClass, Int] */
}
};
/* runtime type MapKeysIterator[MType, Array[nullable MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
463, /* MapKeysIterator[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_abstract_collection__MapIteratormodel__MTypearray__Arraynullable_model__MType, /* MapIterator[K, V]: MapIterator[MType, Array[nullable MType]] */
}
};
/* runtime type MapValuesIterator[MType, Array[nullable MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
464, /* MapValuesIterator[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[E]: Array[Array[nullable MType]] */
&type_abstract_collection__MapIteratormodel__MTypearray__Arraynullable_model__MType, /* MapIterator[K, V]: MapIterator[MType, Array[nullable MType]] */
}
};
/* runtime type Array[Array[nullable MType]] */
const struct type type_array__Arrayarray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"Array[Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraynullable_model__MType,
17,
{
0, /* nullable Object */
1, /* Object */
351, /* Collection[nullable Array[nullable MType]] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1422, /* Collection[Array[nullable MType]] */
590, /* Array[nullable Object] */
1465, /* AbstractArrayRead[nullable Array[nullable MType]] */
1345, /* AbstractArrayRead[Object] */
1638, /* AbstractArray[nullable Array[nullable MType]] */
1512, /* AbstractArray[Object] */
2070, /* Array[nullable Array[nullable MType]] */
2146, /* AbstractArrayRead[Array[nullable MType]] */
2242, /* AbstractArray[Array[nullable MType]] */
-1, /* empty */
1909, /* Array[Object] */
2313, /* Array[Array[nullable MType]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[Array[nullable MType]] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[E]: Collection[Array[nullable MType]] */
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[E]: Array[Array[nullable MType]] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[E]: Collection[Array[nullable MType]] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MType, /* Collection[E]: Collection[Array[nullable MType]] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[E]: Array[Array[nullable MType]] */
&type_array__NativeArrayarray__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[Array[nullable MType]] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_array__Arraynullable_model__MType, /* E: Array[nullable MType] */
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[E]: Array[Array[nullable MType]] */
&type_array__AbstractArrayarray__Arraynullable_model__MType, /* AbstractArray[E]: AbstractArray[Array[nullable MType]] */
&type_array__ArrayIteratorarray__Arraynullable_model__MType, /* ArrayIterator[E]: ArrayIterator[Array[nullable MType]] */
}
};
/* runtime type Array[nullable Array[nullable MType]] */
const struct type type_array__Arraynullable_array__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"Array[nullable Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraynullable_array__Arraynullable_model__MType,
12,
{
0, /* nullable Object */
1, /* Object */
351, /* Collection[nullable Array[nullable MType]] */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
590, /* Array[nullable Object] */
1465, /* AbstractArrayRead[nullable Array[nullable MType]] */
-1, /* empty */
1638, /* AbstractArray[nullable Array[nullable MType]] */
-1, /* empty */
2070, /* Array[nullable Array[nullable MType]] */
},
};
const struct types resolution_table_array__Arraynullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__NativeArraynullable_array__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable Array[nullable MType]] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_array__Arraynullable_array__Arraynullable_model__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[E]: Collection[nullable Array[nullable MType]] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_array__Arraynullable_array__Arraynullable_model__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_array__NativeArraynullable_array__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable Array[nullable MType]] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_nullable_array__Arraynullable_model__MType, /* E: nullable Array[nullable MType] */
&type_array__Arraynullable_array__Arraynullable_model__MType, /* Array[E]: Array[nullable Array[nullable MType]] */
&type_array__AbstractArraynullable_array__Arraynullable_model__MType, /* AbstractArray[E]: AbstractArray[nullable Array[nullable MType]] */
&type_array__ArrayIteratornullable_array__Arraynullable_model__MType, /* ArrayIterator[E]: ArrayIterator[nullable Array[nullable MType]] */
}
};
/* runtime type AbstractArrayRead[Array[nullable MType]] */
const struct type type_array__AbstractArrayReadarray__Arraynullable_model__MType = {
2146,
"AbstractArrayRead[Array[nullable MType]]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable Array[nullable MType]] */
const struct type type_array__AbstractArrayReadnullable_array__Arraynullable_model__MType = {
1465,
"AbstractArrayRead[nullable Array[nullable MType]]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[nullable MType]] */
const struct type type_array__AbstractArrayarray__Arraynullable_model__MType = {
2242,
"AbstractArray[Array[nullable MType]]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable Array[nullable MType]] */
const struct type type_array__AbstractArraynullable_array__Arraynullable_model__MType = {
1638,
"AbstractArray[nullable Array[nullable MType]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MClassType, Array[nullable MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
463, /* MapKeysIterator[MType, Array[nullable MType]] */
1246, /* MapKeysIterator[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_abstract_collection__MapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapIterator[K, V]: MapIterator[MClassType, Array[nullable MType]] */
}
};
/* runtime type MapValuesIterator[MClassType, Array[nullable MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassType, Array[nullable MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
464, /* MapValuesIterator[MType, Array[nullable MType]] */
1247, /* MapValuesIterator[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[E]: Array[Array[nullable MType]] */
&type_abstract_collection__MapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapIterator[K, V]: MapIterator[MClassType, Array[nullable MType]] */
}
};
/* runtime type MapKeysIterator[MClass, Array[nullable MPropDef]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
465, /* MapKeysIterator[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapIterator[K, V]: MapIterator[MClass, Array[nullable MPropDef]] */
}
};
/* runtime type MapValuesIterator[MClass, Array[nullable MPropDef]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
466, /* MapValuesIterator[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_array__Arrayarray__Arraynullable_model__MPropDef, /* Array[E]: Array[Array[nullable MPropDef]] */
&type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapIterator[K, V]: MapIterator[MClass, Array[nullable MPropDef]] */
}
};
/* runtime type Array[Array[nullable MPropDef]] */
const struct type type_array__Arrayarray__Arraynullable_model__MPropDef = {
-1, /*CAST DEAD*/
"Array[Array[nullable MPropDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayarray__Arraynullable_model__MPropDef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1143, /* Collection[Array[nullable MPropDef]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1884, /* AbstractArrayRead[Array[nullable MPropDef]] */
1512, /* AbstractArray[Object] */
2147, /* AbstractArray[Array[nullable MPropDef]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2243, /* Array[Array[nullable MPropDef]] */
},
};
const struct types resolution_table_array__Arrayarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_array__NativeArrayarray__Arraynullable_model__MPropDef, /* NativeArray[E]: NativeArray[Array[nullable MPropDef]] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef, /* Collection[E]: Collection[Array[nullable MPropDef]] */
&type_array__Arrayarray__Arraynullable_model__MPropDef, /* Array[E]: Array[Array[nullable MPropDef]] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef, /* Collection[E]: Collection[Array[nullable MPropDef]] */
&type_abstract_collection__Collectionarray__Arraynullable_model__MPropDef, /* Collection[E]: Collection[Array[nullable MPropDef]] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_array__Arrayarray__Arraynullable_model__MPropDef, /* Array[E]: Array[Array[nullable MPropDef]] */
&type_array__NativeArrayarray__Arraynullable_model__MPropDef, /* NativeArray[E]: NativeArray[Array[nullable MPropDef]] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_array__Arraynullable_model__MPropDef, /* E: Array[nullable MPropDef] */
&type_array__Arrayarray__Arraynullable_model__MPropDef, /* Array[E]: Array[Array[nullable MPropDef]] */
&type_array__AbstractArrayarray__Arraynullable_model__MPropDef, /* AbstractArray[E]: AbstractArray[Array[nullable MPropDef]] */
&type_array__ArrayIteratorarray__Arraynullable_model__MPropDef, /* ArrayIterator[E]: ArrayIterator[Array[nullable MPropDef]] */
}
};
/* runtime type AbstractArrayRead[Array[nullable MPropDef]] */
const struct type type_array__AbstractArrayReadarray__Arraynullable_model__MPropDef = {
1884,
"AbstractArrayRead[Array[nullable MPropDef]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Array[nullable MPropDef]] */
const struct type type_array__AbstractArrayarray__Arraynullable_model__MPropDef = {
2147,
"AbstractArray[Array[nullable MPropDef]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[String, String] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringstring__String = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
467, /* MapKeysIterator[String, String] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringstring__String, /* MapIterator[K, V]: MapIterator[String, String] */
}
};
/* runtime type MapValuesIterator[String, String] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringstring__String = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
468, /* MapValuesIterator[String, String] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringstring__String, /* MapIterator[K, V]: MapIterator[String, String] */
}
};
/* runtime type ArrayIterator[CodeFile] */
const struct type type_array__ArrayIteratorabstract_compiler__CodeFile = {
-1, /*CAST DEAD*/
"ArrayIterator[CodeFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorabstract_compiler__CodeFile,
4,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1248, /* ArrayIterator[CodeFile] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeFile, /* Array[E]: Array[CodeFile] */
&type_array__AbstractArrayReadabstract_compiler__CodeFile, /* AbstractArrayRead[E]: AbstractArrayRead[CodeFile] */
}
};
/* runtime type NativeArray[CodeFile] */
const struct type type_array__NativeArrayabstract_compiler__CodeFile = {
1249,
"NativeArray[CodeFile]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__CodeFile,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1249, /* NativeArray[CodeFile] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_array__NativeArrayabstract_compiler__CodeFile, /* NativeArray[E]: NativeArray[CodeFile] */
}
};
/* runtime type ContainerIterator[CodeFile] */
const struct type type_abstract_collection__ContainerIteratorabstract_compiler__CodeFile = {
-1, /*CAST DEAD*/
"ContainerIterator[CodeFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratorabstract_compiler__CodeFile,
3,
{
0, /* nullable Object */
1, /* Object */
469, /* ContainerIterator[CodeFile] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__CodeFile, /* Array[E]: Array[CodeFile] */
&type_abstract_collection__Containerabstract_compiler__CodeFile, /* Container[E]: Container[CodeFile] */
}
};
/* runtime type MapKeysIterator[String, ANode] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
470, /* MapKeysIterator[String, ANode] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringparser_nodes__ANode, /* MapIterator[K, V]: MapIterator[String, ANode] */
}
};
/* runtime type MapValuesIterator[String, ANode] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__ANode = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
471, /* MapValuesIterator[String, ANode] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_abstract_collection__MapIteratorstring__Stringparser_nodes__ANode, /* MapIterator[K, V]: MapIterator[String, ANode] */
}
};
/* runtime type ArrayIterator[AImport] */
const struct type type_array__ArrayIteratorparser_nodes__AImport = {
-1, /*CAST DEAD*/
"ArrayIterator[AImport]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AImport,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1639, /* ArrayIterator[AImport] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AImport = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AImport, /* Array[E]: Array[AImport] */
&type_array__AbstractArrayReadparser_nodes__AImport, /* AbstractArrayRead[E]: AbstractArrayRead[AImport] */
}
};
/* runtime type NativeArray[AImport] */
const struct type type_array__NativeArrayparser_nodes__AImport = {
1640,
"NativeArray[AImport]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AImport,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1640, /* NativeArray[AImport] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AImport = {
0, /* dummy */
{
&type_parser_nodes__AImport, /* E: AImport */
&type_array__NativeArrayparser_nodes__AImport, /* NativeArray[E]: NativeArray[AImport] */
}
};
/* runtime type ArrayIterator[TId] */
const struct type type_array__ArrayIteratorparser_nodes__TId = {
-1, /*CAST DEAD*/
"ArrayIterator[TId]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__TId,
5,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1466, /* ArrayIterator[TId] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__TId = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__TId, /* Array[E]: Array[TId] */
&type_array__AbstractArrayReadparser_nodes__TId, /* AbstractArrayRead[E]: AbstractArrayRead[TId] */
}
};
/* runtime type NativeArray[TId] */
const struct type type_array__NativeArrayparser_nodes__TId = {
1467,
"NativeArray[TId]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayparser_nodes__TId,
5,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1467, /* NativeArray[TId] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__TId = {
0, /* dummy */
{
&type_parser_nodes__TId, /* E: TId */
&type_array__NativeArrayparser_nodes__TId, /* NativeArray[E]: NativeArray[TId] */
}
};
/* runtime type MapKeysIterator[MClass, MClassType] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassmodel__MClassType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
472, /* MapKeysIterator[MClass, MClassType] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassmodel__MClassType, /* MapIterator[K, V]: MapIterator[MClass, MClassType] */
}
};
/* runtime type MapValuesIterator[MClass, MClassType] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassmodel__MClassType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
473, /* MapValuesIterator[MClass, MClassType] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_abstract_collection__MapIteratormodel__MClassmodel__MClassType, /* MapIterator[K, V]: MapIterator[MClass, MClassType] */
}
};
/* runtime type MapKeysIterator[MClass, AType] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
474, /* MapKeysIterator[MClass, AType] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassparser_nodes__AType, /* MapIterator[K, V]: MapIterator[MClass, AType] */
}
};
/* runtime type MapValuesIterator[MClass, AType] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, AType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
475, /* MapValuesIterator[MClass, AType] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AType, /* Array[E]: Array[AType] */
&type_abstract_collection__MapIteratormodel__MClassparser_nodes__AType, /* MapIterator[K, V]: MapIterator[MClass, AType] */
}
};
/* runtime type ArrayIterator[Couple[MClass, AType]] */
const struct type type_array__ArrayIteratorabstract_collection__Couplemodel__MClassparser_nodes__AType = {
-1, /*CAST DEAD*/
"ArrayIterator[Couple[MClass, AType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorabstract_collection__Couplemodel__MClassparser_nodes__AType,
5,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
476, /* Iterator[Couple[MClass, AType]] */
1468, /* ArrayIterator[Couple[MClass, AType]] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[E]: Array[Couple[MClass, AType]] */
&type_array__AbstractArrayReadabstract_collection__Couplemodel__MClassparser_nodes__AType, /* AbstractArrayRead[E]: AbstractArrayRead[Couple[MClass, AType]] */
}
};
/* runtime type Iterator[Couple[MClass, AType]] */
const struct type type_abstract_collection__Iteratorabstract_collection__Couplemodel__MClassparser_nodes__AType = {
476,
"Iterator[Couple[MClass, AType]]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[Couple[MClass, AType]] */
const struct type type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
1250,
"NativeArray[Couple[MClass, AType]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1250, /* NativeArray[Couple[MClass, AType]] */
},
};
const struct types resolution_table_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* E: Couple[MClass, AType] */
&type_array__NativeArrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* NativeArray[E]: NativeArray[Couple[MClass, AType]] */
}
};
/* runtime type ContainerIterator[ANode] */
const struct type type_abstract_collection__ContainerIteratorparser_nodes__ANode = {
-1, /*CAST DEAD*/
"ContainerIterator[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratorparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
477, /* ContainerIterator[ANode] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_abstract_collection__Containerparser_nodes__ANode, /* Container[E]: Container[ANode] */
}
};
/* runtime type MapKeysIterator[MModule, Set[MClassDef]] */
const struct type type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
478, /* MapKeysIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassDef]] */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClassDef]] */
const struct type type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
479, /* MapValuesIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassDef]] */
}
};
/* runtime type Array[Set[MClassDef]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MClassDef = {
-1, /*CAST DEAD*/
"Array[Set[MClassDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MClassDef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1160, /* Collection[Set[MClassDef]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1885, /* AbstractArrayRead[Set[MClassDef]] */
1512, /* AbstractArray[Object] */
2148, /* AbstractArray[Set[MClassDef]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2244, /* Array[Set[MClassDef]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MClassDef, /* NativeArray[E]: NativeArray[Set[MClassDef]] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_array__Arrayabstract_collection__Setmodel__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassDef, /* Collection[E]: Collection[Set[MClassDef]] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_array__Arrayabstract_collection__Setmodel__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_array__NativeArrayabstract_collection__Setmodel__MClassDef, /* NativeArray[E]: NativeArray[Set[MClassDef]] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_abstract_collection__Setmodel__MClassDef, /* E: Set[MClassDef] */
&type_array__Arrayabstract_collection__Setmodel__MClassDef, /* Array[E]: Array[Set[MClassDef]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MClassDef, /* AbstractArray[E]: AbstractArray[Set[MClassDef]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MClassDef, /* ArrayIterator[E]: ArrayIterator[Set[MClassDef]] */
}
};
/* runtime type AbstractArrayRead[Set[MClassDef]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MClassDef = {
1885,
"AbstractArrayRead[Set[MClassDef]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MClassDef]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MClassDef = {
2148,
"AbstractArray[Set[MClassDef]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MModule, Set[MClass]] */
const struct type type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
480, /* MapKeysIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClass, /* MapIterator[K, V]: MapIterator[MModule, Set[MClass]] */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClass]] */
const struct type type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
481, /* MapValuesIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MClass, /* Array[E]: Array[Set[MClass]] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClass, /* MapIterator[K, V]: MapIterator[MModule, Set[MClass]] */
}
};
/* runtime type Array[Set[MClass]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MClass = {
-1, /*CAST DEAD*/
"Array[Set[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MClass,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1163, /* Collection[Set[MClass]] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1886, /* AbstractArrayRead[Set[MClass]] */
1512, /* AbstractArray[Object] */
2149, /* AbstractArray[Set[MClass]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2245, /* Array[Set[MClass]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MClass, /* NativeArray[E]: NativeArray[Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_array__Arrayabstract_collection__Setmodel__MClass, /* Array[E]: Array[Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClass, /* Collection[E]: Collection[Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_array__Arrayabstract_collection__Setmodel__MClass, /* Array[E]: Array[Set[MClass]] */
&type_array__NativeArrayabstract_collection__Setmodel__MClass, /* NativeArray[E]: NativeArray[Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_abstract_collection__Setmodel__MClass, /* E: Set[MClass] */
&type_array__Arrayabstract_collection__Setmodel__MClass, /* Array[E]: Array[Set[MClass]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MClass, /* AbstractArray[E]: AbstractArray[Set[MClass]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MClass, /* ArrayIterator[E]: ArrayIterator[Set[MClass]] */
}
};
/* runtime type AbstractArrayRead[Set[MClass]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MClass = {
1886,
"AbstractArrayRead[Set[MClass]]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MClass]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MClass = {
2149,
"AbstractArray[Set[MClass]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MModule, Set[MClassType]] */
const struct type type_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
482, /* MapKeysIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassType]] */
}
};
/* runtime type MapValuesIterator[MModule, Set[MClassType]] */
const struct type type_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MModule, Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
483, /* MapValuesIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_abstract_collection__MapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType, /* MapIterator[K, V]: MapIterator[MModule, Set[MClassType]] */
}
};
/* runtime type Array[Set[MClassType]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MClassType = {
-1, /*CAST DEAD*/
"Array[Set[MClassType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MClassType,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1134, /* Collection[Set[MType]] */
590, /* Array[nullable Object] */
1432, /* Collection[Set[MClassType]] */
1345, /* AbstractArrayRead[Object] */
1883, /* AbstractArrayRead[Set[MType]] */
1512, /* AbstractArray[Object] */
2150, /* AbstractArrayRead[Set[MClassType]] */
2145, /* AbstractArray[Set[MType]] */
2246, /* AbstractArray[Set[MClassType]] */
-1, /* empty */
1909, /* Array[Object] */
2240, /* Array[Set[MType]] */
2314, /* Array[Set[MClassType]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MClassType, /* NativeArray[E]: NativeArray[Set[MClassType]] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_array__Arrayabstract_collection__Setmodel__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MClassType, /* Collection[E]: Collection[Set[MClassType]] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_array__Arrayabstract_collection__Setmodel__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_array__NativeArrayabstract_collection__Setmodel__MClassType, /* NativeArray[E]: NativeArray[Set[MClassType]] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_abstract_collection__Setmodel__MClassType, /* E: Set[MClassType] */
&type_array__Arrayabstract_collection__Setmodel__MClassType, /* Array[E]: Array[Set[MClassType]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MClassType, /* AbstractArray[E]: AbstractArray[Set[MClassType]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MClassType, /* ArrayIterator[E]: ArrayIterator[Set[MClassType]] */
}
};
/* runtime type AbstractArrayRead[Set[MClassType]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MClassType = {
2150,
"AbstractArrayRead[Set[MClassType]]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MClassType]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MClassType = {
2246,
"AbstractArray[Set[MClassType]]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ContainerIterator[MClassType] */
const struct type type_abstract_collection__ContainerIteratormodel__MClassType = {
-1, /*CAST DEAD*/
"ContainerIterator[MClassType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratormodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
484, /* ContainerIterator[MClassType] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_abstract_collection__Containermodel__MClassType, /* Container[E]: Container[MClassType] */
}
};
/* runtime type MapKeysIterator[String, Int] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"MapKeysIterator[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
485, /* MapKeysIterator[String, Int] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringkernel__Int = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorstring__Stringkernel__Int, /* MapIterator[K, V]: MapIterator[String, Int] */
}
};
/* runtime type MapValuesIterator[String, Int] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringkernel__Int = {
-1, /*CAST DEAD*/
"MapValuesIterator[String, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
486, /* MapValuesIterator[String, Int] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringkernel__Int = {
0, /* dummy */
{
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
&type_abstract_collection__MapIteratorstring__Stringkernel__Int, /* MapIterator[K, V]: MapIterator[String, Int] */
}
};
/* runtime type ContainerIterator[String] */
const struct type type_abstract_collection__ContainerIteratorstring__String = {
-1, /*CAST DEAD*/
"ContainerIterator[String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratorstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
487, /* ContainerIterator[String] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__Containerstring__String, /* Container[E]: Container[String] */
}
};
/* runtime type HashMap[MClass, Set[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
1251,
"HashMap[MClass, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
488, /* Map[MClass, Set[MClass]] */
1251, /* HashMap[MClass, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MClass]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MClass]] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MClass, /* V: Set[MClass] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MClass]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* nullable N: nullable HashMapNode[MClass, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MClass]]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* N: HashMapNode[MClass, Set[MClass]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MClass]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass = {
488,
"Map[MClass, Set[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
446, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
1236, /* MapKeysIterator[MClass, Set[MProperty]] */
1469, /* MapKeysIterator[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapIterator[K, V]: MapIterator[MClass, Set[MAttribute]] */
}
};
/* runtime type MapValuesIterator[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
447, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
1237, /* MapValuesIterator[MClass, Set[MProperty]] */
1470, /* MapValuesIterator[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MAttribute, /* Array[E]: Array[Set[MAttribute]] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* MapIterator[K, V]: MapIterator[MClass, Set[MAttribute]] */
}
};
/* runtime type Array[Set[MAttribute]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MAttribute = {
-1, /*CAST DEAD*/
"Array[Set[MAttribute]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MAttribute,
21,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
590, /* Array[nullable Object] */
1406, /* Collection[Set[MProperty]] */
1345, /* AbstractArrayRead[Object] */
1608, /* Collection[Set[MAttribute]] */
1512, /* AbstractArray[Object] */
1879, /* AbstractArrayRead[Set[PropertyLayoutElement]] */
2142, /* AbstractArrayRead[Set[MProperty]] */
2143, /* AbstractArray[Set[PropertyLayoutElement]] */
2199, /* AbstractArrayRead[Set[MAttribute]] */
1909, /* Array[Object] */
2238, /* Array[Set[PropertyLayoutElement]] */
2239, /* AbstractArray[Set[MProperty]] */
2302, /* AbstractArray[Set[MAttribute]] */
2311, /* Array[Set[MProperty]] */
2347, /* Array[Set[MAttribute]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MAttribute, /* NativeArray[E]: NativeArray[Set[MAttribute]] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[E]: Collection[Set[MAttribute]] */
&type_array__Arrayabstract_collection__Setmodel__MAttribute, /* Array[E]: Array[Set[MAttribute]] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[E]: Collection[Set[MAttribute]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MAttribute, /* Collection[E]: Collection[Set[MAttribute]] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_array__Arrayabstract_collection__Setmodel__MAttribute, /* Array[E]: Array[Set[MAttribute]] */
&type_array__NativeArrayabstract_collection__Setmodel__MAttribute, /* NativeArray[E]: NativeArray[Set[MAttribute]] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_abstract_collection__Setmodel__MAttribute, /* E: Set[MAttribute] */
&type_array__Arrayabstract_collection__Setmodel__MAttribute, /* Array[E]: Array[Set[MAttribute]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MAttribute, /* AbstractArray[E]: AbstractArray[Set[MAttribute]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MAttribute, /* ArrayIterator[E]: ArrayIterator[Set[MAttribute]] */
}
};
/* runtime type AbstractArrayRead[Set[MAttribute]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MAttribute = {
2199,
"AbstractArrayRead[Set[MAttribute]]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MAttribute]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MAttribute = {
2302,
"AbstractArray[Set[MAttribute]]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MAttribute] */
const struct type type_array__ArrayIteratormodel__MAttribute = {
-1, /*CAST DEAD*/
"ArrayIterator[MAttribute]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MAttribute,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
301, /* ArrayIterator[nullable MProperty] */
1083, /* ArrayIterator[PropertyLayoutElement] */
1572, /* ArrayIterator[MProperty] */
1887, /* ArrayIterator[MAttribute] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MAttribute = {
0, /* dummy */
{
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_array__AbstractArrayReadmodel__MAttribute, /* AbstractArrayRead[E]: AbstractArrayRead[MAttribute] */
}
};
/* runtime type NativeArray[MAttribute] */
const struct type type_array__NativeArraymodel__MAttribute = {
1888,
"NativeArray[MAttribute]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MAttribute,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
302, /* NativeArray[nullable MProperty] */
1084, /* NativeArray[PropertyLayoutElement] */
1573, /* NativeArray[MProperty] */
1888, /* NativeArray[MAttribute] */
},
};
const struct types resolution_table_array__NativeArraymodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* E: MAttribute */
&type_array__NativeArraymodel__MAttribute, /* NativeArray[E]: NativeArray[MAttribute] */
}
};
/* runtime type HashMapKeys[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapKeysseparate_compiler__PropertyLayoutElementkernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[PropertyLayoutElement, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysseparate_compiler__PropertyLayoutElementkernel__Int,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
605, /* Collection[PropertyLayoutElement] */
1471, /* HashMapKeys[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMap[K, V]: HashMap[PropertyLayoutElement, Int] */
&type_abstract_collection__MapKeysIteratorseparate_compiler__PropertyLayoutElementkernel__Int, /* MapKeysIterator[K, V]: MapKeysIterator[PropertyLayoutElement, Int] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[PropertyLayoutElement] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
}
};
/* runtime type HashMapValues[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapValuesseparate_compiler__PropertyLayoutElementkernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[PropertyLayoutElement, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesseparate_compiler__PropertyLayoutElementkernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
620, /* Collection[Int] */
1472, /* HashMapValues[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMap[K, V]: HashMap[PropertyLayoutElement, Int] */
&type_abstract_collection__MapValuesIteratorseparate_compiler__PropertyLayoutElementkernel__Int, /* MapValuesIterator[K, V]: MapValuesIterator[PropertyLayoutElement, Int] */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* E: Int */
}
};
/* runtime type NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int = {
489,
"NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
489, /* NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* E: nullable HashMapNode[PropertyLayoutElement, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
}
};
/* runtime type HashMapIterator[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapIteratorseparate_compiler__PropertyLayoutElementkernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[PropertyLayoutElement, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratorseparate_compiler__PropertyLayoutElementkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
490, /* MapIterator[PropertyLayoutElement, Int] */
1252, /* HashMapIterator[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMap[K, V]: HashMap[PropertyLayoutElement, Int] */
}
};
/* runtime type MapIterator[PropertyLayoutElement, Int] */
const struct type type_abstract_collection__MapIteratorseparate_compiler__PropertyLayoutElementkernel__Int = {
490,
"MapIterator[PropertyLayoutElement, Int]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int = {
1253,
"HashMapNode[PropertyLayoutElement, Int]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
64, /* nullable HashMapNode[PropertyLayoutElement, Int] */
-1, /* empty */
1253, /* HashMapNode[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_kernel__Int, /* V: Int */
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
}
};
/* runtime type nullable HashMapNode[PropertyLayoutElement, Int] */
const struct type type_nullable_hash_collection__HashMapNodeseparate_compiler__PropertyLayoutElementkernel__Int = {
64,
"nullable HashMapNode[PropertyLayoutElement, Int]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapKeys[MAttribute, Int] */
const struct type type_hash_collection__HashMapKeysmodel__MAttributekernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[MAttribute, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MAttributekernel__Int,
14,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
83, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
605, /* Collection[PropertyLayoutElement] */
1471, /* HashMapKeys[PropertyLayoutElement, Int] */
1516, /* Collection[MProperty] */
-1, /* empty */
-1, /* empty */
1702, /* Collection[MAttribute] */
2151, /* HashMapKeys[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[K, V]: HashMap[MAttribute, Int] */
&type_abstract_collection__MapKeysIteratormodel__MAttributekernel__Int, /* MapKeysIterator[K, V]: MapKeysIterator[MAttribute, Int] */
&type_model__MAttribute, /* E: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MAttribute, /* E: MAttribute */
}
};
/* runtime type HashMapValues[MAttribute, Int] */
const struct type type_hash_collection__HashMapValuesmodel__MAttributekernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[MAttribute, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MAttributekernel__Int,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
620, /* Collection[Int] */
1472, /* HashMapValues[PropertyLayoutElement, Int] */
1641, /* HashMapValues[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[K, V]: HashMap[MAttribute, Int] */
&type_abstract_collection__MapValuesIteratormodel__MAttributekernel__Int, /* MapValuesIterator[K, V]: MapValuesIterator[MAttribute, Int] */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* E: Int */
}
};
/* runtime type NativeArray[nullable HashMapNode[MAttribute, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int = {
1254,
"NativeArray[nullable HashMapNode[MAttribute, Int]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
489, /* NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
1254, /* NativeArray[nullable HashMapNode[MAttribute, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* E: nullable HashMapNode[MAttribute, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
}
};
/* runtime type HashMapIterator[MAttribute, Int] */
const struct type type_hash_collection__HashMapIteratormodel__MAttributekernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[MAttribute, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MAttributekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
490, /* MapIterator[PropertyLayoutElement, Int] */
1252, /* HashMapIterator[PropertyLayoutElement, Int] */
1255, /* MapIterator[MAttribute, Int] */
1642, /* HashMapIterator[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[K, V]: HashMap[MAttribute, Int] */
}
};
/* runtime type MapIterator[MAttribute, Int] */
const struct type type_abstract_collection__MapIteratormodel__MAttributekernel__Int = {
1255,
"MapIterator[MAttribute, Int]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MAttribute, Int] */
const struct type type_hash_collection__HashMapNodemodel__MAttributekernel__Int = {
1643,
"HashMapNode[MAttribute, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MAttributekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
64, /* nullable HashMapNode[PropertyLayoutElement, Int] */
491, /* nullable HashMapNode[MAttribute, Int] */
1253, /* HashMapNode[PropertyLayoutElement, Int] */
1643, /* HashMapNode[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MAttributekernel__Int = {
0, /* dummy */
{
&type_model__MAttribute, /* K: MAttribute */
&type_kernel__Int, /* V: Int */
&type_model__MAttribute, /* K: MAttribute */
}
};
/* runtime type nullable HashMapNode[MAttribute, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MAttributekernel__Int = {
491,
"nullable HashMapNode[MAttribute, Int]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[EscapeMark, String] */
const struct type type_abstract_collection__MapKeysIteratorscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"MapKeysIterator[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorscope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
492, /* MapKeysIterator[EscapeMark, String] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_array__Arrayscope__EscapeMark, /* Array[E]: Array[EscapeMark] */
&type_abstract_collection__MapIteratorscope__EscapeMarkstring__String, /* MapIterator[K, V]: MapIterator[EscapeMark, String] */
}
};
/* runtime type Array[EscapeMark] */
const struct type type_array__Arrayscope__EscapeMark = {
-1, /*CAST DEAD*/
"Array[EscapeMark]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayscope__EscapeMark,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1180, /* Collection[EscapeMark] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1889, /* AbstractArrayRead[EscapeMark] */
1512, /* AbstractArray[Object] */
2152, /* AbstractArray[EscapeMark] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2247, /* Array[EscapeMark] */
},
};
const struct types resolution_table_array__Arrayscope__EscapeMark = {
0, /* dummy */
{
&type_array__NativeArrayscope__EscapeMark, /* NativeArray[E]: NativeArray[EscapeMark] */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[E]: Collection[EscapeMark] */
&type_array__Arrayscope__EscapeMark, /* Array[E]: Array[EscapeMark] */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[E]: Collection[EscapeMark] */
&type_abstract_collection__Collectionscope__EscapeMark, /* Collection[E]: Collection[EscapeMark] */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_array__Arrayscope__EscapeMark, /* Array[E]: Array[EscapeMark] */
&type_array__NativeArrayscope__EscapeMark, /* NativeArray[E]: NativeArray[EscapeMark] */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_scope__EscapeMark, /* E: EscapeMark */
&type_array__Arrayscope__EscapeMark, /* Array[E]: Array[EscapeMark] */
&type_array__AbstractArrayscope__EscapeMark, /* AbstractArray[E]: AbstractArray[EscapeMark] */
&type_array__ArrayIteratorscope__EscapeMark, /* ArrayIterator[E]: ArrayIterator[EscapeMark] */
}
};
/* runtime type AbstractArrayRead[EscapeMark] */
const struct type type_array__AbstractArrayReadscope__EscapeMark = {
1889,
"AbstractArrayRead[EscapeMark]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[EscapeMark] */
const struct type type_array__AbstractArrayscope__EscapeMark = {
2152,
"AbstractArray[EscapeMark]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapValuesIterator[EscapeMark, String] */
const struct type type_abstract_collection__MapValuesIteratorscope__EscapeMarkstring__String = {
-1, /*CAST DEAD*/
"MapValuesIterator[EscapeMark, String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorscope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
493, /* MapValuesIterator[EscapeMark, String] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__MapIteratorscope__EscapeMarkstring__String, /* MapIterator[K, V]: MapIterator[EscapeMark, String] */
}
};
/* runtime type MapKeysIterator[Variable, RuntimeVariable] */
const struct type type_abstract_collection__MapKeysIteratorscope__Variableabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"MapKeysIterator[Variable, RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratorscope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
494, /* MapKeysIterator[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__Arrayscope__Variable, /* Array[E]: Array[Variable] */
&type_abstract_collection__MapIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapIterator[K, V]: MapIterator[Variable, RuntimeVariable] */
}
};
/* runtime type MapValuesIterator[Variable, RuntimeVariable] */
const struct type type_abstract_collection__MapValuesIteratorscope__Variableabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"MapValuesIterator[Variable, RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratorscope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
495, /* MapValuesIterator[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
&type_abstract_collection__MapIteratorscope__Variableabstract_compiler__RuntimeVariable, /* MapIterator[K, V]: MapIterator[Variable, RuntimeVariable] */
}
};
/* runtime type MapKeysIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
446, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
1236, /* MapKeysIterator[MClass, Set[MProperty]] */
1473, /* MapKeysIterator[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapIterator[K, V]: MapIterator[MClass, Set[MVirtualTypeProp]] */
}
};
/* runtime type MapValuesIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
447, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
1237, /* MapValuesIterator[MClass, Set[MProperty]] */
1474, /* MapValuesIterator[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp, /* Array[E]: Array[Set[MVirtualTypeProp]] */
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* MapIterator[K, V]: MapIterator[MClass, Set[MVirtualTypeProp]] */
}
};
/* runtime type Array[Set[MVirtualTypeProp]] */
const struct type type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"Array[Set[MVirtualTypeProp]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp,
21,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1114, /* Collection[Set[PropertyLayoutElement]] */
590, /* Array[nullable Object] */
1406, /* Collection[Set[MProperty]] */
1345, /* AbstractArrayRead[Object] */
1611, /* Collection[Set[MVirtualTypeProp]] */
1512, /* AbstractArray[Object] */
1879, /* AbstractArrayRead[Set[PropertyLayoutElement]] */
2142, /* AbstractArrayRead[Set[MProperty]] */
2143, /* AbstractArray[Set[PropertyLayoutElement]] */
2200, /* AbstractArrayRead[Set[MVirtualTypeProp]] */
1909, /* Array[Object] */
2238, /* Array[Set[PropertyLayoutElement]] */
2239, /* AbstractArray[Set[MProperty]] */
2303, /* AbstractArray[Set[MVirtualTypeProp]] */
2311, /* Array[Set[MProperty]] */
2348, /* Array[Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__NativeArrayabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[Set[MVirtualTypeProp]] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[E]: Collection[Set[MVirtualTypeProp]] */
&type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp, /* Array[E]: Array[Set[MVirtualTypeProp]] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[E]: Collection[Set[MVirtualTypeProp]] */
&type_abstract_collection__Collectionabstract_collection__Setmodel__MVirtualTypeProp, /* Collection[E]: Collection[Set[MVirtualTypeProp]] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp, /* Array[E]: Array[Set[MVirtualTypeProp]] */
&type_array__NativeArrayabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[Set[MVirtualTypeProp]] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_array__Arrayabstract_collection__Setmodel__MVirtualTypeProp, /* Array[E]: Array[Set[MVirtualTypeProp]] */
&type_array__AbstractArrayabstract_collection__Setmodel__MVirtualTypeProp, /* AbstractArray[E]: AbstractArray[Set[MVirtualTypeProp]] */
&type_array__ArrayIteratorabstract_collection__Setmodel__MVirtualTypeProp, /* ArrayIterator[E]: ArrayIterator[Set[MVirtualTypeProp]] */
}
};
/* runtime type AbstractArrayRead[Set[MVirtualTypeProp]] */
const struct type type_array__AbstractArrayReadabstract_collection__Setmodel__MVirtualTypeProp = {
2200,
"AbstractArrayRead[Set[MVirtualTypeProp]]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Set[MVirtualTypeProp]] */
const struct type type_array__AbstractArrayabstract_collection__Setmodel__MVirtualTypeProp = {
2303,
"AbstractArray[Set[MVirtualTypeProp]]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[MVirtualTypeProp] */
const struct type type_array__ArrayIteratormodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"ArrayIterator[MVirtualTypeProp]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratormodel__MVirtualTypeProp,
7,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
301, /* ArrayIterator[nullable MProperty] */
1083, /* ArrayIterator[PropertyLayoutElement] */
1572, /* ArrayIterator[MProperty] */
1890, /* ArrayIterator[MVirtualTypeProp] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_array__AbstractArrayReadmodel__MVirtualTypeProp, /* AbstractArrayRead[E]: AbstractArrayRead[MVirtualTypeProp] */
}
};
/* runtime type NativeArray[MVirtualTypeProp] */
const struct type type_array__NativeArraymodel__MVirtualTypeProp = {
1891,
"NativeArray[MVirtualTypeProp]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MVirtualTypeProp,
7,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
302, /* NativeArray[nullable MProperty] */
1084, /* NativeArray[PropertyLayoutElement] */
1573, /* NativeArray[MProperty] */
1891, /* NativeArray[MVirtualTypeProp] */
},
};
const struct types resolution_table_array__NativeArraymodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_array__NativeArraymodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[MVirtualTypeProp] */
}
};
/* runtime type HashMapKeys[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int = {
-1, /*CAST DEAD*/
"HashMapKeys[MVirtualTypeProp, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int,
14,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
83, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
605, /* Collection[PropertyLayoutElement] */
1471, /* HashMapKeys[PropertyLayoutElement, Int] */
1516, /* Collection[MProperty] */
-1, /* empty */
-1, /* empty */
1705, /* Collection[MVirtualTypeProp] */
2153, /* HashMapKeys[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[K, V]: HashMap[MVirtualTypeProp, Int] */
&type_abstract_collection__MapKeysIteratormodel__MVirtualTypePropkernel__Int, /* MapKeysIterator[K, V]: MapKeysIterator[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
}
};
/* runtime type HashMapValues[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int = {
-1, /*CAST DEAD*/
"HashMapValues[MVirtualTypeProp, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
620, /* Collection[Int] */
1472, /* HashMapValues[PropertyLayoutElement, Int] */
1644, /* HashMapValues[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[K, V]: HashMap[MVirtualTypeProp, Int] */
&type_abstract_collection__MapValuesIteratormodel__MVirtualTypePropkernel__Int, /* MapValuesIterator[K, V]: MapValuesIterator[MVirtualTypeProp, Int] */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* E: Int */
}
};
/* runtime type NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int = {
1256,
"NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
489, /* NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
1256, /* NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* E: nullable HashMapNode[MVirtualTypeProp, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
}
};
/* runtime type HashMapIterator[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int = {
-1, /*CAST DEAD*/
"HashMapIterator[MVirtualTypeProp, Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
490, /* MapIterator[PropertyLayoutElement, Int] */
1252, /* HashMapIterator[PropertyLayoutElement, Int] */
1257, /* MapIterator[MVirtualTypeProp, Int] */
1645, /* HashMapIterator[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[K, V]: HashMap[MVirtualTypeProp, Int] */
}
};
/* runtime type MapIterator[MVirtualTypeProp, Int] */
const struct type type_abstract_collection__MapIteratormodel__MVirtualTypePropkernel__Int = {
1257,
"MapIterator[MVirtualTypeProp, Int]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MVirtualTypeProp, Int] */
const struct type type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int = {
1646,
"HashMapNode[MVirtualTypeProp, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
64, /* nullable HashMapNode[PropertyLayoutElement, Int] */
496, /* nullable HashMapNode[MVirtualTypeProp, Int] */
1253, /* HashMapNode[PropertyLayoutElement, Int] */
1646, /* HashMapNode[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_kernel__Int, /* V: Int */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
}
};
/* runtime type nullable HashMapNode[MVirtualTypeProp, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int = {
496,
"nullable HashMapNode[MVirtualTypeProp, Int]", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArrayIterator[TComment] */
const struct type type_array__ArrayIteratorparser_nodes__TComment = {
-1, /*CAST DEAD*/
"ArrayIterator[TComment]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__TComment,
5,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1475, /* ArrayIterator[TComment] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__TComment = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__TComment, /* Array[E]: Array[TComment] */
&type_array__AbstractArrayReadparser_nodes__TComment, /* AbstractArrayRead[E]: AbstractArrayRead[TComment] */
}
};
/* runtime type NativeArray[TComment] */
const struct type type_array__NativeArrayparser_nodes__TComment = {
1476,
"NativeArray[TComment]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayparser_nodes__TComment,
5,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1476, /* NativeArray[TComment] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__TComment = {
0, /* dummy */
{
&type_parser_nodes__TComment, /* E: TComment */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[E]: NativeArray[TComment] */
}
};
/* runtime type ArrayIterator[AFormaldef] */
const struct type type_array__ArrayIteratorparser_nodes__AFormaldef = {
-1, /*CAST DEAD*/
"ArrayIterator[AFormaldef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__AFormaldef,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1647, /* ArrayIterator[AFormaldef] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AFormaldef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AFormaldef, /* Array[E]: Array[AFormaldef] */
&type_array__AbstractArrayReadparser_nodes__AFormaldef, /* AbstractArrayRead[E]: AbstractArrayRead[AFormaldef] */
}
};
/* runtime type NativeArray[AFormaldef] */
const struct type type_array__NativeArrayparser_nodes__AFormaldef = {
1648,
"NativeArray[AFormaldef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AFormaldef,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1648, /* NativeArray[AFormaldef] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AFormaldef = {
0, /* dummy */
{
&type_parser_nodes__AFormaldef, /* E: AFormaldef */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
}
};
/* runtime type ArrayIterator[ASuperclass] */
const struct type type_array__ArrayIteratorparser_nodes__ASuperclass = {
-1, /*CAST DEAD*/
"ArrayIterator[ASuperclass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorparser_nodes__ASuperclass,
6,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1099, /* ArrayIterator[ANode] */
1400, /* ArrayIterator[Prod] */
1649, /* ArrayIterator[ASuperclass] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__ASuperclass = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ASuperclass, /* Array[E]: Array[ASuperclass] */
&type_array__AbstractArrayReadparser_nodes__ASuperclass, /* AbstractArrayRead[E]: AbstractArrayRead[ASuperclass] */
}
};
/* runtime type NativeArray[ASuperclass] */
const struct type type_array__NativeArrayparser_nodes__ASuperclass = {
1650,
"NativeArray[ASuperclass]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__ASuperclass,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1100, /* NativeArray[ANode] */
1401, /* NativeArray[Prod] */
1650, /* NativeArray[ASuperclass] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__ASuperclass = {
0, /* dummy */
{
&type_parser_nodes__ASuperclass, /* E: ASuperclass */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[E]: NativeArray[ASuperclass] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef = {
497,
"HashMap[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
497, /* HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_hash_collection__HashMapValuesmmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapIteratormmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
&type_hash_collection__HashMapNodemmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_mmodule__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
&type_hash_collection__HashMapNodemmodule__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
}
};
/* runtime type HashMap[MType, Array[MMethodDef]] */
const struct type type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef = {
498,
"HashMap[MType, Array[MMethodDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
498, /* HashMap[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MMethodDef]] */
&type_hash_collection__HashMapValuesmodel__MTypearray__Arraymodel__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MMethodDef]] */
&type_model__MType, /* K: MType */
&type_hash_collection__HashMapIteratormodel__MTypearray__Arraymodel__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MMethodDef]] */
&type_model__MType, /* K: MType */
&type_array__Arraymodel__MMethodDef, /* V: Array[MMethodDef] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MMethodDef]] */
&type_model__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MMethodDef, /* nullable N: nullable HashMapNode[MType, Array[MMethodDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraymodel__MMethodDef, /* N: HashMapNode[MType, Array[MMethodDef]] */
&type_nullable_model__MType, /* nullable K: nullable MType */
}
};
/* runtime type ArrayIterator[Scope] */
const struct type type_array__ArrayIteratorscope__Scope = {
-1, /*CAST DEAD*/
"ArrayIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArrayIteratorscope__Scope,
4,
{
0, /* nullable Object */
1, /* Object */
285, /* ArrayIterator[Object] */
1258, /* ArrayIterator[Scope] */
},
};
const struct types resolution_table_array__ArrayIteratorscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_array__AbstractArrayReadscope__Scope, /* AbstractArrayRead[E]: AbstractArrayRead[Scope] */
}
};
/* runtime type NativeArray[Scope] */
const struct type type_array__NativeArrayscope__Scope = {
1259,
"NativeArray[Scope]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayscope__Scope,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
1259, /* NativeArray[Scope] */
},
};
const struct types resolution_table_array__NativeArrayscope__Scope = {
0, /* dummy */
{
&type_scope__Scope, /* E: Scope */
&type_array__NativeArrayscope__Scope, /* NativeArray[E]: NativeArray[Scope] */
}
};
/* runtime type ContainerIterator[Scope] */
const struct type type_abstract_collection__ContainerIteratorscope__Scope = {
-1, /*CAST DEAD*/
"ContainerIterator[Scope]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__ContainerIteratorscope__Scope,
3,
{
0, /* nullable Object */
1, /* Object */
499, /* ContainerIterator[Scope] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorscope__Scope = {
0, /* dummy */
{
&type_array__Arrayscope__Scope, /* Array[E]: Array[Scope] */
&type_abstract_collection__Containerscope__Scope, /* Container[E]: Container[Scope] */
}
};
/* runtime type HashMapKeys[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapKeys[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
83, /* Collection[Object] */
1366, /* Collection[MClass] */
1651, /* HashMapKeys[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
&type_abstract_collection__MapKeysIteratormodel__MClassposet__POSetElementmodel__MClass, /* MapKeysIterator[K, V]: MapKeysIterator[MClass, POSetElement[MClass]] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* E: MClass */
}
};
/* runtime type HashMapValues[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapValues[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
1260, /* Collection[POSetElement[MClass]] */
1477, /* HashMapValues[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
&type_abstract_collection__MapValuesIteratormodel__MClassposet__POSetElementmodel__MClass, /* MapValuesIterator[K, V]: MapValuesIterator[MClass, POSetElement[MClass]] */
&type_poset__POSetElementmodel__MClass, /* E: POSetElement[MClass] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MClass, /* Collection[E]: Collection[POSetElement[MClass]] */
&type_array__Arrayposet__POSetElementmodel__MClass, /* Array[E]: Array[POSetElement[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClass, /* E: POSetElement[MClass] */
}
};
/* runtime type Collection[POSetElement[MClass]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MClass = {
1260,
"Collection[POSetElement[MClass]]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass = {
500,
"NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
500, /* NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* E: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
}
};
/* runtime type HashMapIterator[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass = {
-1, /*CAST DEAD*/
"HashMapIterator[MClass, POSetElement[MClass]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
501, /* MapIterator[MClass, POSetElement[MClass]] */
1261, /* HashMapIterator[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass, /* HashMap[K, V]: HashMap[MClass, POSetElement[MClass]] */
}
};
/* runtime type MapIterator[MClass, POSetElement[MClass]] */
const struct type type_abstract_collection__MapIteratormodel__MClassposet__POSetElementmodel__MClass = {
501,
"MapIterator[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMapNode[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass = {
1262,
"HashMapNode[MClass, POSetElement[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
65, /* nullable HashMapNode[MClass, POSetElement[MClass]] */
1262, /* HashMapNode[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
&type_model__MClass, /* K: MClass */
&type_poset__POSetElementmodel__MClass, /* V: POSetElement[MClass] */
&type_model__MClass, /* K: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, POSetElement[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass = {
65,
"nullable HashMapNode[MClass, POSetElement[MClass]]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MapKeysIterator[MClassType, Set[MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
502, /* MapKeysIterator[MType, Set[MType]] */
1263, /* MapKeysIterator[MClassType, Set[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_abstract_collection__MapIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapIterator[K, V]: MapIterator[MClassType, Set[MType]] */
}
};
/* runtime type MapKeysIterator[MType, Set[MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"MapKeysIterator[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
502, /* MapKeysIterator[MType, Set[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_abstract_collection__MapIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapIterator[K, V]: MapIterator[MType, Set[MType]] */
}
};
/* runtime type MapValuesIterator[MClassType, Set[MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MClassType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
503, /* MapValuesIterator[MType, Set[MType]] */
1264, /* MapValuesIterator[MClassType, Set[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
&type_abstract_collection__MapIteratormodel__MClassTypeabstract_collection__Setmodel__MType, /* MapIterator[K, V]: MapIterator[MClassType, Set[MType]] */
}
};
/* runtime type MapValuesIterator[MType, Set[MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MTypeabstract_collection__Setmodel__MType = {
-1, /*CAST DEAD*/
"MapValuesIterator[MType, Set[MType]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
503, /* MapValuesIterator[MType, Set[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_array__Arrayabstract_collection__Setmodel__MType, /* Array[E]: Array[Set[MType]] */
&type_abstract_collection__MapIteratormodel__MTypeabstract_collection__Setmodel__MType, /* MapIterator[K, V]: MapIterator[MType, Set[MType]] */
}
};
