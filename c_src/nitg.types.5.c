#include "nitg.types.0.h"
/* runtime type ArrayIterator[Int] */
const struct type type_array__ArrayIteratorkernel__Int = {
1502,
"ArrayIterator[Int]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1502, /* ArrayIterator[Int] */
},
};
const struct types resolution_table_array__ArrayIteratorkernel__Int = {
0, /* dummy */
{
&type_array__AbstractArrayReadkernel__Int, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Int] */
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
}
};
/* runtime type NativeArray[Int] */
const struct type type_array__NativeArraykernel__Int = {
1503,
"NativeArray[Int]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraykernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1503, /* NativeArray[Int] */
},
};
const struct types resolution_table_array__NativeArraykernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* NativeArray#0: Int */
&type_array__NativeArraykernel__Int, /* NativeArray[NativeArray#0]: NativeArray[Int] */
}
};
/* runtime type ArrayIterator[MType] */
const struct type type_array__ArrayIteratormodel__MType = {
1818,
"ArrayIterator[MType]", /* class_name_string */
4,
0,
&resolution_table_array__ArrayIteratormodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
337, /* ArrayIterator[nullable MType] */
1818, /* ArrayIterator[MType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MType = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MType] */
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
}
};
/* runtime type ArrayIterator[nullable MType] */
const struct type type_array__ArrayIteratornullable_model__MType = {
337,
"ArrayIterator[nullable MType]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratornullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
337, /* ArrayIterator[nullable MType] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MType = {
0, /* dummy */
{
&type_array__AbstractArrayReadnullable_model__MType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MType] */
&type_array__Arraynullable_model__MType, /* Array[Iterator#0]: Array[nullable MType] */
}
};
/* runtime type NativeArray[MType] */
const struct type type_array__NativeArraymodel__MType = {
1819,
"NativeArray[MType]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraymodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
338, /* NativeArray[nullable MType] */
1819, /* NativeArray[MType] */
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
338,
"NativeArray[nullable MType]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
338, /* NativeArray[nullable MType] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_model__MType, /* NativeArray#0: nullable MType */
&type_array__NativeArraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable MType] */
}
};
/* runtime type IteratorRange[Int] */
const struct type type_range__IteratorRangekernel__Int = {
339,
"IteratorRange[Int]", /* class_name_string */
2,
0,
&resolution_table_range__IteratorRangekernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
339, /* IteratorRange[Int] */
},
};
const struct types resolution_table_range__IteratorRangekernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* IteratorRange#0: Int */
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
&type_range__Rangekernel__Int, /* Range[IteratorRange#0]: Range[Int] */
}
};
/* runtime type ListNode[MClassType] */
const struct type type_list__ListNodemodel__MClassType = {
2466,
"ListNode[MClassType]", /* class_name_string */
3,
0,
&resolution_table_list__ListNodemodel__MClassType,
11,
{
0, /* nullable Object */
1, /* Object */
2358, /* Container[MClassType] */
2466, /* ListNode[MClassType] */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
1916, /* Collection[MClassType] */
},
};
const struct types resolution_table_list__ListNodemodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* ListNode#0: MClassType */
&type_list__ListNodemodel__MClassType, /* ListNode[ListNode#0]: ListNode[MClassType] */
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
/* runtime type Container[MClassType] */
const struct type type_abstract_collection__Containermodel__MClassType = {
2358,
"Container[MClassType]", /* class_name_string */
2,
0,
NULL,
11,
{
0, /* nullable Object */
1, /* Object */
2358, /* Container[MClassType] */
-1, /* empty */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
1916, /* Collection[MClassType] */
},
};
/* runtime type ListIterator[MClassType] */
const struct type type_list__ListIteratormodel__MClassType = {
340,
"ListIterator[MClassType]", /* class_name_string */
2,
0,
&resolution_table_list__ListIteratormodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
340, /* ListIterator[MClassType] */
},
};
const struct types resolution_table_list__ListIteratormodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* ListIterator#0: MClassType */
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
&type_list__Listmodel__MClassType, /* List[ListIterator#0]: List[MClassType] */
}
};
/* runtime type HashMapKeys[String, Int] */
const struct type type_hash_collection__HashMapKeysstring__Stringkernel__Int = {
1820,
"HashMapKeys[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringkernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
595, /* Collection[String] */
1820, /* HashMapKeys[String, Int] */
164, /* Collection[Object] */
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
1821,
"HashMapValues[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringkernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
612, /* Collection[Int] */
1821, /* HashMapValues[String, Int] */
164, /* Collection[Object] */
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
341,
"NativeArray[nullable HashMapNode[String, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
341, /* NativeArray[nullable HashMapNode[String, Int]] */
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
1504,
"HashMapNode[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
125, /* nullable HashMapNode[String, Int] */
1504, /* HashMapNode[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* N: HashMapNode[String, Int] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Int] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
125,
"nullable HashMapNode[String, Int]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodestring__Stringkernel__Int,
3,
{
0, /* nullable Object */
-1, /* empty */
125, /* nullable HashMapNode[String, Int] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodestring__Stringkernel__Int = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* N: HashMapNode[String, Int] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type HashMapIterator[String, Int] */
const struct type type_hash_collection__HashMapIteratorstring__Stringkernel__Int = {
1505,
"HashMapIterator[String, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
342, /* MapIterator[String, Int] */
1505, /* HashMapIterator[String, Int] */
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
342,
"MapIterator[String, Int]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
342, /* MapIterator[String, Int] */
},
};
/* runtime type HashMap[MClass, Array[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass = {
1506,
"HashMap[MClass, Array[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
234, /* HashMap[MClass, Array[nullable MClass]] */
1506, /* HashMap[MClass, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassarray__Arraymodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Array[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassarray__Arraymodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Array[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Array[MClass]]] */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapIteratormodel__MClassarray__Arraymodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Array[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_array__Arraymodel__MClass, /* Map#1: Array[MClass] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Array[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, Array[MClass]] not a live type) */
&type_array__Arraymodel__MClass, /* MapRead#1: Array[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraymodel__MClass, /* HashCollection#1: HashMapNode[MClass, Array[MClass]] */
}
};
/* runtime type Layout[MClass] */
const struct type type_layout_builders__Layoutmodel__MClass = {
343,
"Layout[MClass]", /* class_name_string */
2,
0,
&resolution_table_layout_builders__Layoutmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
343, /* Layout[MClass] */
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
1822,
"HashMap[MClass, HashSet[MClass]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapmodel__MClasshash_collection__HashSetmodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
344, /* Map[MClass, Set[MClass]] */
1507, /* HashMap[MClass, Set[MClass]] */
1822, /* HashMap[MClass, HashSet[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClasshash_collection__HashSetmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, HashSet[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, HashSet[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, HashSet[MClass]]] */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapIteratormodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, HashSet[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_hash_collection__HashSetmodel__MClass, /* Map#1: HashSet[MClass] */
&type_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, HashSet[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, HashSet[MClass]] not a live type) */
&type_hash_collection__HashSetmodel__MClass, /* MapRead#1: HashSet[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_hash_collection__HashMapNodemodel__MClasshash_collection__HashSetmodel__MClass, /* HashCollection#1: HashMapNode[MClass, HashSet[MClass]] */
}
};
/* runtime type HashMap[MClass, Set[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
1507,
"HashMap[MClass, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
344, /* Map[MClass, Set[MClass]] */
1507, /* HashMap[MClass, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[MClass]]] */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setmodel__MClass, /* Map#1: Set[MClass] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[Map#0, Map#1]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Setmodel__MClass, /* MapRead#1: Set[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MClass, /* HashCollection#1: HashMapNode[MClass, Set[MClass]] */
}
};
/* runtime type Map[MClass, Set[MClass]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass = {
344,
"Map[MClass, Set[MClass]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
344, /* Map[MClass, Set[MClass]] */
},
};
/* runtime type PHLayout[MClass, MClass] */
const struct type type_layout_builders__PHLayoutmodel__MClassmodel__MClass = {
1508,
"PHLayout[MClass, MClass]", /* class_name_string */
3,
0,
&resolution_table_layout_builders__PHLayoutmodel__MClassmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
343, /* Layout[MClass] */
1508, /* PHLayout[MClass, MClass] */
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
1509,
"HashMap[MClass, Map[MClass, Int]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
345, /* Map[MClass, Map[MClass, Int]] */
1509, /* HashMap[MClass, Map[MClass, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Map[MClass, Int]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Map[MClass, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Map[MClass, Int]]] */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Map[MClass, Int]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* Map#1: Map[MClass, Int] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Map[MClass, Int]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* Map[Map#0, Map#1]: Map[MClass, Map[MClass, Int]] */
&type_abstract_collection__Mapmodel__MClasskernel__Int, /* MapRead#1: Map[MClass, Int] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Mapmodel__MClasskernel__Int, /* HashCollection#1: HashMapNode[MClass, Map[MClass, Int]] */
}
};
/* runtime type Map[MClass, Map[MClass, Int]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Mapmodel__MClasskernel__Int = {
345,
"Map[MClass, Map[MClass, Int]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
345, /* Map[MClass, Map[MClass, Int]] */
},
};
/* runtime type HashMapKeys[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
2467,
"HashMapKeys[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2066, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
2352, /* HashMapKeys[MClass, Set[MProperty]] */
2467, /* HashMapKeys[MClass, Set[MVirtualTypeProp]] */
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
2507,
"HashMapValues[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
9,
{
0, /* nullable Object */
1, /* Object */
1461, /* Collection[Set[PropertyLayoutElement]] */
1795, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
164, /* Collection[Object] */
1796, /* Collection[Set[MProperty]] */
2353, /* HashMapValues[MClass, Set[MProperty]] */
2087, /* Collection[Set[MVirtualTypeProp]] */
2507, /* HashMapValues[MClass, Set[MVirtualTypeProp]] */
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
2087,
"Collection[Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
NULL,
8,
{
0, /* nullable Object */
1, /* Object */
1461, /* Collection[Set[PropertyLayoutElement]] */
-1, /* empty */
164, /* Collection[Object] */
1796, /* Collection[Set[MProperty]] */
-1, /* empty */
2087, /* Collection[Set[MVirtualTypeProp]] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1823,
"NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
5,
{
0, /* nullable Object */
1, /* Object */
309, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1462, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1823, /* NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
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
2468,
"HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
117, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
310, /* nullable HashMapNode[MClass, Set[MProperty]] */
1463, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1510, /* nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
2067, /* HashMapNode[MClass, Set[MProperty]] */
2468, /* HashMapNode[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode#1: Set[MVirtualTypeProp] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* N: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1510,
"nullable HashMapNode[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
-1, /* empty */
117, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
310, /* nullable HashMapNode[MClass, Set[MProperty]] */
-1, /* empty */
1510, /* nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode#1: Set[MVirtualTypeProp] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* N: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapIterator[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
2469,
"HashMapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
8,
{
0, /* nullable Object */
1, /* Object */
311, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1464, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1465, /* MapIterator[MClass, Set[MProperty]] */
1824, /* MapIterator[MClass, Set[MVirtualTypeProp]] */
2068, /* HashMapIterator[MClass, Set[MProperty]] */
2469, /* HashMapIterator[MClass, Set[MVirtualTypeProp]] */
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
1824,
"MapIterator[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
5,
0,
NULL,
6,
{
0, /* nullable Object */
1, /* Object */
311, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1465, /* MapIterator[MClass, Set[MProperty]] */
1824, /* MapIterator[MClass, Set[MVirtualTypeProp]] */
},
};
/* runtime type HashSetNode[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2550,
"HashSetNode[MVirtualTypeProp]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp,
10,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
316, /* nullable HashSetNode[PropertyLayoutElement] */
1456, /* HashSetNode[Object] */
1478, /* nullable HashSetNode[MProperty] */
1825, /* nullable HashSetNode[MVirtualTypeProp] */
2071, /* HashSetNode[PropertyLayoutElement] */
2459, /* HashSetNode[MProperty] */
2550, /* HashSetNode[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* HashSetNode#0: MVirtualTypeProp */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* N: HashSetNode[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* HashNode#0: MVirtualTypeProp */
}
};
/* runtime type nullable HashSetNode[MVirtualTypeProp] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
1825,
"nullable HashSetNode[MVirtualTypeProp]", /* class_name_string */
6,
1,
&resolution_table_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp,
7,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
316, /* nullable HashSetNode[PropertyLayoutElement] */
-1, /* empty */
1478, /* nullable HashSetNode[MProperty] */
1825, /* nullable HashSetNode[MVirtualTypeProp] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_model__MVirtualTypeProp, /* HashSetNode#0: MVirtualTypeProp */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* N: HashSetNode[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* HashNode#0: MVirtualTypeProp */
}
};
/* runtime type HashSetIterator[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
2088,
"HashSetIterator[MVirtualTypeProp]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1476, /* HashSetIterator[PropertyLayoutElement] */
1804, /* HashSetIterator[MProperty] */
2088, /* HashSetIterator[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MVirtualTypeProp, /* HashSet[HashSetIterator#0]: HashSet[MVirtualTypeProp] */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[Iterator#0]: Array[MVirtualTypeProp] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp = {
2089,
"NativeArray[nullable HashSetNode[MVirtualTypeProp]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp,
6,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1477, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1805, /* NativeArray[nullable HashSetNode[MProperty]] */
2089, /* NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
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
2090,
"HashMap[MVirtualTypeProp, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
1511, /* HashMap[PropertyLayoutElement, Int] */
1512, /* Map[MVirtualTypeProp, Int] */
2090, /* HashMap[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MVirtualTypePropkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MVirtualTypeProp, Int] */
&type_hash_collection__HashMapValuesmodel__MVirtualTypePropkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MVirtualTypeProp, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
&type_model__MVirtualTypeProp, /* MapRead#0: MVirtualTypeProp */
&type_hash_collection__HashMapIteratormodel__MVirtualTypePropkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MVirtualTypeProp, Int] */
&type_model__MVirtualTypeProp, /* Map#0: MVirtualTypeProp */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MVirtualTypeProp, Int] */
&type_abstract_collection__Mapmodel__MVirtualTypePropkernel__Int, /* Map[Map#0, Map#1]: Map[MVirtualTypeProp, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MVirtualTypeProp, /* HashCollection#0: MVirtualTypeProp */
&type_hash_collection__HashMapNodemodel__MVirtualTypePropkernel__Int, /* HashCollection#1: HashMapNode[MVirtualTypeProp, Int] */
}
};
/* runtime type HashMap[PropertyLayoutElement, Int] */
const struct type type_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int = {
1511,
"HashMap[PropertyLayoutElement, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
1511, /* HashMap[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_hash_collection__HashMaplayout_builders__PropertyLayoutElementkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeyslayout_builders__PropertyLayoutElementkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[PropertyLayoutElement, Int] */
&type_hash_collection__HashMapValueslayout_builders__PropertyLayoutElementkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[PropertyLayoutElement, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
&type_layout_builders__PropertyLayoutElement, /* MapRead#0: PropertyLayoutElement */
&type_hash_collection__HashMapIteratorlayout_builders__PropertyLayoutElementkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[PropertyLayoutElement, Int] */
&type_layout_builders__PropertyLayoutElement, /* Map#0: PropertyLayoutElement */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[PropertyLayoutElement, Int] */
&type_abstract_collection__Maplayout_builders__PropertyLayoutElementkernel__Int, /* Map[Map#0, Map#1]: Map[PropertyLayoutElement, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_layout_builders__PropertyLayoutElement, /* HashCollection#0: PropertyLayoutElement */
&type_hash_collection__HashMapNodelayout_builders__PropertyLayoutElementkernel__Int, /* HashCollection#1: HashMapNode[PropertyLayoutElement, Int] */
}
};
/* runtime type Map[MVirtualTypeProp, Int] */
const struct type type_abstract_collection__Mapmodel__MVirtualTypePropkernel__Int = {
1512,
"Map[MVirtualTypeProp, Int]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
-1, /* empty */
1512, /* Map[MVirtualTypeProp, Int] */
},
};
/* runtime type Map[PropertyLayoutElement, Int] */
const struct type type_abstract_collection__Maplayout_builders__PropertyLayoutElementkernel__Int = {
346,
"Map[PropertyLayoutElement, Int]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
},
};
/* runtime type Layout[MVirtualTypeProp] */
const struct type type_layout_builders__Layoutmodel__MVirtualTypeProp = {
1513,
"Layout[MVirtualTypeProp]", /* class_name_string */
3,
0,
&resolution_table_layout_builders__Layoutmodel__MVirtualTypeProp,
4,
{
0, /* nullable Object */
1, /* Object */
347, /* Layout[PropertyLayoutElement] */
1513, /* Layout[MVirtualTypeProp] */
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
347,
"Layout[PropertyLayoutElement]", /* class_name_string */
2,
0,
&resolution_table_layout_builders__Layoutlayout_builders__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
347, /* Layout[PropertyLayoutElement] */
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
1514,
"ArrayIterator[CodeWriter]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorabstract_compiler__CodeWriter,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1514, /* ArrayIterator[CodeWriter] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_array__AbstractArrayReadabstract_compiler__CodeWriter, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[CodeWriter] */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[Iterator#0]: Array[CodeWriter] */
}
};
/* runtime type NativeArray[CodeWriter] */
const struct type type_array__NativeArrayabstract_compiler__CodeWriter = {
1515,
"NativeArray[CodeWriter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__CodeWriter,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1515, /* NativeArray[CodeWriter] */
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
2091,
"HashSetNode[String]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodestring__String,
6,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
348, /* nullable HashSetNode[String] */
1456, /* HashSetNode[Object] */
2091, /* HashSetNode[String] */
},
};
const struct types resolution_table_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_string__String, /* HashSetNode#0: String */
NULL, /* empty */
&type_hash_collection__HashSetNodestring__String, /* N: HashSetNode[String] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashSetNode[String] */
const struct type type_nullable_hash_collection__HashSetNodestring__String = {
348,
"nullable HashSetNode[String]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashSetNodestring__String,
4,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
348, /* nullable HashSetNode[String] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodestring__String = {
0, /* dummy */
{
&type_string__String, /* HashSetNode#0: String */
NULL, /* empty */
&type_hash_collection__HashSetNodestring__String, /* N: HashSetNode[String] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type HashSetIterator[String] */
const struct type type_hash_collection__HashSetIteratorstring__String = {
1516,
"HashSetIterator[String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashSetIteratorstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1516, /* HashSetIterator[String] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorstring__String = {
0, /* dummy */
{
&type_hash_collection__HashSetstring__String, /* HashSet[HashSetIterator#0]: HashSet[String] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type NativeArray[nullable HashSetNode[String]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodestring__String = {
1517,
"NativeArray[nullable HashSetNode[String]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodestring__String,
4,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1517, /* NativeArray[nullable HashSetNode[String]] */
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
2092,
"HashMap[MAttribute, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
1511, /* HashMap[PropertyLayoutElement, Int] */
1518, /* Map[MAttribute, Int] */
2092, /* HashMap[MAttribute, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MAttributekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MAttributekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MAttribute, Int] */
&type_hash_collection__HashMapValuesmodel__MAttributekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MAttribute, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
&type_model__MAttribute, /* MapRead#0: MAttribute */
&type_hash_collection__HashMapIteratormodel__MAttributekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MAttribute, Int] */
&type_model__MAttribute, /* Map#0: MAttribute */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MAttribute, Int] */
&type_abstract_collection__Mapmodel__MAttributekernel__Int, /* Map[Map#0, Map#1]: Map[MAttribute, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MAttribute, /* HashCollection#0: MAttribute */
&type_hash_collection__HashMapNodemodel__MAttributekernel__Int, /* HashCollection#1: HashMapNode[MAttribute, Int] */
}
};
/* runtime type Map[MAttribute, Int] */
const struct type type_abstract_collection__Mapmodel__MAttributekernel__Int = {
1518,
"Map[MAttribute, Int]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
346, /* Map[PropertyLayoutElement, Int] */
-1, /* empty */
1518, /* Map[MAttribute, Int] */
},
};
/* runtime type Layout[MAttribute] */
const struct type type_layout_builders__Layoutmodel__MAttribute = {
1519,
"Layout[MAttribute]", /* class_name_string */
3,
0,
&resolution_table_layout_builders__Layoutmodel__MAttribute,
4,
{
0, /* nullable Object */
1, /* Object */
347, /* Layout[PropertyLayoutElement] */
1519, /* Layout[MAttribute] */
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
2470,
"HashMapKeys[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2066, /* HashMapKeys[MClass, Set[PropertyLayoutElement]] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
2352, /* HashMapKeys[MClass, Set[MProperty]] */
2470, /* HashMapKeys[MClass, Set[MAttribute]] */
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
2508,
"HashMapValues[MClass, Set[MAttribute]]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute,
9,
{
0, /* nullable Object */
1, /* Object */
1461, /* Collection[Set[PropertyLayoutElement]] */
1795, /* HashMapValues[MClass, Set[PropertyLayoutElement]] */
164, /* Collection[Object] */
1796, /* Collection[Set[MProperty]] */
2353, /* HashMapValues[MClass, Set[MProperty]] */
2093, /* Collection[Set[MAttribute]] */
2508, /* HashMapValues[MClass, Set[MAttribute]] */
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
2093,
"Collection[Set[MAttribute]]", /* class_name_string */
7,
0,
NULL,
8,
{
0, /* nullable Object */
1, /* Object */
1461, /* Collection[Set[PropertyLayoutElement]] */
-1, /* empty */
164, /* Collection[Object] */
1796, /* Collection[Set[MProperty]] */
-1, /* empty */
2093, /* Collection[Set[MAttribute]] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1826,
"NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
5,
{
0, /* nullable Object */
1, /* Object */
309, /* NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
1462, /* NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
1826, /* NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
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
2471,
"HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
117, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
310, /* nullable HashMapNode[MClass, Set[MProperty]] */
1463, /* HashMapNode[MClass, Set[PropertyLayoutElement]] */
1520, /* nullable HashMapNode[MClass, Set[MAttribute]] */
2067, /* HashMapNode[MClass, Set[MProperty]] */
2471, /* HashMapNode[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* HashMapNode#1: Set[MAttribute] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* N: HashMapNode[MClass, Set[MAttribute]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Set[MAttribute]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
1520,
"nullable HashMapNode[MClass, Set[MAttribute]]", /* class_name_string */
5,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute,
6,
{
0, /* nullable Object */
-1, /* empty */
117, /* nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
310, /* nullable HashMapNode[MClass, Set[MProperty]] */
-1, /* empty */
1520, /* nullable HashMapNode[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* HashMapNode#1: Set[MAttribute] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* N: HashMapNode[MClass, Set[MAttribute]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapIterator[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute = {
2472,
"HashMapIterator[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute,
8,
{
0, /* nullable Object */
1, /* Object */
311, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
1464, /* HashMapIterator[MClass, Set[PropertyLayoutElement]] */
1465, /* MapIterator[MClass, Set[MProperty]] */
1827, /* MapIterator[MClass, Set[MAttribute]] */
2068, /* HashMapIterator[MClass, Set[MProperty]] */
2472, /* HashMapIterator[MClass, Set[MAttribute]] */
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
1827,
"MapIterator[MClass, Set[MAttribute]]", /* class_name_string */
5,
0,
NULL,
6,
{
0, /* nullable Object */
1, /* Object */
311, /* MapIterator[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1465, /* MapIterator[MClass, Set[MProperty]] */
1827, /* MapIterator[MClass, Set[MAttribute]] */
},
};
/* runtime type HashSetNode[MAttribute] */
const struct type type_hash_collection__HashSetNodemodel__MAttribute = {
2551,
"HashSetNode[MAttribute]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetNodemodel__MAttribute,
10,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
316, /* nullable HashSetNode[PropertyLayoutElement] */
1456, /* HashSetNode[Object] */
1478, /* nullable HashSetNode[MProperty] */
1828, /* nullable HashSetNode[MAttribute] */
2071, /* HashSetNode[PropertyLayoutElement] */
2459, /* HashSetNode[MProperty] */
2551, /* HashSetNode[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* HashSetNode#0: MAttribute */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MAttribute, /* N: HashSetNode[MAttribute] */
&type_model__MAttribute, /* HashNode#0: MAttribute */
}
};
/* runtime type nullable HashSetNode[MAttribute] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MAttribute = {
1828,
"nullable HashSetNode[MAttribute]", /* class_name_string */
6,
1,
&resolution_table_nullable_hash_collection__HashSetNodemodel__MAttribute,
7,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
316, /* nullable HashSetNode[PropertyLayoutElement] */
-1, /* empty */
1478, /* nullable HashSetNode[MProperty] */
1828, /* nullable HashSetNode[MAttribute] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodemodel__MAttribute = {
0, /* dummy */
{
&type_model__MAttribute, /* HashSetNode#0: MAttribute */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MAttribute, /* N: HashSetNode[MAttribute] */
&type_model__MAttribute, /* HashNode#0: MAttribute */
}
};
/* runtime type HashSetIterator[MAttribute] */
const struct type type_hash_collection__HashSetIteratormodel__MAttribute = {
2094,
"HashSetIterator[MAttribute]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetIteratormodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1476, /* HashSetIterator[PropertyLayoutElement] */
1804, /* HashSetIterator[MProperty] */
2094, /* HashSetIterator[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MAttribute, /* HashSet[HashSetIterator#0]: HashSet[MAttribute] */
&type_array__Arraymodel__MAttribute, /* Array[Iterator#0]: Array[MAttribute] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MAttribute]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute = {
2095,
"NativeArray[nullable HashSetNode[MAttribute]]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute,
6,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1477, /* NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
1805, /* NativeArray[nullable HashSetNode[MProperty]] */
2095, /* NativeArray[nullable HashSetNode[MAttribute]] */
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
1521,
"ArrayIterator[RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1521, /* ArrayIterator[RuntimeVariable] */
},
};
const struct types resolution_table_array__ArrayIteratorabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__AbstractArrayReadabstract_compiler__RuntimeVariable, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[RuntimeVariable] */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[Iterator#0]: Array[RuntimeVariable] */
}
};
/* runtime type NativeArray[RuntimeVariable] */
const struct type type_array__NativeArrayabstract_compiler__RuntimeVariable = {
1522,
"NativeArray[RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1522, /* NativeArray[RuntimeVariable] */
},
};
const struct types resolution_table_array__NativeArrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_abstract_compiler__RuntimeVariable, /* NativeArray#0: RuntimeVariable */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[NativeArray#0]: NativeArray[RuntimeVariable] */
}
};
/* runtime type ListNode[String] */
const struct type type_list__ListNodestring__String = {
2096,
"ListNode[String]", /* class_name_string */
5,
0,
&resolution_table_list__ListNodestring__String,
6,
{
0, /* nullable Object */
1, /* Object */
595, /* Collection[String] */
1829, /* Container[String] */
164, /* Collection[Object] */
2096, /* ListNode[String] */
},
};
const struct types resolution_table_list__ListNodestring__String = {
0, /* dummy */
{
&type_string__String, /* ListNode#0: String */
&type_list__ListNodestring__String, /* ListNode[ListNode#0]: ListNode[String] */
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
/* runtime type Container[String] */
const struct type type_abstract_collection__Containerstring__String = {
1829,
"Container[String]", /* class_name_string */
3,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
595, /* Collection[String] */
1829, /* Container[String] */
164, /* Collection[Object] */
},
};
/* runtime type ListIterator[String] */
const struct type type_list__ListIteratorstring__String = {
349,
"ListIterator[String]", /* class_name_string */
2,
0,
&resolution_table_list__ListIteratorstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
349, /* ListIterator[String] */
},
};
const struct types resolution_table_list__ListIteratorstring__String = {
0, /* dummy */
{
&type_string__String, /* ListIterator#0: String */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
&type_list__Liststring__String, /* List[ListIterator#0]: List[String] */
}
};
/* runtime type ArrayIterator[MClassType] */
const struct type type_array__ArrayIteratormodel__MClassType = {
2097,
"ArrayIterator[MClassType]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratormodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
337, /* ArrayIterator[nullable MType] */
1818, /* ArrayIterator[MType] */
2097, /* ArrayIterator[MClassType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MClassType = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MClassType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
}
};
/* runtime type NativeArray[MClassType] */
const struct type type_array__NativeArraymodel__MClassType = {
2098,
"NativeArray[MClassType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
338, /* NativeArray[nullable MType] */
1819, /* NativeArray[MType] */
2098, /* NativeArray[MClassType] */
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
1523,
"HashMap[MType, Map[MType, Int]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
350, /* Map[MType, Map[MType, Int]] */
1523, /* HashMap[MType, Map[MType, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, Map[MType, Int]] */
&type_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, Map[MType, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, Map[MType, Int]]] */
&type_model__MType, /* MapRead#0: MType */
&type_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, Map[MType, Int]] */
&type_model__MType, /* Map#0: MType */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* Map#1: Map[MType, Int] */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* Map[Map#0, Map#1]: Map[MType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* MapRead#1: Map[MType, Int] */
&type_model__MType, /* HashCollection#0: MType */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashCollection#1: HashMapNode[MType, Map[MType, Int]] */
}
};
/* runtime type Map[MType, Map[MType, Int]] */
const struct type type_abstract_collection__Mapmodel__MTypeabstract_collection__Mapmodel__MTypekernel__Int = {
350,
"Map[MType, Map[MType, Int]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
350, /* Map[MType, Map[MType, Int]] */
},
};
/* runtime type HashMap[MType, HashSet[MType]] */
const struct type type_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType = {
1830,
"HashMap[MType, HashSet[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
238, /* Map[MType, Set[MType]] */
631, /* HashMap[MType, Set[MType]] */
1830, /* HashMap[MType, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashSetmodel__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashSetmodel__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, HashSet[MType]] */
&type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashSetmodel__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, HashSet[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, HashSet[MType]]] */
&type_model__MType, /* MapRead#0: MType */
&type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashSetmodel__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, HashSet[MType]] */
&type_model__MType, /* Map#0: MType */
&type_hash_collection__HashSetmodel__MType, /* Map#1: HashSet[MType] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, HashSet[MType]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MType, HashSet[MType]] not a live type) */
&type_hash_collection__HashSetmodel__MType, /* MapRead#1: HashSet[MType] */
&type_model__MType, /* HashCollection#0: MType */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashSetmodel__MType, /* HashCollection#1: HashMapNode[MType, HashSet[MType]] */
}
};
/* runtime type HashMapKeys[EscapeMark, String] */
const struct type type_hash_collection__HashMapKeysscope__EscapeMarkstring__String = {
1831,
"HashMapKeys[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysscope__EscapeMarkstring__String,
5,
{
0, /* nullable Object */
1, /* Object */
1524, /* Collection[EscapeMark] */
1831, /* HashMapKeys[EscapeMark, String] */
164, /* Collection[Object] */
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
1524,
"Collection[EscapeMark]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1524, /* Collection[EscapeMark] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type HashMapValues[EscapeMark, String] */
const struct type type_hash_collection__HashMapValuesscope__EscapeMarkstring__String = {
1832,
"HashMapValues[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesscope__EscapeMarkstring__String,
5,
{
0, /* nullable Object */
1, /* Object */
595, /* Collection[String] */
1832, /* HashMapValues[EscapeMark, String] */
164, /* Collection[Object] */
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
351,
"NativeArray[nullable HashMapNode[EscapeMark, String]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
351, /* NativeArray[nullable HashMapNode[EscapeMark, String]] */
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
1525,
"HashMapNode[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
126, /* nullable HashMapNode[EscapeMark, String] */
1525, /* HashMapNode[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_scope__EscapeMark, /* HashMapNode#0: EscapeMark */
&type_string__String, /* HashMapNode#1: String */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* N: HashMapNode[EscapeMark, String] */
&type_scope__EscapeMark, /* HashNode#0: EscapeMark */
}
};
/* runtime type nullable HashMapNode[EscapeMark, String] */
const struct type type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
126,
"nullable HashMapNode[EscapeMark, String]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
-1, /* empty */
126, /* nullable HashMapNode[EscapeMark, String] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_scope__EscapeMark, /* HashMapNode#0: EscapeMark */
&type_string__String, /* HashMapNode#1: String */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* N: HashMapNode[EscapeMark, String] */
&type_scope__EscapeMark, /* HashNode#0: EscapeMark */
}
};
/* runtime type HashMapIterator[EscapeMark, String] */
const struct type type_hash_collection__HashMapIteratorscope__EscapeMarkstring__String = {
1526,
"HashMapIterator[EscapeMark, String]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorscope__EscapeMarkstring__String,
4,
{
0, /* nullable Object */
1, /* Object */
352, /* MapIterator[EscapeMark, String] */
1526, /* HashMapIterator[EscapeMark, String] */
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
352,
"MapIterator[EscapeMark, String]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
352, /* MapIterator[EscapeMark, String] */
},
};
/* runtime type HashMapKeys[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable = {
1833,
"HashMapKeys[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable,
5,
{
0, /* nullable Object */
1, /* Object */
1422, /* Collection[Variable] */
1833, /* HashMapKeys[Variable, RuntimeVariable] */
164, /* Collection[Object] */
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
1834,
"HashMapValues[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable,
5,
{
0, /* nullable Object */
1, /* Object */
618, /* Collection[RuntimeVariable] */
1834, /* HashMapValues[Variable, RuntimeVariable] */
164, /* Collection[Object] */
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
353,
"NativeArray[nullable HashMapNode[Variable, RuntimeVariable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
353, /* NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
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
1527,
"HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
127, /* nullable HashMapNode[Variable, RuntimeVariable] */
1527, /* HashMapNode[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_abstract_compiler__RuntimeVariable, /* HashMapNode#1: RuntimeVariable */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* N: HashMapNode[Variable, RuntimeVariable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, RuntimeVariable] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
127,
"nullable HashMapNode[Variable, RuntimeVariable]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
-1, /* empty */
127, /* nullable HashMapNode[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_abstract_compiler__RuntimeVariable, /* HashMapNode#1: RuntimeVariable */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* N: HashMapNode[Variable, RuntimeVariable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type HashMapIterator[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable = {
1528,
"HashMapIterator[Variable, RuntimeVariable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable,
4,
{
0, /* nullable Object */
1, /* Object */
354, /* MapIterator[Variable, RuntimeVariable] */
1528, /* HashMapIterator[Variable, RuntimeVariable] */
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
354,
"MapIterator[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
354, /* MapIterator[Variable, RuntimeVariable] */
},
};
/* runtime type ArrayIterator[State] */
const struct type type_array__ArrayIteratorparser__State = {
1529,
"ArrayIterator[State]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorparser__State,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1529, /* ArrayIterator[State] */
},
};
const struct types resolution_table_array__ArrayIteratorparser__State = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser__State, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[State] */
&type_array__Arrayparser__State, /* Array[Iterator#0]: Array[State] */
}
};
/* runtime type NativeArray[State] */
const struct type type_array__NativeArrayparser__State = {
1530,
"NativeArray[State]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser__State,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1530, /* NativeArray[State] */
},
};
const struct types resolution_table_array__NativeArrayparser__State = {
0, /* dummy */
{
&type_parser__State, /* NativeArray#0: State */
&type_array__NativeArrayparser__State, /* NativeArray[NativeArray#0]: NativeArray[State] */
}
};
/* runtime type Array[AClassdef] */
const struct type type_array__Arrayparser_nodes__AClassdef = {
2613,
"Array[AClassdef]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AClassdef,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1926, /* Collection[AClassdef] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2562, /* AbstractArrayRead[AClassdef] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2613, /* Array[AClassdef] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[Array#0]: Array[AClassdef] */
&type_array__NativeArrayparser_nodes__AClassdef, /* NativeArray[Array#0]: NativeArray[AClassdef] */
&type_parser_nodes__AClassdef, /* Sequence#0: AClassdef */
&type_parser_nodes__AClassdef, /* SimpleCollection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Array#0]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* Array#0: AClassdef */
&type_array__NativeArrayparser_nodes__AClassdef, /* NativeArray[ArrayCapable#0]: NativeArray[AClassdef] */
&type_parser_nodes__AClassdef, /* AbstractArray#0: AClassdef */
&type_parser_nodes__AClassdef, /* RemovableCollection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Sequence#0]: Collection[AClassdef] */
&type_array__Arrayparser_nodes__AClassdef, /* Array[Sequence#0]: Array[AClassdef] */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[SimpleCollection#0]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* Collection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Collection#0]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* SequenceRead#0: AClassdef */
&type_parser_nodes__AClassdef, /* AbstractArrayRead#0: AClassdef */
&type_array__Arrayparser_nodes__AClassdef, /* Array[AbstractArrayRead#0]: Array[AClassdef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AClassdef] not a live type) */
&type_array__ArrayIteratorparser_nodes__AClassdef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AClassdef] */
}
};
/* runtime type AbstractArrayRead[AClassdef] */
const struct type type_array__AbstractArrayReadparser_nodes__AClassdef = {
2562,
"AbstractArrayRead[AClassdef]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1926, /* Collection[AClassdef] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2562, /* AbstractArrayRead[AClassdef] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[APropdef] */
const struct type type_array__Arrayparser_nodes__APropdef = {
2614,
"Array[APropdef]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__APropdef,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1927, /* Collection[APropdef] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2563, /* AbstractArrayRead[APropdef] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2614, /* Array[APropdef] */
2579, /* Array[Prod] */
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
2563,
"AbstractArrayRead[APropdef]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1927, /* Collection[APropdef] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2563, /* AbstractArrayRead[APropdef] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type ListNode[ANode] */
const struct type type_list__ListNodeparser_nodes__ANode = {
2099,
"ListNode[ANode]", /* class_name_string */
5,
0,
&resolution_table_list__ListNodeparser_nodes__ANode,
6,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
1835, /* Container[ANode] */
164, /* Collection[Object] */
2099, /* ListNode[ANode] */
},
};
const struct types resolution_table_list__ListNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* ListNode#0: ANode */
&type_list__ListNodeparser_nodes__ANode, /* ListNode[ListNode#0]: ListNode[ANode] */
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
/* runtime type Container[ANode] */
const struct type type_abstract_collection__Containerparser_nodes__ANode = {
1835,
"Container[ANode]", /* class_name_string */
3,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
1835, /* Container[ANode] */
164, /* Collection[Object] */
},
};
/* runtime type ListIterator[ANode] */
const struct type type_list__ListIteratorparser_nodes__ANode = {
355,
"ListIterator[ANode]", /* class_name_string */
2,
0,
&resolution_table_list__ListIteratorparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
355, /* ListIterator[ANode] */
},
};
const struct types resolution_table_list__ListIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* ListIterator#0: ANode */
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
&type_list__Listparser_nodes__ANode, /* List[ListIterator#0]: List[ANode] */
}
};
/* runtime type HashSetNode[ANode] */
const struct type type_hash_collection__HashSetNodeparser_nodes__ANode = {
2100,
"HashSetNode[ANode]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodeparser_nodes__ANode,
6,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
356, /* nullable HashSetNode[ANode] */
1456, /* HashSetNode[Object] */
2100, /* HashSetNode[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* HashSetNode#0: ANode */
NULL, /* empty */
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* N: HashSetNode[ANode] */
&type_parser_nodes__ANode, /* HashNode#0: ANode */
}
};
/* runtime type nullable HashSetNode[ANode] */
const struct type type_nullable_hash_collection__HashSetNodeparser_nodes__ANode = {
356,
"nullable HashSetNode[ANode]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashSetNodeparser_nodes__ANode,
4,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
356, /* nullable HashSetNode[ANode] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* HashSetNode#0: ANode */
NULL, /* empty */
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* N: HashSetNode[ANode] */
&type_parser_nodes__ANode, /* HashNode#0: ANode */
}
};
/* runtime type HashSetIterator[ANode] */
const struct type type_hash_collection__HashSetIteratorparser_nodes__ANode = {
1531,
"HashSetIterator[ANode]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashSetIteratorparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1531, /* HashSetIterator[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashSetparser_nodes__ANode, /* HashSet[HashSetIterator#0]: HashSet[ANode] */
&type_array__Arrayparser_nodes__ANode, /* Array[Iterator#0]: Array[ANode] */
}
};
/* runtime type NativeArray[nullable HashSetNode[ANode]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
1532,
"NativeArray[nullable HashSetNode[ANode]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode,
4,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1532, /* NativeArray[nullable HashSetNode[ANode]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray#0: nullable HashSetNode[ANode] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[ANode]] */
}
};
/* runtime type HashMapKeys[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
1836,
"HashMapKeys[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassDef,
5,
{
0, /* nullable Object */
1, /* Object */
588, /* Collection[MModule] */
1836, /* HashMapKeys[MModule, Set[MClassDef]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClassDef]] */
&type_abstract_collection__MapKeysIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmodel_base__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
1837,
"HashMapValues[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassDef,
5,
{
0, /* nullable Object */
1, /* Object */
1533, /* Collection[Set[MClassDef]] */
1837, /* HashMapValues[MModule, Set[MClassDef]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClassDef]] */
&type_abstract_collection__MapValuesIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClassDef]] */
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
1533,
"Collection[Set[MClassDef]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1533, /* Collection[Set[MClassDef]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
357,
"NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
357, /* NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
1534,
"HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
128, /* nullable HashMapNode[MModule, Set[MClassDef]] */
1534, /* HashMapNode[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassDef, /* HashMapNode#1: Set[MClassDef] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* N: HashMapNode[MModule, Set[MClassDef]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
128,
"nullable HashMapNode[MModule, Set[MClassDef]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
-1, /* empty */
128, /* nullable HashMapNode[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassDef, /* HashMapNode#1: Set[MClassDef] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* N: HashMapNode[MModule, Set[MClassDef]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
1535,
"HashMapIterator[MModule, Set[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
358, /* MapIterator[MModule, Set[MClassDef]] */
1535, /* HashMapIterator[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassDef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClassDef]] */
}
};
/* runtime type MapIterator[MModule, Set[MClassDef]] */
const struct type type_abstract_collection__MapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassDef = {
358,
"MapIterator[MModule, Set[MClassDef]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
358, /* MapIterator[MModule, Set[MClassDef]] */
},
};
/* runtime type HashMapKeys[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClass = {
1838,
"HashMapKeys[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
588, /* Collection[MModule] */
1838, /* HashMapKeys[MModule, Set[MClass]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClass]] */
&type_abstract_collection__MapKeysIteratormodel_base__MModuleabstract_collection__Setmodel__MClass, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClass]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmodel_base__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClass = {
1839,
"HashMapValues[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
1536, /* Collection[Set[MClass]] */
1839, /* HashMapValues[MModule, Set[MClass]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClass]] */
&type_abstract_collection__MapValuesIteratormodel_base__MModuleabstract_collection__Setmodel__MClass, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClass]] */
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
1536,
"Collection[Set[MClass]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1536, /* Collection[Set[MClass]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
359,
"NativeArray[nullable HashMapNode[MModule, Set[MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
359, /* NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
1537,
"HashMapNode[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
129, /* nullable HashMapNode[MModule, Set[MClass]] */
1537, /* HashMapNode[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClass, /* HashMapNode#1: Set[MClass] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass, /* N: HashMapNode[MModule, Set[MClass]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
129,
"nullable HashMapNode[MModule, Set[MClass]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
-1, /* empty */
129, /* nullable HashMapNode[MModule, Set[MClass]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClass, /* HashMapNode#1: Set[MClass] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClass, /* N: HashMapNode[MModule, Set[MClass]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashMapIterator[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClass = {
1538,
"HashMapIterator[MModule, Set[MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
360, /* MapIterator[MModule, Set[MClass]] */
1538, /* HashMapIterator[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClass, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClass]] */
}
};
/* runtime type MapIterator[MModule, Set[MClass]] */
const struct type type_abstract_collection__MapIteratormodel_base__MModuleabstract_collection__Setmodel__MClass = {
360,
"MapIterator[MModule, Set[MClass]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
360, /* MapIterator[MModule, Set[MClass]] */
},
};
/* runtime type HashMapKeys[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassType = {
1840,
"HashMapKeys[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
588, /* Collection[MModule] */
1840, /* HashMapKeys[MModule, Set[MClassType]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, Set[MClassType]] */
&type_abstract_collection__MapKeysIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, Set[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmodel_base__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassType = {
2101,
"HashMapValues[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
1479, /* Collection[Set[MType]] */
2101, /* HashMapValues[MModule, Set[MClassType]] */
164, /* Collection[Object] */
1841, /* Collection[Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, Set[MClassType]] */
&type_abstract_collection__MapValuesIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, Set[MClassType]] */
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
1841,
"Collection[Set[MClassType]]", /* class_name_string */
5,
0,
NULL,
6,
{
0, /* nullable Object */
1, /* Object */
1479, /* Collection[Set[MType]] */
-1, /* empty */
164, /* Collection[Object] */
1841, /* Collection[Set[MClassType]] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
361,
"NativeArray[nullable HashMapNode[MModule, Set[MClassType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
361, /* NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MModule, Set[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
}
};
/* runtime type HashMapNode[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
1539,
"HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
130, /* nullable HashMapNode[MModule, Set[MClassType]] */
1539, /* HashMapNode[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassType, /* HashMapNode#1: Set[MClassType] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType, /* N: HashMapNode[MModule, Set[MClassType]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, Set[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
130,
"nullable HashMapNode[MModule, Set[MClassType]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
-1, /* empty */
130, /* nullable HashMapNode[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_abstract_collection__Setmodel__MClassType, /* HashMapNode#1: Set[MClassType] */
&type_hash_collection__HashMapNodemodel_base__MModuleabstract_collection__Setmodel__MClassType, /* N: HashMapNode[MModule, Set[MClassType]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashMapIterator[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType = {
1540,
"HashMapIterator[MModule, Set[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
362, /* MapIterator[MModule, Set[MClassType]] */
1540, /* HashMapIterator[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleabstract_collection__Setmodel__MClassType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, Set[MClassType]] */
}
};
/* runtime type MapIterator[MModule, Set[MClassType]] */
const struct type type_abstract_collection__MapIteratormodel_base__MModuleabstract_collection__Setmodel__MClassType = {
362,
"MapIterator[MModule, Set[MClassType]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
362, /* MapIterator[MModule, Set[MClassType]] */
},
};
/* runtime type ArrayIterator[MGenericType] */
const struct type type_array__ArrayIteratormodel__MGenericType = {
2359,
"ArrayIterator[MGenericType]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratormodel__MGenericType,
7,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
337, /* ArrayIterator[nullable MType] */
1818, /* ArrayIterator[MType] */
2097, /* ArrayIterator[MClassType] */
2359, /* ArrayIterator[MGenericType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MGenericType = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MGenericType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MGenericType] */
&type_array__Arraymodel__MGenericType, /* Array[Iterator#0]: Array[MGenericType] */
}
};
/* runtime type NativeArray[MGenericType] */
const struct type type_array__NativeArraymodel__MGenericType = {
2360,
"NativeArray[MGenericType]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MGenericType,
7,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
338, /* NativeArray[nullable MType] */
1819, /* NativeArray[MType] */
2098, /* NativeArray[MClassType] */
2360, /* NativeArray[MGenericType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MGenericType = {
0, /* dummy */
{
&type_model__MGenericType, /* NativeArray#0: MGenericType */
&type_array__NativeArraymodel__MGenericType, /* NativeArray[NativeArray#0]: NativeArray[MGenericType] */
}
};
/* runtime type ArrayIterator[MPropDef] */
const struct type type_array__ArrayIteratormodel__MPropDef = {
2102,
"ArrayIterator[MPropDef]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratormodel__MPropDef,
6,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
363, /* ArrayIterator[nullable MPropDef] */
1435, /* ArrayIterator[PropertyLayoutElement] */
2102, /* ArrayIterator[MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MPropDef = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MPropDef] */
&type_array__Arraymodel__MPropDef, /* Array[Iterator#0]: Array[MPropDef] */
}
};
/* runtime type ArrayIterator[nullable MPropDef] */
const struct type type_array__ArrayIteratornullable_model__MPropDef = {
363,
"ArrayIterator[nullable MPropDef]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratornullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
363, /* ArrayIterator[nullable MPropDef] */
},
};
const struct types resolution_table_array__ArrayIteratornullable_model__MPropDef = {
0, /* dummy */
{
&type_array__AbstractArrayReadnullable_model__MPropDef, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[nullable MPropDef] */
&type_array__Arraynullable_model__MPropDef, /* Array[Iterator#0]: Array[nullable MPropDef] */
}
};
/* runtime type NativeArray[MPropDef] */
const struct type type_array__NativeArraymodel__MPropDef = {
2103,
"NativeArray[MPropDef]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MPropDef,
6,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
364, /* NativeArray[nullable MPropDef] */
1436, /* NativeArray[PropertyLayoutElement] */
2103, /* NativeArray[MPropDef] */
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
364,
"NativeArray[nullable MPropDef]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_model__MPropDef,
4,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
364, /* NativeArray[nullable MPropDef] */
},
};
const struct types resolution_table_array__NativeArraynullable_model__MPropDef = {
0, /* dummy */
{
&type_nullable_model__MPropDef, /* NativeArray#0: nullable MPropDef */
&type_array__NativeArraynullable_model__MPropDef, /* NativeArray[NativeArray#0]: NativeArray[nullable MPropDef] */
}
};
/* runtime type HashMapKeys[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass = {
2104,
"HashMapKeys[MClass, Array[nullable MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MClass,
6,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2104, /* HashMapKeys[MClass, Array[nullable MClass]] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
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
1842,
"HashMapValues[MClass, Array[nullable MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
1439, /* Collection[Array[nullable MClass]] */
1842, /* HashMapValues[MClass, Array[nullable MClass]] */
164, /* Collection[Object] */
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
365,
"NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
365, /* NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
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
1541,
"HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
5,
{
0, /* nullable Object */
1, /* Object */
131, /* nullable HashMapNode[MClass, Array[nullable MClass]] */
-1, /* empty */
1541, /* HashMapNode[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_array__Arraynullable_model__MClass, /* HashMapNode#1: Array[nullable MClass] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* N: HashMapNode[MClass, Array[nullable MClass]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, Array[nullable MClass]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
131,
"nullable HashMapNode[MClass, Array[nullable MClass]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass,
3,
{
0, /* nullable Object */
-1, /* empty */
131, /* nullable HashMapNode[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_array__Arraynullable_model__MClass, /* HashMapNode#1: Array[nullable MClass] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MClass, /* N: HashMapNode[MClass, Array[nullable MClass]] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapIterator[MClass, Array[nullable MClass]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass = {
1542,
"HashMapIterator[MClass, Array[nullable MClass]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
366, /* MapIterator[MClass, Array[nullable MClass]] */
1542, /* HashMapIterator[MClass, Array[nullable MClass]] */
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
366,
"MapIterator[MClass, Array[nullable MClass]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
366, /* MapIterator[MClass, Array[nullable MClass]] */
},
};
/* runtime type HashSetNode[MClassDef] */
const struct type type_hash_collection__HashSetNodemodel__MClassDef = {
2105,
"HashSetNode[MClassDef]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodemodel__MClassDef,
6,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
367, /* nullable HashSetNode[MClassDef] */
1456, /* HashSetNode[Object] */
2105, /* HashSetNode[MClassDef] */
},
};
const struct types resolution_table_hash_collection__HashSetNodemodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashSetNode#0: MClassDef */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MClassDef, /* N: HashSetNode[MClassDef] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashSetNode[MClassDef] */
const struct type type_nullable_hash_collection__HashSetNodemodel__MClassDef = {
367,
"nullable HashSetNode[MClassDef]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashSetNodemodel__MClassDef,
4,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
367, /* nullable HashSetNode[MClassDef] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodemodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashSetNode#0: MClassDef */
NULL, /* empty */
&type_hash_collection__HashSetNodemodel__MClassDef, /* N: HashSetNode[MClassDef] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type HashSetIterator[MClassDef] */
const struct type type_hash_collection__HashSetIteratormodel__MClassDef = {
1543,
"HashSetIterator[MClassDef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashSetIteratormodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1543, /* HashSetIterator[MClassDef] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratormodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashSetmodel__MClassDef, /* HashSet[HashSetIterator#0]: HashSet[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[Iterator#0]: Array[MClassDef] */
}
};
/* runtime type NativeArray[nullable HashSetNode[MClassDef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef = {
1544,
"NativeArray[nullable HashSetNode[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1544, /* NativeArray[nullable HashSetNode[MClassDef]] */
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
2473,
"HashMapKeys[MClassType, Set[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Setmodel__MType,
11,
{
0, /* nullable Object */
1, /* Object */
2106, /* HashMapKeys[MType, Set[MType]] */
2473, /* HashMapKeys[MClassType, Set[MType]] */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
1916, /* Collection[MClassType] */
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
2106,
"HashMapKeys[MType, Set[MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypeabstract_collection__Setmodel__MType,
8,
{
0, /* nullable Object */
1, /* Object */
2106, /* HashMapKeys[MType, Set[MType]] */
-1, /* empty */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
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
2107,
"HashMapValues[MClassType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
1479, /* Collection[Set[MType]] */
1843, /* HashMapValues[MType, Set[MType]] */
164, /* Collection[Object] */
2107, /* HashMapValues[MClassType, Set[MType]] */
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
1843,
"HashMapValues[MType, Set[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypeabstract_collection__Setmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
1479, /* Collection[Set[MType]] */
1843, /* HashMapValues[MType, Set[MType]] */
164, /* Collection[Object] */
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
1545,
"NativeArray[nullable HashMapNode[MClassType, Set[MType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
368, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
1545, /* NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
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
368,
"NativeArray[nullable HashMapNode[MType, Set[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
368, /* NativeArray[nullable HashMapNode[MType, Set[MType]]] */
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
2108,
"HashMapNode[MClassType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
132, /* nullable HashMapNode[MType, Set[MType]] */
369, /* nullable HashMapNode[MClassType, Set[MType]] */
1546, /* HashMapNode[MType, Set[MType]] */
2108, /* HashMapNode[MClassType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* N: HashMapNode[MClassType, Set[MType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type HashMapNode[MType, Set[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
1546,
"HashMapNode[MType, Set[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
132, /* nullable HashMapNode[MType, Set[MType]] */
-1, /* empty */
1546, /* HashMapNode[MType, Set[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* N: HashMapNode[MType, Set[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MClassType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
369,
"nullable HashMapNode[MClassType, Set[MType]]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
-1, /* empty */
132, /* nullable HashMapNode[MType, Set[MType]] */
369, /* nullable HashMapNode[MClassType, Set[MType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Setmodel__MType, /* N: HashMapNode[MClassType, Set[MType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashMapNode[MType, Set[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
132,
"nullable HashMapNode[MType, Set[MType]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType,
3,
{
0, /* nullable Object */
-1, /* empty */
132, /* nullable HashMapNode[MType, Set[MType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_abstract_collection__Setmodel__MType, /* HashMapNode#1: Set[MType] */
&type_hash_collection__HashMapNodemodel__MTypeabstract_collection__Setmodel__MType, /* N: HashMapNode[MType, Set[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type HashMapIterator[MClassType, Set[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType = {
2109,
"HashMapIterator[MClassType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Setmodel__MType,
6,
{
0, /* nullable Object */
1, /* Object */
370, /* MapIterator[MType, Set[MType]] */
1547, /* HashMapIterator[MType, Set[MType]] */
1548, /* MapIterator[MClassType, Set[MType]] */
2109, /* HashMapIterator[MClassType, Set[MType]] */
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
1547,
"HashMapIterator[MType, Set[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypeabstract_collection__Setmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
370, /* MapIterator[MType, Set[MType]] */
1547, /* HashMapIterator[MType, Set[MType]] */
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
1548,
"MapIterator[MClassType, Set[MType]]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
370, /* MapIterator[MType, Set[MType]] */
-1, /* empty */
1548, /* MapIterator[MClassType, Set[MType]] */
},
};
/* runtime type MapIterator[MType, Set[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypeabstract_collection__Setmodel__MType = {
370,
"MapIterator[MType, Set[MType]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
370, /* MapIterator[MType, Set[MType]] */
},
};
/* runtime type HashMap[MClassType, Int] */
const struct type type_hash_collection__HashMapmodel__MClassTypekernel__Int = {
2110,
"HashMap[MClassType, Int]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
242, /* Map[MType, Int] */
633, /* HashMap[MType, Int] */
1549, /* Map[MClassType, Int] */
2110, /* HashMap[MClassType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, Int] */
&type_hash_collection__HashMapValuesmodel__MClassTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, Int]] */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_hash_collection__HashMapIteratormodel__MClassTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, Int] */
&type_model__MClassType, /* Map#0: MClassType */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, Int] */
&type_abstract_collection__Mapmodel__MClassTypekernel__Int, /* Map[Map#0, Map#1]: Map[MClassType, Int] */
&type_kernel__Int, /* MapRead#1: Int */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_hash_collection__HashMapNodemodel__MClassTypekernel__Int, /* HashCollection#1: HashMapNode[MClassType, Int] */
}
};
/* runtime type Map[MClassType, Int] */
const struct type type_abstract_collection__Mapmodel__MClassTypekernel__Int = {
1549,
"Map[MClassType, Int]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
242, /* Map[MType, Int] */
-1, /* empty */
1549, /* Map[MClassType, Int] */
},
};
/* runtime type HashMap[MClassType, Map[MType, Int]] */
const struct type type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
2111,
"HashMap[MClassType, Map[MType, Int]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
350, /* Map[MType, Map[MType, Int]] */
1523, /* HashMap[MType, Map[MType, Int]] */
1550, /* Map[MClassType, Map[MType, Int]] */
2111, /* HashMap[MClassType, Map[MType, Int]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, Map[MType, Int]] */
&type_hash_collection__HashMapValuesmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, Map[MType, Int]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, Map[MType, Int]]] */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_hash_collection__HashMapIteratormodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, Map[MType, Int]] */
&type_model__MClassType, /* Map#0: MClassType */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* Map#1: Map[MType, Int] */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* Map[Map#0, Map#1]: Map[MClassType, Map[MType, Int]] */
&type_abstract_collection__Mapmodel__MTypekernel__Int, /* MapRead#1: Map[MType, Int] */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_hash_collection__HashMapNodemodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int, /* HashCollection#1: HashMapNode[MClassType, Map[MType, Int]] */
}
};
/* runtime type Map[MClassType, Map[MType, Int]] */
const struct type type_abstract_collection__Mapmodel__MClassTypeabstract_collection__Mapmodel__MTypekernel__Int = {
1550,
"Map[MClassType, Map[MType, Int]]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
350, /* Map[MType, Map[MType, Int]] */
-1, /* empty */
1550, /* Map[MClassType, Map[MType, Int]] */
},
};
/* runtime type HashMapKeys[MType, Int] */
const struct type type_hash_collection__HashMapKeysmodel__MTypekernel__Int = {
2112,
"HashMapKeys[MType, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypekernel__Int,
8,
{
0, /* nullable Object */
1, /* Object */
2112, /* HashMapKeys[MType, Int] */
-1, /* empty */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
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
1844,
"HashMapValues[MType, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypekernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
612, /* Collection[Int] */
1844, /* HashMapValues[MType, Int] */
164, /* Collection[Object] */
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
371,
"NativeArray[nullable HashMapNode[MType, Int]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypekernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
371, /* NativeArray[nullable HashMapNode[MType, Int]] */
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
1551,
"HashMapNode[MType, Int]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
133, /* nullable HashMapNode[MType, Int] */
-1, /* empty */
1551, /* HashMapNode[MType, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_hash_collection__HashMapNodemodel__MTypekernel__Int, /* N: HashMapNode[MType, Int] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MType, Int] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
133,
"nullable HashMapNode[MType, Int]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int,
3,
{
0, /* nullable Object */
-1, /* empty */
133, /* nullable HashMapNode[MType, Int] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MTypekernel__Int = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_kernel__Int, /* HashMapNode#1: Int */
&type_hash_collection__HashMapNodemodel__MTypekernel__Int, /* N: HashMapNode[MType, Int] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type HashMapIterator[MType, Int] */
const struct type type_hash_collection__HashMapIteratormodel__MTypekernel__Int = {
1552,
"HashMapIterator[MType, Int]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypekernel__Int,
4,
{
0, /* nullable Object */
1, /* Object */
372, /* MapIterator[MType, Int] */
1552, /* HashMapIterator[MType, Int] */
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
372,
"MapIterator[MType, Int]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
372, /* MapIterator[MType, Int] */
},
};
/* runtime type ArrayIterator[Match] */
const struct type type_array__ArrayIteratorstring_search__Match = {
1553,
"ArrayIterator[Match]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorstring_search__Match,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1553, /* ArrayIterator[Match] */
},
};
const struct types resolution_table_array__ArrayIteratorstring_search__Match = {
0, /* dummy */
{
&type_array__AbstractArrayReadstring_search__Match, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Match] */
&type_array__Arraystring_search__Match, /* Array[Iterator#0]: Array[Match] */
}
};
/* runtime type NativeArray[Match] */
const struct type type_array__NativeArraystring_search__Match = {
1554,
"NativeArray[Match]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraystring_search__Match,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1554, /* NativeArray[Match] */
},
};
const struct types resolution_table_array__NativeArraystring_search__Match = {
0, /* dummy */
{
&type_string_search__Match, /* NativeArray#0: Match */
&type_array__NativeArraystring_search__Match, /* NativeArray[NativeArray#0]: NativeArray[Match] */
}
};
/* runtime type ArrayIterator[ReduceAction] */
const struct type type_array__ArrayIteratorparser__ReduceAction = {
1555,
"ArrayIterator[ReduceAction]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorparser__ReduceAction,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1555, /* ArrayIterator[ReduceAction] */
},
};
const struct types resolution_table_array__ArrayIteratorparser__ReduceAction = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser__ReduceAction, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ReduceAction] */
&type_array__Arrayparser__ReduceAction, /* Array[Iterator#0]: Array[ReduceAction] */
}
};
/* runtime type NativeArray[ReduceAction] */
const struct type type_array__NativeArrayparser__ReduceAction = {
1556,
"NativeArray[ReduceAction]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayparser__ReduceAction,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1556, /* NativeArray[ReduceAction] */
},
};
const struct types resolution_table_array__NativeArrayparser__ReduceAction = {
0, /* dummy */
{
&type_parser__ReduceAction, /* NativeArray#0: ReduceAction */
&type_array__NativeArrayparser__ReduceAction, /* NativeArray[NativeArray#0]: NativeArray[ReduceAction] */
}
};
/* runtime type Array[AImport] */
const struct type type_array__Arrayparser_nodes__AImport = {
2615,
"Array[AImport]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AImport,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1933, /* Collection[AImport] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2564, /* AbstractArrayRead[AImport] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2615, /* Array[AImport] */
2579, /* Array[Prod] */
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
2564,
"AbstractArrayRead[AImport]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1933, /* Collection[AImport] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2564, /* AbstractArrayRead[AImport] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type HashMapKeys[MClass, MClassType] */
const struct type type_hash_collection__HashMapKeysmodel__MClassmodel__MClassType = {
2113,
"HashMapKeys[MClass, MClassType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2113, /* HashMapKeys[MClass, MClassType] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
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
2361,
"HashMapValues[MClass, MClassType]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassmodel__MClassType,
11,
{
0, /* nullable Object */
1, /* Object */
2361, /* HashMapValues[MClass, MClassType] */
-1, /* empty */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
1916, /* Collection[MClassType] */
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
373,
"NativeArray[nullable HashMapNode[MClass, MClassType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
373, /* NativeArray[nullable HashMapNode[MClass, MClassType]] */
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
1557,
"HashMapNode[MClass, MClassType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
134, /* nullable HashMapNode[MClass, MClassType] */
1557, /* HashMapNode[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_model__MClassType, /* HashMapNode#1: MClassType */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* N: HashMapNode[MClass, MClassType] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, MClassType] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
134,
"nullable HashMapNode[MClass, MClassType]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
-1, /* empty */
134, /* nullable HashMapNode[MClass, MClassType] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_model__MClassType, /* HashMapNode#1: MClassType */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* N: HashMapNode[MClass, MClassType] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapIterator[MClass, MClassType] */
const struct type type_hash_collection__HashMapIteratormodel__MClassmodel__MClassType = {
1558,
"HashMapIterator[MClass, MClassType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
374, /* MapIterator[MClass, MClassType] */
1558, /* HashMapIterator[MClass, MClassType] */
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
374,
"MapIterator[MClass, MClassType]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
374, /* MapIterator[MClass, MClassType] */
},
};
/* runtime type ArrayMapKeys[MClass, AType] */
const struct type type_array__ArrayMapKeysmodel__MClassparser_nodes__AType = {
2114,
"ArrayMapKeys[MClass, AType]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayMapKeysmodel__MClassparser_nodes__AType,
6,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2114, /* ArrayMapKeys[MClass, AType] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
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
2362,
"ArrayMapValues[MClass, AType]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayMapValuesmodel__MClassparser_nodes__AType,
8,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
2362, /* ArrayMapValues[MClass, AType] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
-1, /* empty */
1960, /* Collection[AType] */
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
375,
"Couple[MClass, AType]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__Couplemodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
375, /* Couple[MClass, AType] */
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
1559,
"CoupleMapIterator[MClass, AType]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType,
4,
{
0, /* nullable Object */
1, /* Object */
376, /* MapIterator[MClass, AType] */
1559, /* CoupleMapIterator[MClass, AType] */
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
376,
"MapIterator[MClass, AType]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
376, /* MapIterator[MClass, AType] */
},
};
/* runtime type Array[Couple[MClass, AType]] */
const struct type type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType = {
2509,
"Array[Couple[MClass, AType]]", /* class_name_string */
7,
0,
&resolution_table_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType,
10,
{
0, /* nullable Object */
1, /* Object */
1560, /* Collection[Couple[MClass, AType]] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2363, /* AbstractArrayRead[Couple[MClass, AType]] */
1728, /* AbstractArrayRead[Object] */
2509, /* Array[Couple[MClass, AType]] */
-1, /* empty */
1911, /* Array[Object] */
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
1560,
"Collection[Couple[MClass, AType]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1560, /* Collection[Couple[MClass, AType]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type AbstractArrayRead[Couple[MClass, AType]] */
const struct type type_array__AbstractArrayReadabstract_collection__Couplemodel__MClassparser_nodes__AType = {
2363,
"AbstractArrayRead[Couple[MClass, AType]]", /* class_name_string */
5,
0,
NULL,
7,
{
0, /* nullable Object */
1, /* Object */
1560, /* Collection[Couple[MClass, AType]] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2363, /* AbstractArrayRead[Couple[MClass, AType]] */
1728, /* AbstractArrayRead[Object] */
},
};
/* runtime type ListNode[Scope] */
const struct type type_list__ListNodescope__Scope = {
2115,
"ListNode[Scope]", /* class_name_string */
5,
0,
&resolution_table_list__ListNodescope__Scope,
6,
{
0, /* nullable Object */
1, /* Object */
1420, /* Collection[Scope] */
1845, /* Container[Scope] */
164, /* Collection[Object] */
2115, /* ListNode[Scope] */
},
};
const struct types resolution_table_list__ListNodescope__Scope = {
0, /* dummy */
{
&type_scope__Scope, /* ListNode#0: Scope */
&type_list__ListNodescope__Scope, /* ListNode[ListNode#0]: ListNode[Scope] */
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
/* runtime type Container[Scope] */
const struct type type_abstract_collection__Containerscope__Scope = {
1845,
"Container[Scope]", /* class_name_string */
3,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1420, /* Collection[Scope] */
1845, /* Container[Scope] */
164, /* Collection[Object] */
},
};
/* runtime type ListIterator[Scope] */
const struct type type_list__ListIteratorscope__Scope = {
377,
"ListIterator[Scope]", /* class_name_string */
2,
0,
&resolution_table_list__ListIteratorscope__Scope,
3,
{
0, /* nullable Object */
1, /* Object */
377, /* ListIterator[Scope] */
},
};
const struct types resolution_table_list__ListIteratorscope__Scope = {
0, /* dummy */
{
&type_scope__Scope, /* ListIterator#0: Scope */
&type_array__Arrayscope__Scope, /* Array[Iterator#0]: Array[Scope] */
&type_list__Listscope__Scope, /* List[ListIterator#0]: List[Scope] */
}
};
/* runtime type ArrayIterator[FlowContext] */
const struct type type_array__ArrayIteratorflow__FlowContext = {
1561,
"ArrayIterator[FlowContext]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1561, /* ArrayIterator[FlowContext] */
},
};
const struct types resolution_table_array__ArrayIteratorflow__FlowContext = {
0, /* dummy */
{
&type_array__AbstractArrayReadflow__FlowContext, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[FlowContext] */
&type_array__Arrayflow__FlowContext, /* Array[Iterator#0]: Array[FlowContext] */
}
};
/* runtime type NativeArray[FlowContext] */
const struct type type_array__NativeArrayflow__FlowContext = {
1562,
"NativeArray[FlowContext]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayflow__FlowContext,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1562, /* NativeArray[FlowContext] */
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
2116,
"HashSetNode[Variable]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetNodescope__Variable,
6,
{
0, /* nullable Object */
1, /* Object */
116, /* nullable HashSetNode[Object] */
378, /* nullable HashSetNode[Variable] */
1456, /* HashSetNode[Object] */
2116, /* HashSetNode[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* HashSetNode#0: Variable */
NULL, /* empty */
&type_hash_collection__HashSetNodescope__Variable, /* N: HashSetNode[Variable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashSetNode[Variable] */
const struct type type_nullable_hash_collection__HashSetNodescope__Variable = {
378,
"nullable HashSetNode[Variable]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashSetNodescope__Variable,
4,
{
0, /* nullable Object */
-1, /* empty */
116, /* nullable HashSetNode[Object] */
378, /* nullable HashSetNode[Variable] */
},
};
const struct types resolution_table_nullable_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* HashSetNode#0: Variable */
NULL, /* empty */
&type_hash_collection__HashSetNodescope__Variable, /* N: HashSetNode[Variable] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type HashSetIterator[Variable] */
const struct type type_hash_collection__HashSetIteratorscope__Variable = {
1563,
"HashSetIterator[Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashSetIteratorscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
307, /* HashSetIterator[Object] */
1563, /* HashSetIterator[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetIteratorscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashSetscope__Variable, /* HashSet[HashSetIterator#0]: HashSet[Variable] */
&type_array__Arrayscope__Variable, /* Array[Iterator#0]: Array[Variable] */
}
};
/* runtime type NativeArray[nullable HashSetNode[Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
1564,
"NativeArray[nullable HashSetNode[Variable]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
308, /* NativeArray[nullable HashSetNode[Object]] */
1564, /* NativeArray[nullable HashSetNode[Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashSetNodescope__Variable, /* NativeArray#0: nullable HashSetNode[Variable] */
&type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashSetNode[Variable]] */
}
};
/* runtime type ArrayIterator[MMethod] */
const struct type type_array__ArrayIteratormodel__MMethod = {
2364,
"ArrayIterator[MMethod]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratormodel__MMethod,
7,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
286, /* ArrayIterator[nullable MProperty] */
1435, /* ArrayIterator[PropertyLayoutElement] */
2060, /* ArrayIterator[MProperty] */
2364, /* ArrayIterator[MMethod] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MMethod = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MMethod, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MMethod] */
&type_array__Arraymodel__MMethod, /* Array[Iterator#0]: Array[MMethod] */
}
};
/* runtime type NativeArray[MMethod] */
const struct type type_array__NativeArraymodel__MMethod = {
2365,
"NativeArray[MMethod]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArraymodel__MMethod,
7,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
287, /* NativeArray[nullable MProperty] */
1436, /* NativeArray[PropertyLayoutElement] */
2061, /* NativeArray[MProperty] */
2365, /* NativeArray[MMethod] */
},
};
const struct types resolution_table_array__NativeArraymodel__MMethod = {
0, /* dummy */
{
&type_model__MMethod, /* NativeArray#0: MMethod */
&type_array__NativeArraymodel__MMethod, /* NativeArray[NativeArray#0]: NativeArray[MMethod] */
}
};
/* runtime type ArrayIterator[MParameterType] */
const struct type type_array__ArrayIteratormodel__MParameterType = {
2117,
"ArrayIterator[MParameterType]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratormodel__MParameterType,
6,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
337, /* ArrayIterator[nullable MType] */
1818, /* ArrayIterator[MType] */
2117, /* ArrayIterator[MParameterType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MParameterType = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MParameterType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MParameterType] */
&type_array__Arraymodel__MParameterType, /* Array[Iterator#0]: Array[MParameterType] */
}
};
/* runtime type NativeArray[MParameterType] */
const struct type type_array__NativeArraymodel__MParameterType = {
2118,
"NativeArray[MParameterType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MParameterType,
6,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
338, /* NativeArray[nullable MType] */
1819, /* NativeArray[MType] */
2118, /* NativeArray[MParameterType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MParameterType = {
0, /* dummy */
{
&type_model__MParameterType, /* NativeArray#0: MParameterType */
&type_array__NativeArraymodel__MParameterType, /* NativeArray[NativeArray#0]: NativeArray[MParameterType] */
}
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
379,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
379, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassposet__POSetElementmodel__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MClassposet__POSetElementmodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, POSetElement[MClass]] */
&type_hash_collection__HashMapValuesmodel__MClassposet__POSetElementmodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, POSetElement[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
&type_model__MClass, /* MapRead#0: MClass */
&type_hash_collection__HashMapIteratormodel__MClassposet__POSetElementmodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_model__MClass, /* Map#0: MClass */
&type_poset__POSetElementmodel__MClass, /* Map#1: POSetElement[MClass] */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, POSetElement[MClass]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MClass, POSetElement[MClass]] not a live type) */
&type_poset__POSetElementmodel__MClass, /* MapRead#1: POSetElement[MClass] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_hash_collection__HashMapNodemodel__MClassposet__POSetElementmodel__MClass, /* HashCollection#1: HashMapNode[MClass, POSetElement[MClass]] */
}
};
/* runtime type POSetElement[MClass] */
const struct type type_poset__POSetElementmodel__MClass = {
380,
"POSetElement[MClass]", /* class_name_string */
2,
0,
&resolution_table_poset__POSetElementmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
380, /* POSetElement[MClass] */
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
/* runtime type ArraySetIterator[MType] */
const struct type type_array__ArraySetIteratormodel__MType = {
381,
"ArraySetIterator[MType]", /* class_name_string */
2,
0,
&resolution_table_array__ArraySetIteratormodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
381, /* ArraySetIterator[MType] */
},
};
const struct types resolution_table_array__ArraySetIteratormodel__MType = {
0, /* dummy */
{
&type_array__ArrayIteratormodel__MType, /* ArrayIterator[ArraySetIterator#0]: ArrayIterator[MType] */
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
}
};
/* runtime type Array[AExternCodeBlock] */
const struct type type_array__Arrayparser_nodes__AExternCodeBlock = {
2616,
"Array[AExternCodeBlock]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AExternCodeBlock,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1937, /* Collection[AExternCodeBlock] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2565, /* AbstractArrayRead[AExternCodeBlock] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2616, /* Array[AExternCodeBlock] */
2579, /* Array[Prod] */
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
2565,
"AbstractArrayRead[AExternCodeBlock]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1937, /* Collection[AExternCodeBlock] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2565, /* AbstractArrayRead[AExternCodeBlock] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type HashMapKeys[MClass, AClassdef] */
const struct type type_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef = {
2119,
"HashMapKeys[MClass, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef,
6,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2119, /* HashMapKeys[MClass, AClassdef] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, AClassdef] */
&type_abstract_collection__MapKeysIteratormodel__MClassparser_nodes__AClassdef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, AClassdef] */
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
/* runtime type HashMapValues[MClass, AClassdef] */
const struct type type_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef = {
2366,
"HashMapValues[MClass, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef,
8,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
2366, /* HashMapValues[MClass, AClassdef] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
-1, /* empty */
1926, /* Collection[AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClass, AClassdef] */
&type_abstract_collection__MapValuesIteratormodel__MClassparser_nodes__AClassdef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClass, AClassdef] */
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
/* runtime type NativeArray[nullable HashMapNode[MClass, AClassdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
382,
"NativeArray[nullable HashMapNode[MClass, AClassdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
382, /* NativeArray[nullable HashMapNode[MClass, AClassdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* NativeArray#0: nullable HashMapNode[MClass, AClassdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClass, AClassdef]] */
}
};
/* runtime type HashMapNode[MClass, AClassdef] */
const struct type type_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
1565,
"HashMapNode[MClass, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
135, /* nullable HashMapNode[MClass, AClassdef] */
1565, /* HashMapNode[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_parser_nodes__AClassdef, /* HashMapNode#1: AClassdef */
&type_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* N: HashMapNode[MClass, AClassdef] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type nullable HashMapNode[MClass, AClassdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
135,
"nullable HashMapNode[MClass, AClassdef]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
-1, /* empty */
135, /* nullable HashMapNode[MClass, AClassdef] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_model__MClass, /* HashMapNode#0: MClass */
&type_parser_nodes__AClassdef, /* HashMapNode#1: AClassdef */
&type_hash_collection__HashMapNodemodel__MClassparser_nodes__AClassdef, /* N: HashMapNode[MClass, AClassdef] */
&type_model__MClass, /* HashNode#0: MClass */
}
};
/* runtime type HashMapIterator[MClass, AClassdef] */
const struct type type_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef = {
1566,
"HashMapIterator[MClass, AClassdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef,
4,
{
0, /* nullable Object */
1, /* Object */
383, /* MapIterator[MClass, AClassdef] */
1566, /* HashMapIterator[MClass, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassparser_nodes__AClassdef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClass, AClassdef] */
}
};
/* runtime type MapIterator[MClass, AClassdef] */
const struct type type_abstract_collection__MapIteratormodel__MClassparser_nodes__AClassdef = {
383,
"MapIterator[MClass, AClassdef]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
383, /* MapIterator[MClass, AClassdef] */
},
};
/* runtime type HashMapKeys[MProperty, APropdef] */
const struct type type_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef = {
2367,
"HashMapKeys[MProperty, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef,
11,
{
0, /* nullable Object */
1, /* Object */
172, /* Collection[nullable MProperty] */
2367, /* HashMapKeys[MProperty, APropdef] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1914, /* Collection[MProperty] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* RemovableCollection#0: MProperty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MProperty, /* Collection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Collection#0]: Collection[MProperty] */
}
};
/* runtime type HashMapValues[MProperty, APropdef] */
const struct type type_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef = {
2368,
"HashMapValues[MProperty, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef,
8,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
2368, /* HashMapValues[MProperty, APropdef] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
-1, /* empty */
1927, /* Collection[APropdef] */
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
/* runtime type NativeArray[nullable HashMapNode[MProperty, APropdef]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
384,
"NativeArray[nullable HashMapNode[MProperty, APropdef]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
384, /* NativeArray[nullable HashMapNode[MProperty, APropdef]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* NativeArray#0: nullable HashMapNode[MProperty, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MProperty, APropdef]] */
}
};
/* runtime type HashMapNode[MProperty, APropdef] */
const struct type type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
1567,
"HashMapNode[MProperty, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
136, /* nullable HashMapNode[MProperty, APropdef] */
1567, /* HashMapNode[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_model__MProperty, /* HashMapNode#0: MProperty */
&type_parser_nodes__APropdef, /* HashMapNode#1: APropdef */
&type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* N: HashMapNode[MProperty, APropdef] */
&type_model__MProperty, /* HashNode#0: MProperty */
}
};
/* runtime type nullable HashMapNode[MProperty, APropdef] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
136,
"nullable HashMapNode[MProperty, APropdef]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
-1, /* empty */
136, /* nullable HashMapNode[MProperty, APropdef] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_model__MProperty, /* HashMapNode#0: MProperty */
&type_parser_nodes__APropdef, /* HashMapNode#1: APropdef */
&type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* N: HashMapNode[MProperty, APropdef] */
&type_model__MProperty, /* HashNode#0: MProperty */
}
};
/* runtime type HashMapIterator[MProperty, APropdef] */
const struct type type_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef = {
1568,
"HashMapIterator[MProperty, APropdef]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef,
4,
{
0, /* nullable Object */
1, /* Object */
385, /* MapIterator[MProperty, APropdef] */
1568, /* HashMapIterator[MProperty, APropdef] */
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
385,
"MapIterator[MProperty, APropdef]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
385, /* MapIterator[MProperty, APropdef] */
},
};
/* runtime type Array[AFormaldef] */
const struct type type_array__Arrayparser_nodes__AFormaldef = {
2617,
"Array[AFormaldef]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AFormaldef,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1943, /* Collection[AFormaldef] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2566, /* AbstractArrayRead[AFormaldef] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2617, /* Array[AFormaldef] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AFormaldef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AFormaldef, /* Array[Array#0]: Array[AFormaldef] */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[Array#0]: NativeArray[AFormaldef] */
&type_parser_nodes__AFormaldef, /* Sequence#0: AFormaldef */
&type_parser_nodes__AFormaldef, /* SimpleCollection#0: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[Array#0]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* Array#0: AFormaldef */
&type_array__NativeArrayparser_nodes__AFormaldef, /* NativeArray[ArrayCapable#0]: NativeArray[AFormaldef] */
&type_parser_nodes__AFormaldef, /* AbstractArray#0: AFormaldef */
&type_parser_nodes__AFormaldef, /* RemovableCollection#0: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[Sequence#0]: Collection[AFormaldef] */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[Sequence#0]: Array[AFormaldef] */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[SimpleCollection#0]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* Collection#0: AFormaldef */
&type_abstract_collection__Collectionparser_nodes__AFormaldef, /* Collection[Collection#0]: Collection[AFormaldef] */
&type_parser_nodes__AFormaldef, /* SequenceRead#0: AFormaldef */
&type_parser_nodes__AFormaldef, /* AbstractArrayRead#0: AFormaldef */
&type_array__Arrayparser_nodes__AFormaldef, /* Array[AbstractArrayRead#0]: Array[AFormaldef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AFormaldef] not a live type) */
&type_array__ArrayIteratorparser_nodes__AFormaldef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AFormaldef] */
}
};
/* runtime type AbstractArrayRead[AFormaldef] */
const struct type type_array__AbstractArrayReadparser_nodes__AFormaldef = {
2566,
"AbstractArrayRead[AFormaldef]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1943, /* Collection[AFormaldef] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2566, /* AbstractArrayRead[AFormaldef] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[ASuperclass] */
const struct type type_array__Arrayparser_nodes__ASuperclass = {
2618,
"Array[ASuperclass]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__ASuperclass,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1944, /* Collection[ASuperclass] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2567, /* AbstractArrayRead[ASuperclass] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2618, /* Array[ASuperclass] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__ASuperclass = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__ASuperclass, /* Array[Array#0]: Array[ASuperclass] */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[Array#0]: NativeArray[ASuperclass] */
&type_parser_nodes__ASuperclass, /* Sequence#0: ASuperclass */
&type_parser_nodes__ASuperclass, /* SimpleCollection#0: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[Array#0]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* Array#0: ASuperclass */
&type_array__NativeArrayparser_nodes__ASuperclass, /* NativeArray[ArrayCapable#0]: NativeArray[ASuperclass] */
&type_parser_nodes__ASuperclass, /* AbstractArray#0: ASuperclass */
&type_parser_nodes__ASuperclass, /* RemovableCollection#0: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[Sequence#0]: Collection[ASuperclass] */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[Sequence#0]: Array[ASuperclass] */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[SimpleCollection#0]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* Collection#0: ASuperclass */
&type_abstract_collection__Collectionparser_nodes__ASuperclass, /* Collection[Collection#0]: Collection[ASuperclass] */
&type_parser_nodes__ASuperclass, /* SequenceRead#0: ASuperclass */
&type_parser_nodes__ASuperclass, /* AbstractArrayRead#0: ASuperclass */
&type_array__Arrayparser_nodes__ASuperclass, /* Array[AbstractArrayRead#0]: Array[ASuperclass] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[ASuperclass] not a live type) */
&type_array__ArrayIteratorparser_nodes__ASuperclass, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ASuperclass] */
}
};
/* runtime type AbstractArrayRead[ASuperclass] */
const struct type type_array__AbstractArrayReadparser_nodes__ASuperclass = {
2567,
"AbstractArrayRead[ASuperclass]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1944, /* Collection[ASuperclass] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2567, /* AbstractArrayRead[ASuperclass] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[AAnnotation] */
const struct type type_array__Arrayparser_nodes__AAnnotation = {
2619,
"Array[AAnnotation]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AAnnotation,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1946, /* Collection[AAnnotation] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2568, /* AbstractArrayRead[AAnnotation] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2619, /* Array[AAnnotation] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AAnnotation, /* Array[Array#0]: Array[AAnnotation] */
&type_array__NativeArrayparser_nodes__AAnnotation, /* NativeArray[Array#0]: NativeArray[AAnnotation] */
&type_parser_nodes__AAnnotation, /* Sequence#0: AAnnotation */
&type_parser_nodes__AAnnotation, /* SimpleCollection#0: AAnnotation */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[Array#0]: Collection[AAnnotation] */
&type_parser_nodes__AAnnotation, /* Array#0: AAnnotation */
&type_array__NativeArrayparser_nodes__AAnnotation, /* NativeArray[ArrayCapable#0]: NativeArray[AAnnotation] */
&type_parser_nodes__AAnnotation, /* AbstractArray#0: AAnnotation */
&type_parser_nodes__AAnnotation, /* RemovableCollection#0: AAnnotation */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[Sequence#0]: Collection[AAnnotation] */
&type_array__Arrayparser_nodes__AAnnotation, /* Array[Sequence#0]: Array[AAnnotation] */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[SimpleCollection#0]: Collection[AAnnotation] */
&type_parser_nodes__AAnnotation, /* Collection#0: AAnnotation */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[Collection#0]: Collection[AAnnotation] */
&type_parser_nodes__AAnnotation, /* SequenceRead#0: AAnnotation */
&type_parser_nodes__AAnnotation, /* AbstractArrayRead#0: AAnnotation */
&type_array__Arrayparser_nodes__AAnnotation, /* Array[AbstractArrayRead#0]: Array[AAnnotation] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AAnnotation] not a live type) */
&type_array__ArrayIteratorparser_nodes__AAnnotation, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AAnnotation] */
}
};
/* runtime type AbstractArrayRead[AAnnotation] */
const struct type type_array__AbstractArrayReadparser_nodes__AAnnotation = {
2568,
"AbstractArrayRead[AAnnotation]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1946, /* Collection[AAnnotation] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2568, /* AbstractArrayRead[AAnnotation] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[AParam] */
const struct type type_array__Arrayparser_nodes__AParam = {
2620,
"Array[AParam]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AParam,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1952, /* Collection[AParam] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2569, /* AbstractArrayRead[AParam] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2620, /* Array[AParam] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AParam = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AParam, /* Array[Array#0]: Array[AParam] */
&type_array__NativeArrayparser_nodes__AParam, /* NativeArray[Array#0]: NativeArray[AParam] */
&type_parser_nodes__AParam, /* Sequence#0: AParam */
&type_parser_nodes__AParam, /* SimpleCollection#0: AParam */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[Array#0]: Collection[AParam] */
&type_parser_nodes__AParam, /* Array#0: AParam */
&type_array__NativeArrayparser_nodes__AParam, /* NativeArray[ArrayCapable#0]: NativeArray[AParam] */
&type_parser_nodes__AParam, /* AbstractArray#0: AParam */
&type_parser_nodes__AParam, /* RemovableCollection#0: AParam */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[Sequence#0]: Collection[AParam] */
&type_array__Arrayparser_nodes__AParam, /* Array[Sequence#0]: Array[AParam] */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[SimpleCollection#0]: Collection[AParam] */
&type_parser_nodes__AParam, /* Collection#0: AParam */
&type_abstract_collection__Collectionparser_nodes__AParam, /* Collection[Collection#0]: Collection[AParam] */
&type_parser_nodes__AParam, /* SequenceRead#0: AParam */
&type_parser_nodes__AParam, /* AbstractArrayRead#0: AParam */
&type_array__Arrayparser_nodes__AParam, /* Array[AbstractArrayRead#0]: Array[AParam] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AParam] not a live type) */
&type_array__ArrayIteratorparser_nodes__AParam, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AParam] */
}
};
/* runtime type AbstractArrayRead[AParam] */
const struct type type_array__AbstractArrayReadparser_nodes__AParam = {
2569,
"AbstractArrayRead[AParam]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1952, /* Collection[AParam] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2569, /* AbstractArrayRead[AParam] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[AExternCall] */
const struct type type_array__Arrayparser_nodes__AExternCall = {
2621,
"Array[AExternCall]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AExternCall,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1955, /* Collection[AExternCall] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2570, /* AbstractArrayRead[AExternCall] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2621, /* Array[AExternCall] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AExternCall = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AExternCall, /* Array[Array#0]: Array[AExternCall] */
&type_array__NativeArrayparser_nodes__AExternCall, /* NativeArray[Array#0]: NativeArray[AExternCall] */
&type_parser_nodes__AExternCall, /* Sequence#0: AExternCall */
&type_parser_nodes__AExternCall, /* SimpleCollection#0: AExternCall */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[Array#0]: Collection[AExternCall] */
&type_parser_nodes__AExternCall, /* Array#0: AExternCall */
&type_array__NativeArrayparser_nodes__AExternCall, /* NativeArray[ArrayCapable#0]: NativeArray[AExternCall] */
&type_parser_nodes__AExternCall, /* AbstractArray#0: AExternCall */
&type_parser_nodes__AExternCall, /* RemovableCollection#0: AExternCall */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[Sequence#0]: Collection[AExternCall] */
&type_array__Arrayparser_nodes__AExternCall, /* Array[Sequence#0]: Array[AExternCall] */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[SimpleCollection#0]: Collection[AExternCall] */
&type_parser_nodes__AExternCall, /* Collection#0: AExternCall */
&type_abstract_collection__Collectionparser_nodes__AExternCall, /* Collection[Collection#0]: Collection[AExternCall] */
&type_parser_nodes__AExternCall, /* SequenceRead#0: AExternCall */
&type_parser_nodes__AExternCall, /* AbstractArrayRead#0: AExternCall */
&type_array__Arrayparser_nodes__AExternCall, /* Array[AbstractArrayRead#0]: Array[AExternCall] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AExternCall] not a live type) */
&type_array__ArrayIteratorparser_nodes__AExternCall, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AExternCall] */
}
};
/* runtime type AbstractArrayRead[AExternCall] */
const struct type type_array__AbstractArrayReadparser_nodes__AExternCall = {
2570,
"AbstractArrayRead[AExternCall]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1955, /* Collection[AExternCall] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2570, /* AbstractArrayRead[AExternCall] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[AType] */
const struct type type_array__Arrayparser_nodes__AType = {
2622,
"Array[AType]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AType,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1960, /* Collection[AType] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2571, /* AbstractArrayRead[AType] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2622, /* Array[AType] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AType = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AType, /* Array[Array#0]: Array[AType] */
&type_array__NativeArrayparser_nodes__AType, /* NativeArray[Array#0]: NativeArray[AType] */
&type_parser_nodes__AType, /* Sequence#0: AType */
&type_parser_nodes__AType, /* SimpleCollection#0: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[Array#0]: Collection[AType] */
&type_parser_nodes__AType, /* Array#0: AType */
&type_array__NativeArrayparser_nodes__AType, /* NativeArray[ArrayCapable#0]: NativeArray[AType] */
&type_parser_nodes__AType, /* AbstractArray#0: AType */
&type_parser_nodes__AType, /* RemovableCollection#0: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[Sequence#0]: Collection[AType] */
&type_array__Arrayparser_nodes__AType, /* Array[Sequence#0]: Array[AType] */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[SimpleCollection#0]: Collection[AType] */
&type_parser_nodes__AType, /* Collection#0: AType */
&type_abstract_collection__Collectionparser_nodes__AType, /* Collection[Collection#0]: Collection[AType] */
&type_parser_nodes__AType, /* SequenceRead#0: AType */
&type_parser_nodes__AType, /* AbstractArrayRead#0: AType */
&type_array__Arrayparser_nodes__AType, /* Array[AbstractArrayRead#0]: Array[AType] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AType] not a live type) */
&type_array__ArrayIteratorparser_nodes__AType, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AType] */
}
};
/* runtime type AbstractArrayRead[AType] */
const struct type type_array__AbstractArrayReadparser_nodes__AType = {
2571,
"AbstractArrayRead[AType]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1960, /* Collection[AType] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2571, /* AbstractArrayRead[AType] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[TId] */
const struct type type_array__Arrayparser_nodes__TId = {
2623,
"Array[TId]", /* class_name_string */
14,
0,
&resolution_table_array__Arrayparser_nodes__TId,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1760, /* Collection[Token] */
1728, /* AbstractArrayRead[Object] */
1962, /* Collection[TId] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2505, /* AbstractArrayRead[Token] */
2483, /* Array[ANode] */
2572, /* AbstractArrayRead[TId] */
2583, /* Array[Token] */
2623, /* Array[TId] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__TId = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__TId, /* Array[Array#0]: Array[TId] */
&type_array__NativeArrayparser_nodes__TId, /* NativeArray[Array#0]: NativeArray[TId] */
&type_parser_nodes__TId, /* Sequence#0: TId */
&type_parser_nodes__TId, /* SimpleCollection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Array#0]: Collection[TId] */
&type_parser_nodes__TId, /* Array#0: TId */
&type_array__NativeArrayparser_nodes__TId, /* NativeArray[ArrayCapable#0]: NativeArray[TId] */
&type_parser_nodes__TId, /* AbstractArray#0: TId */
&type_parser_nodes__TId, /* RemovableCollection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Sequence#0]: Collection[TId] */
&type_array__Arrayparser_nodes__TId, /* Array[Sequence#0]: Array[TId] */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[SimpleCollection#0]: Collection[TId] */
&type_parser_nodes__TId, /* Collection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Collection#0]: Collection[TId] */
&type_parser_nodes__TId, /* SequenceRead#0: TId */
&type_parser_nodes__TId, /* AbstractArrayRead#0: TId */
&type_array__Arrayparser_nodes__TId, /* Array[AbstractArrayRead#0]: Array[TId] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[TId] not a live type) */
&type_array__ArrayIteratorparser_nodes__TId, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[TId] */
}
};
/* runtime type AbstractArrayRead[TId] */
const struct type type_array__AbstractArrayReadparser_nodes__TId = {
2572,
"AbstractArrayRead[TId]", /* class_name_string */
12,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1760, /* Collection[Token] */
1728, /* AbstractArrayRead[Object] */
1962, /* Collection[TId] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2505, /* AbstractArrayRead[Token] */
-1, /* empty */
2572, /* AbstractArrayRead[TId] */
},
};
/* runtime type Array[AAtArg] */
const struct type type_array__Arrayparser_nodes__AAtArg = {
2624,
"Array[AAtArg]", /* class_name_string */
13,
0,
&resolution_table_array__Arrayparser_nodes__AAtArg,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1966, /* Collection[AAtArg] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2573, /* AbstractArrayRead[AAtArg] */
2483, /* Array[ANode] */
2484, /* AbstractArrayRead[Prod] */
2624, /* Array[AAtArg] */
2579, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AAtArg = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AAtArg, /* Array[Array#0]: Array[AAtArg] */
&type_array__NativeArrayparser_nodes__AAtArg, /* NativeArray[Array#0]: NativeArray[AAtArg] */
&type_parser_nodes__AAtArg, /* Sequence#0: AAtArg */
&type_parser_nodes__AAtArg, /* SimpleCollection#0: AAtArg */
&type_abstract_collection__Collectionparser_nodes__AAtArg, /* Collection[Array#0]: Collection[AAtArg] */
&type_parser_nodes__AAtArg, /* Array#0: AAtArg */
&type_array__NativeArrayparser_nodes__AAtArg, /* NativeArray[ArrayCapable#0]: NativeArray[AAtArg] */
&type_parser_nodes__AAtArg, /* AbstractArray#0: AAtArg */
&type_parser_nodes__AAtArg, /* RemovableCollection#0: AAtArg */
&type_abstract_collection__Collectionparser_nodes__AAtArg, /* Collection[Sequence#0]: Collection[AAtArg] */
&type_array__Arrayparser_nodes__AAtArg, /* Array[Sequence#0]: Array[AAtArg] */
&type_abstract_collection__Collectionparser_nodes__AAtArg, /* Collection[SimpleCollection#0]: Collection[AAtArg] */
&type_parser_nodes__AAtArg, /* Collection#0: AAtArg */
&type_abstract_collection__Collectionparser_nodes__AAtArg, /* Collection[Collection#0]: Collection[AAtArg] */
&type_parser_nodes__AAtArg, /* SequenceRead#0: AAtArg */
&type_parser_nodes__AAtArg, /* AbstractArrayRead#0: AAtArg */
&type_array__Arrayparser_nodes__AAtArg, /* Array[AbstractArrayRead#0]: Array[AAtArg] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[AAtArg] not a live type) */
&type_array__ArrayIteratorparser_nodes__AAtArg, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AAtArg] */
}
};
/* runtime type AbstractArrayRead[AAtArg] */
const struct type type_array__AbstractArrayReadparser_nodes__AAtArg = {
2573,
"AbstractArrayRead[AAtArg]", /* class_name_string */
10,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1739, /* Collection[Prod] */
1728, /* AbstractArrayRead[Object] */
1966, /* Collection[AAtArg] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2573, /* AbstractArrayRead[AAtArg] */
-1, /* empty */
2484, /* AbstractArrayRead[Prod] */
},
};
/* runtime type Array[TComment] */
const struct type type_array__Arrayparser_nodes__TComment = {
2625,
"Array[TComment]", /* class_name_string */
14,
0,
&resolution_table_array__Arrayparser_nodes__TComment,
15,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1760, /* Collection[Token] */
1728, /* AbstractArrayRead[Object] */
1974, /* Collection[TComment] */
2196, /* AbstractArrayRead[ANode] */
1911, /* Array[Object] */
2505, /* AbstractArrayRead[Token] */
2483, /* Array[ANode] */
2574, /* AbstractArrayRead[TComment] */
2583, /* Array[Token] */
2625, /* Array[TComment] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__TComment = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__TComment, /* Array[Array#0]: Array[TComment] */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[Array#0]: NativeArray[TComment] */
&type_parser_nodes__TComment, /* Sequence#0: TComment */
&type_parser_nodes__TComment, /* SimpleCollection#0: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[Array#0]: Collection[TComment] */
&type_parser_nodes__TComment, /* Array#0: TComment */
&type_array__NativeArrayparser_nodes__TComment, /* NativeArray[ArrayCapable#0]: NativeArray[TComment] */
&type_parser_nodes__TComment, /* AbstractArray#0: TComment */
&type_parser_nodes__TComment, /* RemovableCollection#0: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[Sequence#0]: Collection[TComment] */
&type_array__Arrayparser_nodes__TComment, /* Array[Sequence#0]: Array[TComment] */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[SimpleCollection#0]: Collection[TComment] */
&type_parser_nodes__TComment, /* Collection#0: TComment */
&type_abstract_collection__Collectionparser_nodes__TComment, /* Collection[Collection#0]: Collection[TComment] */
&type_parser_nodes__TComment, /* SequenceRead#0: TComment */
&type_parser_nodes__TComment, /* AbstractArrayRead#0: TComment */
&type_array__Arrayparser_nodes__TComment, /* Array[AbstractArrayRead#0]: Array[TComment] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[TComment] not a live type) */
&type_array__ArrayIteratorparser_nodes__TComment, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[TComment] */
}
};
/* runtime type AbstractArrayRead[TComment] */
const struct type type_array__AbstractArrayReadparser_nodes__TComment = {
2574,
"AbstractArrayRead[TComment]", /* class_name_string */
12,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
596, /* Collection[ANode] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
1760, /* Collection[Token] */
1728, /* AbstractArrayRead[Object] */
1974, /* Collection[TComment] */
2196, /* AbstractArrayRead[ANode] */
-1, /* empty */
2505, /* AbstractArrayRead[Token] */
-1, /* empty */
2574, /* AbstractArrayRead[TComment] */
},
};
/* runtime type Array[MMethodDef] */
const struct type type_array__Arraymodel__MMethodDef = {
2636,
"Array[MMethodDef]", /* class_name_string */
17,
0,
&resolution_table_array__Arraymodel__MMethodDef,
18,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
1911, /* Array[Object] */
1930, /* Array[nullable MPropDef] */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2202, /* Collection[MMethodDef] */
2481, /* Array[PropertyLayoutElement] */
2558, /* AbstractArrayRead[MPropDef] */
2600, /* AbstractArrayRead[MMethodDef] */
2611, /* Array[MPropDef] */
2636, /* Array[MMethodDef] */
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
2600,
"AbstractArrayRead[MMethodDef]", /* class_name_string */
15,
0,
NULL,
16,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2202, /* Collection[MMethodDef] */
-1, /* empty */
2558, /* AbstractArrayRead[MPropDef] */
2600, /* AbstractArrayRead[MMethodDef] */
},
};
/* runtime type HashMap2[MModule, MType, Array[MMethodDef]] */
const struct type type_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MMethodDef = {
386,
"HashMap2[MModule, MType, Array[MMethodDef]]", /* class_name_string */
2,
0,
&resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
386, /* HashMap2[MModule, MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_model_base__MModule, /* HashMap2#0: MModule */
&type_model__MType, /* HashMap2#1: MType */
&type_array__Arraymodel__MMethodDef, /* HashMap2#2: Array[MMethodDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MMethodDef, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[MType, Array[MMethodDef]] */
}
};
/* runtime type ArrayIterator[MParameter] */
const struct type type_array__ArrayIteratormodel__MParameter = {
1569,
"ArrayIterator[MParameter]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratormodel__MParameter,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1569, /* ArrayIterator[MParameter] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MParameter = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MParameter, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MParameter] */
&type_array__Arraymodel__MParameter, /* Array[Iterator#0]: Array[MParameter] */
}
};
/* runtime type NativeArray[MParameter] */
const struct type type_array__NativeArraymodel__MParameter = {
1570,
"NativeArray[MParameter]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraymodel__MParameter,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1570, /* NativeArray[MParameter] */
},
};
const struct types resolution_table_array__NativeArraymodel__MParameter = {
0, /* dummy */
{
&type_model__MParameter, /* NativeArray#0: MParameter */
&type_array__NativeArraymodel__MParameter, /* NativeArray[NativeArray#0]: NativeArray[MParameter] */
}
};
/* runtime type HashMapKeys[String, Variable] */
const struct type type_hash_collection__HashMapKeysstring__Stringscope__Variable = {
1846,
"HashMapKeys[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysstring__Stringscope__Variable,
5,
{
0, /* nullable Object */
1, /* Object */
595, /* Collection[String] */
1846, /* HashMapKeys[String, Variable] */
164, /* Collection[Object] */
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
/* runtime type HashMapValues[String, Variable] */
const struct type type_hash_collection__HashMapValuesstring__Stringscope__Variable = {
1847,
"HashMapValues[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesstring__Stringscope__Variable,
5,
{
0, /* nullable Object */
1, /* Object */
1422, /* Collection[Variable] */
1847, /* HashMapValues[String, Variable] */
164, /* Collection[Object] */
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
/* runtime type NativeArray[nullable HashMapNode[String, Variable]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
387,
"NativeArray[nullable HashMapNode[String, Variable]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable,
3,
{
0, /* nullable Object */
1, /* Object */
387, /* NativeArray[nullable HashMapNode[String, Variable]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* NativeArray#0: nullable HashMapNode[String, Variable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringscope__Variable, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[String, Variable]] */
}
};
/* runtime type HashMapNode[String, Variable] */
const struct type type_hash_collection__HashMapNodestring__Stringscope__Variable = {
1571,
"HashMapNode[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
137, /* nullable HashMapNode[String, Variable] */
1571, /* HashMapNode[String, Variable] */
},
};
const struct types resolution_table_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_scope__Variable, /* HashMapNode#1: Variable */
&type_hash_collection__HashMapNodestring__Stringscope__Variable, /* N: HashMapNode[String, Variable] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type nullable HashMapNode[String, Variable] */
const struct type type_nullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
137,
"nullable HashMapNode[String, Variable]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodestring__Stringscope__Variable,
3,
{
0, /* nullable Object */
-1, /* empty */
137, /* nullable HashMapNode[String, Variable] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodestring__Stringscope__Variable = {
0, /* dummy */
{
&type_string__String, /* HashMapNode#0: String */
&type_scope__Variable, /* HashMapNode#1: Variable */
&type_hash_collection__HashMapNodestring__Stringscope__Variable, /* N: HashMapNode[String, Variable] */
&type_string__String, /* HashNode#0: String */
}
};
/* runtime type HashMapIterator[String, Variable] */
const struct type type_hash_collection__HashMapIteratorstring__Stringscope__Variable = {
1572,
"HashMapIterator[String, Variable]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorstring__Stringscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
388, /* MapIterator[String, Variable] */
1572, /* HashMapIterator[String, Variable] */
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
388,
"MapIterator[String, Variable]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
388, /* MapIterator[String, Variable] */
},
};
/* runtime type HashMapKeys[Variable, nullable MType] */
const struct type type_hash_collection__HashMapKeysscope__Variablenullable_model__MType = {
1848,
"HashMapKeys[Variable, nullable MType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysscope__Variablenullable_model__MType,
5,
{
0, /* nullable Object */
1, /* Object */
1422, /* Collection[Variable] */
1848, /* HashMapKeys[Variable, nullable MType] */
164, /* Collection[Object] */
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
/* runtime type HashMapValues[Variable, nullable MType] */
const struct type type_hash_collection__HashMapValuesscope__Variablenullable_model__MType = {
1573,
"HashMapValues[Variable, nullable MType]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapValuesscope__Variablenullable_model__MType,
6,
{
0, /* nullable Object */
1, /* Object */
1573, /* HashMapValues[Variable, nullable MType] */
-1, /* empty */
-1, /* empty */
173, /* Collection[nullable MType] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_model__MType, /* RemovableCollection#0: nullable MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_model__MType, /* Collection#0: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[Collection#0]: Collection[nullable MType] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable MType]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
389,
"NativeArray[nullable HashMapNode[Variable, nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
389, /* NativeArray[nullable HashMapNode[Variable, nullable MType]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* NativeArray#0: nullable HashMapNode[Variable, nullable MType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, nullable MType]] */
}
};
/* runtime type HashMapNode[Variable, nullable MType] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
1574,
"HashMapNode[Variable, nullable MType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
138, /* nullable HashMapNode[Variable, nullable MType] */
1574, /* HashMapNode[Variable, nullable MType] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_model__MType, /* HashMapNode#1: nullable MType */
&type_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* N: HashMapNode[Variable, nullable MType] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable MType] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
138,
"nullable HashMapNode[Variable, nullable MType]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType,
3,
{
0, /* nullable Object */
-1, /* empty */
138, /* nullable HashMapNode[Variable, nullable MType] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodescope__Variablenullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_model__MType, /* HashMapNode#1: nullable MType */
&type_hash_collection__HashMapNodescope__Variablenullable_model__MType, /* N: HashMapNode[Variable, nullable MType] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type HashMapIterator[Variable, nullable MType] */
const struct type type_hash_collection__HashMapIteratorscope__Variablenullable_model__MType = {
1575,
"HashMapIterator[Variable, nullable MType]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
390, /* MapIterator[Variable, nullable MType] */
1575, /* HashMapIterator[Variable, nullable MType] */
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
390,
"MapIterator[Variable, nullable MType]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
390, /* MapIterator[Variable, nullable MType] */
},
};
/* runtime type HashMapKeys[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType = {
1849,
"HashMapKeys[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysscope__Variablenullable_array__Arraynullable_model__MType,
5,
{
0, /* nullable Object */
1, /* Object */
1422, /* Collection[Variable] */
1849, /* HashMapKeys[Variable, nullable Array[nullable MType]] */
164, /* Collection[Object] */
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
/* runtime type HashMapValues[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType = {
1576,
"HashMapValues[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesscope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
322, /* Collection[nullable Array[nullable MType]] */
1576, /* HashMapValues[Variable, nullable Array[nullable MType]] */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_array__Arraynullable_model__MType, /* RemovableCollection#0: nullable Array[nullable MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_array__Arraynullable_model__MType, /* Collection#0: nullable Array[nullable MType] */
&type_abstract_collection__Collectionnullable_array__Arraynullable_model__MType, /* Collection[Collection#0]: Collection[nullable Array[nullable MType]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
391,
"NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
391, /* NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* NativeArray#0: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
}
};
/* runtime type HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
1577,
"HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
139, /* nullable HashMapNode[Variable, nullable Array[nullable MType]] */
1577, /* HashMapNode[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_array__Arraynullable_model__MType, /* HashMapNode#1: nullable Array[nullable MType] */
&type_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* N: HashMapNode[Variable, nullable Array[nullable MType]] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type nullable HashMapNode[Variable, nullable Array[nullable MType]] */
const struct type type_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
139,
"nullable HashMapNode[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
-1, /* empty */
139, /* nullable HashMapNode[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_scope__Variable, /* HashMapNode#0: Variable */
&type_nullable_array__Arraynullable_model__MType, /* HashMapNode#1: nullable Array[nullable MType] */
&type_hash_collection__HashMapNodescope__Variablenullable_array__Arraynullable_model__MType, /* N: HashMapNode[Variable, nullable Array[nullable MType]] */
&type_scope__Variable, /* HashNode#0: Variable */
}
};
/* runtime type HashMapIterator[Variable, nullable Array[nullable MType]] */
const struct type type_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType = {
1578,
"HashMapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorscope__Variablenullable_array__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
392, /* MapIterator[Variable, nullable Array[nullable MType]] */
1578, /* HashMapIterator[Variable, nullable Array[nullable MType]] */
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
392,
"MapIterator[Variable, nullable Array[nullable MType]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
392, /* MapIterator[Variable, nullable Array[nullable MType]] */
},
};
/* runtime type Array[MAttributeDef] */
const struct type type_array__Arraymodel__MAttributeDef = {
2637,
"Array[MAttributeDef]", /* class_name_string */
17,
0,
&resolution_table_array__Arraymodel__MAttributeDef,
18,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
1911, /* Array[Object] */
1930, /* Array[nullable MPropDef] */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2369, /* Collection[MAttributeDef] */
2481, /* Array[PropertyLayoutElement] */
2558, /* AbstractArrayRead[MPropDef] */
2601, /* AbstractArrayRead[MAttributeDef] */
2611, /* Array[MPropDef] */
2637, /* Array[MAttributeDef] */
},
};
const struct types resolution_table_array__Arraymodel__MAttributeDef = {
0, /* dummy */
{
&type_array__Arraymodel__MAttributeDef, /* Array[Array#0]: Array[MAttributeDef] */
&type_array__NativeArraymodel__MAttributeDef, /* NativeArray[Array#0]: NativeArray[MAttributeDef] */
&type_model__MAttributeDef, /* Sequence#0: MAttributeDef */
&type_model__MAttributeDef, /* SimpleCollection#0: MAttributeDef */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[Array#0]: Collection[MAttributeDef] */
&type_model__MAttributeDef, /* Array#0: MAttributeDef */
&type_array__NativeArraymodel__MAttributeDef, /* NativeArray[ArrayCapable#0]: NativeArray[MAttributeDef] */
&type_model__MAttributeDef, /* AbstractArray#0: MAttributeDef */
&type_model__MAttributeDef, /* RemovableCollection#0: MAttributeDef */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[Sequence#0]: Collection[MAttributeDef] */
&type_array__Arraymodel__MAttributeDef, /* Array[Sequence#0]: Array[MAttributeDef] */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[SimpleCollection#0]: Collection[MAttributeDef] */
&type_model__MAttributeDef, /* Collection#0: MAttributeDef */
&type_abstract_collection__Collectionmodel__MAttributeDef, /* Collection[Collection#0]: Collection[MAttributeDef] */
&type_model__MAttributeDef, /* SequenceRead#0: MAttributeDef */
&type_model__MAttributeDef, /* AbstractArrayRead#0: MAttributeDef */
&type_array__Arraymodel__MAttributeDef, /* Array[AbstractArrayRead#0]: Array[MAttributeDef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[MAttributeDef] not a live type) */
&type_array__ArrayIteratormodel__MAttributeDef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MAttributeDef] */
}
};
/* runtime type Collection[MAttributeDef] */
const struct type type_abstract_collection__Collectionmodel__MAttributeDef = {
2369,
"Collection[MAttributeDef]", /* class_name_string */
12,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
-1, /* empty */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
1920, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2369, /* Collection[MAttributeDef] */
},
};
/* runtime type AbstractArrayRead[MAttributeDef] */
const struct type type_array__AbstractArrayReadmodel__MAttributeDef = {
2601,
"AbstractArrayRead[MAttributeDef]", /* class_name_string */
15,
0,
NULL,
16,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2369, /* Collection[MAttributeDef] */
-1, /* empty */
2558, /* AbstractArrayRead[MPropDef] */
2601, /* AbstractArrayRead[MAttributeDef] */
},
};
/* runtime type HashMap2[MModule, MType, Array[MAttributeDef]] */
const struct type type_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MAttributeDef = {
393,
"HashMap2[MModule, MType, Array[MAttributeDef]]", /* class_name_string */
2,
0,
&resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MAttributeDef,
3,
{
0, /* nullable Object */
1, /* Object */
393, /* HashMap2[MModule, MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MAttributeDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MAttributeDef, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_model_base__MModule, /* HashMap2#0: MModule */
&type_model__MType, /* HashMap2#1: MType */
&type_array__Arraymodel__MAttributeDef, /* HashMap2#2: Array[MAttributeDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MAttributeDef, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[MType, Array[MAttributeDef]] */
}
};
/* runtime type ListNode[Int] */
const struct type type_list__ListNodekernel__Int = {
2120,
"ListNode[Int]", /* class_name_string */
5,
0,
&resolution_table_list__ListNodekernel__Int,
6,
{
0, /* nullable Object */
1, /* Object */
612, /* Collection[Int] */
1850, /* Container[Int] */
164, /* Collection[Object] */
2120, /* ListNode[Int] */
},
};
const struct types resolution_table_list__ListNodekernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* ListNode#0: Int */
&type_list__ListNodekernel__Int, /* ListNode[ListNode#0]: ListNode[Int] */
&type_abstract_collection__ContainerIteratorkernel__Int, /* ContainerIterator[Container#0]: ContainerIterator[Int] */
&type_kernel__Int, /* Container#0: Int */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
}
};
/* runtime type Container[Int] */
const struct type type_abstract_collection__Containerkernel__Int = {
1850,
"Container[Int]", /* class_name_string */
3,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
612, /* Collection[Int] */
1850, /* Container[Int] */
164, /* Collection[Object] */
},
};
/* runtime type ListIterator[Int] */
const struct type type_list__ListIteratorkernel__Int = {
394,
"ListIterator[Int]", /* class_name_string */
2,
0,
&resolution_table_list__ListIteratorkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
394, /* ListIterator[Int] */
},
};
const struct types resolution_table_list__ListIteratorkernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* ListIterator#0: Int */
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
&type_list__Listkernel__Int, /* List[ListIterator#0]: List[Int] */
}
};
/* runtime type Array[MVirtualTypeDef] */
const struct type type_array__Arraymodel__MVirtualTypeDef = {
2638,
"Array[MVirtualTypeDef]", /* class_name_string */
17,
0,
&resolution_table_array__Arraymodel__MVirtualTypeDef,
18,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
1911, /* Array[Object] */
1930, /* Array[nullable MPropDef] */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2370, /* Collection[MVirtualTypeDef] */
2481, /* Array[PropertyLayoutElement] */
2558, /* AbstractArrayRead[MPropDef] */
2602, /* AbstractArrayRead[MVirtualTypeDef] */
2611, /* Array[MPropDef] */
2638, /* Array[MVirtualTypeDef] */
},
};
const struct types resolution_table_array__Arraymodel__MVirtualTypeDef = {
0, /* dummy */
{
&type_array__Arraymodel__MVirtualTypeDef, /* Array[Array#0]: Array[MVirtualTypeDef] */
&type_array__NativeArraymodel__MVirtualTypeDef, /* NativeArray[Array#0]: NativeArray[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* Sequence#0: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* SimpleCollection#0: MVirtualTypeDef */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[Array#0]: Collection[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* Array#0: MVirtualTypeDef */
&type_array__NativeArraymodel__MVirtualTypeDef, /* NativeArray[ArrayCapable#0]: NativeArray[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* AbstractArray#0: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* RemovableCollection#0: MVirtualTypeDef */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[Sequence#0]: Collection[MVirtualTypeDef] */
&type_array__Arraymodel__MVirtualTypeDef, /* Array[Sequence#0]: Array[MVirtualTypeDef] */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[SimpleCollection#0]: Collection[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* Collection#0: MVirtualTypeDef */
&type_abstract_collection__Collectionmodel__MVirtualTypeDef, /* Collection[Collection#0]: Collection[MVirtualTypeDef] */
&type_model__MVirtualTypeDef, /* SequenceRead#0: MVirtualTypeDef */
&type_model__MVirtualTypeDef, /* AbstractArrayRead#0: MVirtualTypeDef */
&type_array__Arraymodel__MVirtualTypeDef, /* Array[AbstractArrayRead#0]: Array[MVirtualTypeDef] */
NULL, /* empty (AbstractArray[AbstractArrayRead#0]: AbstractArray[MVirtualTypeDef] not a live type) */
&type_array__ArrayIteratormodel__MVirtualTypeDef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MVirtualTypeDef] */
}
};
/* runtime type Collection[MVirtualTypeDef] */
const struct type type_abstract_collection__Collectionmodel__MVirtualTypeDef = {
2370,
"Collection[MVirtualTypeDef]", /* class_name_string */
12,
0,
NULL,
13,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
-1, /* empty */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
1920, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2370, /* Collection[MVirtualTypeDef] */
},
};
/* runtime type AbstractArrayRead[MVirtualTypeDef] */
const struct type type_array__AbstractArrayReadmodel__MVirtualTypeDef = {
2602,
"AbstractArrayRead[MVirtualTypeDef]", /* class_name_string */
15,
0,
NULL,
16,
{
0, /* nullable Object */
1, /* Object */
188, /* Collection[nullable MPropDef] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
590, /* Collection[PropertyLayoutElement] */
1728, /* AbstractArrayRead[Object] */
1749, /* AbstractArrayRead[nullable MPropDef] */
1920, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
2194, /* AbstractArrayRead[PropertyLayoutElement] */
2370, /* Collection[MVirtualTypeDef] */
-1, /* empty */
2558, /* AbstractArrayRead[MPropDef] */
2602, /* AbstractArrayRead[MVirtualTypeDef] */
},
};
/* runtime type HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
const struct type type_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef = {
395,
"HashMap2[MModule, MType, Array[MVirtualTypeDef]]", /* class_name_string */
2,
0,
&resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef,
3,
{
0, /* nullable Object */
1, /* Object */
395, /* HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2model_base__MModulemodel__MTypearray__Arraymodel__MVirtualTypeDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulehash_collection__HashMapmodel__MTypearray__Arraymodel__MVirtualTypeDef, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_model_base__MModule, /* HashMap2#0: MModule */
&type_model__MType, /* HashMap2#1: MType */
&type_array__Arraymodel__MVirtualTypeDef, /* HashMap2#2: Array[MVirtualTypeDef] */
&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MVirtualTypeDef, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[MType, Array[MVirtualTypeDef]] */
}
};
/* runtime type ArrayIterator[MVirtualType] */
const struct type type_array__ArrayIteratormodel__MVirtualType = {
2121,
"ArrayIterator[MVirtualType]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratormodel__MVirtualType,
6,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
337, /* ArrayIterator[nullable MType] */
1818, /* ArrayIterator[MType] */
2121, /* ArrayIterator[MVirtualType] */
},
};
const struct types resolution_table_array__ArrayIteratormodel__MVirtualType = {
0, /* dummy */
{
&type_array__AbstractArrayReadmodel__MVirtualType, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[MVirtualType] */
&type_array__Arraymodel__MVirtualType, /* Array[Iterator#0]: Array[MVirtualType] */
}
};
/* runtime type NativeArray[MVirtualType] */
const struct type type_array__NativeArraymodel__MVirtualType = {
2122,
"NativeArray[MVirtualType]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraymodel__MVirtualType,
6,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
338, /* NativeArray[nullable MType] */
1819, /* NativeArray[MType] */
2122, /* NativeArray[MVirtualType] */
},
};
const struct types resolution_table_array__NativeArraymodel__MVirtualType = {
0, /* dummy */
{
&type_model__MVirtualType, /* NativeArray#0: MVirtualType */
&type_array__NativeArraymodel__MVirtualType, /* NativeArray[NativeArray#0]: NativeArray[MVirtualType] */
}
};
/* runtime type ArrayIterator[AExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AExpr = {
2123,
"ArrayIterator[AExpr]", /* class_name_string */
5,
0,
&resolution_table_array__ArrayIteratorparser_nodes__AExpr,
6,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1448, /* ArrayIterator[ANode] */
1791, /* ArrayIterator[Prod] */
2123, /* ArrayIterator[AExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AExpr = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser_nodes__AExpr, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AExpr] */
&type_array__Arrayparser_nodes__AExpr, /* Array[Iterator#0]: Array[AExpr] */
}
};
/* runtime type NativeArray[AExpr] */
const struct type type_array__NativeArrayparser_nodes__AExpr = {
2124,
"NativeArray[AExpr]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArrayparser_nodes__AExpr,
6,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1449, /* NativeArray[ANode] */
1792, /* NativeArray[Prod] */
2124, /* NativeArray[AExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AExpr = {
0, /* dummy */
{
&type_parser_nodes__AExpr, /* NativeArray#0: AExpr */
&type_array__NativeArrayparser_nodes__AExpr, /* NativeArray[NativeArray#0]: NativeArray[AExpr] */
}
};
/* runtime type ArrayIterator[AIntExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AIntExpr = {
2371,
"ArrayIterator[AIntExpr]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratorparser_nodes__AIntExpr,
7,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1448, /* ArrayIterator[ANode] */
1791, /* ArrayIterator[Prod] */
2123, /* ArrayIterator[AExpr] */
2371, /* ArrayIterator[AIntExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AIntExpr = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser_nodes__AIntExpr, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AIntExpr] */
&type_array__Arrayparser_nodes__AIntExpr, /* Array[Iterator#0]: Array[AIntExpr] */
}
};
/* runtime type NativeArray[AIntExpr] */
const struct type type_array__NativeArrayparser_nodes__AIntExpr = {
2372,
"NativeArray[AIntExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AIntExpr,
7,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1449, /* NativeArray[ANode] */
1792, /* NativeArray[Prod] */
2124, /* NativeArray[AExpr] */
2372, /* NativeArray[AIntExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AIntExpr = {
0, /* dummy */
{
&type_parser_nodes__AIntExpr, /* NativeArray#0: AIntExpr */
&type_array__NativeArrayparser_nodes__AIntExpr, /* NativeArray[NativeArray#0]: NativeArray[AIntExpr] */
}
};
/* runtime type ArrayIterator[Variable] */
const struct type type_array__ArrayIteratorscope__Variable = {
1579,
"ArrayIterator[Variable]", /* class_name_string */
3,
0,
&resolution_table_array__ArrayIteratorscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1579, /* ArrayIterator[Variable] */
},
};
const struct types resolution_table_array__ArrayIteratorscope__Variable = {
0, /* dummy */
{
&type_array__AbstractArrayReadscope__Variable, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Variable] */
&type_array__Arrayscope__Variable, /* Array[Iterator#0]: Array[Variable] */
}
};
/* runtime type NativeArray[Variable] */
const struct type type_array__NativeArrayscope__Variable = {
1580,
"NativeArray[Variable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayscope__Variable,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1580, /* NativeArray[Variable] */
},
};
const struct types resolution_table_array__NativeArrayscope__Variable = {
0, /* dummy */
{
&type_scope__Variable, /* NativeArray#0: Variable */
&type_array__NativeArrayscope__Variable, /* NativeArray[NativeArray#0]: NativeArray[Variable] */
}
};
/* runtime type ArrayIterator[Token] */
const struct type type_array__ArrayIteratorparser_nodes__Token = {
1851,
"ArrayIterator[Token]", /* class_name_string */
4,
0,
&resolution_table_array__ArrayIteratorparser_nodes__Token,
5,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1448, /* ArrayIterator[ANode] */
1851, /* ArrayIterator[Token] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__Token = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser_nodes__Token, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[Token] */
&type_array__Arrayparser_nodes__Token, /* Array[Iterator#0]: Array[Token] */
}
};
/* runtime type NativeArray[Token] */
const struct type type_array__NativeArrayparser_nodes__Token = {
1852,
"NativeArray[Token]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArrayparser_nodes__Token,
5,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1449, /* NativeArray[ANode] */
1852, /* NativeArray[Token] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__Token = {
0, /* dummy */
{
&type_parser_nodes__Token, /* NativeArray#0: Token */
&type_array__NativeArrayparser_nodes__Token, /* NativeArray[NativeArray#0]: NativeArray[Token] */
}
};
/* runtime type ArrayIterator[ABreakExpr] */
const struct type type_array__ArrayIteratorparser_nodes__ABreakExpr = {
2373,
"ArrayIterator[ABreakExpr]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratorparser_nodes__ABreakExpr,
7,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1448, /* ArrayIterator[ANode] */
1791, /* ArrayIterator[Prod] */
2123, /* ArrayIterator[AExpr] */
2373, /* ArrayIterator[ABreakExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__ABreakExpr = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser_nodes__ABreakExpr, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[ABreakExpr] */
&type_array__Arrayparser_nodes__ABreakExpr, /* Array[Iterator#0]: Array[ABreakExpr] */
}
};
/* runtime type NativeArray[ABreakExpr] */
const struct type type_array__NativeArrayparser_nodes__ABreakExpr = {
2374,
"NativeArray[ABreakExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__ABreakExpr,
7,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1449, /* NativeArray[ANode] */
1792, /* NativeArray[Prod] */
2124, /* NativeArray[AExpr] */
2374, /* NativeArray[ABreakExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__ABreakExpr = {
0, /* dummy */
{
&type_parser_nodes__ABreakExpr, /* NativeArray#0: ABreakExpr */
&type_array__NativeArrayparser_nodes__ABreakExpr, /* NativeArray[NativeArray#0]: NativeArray[ABreakExpr] */
}
};
/* runtime type ArrayIterator[AContinueExpr] */
const struct type type_array__ArrayIteratorparser_nodes__AContinueExpr = {
2375,
"ArrayIterator[AContinueExpr]", /* class_name_string */
6,
0,
&resolution_table_array__ArrayIteratorparser_nodes__AContinueExpr,
7,
{
0, /* nullable Object */
1, /* Object */
277, /* ArrayIterator[Object] */
1448, /* ArrayIterator[ANode] */
1791, /* ArrayIterator[Prod] */
2123, /* ArrayIterator[AExpr] */
2375, /* ArrayIterator[AContinueExpr] */
},
};
const struct types resolution_table_array__ArrayIteratorparser_nodes__AContinueExpr = {
0, /* dummy */
{
&type_array__AbstractArrayReadparser_nodes__AContinueExpr, /* AbstractArrayRead[ArrayIterator#0]: AbstractArrayRead[AContinueExpr] */
&type_array__Arrayparser_nodes__AContinueExpr, /* Array[Iterator#0]: Array[AContinueExpr] */
}
};
/* runtime type NativeArray[AContinueExpr] */
const struct type type_array__NativeArrayparser_nodes__AContinueExpr = {
2376,
"NativeArray[AContinueExpr]", /* class_name_string */
6,
0,
&resolution_table_array__NativeArrayparser_nodes__AContinueExpr,
7,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1449, /* NativeArray[ANode] */
1792, /* NativeArray[Prod] */
2124, /* NativeArray[AExpr] */
2376, /* NativeArray[AContinueExpr] */
},
};
const struct types resolution_table_array__NativeArrayparser_nodes__AContinueExpr = {
0, /* dummy */
{
&type_parser_nodes__AContinueExpr, /* NativeArray#0: AContinueExpr */
&type_array__NativeArrayparser_nodes__AContinueExpr, /* NativeArray[NativeArray#0]: NativeArray[AContinueExpr] */
}
};
/* runtime type HashMapKeys[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase = {
1853,
"HashMapKeys[Phase, POSetElement[Phase]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase,
5,
{
0, /* nullable Object */
1, /* Object */
575, /* Collection[Phase] */
1853, /* HashMapKeys[Phase, POSetElement[Phase]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[Phase, POSetElement[Phase]] */
&type_abstract_collection__MapKeysIteratorphase__Phaseposet__POSetElementphase__Phase, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[Phase, POSetElement[Phase]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_phase__Phase, /* RemovableCollection#0: Phase */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_phase__Phase, /* Collection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Collection#0]: Collection[Phase] */
}
};
/* runtime type HashMapValues[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase = {
1854,
"HashMapValues[Phase, POSetElement[Phase]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase,
5,
{
0, /* nullable Object */
1, /* Object */
1581, /* Collection[POSetElement[Phase]] */
1854, /* HashMapValues[Phase, POSetElement[Phase]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[Phase, POSetElement[Phase]] */
&type_abstract_collection__MapValuesIteratorphase__Phaseposet__POSetElementphase__Phase, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[Phase, POSetElement[Phase]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementphase__Phase, /* RemovableCollection#0: POSetElement[Phase] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementphase__Phase, /* Collection#0: POSetElement[Phase] */
&type_abstract_collection__Collectionposet__POSetElementphase__Phase, /* Collection[Collection#0]: Collection[POSetElement[Phase]] */
}
};
/* runtime type Collection[POSetElement[Phase]] */
const struct type type_abstract_collection__Collectionposet__POSetElementphase__Phase = {
1581,
"Collection[POSetElement[Phase]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1581, /* Collection[POSetElement[Phase]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
396,
"NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase,
3,
{
0, /* nullable Object */
1, /* Object */
396, /* NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* NativeArray#0: nullable HashMapNode[Phase, POSetElement[Phase]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
}
};
/* runtime type HashMapNode[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
1582,
"HashMapNode[Phase, POSetElement[Phase]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
140, /* nullable HashMapNode[Phase, POSetElement[Phase]] */
1582, /* HashMapNode[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_phase__Phase, /* HashMapNode#0: Phase */
&type_poset__POSetElementphase__Phase, /* HashMapNode#1: POSetElement[Phase] */
&type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* N: HashMapNode[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* HashNode#0: Phase */
}
};
/* runtime type nullable HashMapNode[Phase, POSetElement[Phase]] */
const struct type type_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
140,
"nullable HashMapNode[Phase, POSetElement[Phase]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase,
3,
{
0, /* nullable Object */
-1, /* empty */
140, /* nullable HashMapNode[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_phase__Phase, /* HashMapNode#0: Phase */
&type_poset__POSetElementphase__Phase, /* HashMapNode#1: POSetElement[Phase] */
&type_hash_collection__HashMapNodephase__Phaseposet__POSetElementphase__Phase, /* N: HashMapNode[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* HashNode#0: Phase */
}
};
/* runtime type HashMapIterator[Phase, POSetElement[Phase]] */
const struct type type_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase = {
1583,
"HashMapIterator[Phase, POSetElement[Phase]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase,
4,
{
0, /* nullable Object */
1, /* Object */
397, /* MapIterator[Phase, POSetElement[Phase]] */
1583, /* HashMapIterator[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratorphase__Phaseposet__POSetElementphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[Phase, POSetElement[Phase]] */
}
};
/* runtime type MapIterator[Phase, POSetElement[Phase]] */
const struct type type_abstract_collection__MapIteratorphase__Phaseposet__POSetElementphase__Phase = {
397,
"MapIterator[Phase, POSetElement[Phase]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
397, /* MapIterator[Phase, POSetElement[Phase]] */
},
};
/* runtime type HashSet[Phase] */
const struct type type_hash_collection__HashSetphase__Phase = {
2377,
"HashSet[Phase]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashSetphase__Phase,
7,
{
0, /* nullable Object */
1, /* Object */
575, /* Collection[Phase] */
597, /* Set[Object] */
164, /* Collection[Object] */
2377, /* HashSet[Phase] */
1740, /* HashSet[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashSetNodephase__Phase, /* HashSetNode[HashSet#0]: HashSetNode[Phase] */
&type_hash_collection__HashSetIteratorphase__Phase, /* HashSetIterator[HashSet#0]: HashSetIterator[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[HashSet#0]: Collection[Phase] */
&type_phase__Phase, /* SimpleCollection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Set#0]: Collection[Phase] */
NULL, /* empty */
&type_array__NativeArraynullable_hash_collection__HashSetNodephase__Phase, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[Phase]] */
NULL, /* empty */
&type_phase__Phase, /* RemovableCollection#0: Phase */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Collectionphase__Phase, /* Collection[SimpleCollection#0]: Collection[Phase] */
&type_phase__Phase, /* Collection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Collection#0]: Collection[Phase] */
&type_phase__Phase, /* HashCollection#0: Phase */
&type_hash_collection__HashSetNodephase__Phase, /* HashCollection#1: HashSetNode[Phase] */
}
};
/* runtime type HashMapKeys[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapKeysmodel_base__MModuleposet__POSetElementmodel_base__MModule = {
1855,
"HashMapKeys[MModule, POSetElement[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel_base__MModuleposet__POSetElementmodel_base__MModule,
5,
{
0, /* nullable Object */
1, /* Object */
588, /* Collection[MModule] */
1855, /* HashMapKeys[MModule, POSetElement[MModule]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleposet__POSetElementmodel_base__MModule, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, POSetElement[MModule]] */
&type_abstract_collection__MapKeysIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, POSetElement[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmodel_base__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapValuesmodel_base__MModuleposet__POSetElementmodel_base__MModule = {
1856,
"HashMapValues[MModule, POSetElement[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel_base__MModuleposet__POSetElementmodel_base__MModule,
5,
{
0, /* nullable Object */
1, /* Object */
1584, /* Collection[POSetElement[MModule]] */
1856, /* HashMapValues[MModule, POSetElement[MModule]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleposet__POSetElementmodel_base__MModule, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, POSetElement[MModule]] */
&type_abstract_collection__MapValuesIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, POSetElement[MModule]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel_base__MModule, /* RemovableCollection#0: POSetElement[MModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel_base__MModule, /* Collection#0: POSetElement[MModule] */
&type_abstract_collection__Collectionposet__POSetElementmodel_base__MModule, /* Collection[Collection#0]: Collection[POSetElement[MModule]] */
}
};
/* runtime type Collection[POSetElement[MModule]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel_base__MModule = {
1584,
"Collection[POSetElement[MModule]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1584, /* Collection[POSetElement[MModule]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
398,
"NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
398, /* NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule, /* NativeArray#0: nullable HashMapNode[MModule, POSetElement[MModule]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
}
};
/* runtime type HashMapNode[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
1585,
"HashMapNode[MModule, POSetElement[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
141, /* nullable HashMapNode[MModule, POSetElement[MModule]] */
1585, /* HashMapNode[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_poset__POSetElementmodel_base__MModule, /* HashMapNode#1: POSetElement[MModule] */
&type_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule, /* N: HashMapNode[MModule, POSetElement[MModule]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, POSetElement[MModule]] */
const struct type type_nullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
141,
"nullable HashMapNode[MModule, POSetElement[MModule]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule,
3,
{
0, /* nullable Object */
-1, /* empty */
141, /* nullable HashMapNode[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_poset__POSetElementmodel_base__MModule, /* HashMapNode#1: POSetElement[MModule] */
&type_hash_collection__HashMapNodemodel_base__MModuleposet__POSetElementmodel_base__MModule, /* N: HashMapNode[MModule, POSetElement[MModule]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashMapIterator[MModule, POSetElement[MModule]] */
const struct type type_hash_collection__HashMapIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule = {
1586,
"HashMapIterator[MModule, POSetElement[MModule]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
399, /* MapIterator[MModule, POSetElement[MModule]] */
1586, /* HashMapIterator[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModuleposet__POSetElementmodel_base__MModule, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, POSetElement[MModule]] */
}
};
/* runtime type MapIterator[MModule, POSetElement[MModule]] */
const struct type type_abstract_collection__MapIteratormodel_base__MModuleposet__POSetElementmodel_base__MModule = {
399,
"MapIterator[MModule, POSetElement[MModule]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
399, /* MapIterator[MModule, POSetElement[MModule]] */
},
};
/* runtime type MapKeysIterator[String, Array[MModule]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel_base__MModule = {
400,
"MapKeysIterator[String, Array[MModule]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel_base__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
400, /* MapKeysIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel_base__MModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel_base__MModule, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, Array[MModule]] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, Array[MModule]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel_base__MModule = {
401,
"MapValuesIterator[String, Array[MModule]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel_base__MModule,
3,
{
0, /* nullable Object */
1, /* Object */
401, /* MapValuesIterator[String, Array[MModule]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel_base__MModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel_base__MModule, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, Array[MModule]] */
&type_array__Arrayarray__Arraymodel_base__MModule, /* Array[Iterator#0]: Array[Array[MModule]] */
}
};
/* runtime type HashMapKeys[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef = {
1857,
"HashMapKeys[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef,
5,
{
0, /* nullable Object */
1, /* Object */
591, /* Collection[MClassDef] */
1857, /* HashMapKeys[MClassDef, POSetElement[MClassDef]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_abstract_collection__MapKeysIteratormodel__MClassDefposet__POSetElementmodel__MClassDef, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassDef, POSetElement[MClassDef]] */
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
/* runtime type HashMapValues[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef = {
1858,
"HashMapValues[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef,
5,
{
0, /* nullable Object */
1, /* Object */
1587, /* Collection[POSetElement[MClassDef]] */
1858, /* HashMapValues[MClassDef, POSetElement[MClassDef]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_abstract_collection__MapValuesIteratormodel__MClassDefposet__POSetElementmodel__MClassDef, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassDef, POSetElement[MClassDef]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassDef, /* RemovableCollection#0: POSetElement[MClassDef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassDef, /* Collection#0: POSetElement[MClassDef] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MClassDef, /* Collection[Collection#0]: Collection[POSetElement[MClassDef]] */
}
};
/* runtime type Collection[POSetElement[MClassDef]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MClassDef = {
1587,
"Collection[POSetElement[MClassDef]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1587, /* Collection[POSetElement[MClassDef]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
402,
"NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
402, /* NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* NativeArray#0: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
}
};
/* runtime type HashMapNode[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
1588,
"HashMapNode[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
142, /* nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
1588, /* HashMapNode[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_poset__POSetElementmodel__MClassDef, /* HashMapNode#1: POSetElement[MClassDef] */
&type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* N: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
142,
"nullable HashMapNode[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef,
3,
{
0, /* nullable Object */
-1, /* empty */
142, /* nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* HashMapNode#0: MClassDef */
&type_poset__POSetElementmodel__MClassDef, /* HashMapNode#1: POSetElement[MClassDef] */
&type_hash_collection__HashMapNodemodel__MClassDefposet__POSetElementmodel__MClassDef, /* N: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* HashNode#0: MClassDef */
}
};
/* runtime type HashMapIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
1589,
"HashMapIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef,
4,
{
0, /* nullable Object */
1, /* Object */
403, /* MapIterator[MClassDef, POSetElement[MClassDef]] */
1589, /* HashMapIterator[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassDef, POSetElement[MClassDef]] */
}
};
/* runtime type MapIterator[MClassDef, POSetElement[MClassDef]] */
const struct type type_abstract_collection__MapIteratormodel__MClassDefposet__POSetElementmodel__MClassDef = {
403,
"MapIterator[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
403, /* MapIterator[MClassDef, POSetElement[MClassDef]] */
},
};
/* runtime type HashMapKeys[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType = {
2474,
"HashMapKeys[MClassType, POSetElement[MClassType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType,
11,
{
0, /* nullable Object */
1, /* Object */
2125, /* HashMapKeys[MType, POSetElement[MType]] */
2474, /* HashMapKeys[MClassType, POSetElement[MClassType]] */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
1916, /* Collection[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClassType, POSetElement[MClassType]] */
&type_abstract_collection__MapKeysIteratormodel__MClassTypeposet__POSetElementmodel__MClassType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClassType, POSetElement[MClassType]] */
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
/* runtime type HashMapKeys[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType = {
2125,
"HashMapKeys[MType, POSetElement[MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType,
8,
{
0, /* nullable Object */
1, /* Object */
2125, /* HashMapKeys[MType, POSetElement[MType]] */
-1, /* empty */
164, /* Collection[Object] */
173, /* Collection[nullable MType] */
-1, /* empty */
1737, /* Collection[MType] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MType, POSetElement[MType]] */
&type_abstract_collection__MapKeysIteratormodel__MTypeposet__POSetElementmodel__MType, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MType, POSetElement[MType]] */
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
/* runtime type HashMapValues[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType = {
2378,
"HashMapValues[MClassType, POSetElement[MClassType]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType,
7,
{
0, /* nullable Object */
1, /* Object */
1590, /* Collection[POSetElement[MType]] */
1859, /* HashMapValues[MType, POSetElement[MType]] */
164, /* Collection[Object] */
1860, /* Collection[POSetElement[MClassType]] */
2378, /* HashMapValues[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MClassType, POSetElement[MClassType]] */
&type_abstract_collection__MapValuesIteratormodel__MClassTypeposet__POSetElementmodel__MClassType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MClassType, POSetElement[MClassType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassType, /* RemovableCollection#0: POSetElement[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MClassType, /* Collection#0: POSetElement[MClassType] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MClassType, /* Collection[Collection#0]: Collection[POSetElement[MClassType]] */
}
};
/* runtime type HashMapValues[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType = {
1859,
"HashMapValues[MType, POSetElement[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
1590, /* Collection[POSetElement[MType]] */
1859, /* HashMapValues[MType, POSetElement[MType]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MType, POSetElement[MType]] */
&type_abstract_collection__MapValuesIteratormodel__MTypeposet__POSetElementmodel__MType, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MType, POSetElement[MType]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MType, /* RemovableCollection#0: POSetElement[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_poset__POSetElementmodel__MType, /* Collection#0: POSetElement[MType] */
&type_abstract_collection__Collectionposet__POSetElementmodel__MType, /* Collection[Collection#0]: Collection[POSetElement[MType]] */
}
};
/* runtime type Collection[POSetElement[MClassType]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MClassType = {
1860,
"Collection[POSetElement[MClassType]]", /* class_name_string */
5,
0,
NULL,
6,
{
0, /* nullable Object */
1, /* Object */
1590, /* Collection[POSetElement[MType]] */
-1, /* empty */
164, /* Collection[Object] */
1860, /* Collection[POSetElement[MClassType]] */
},
};
/* runtime type Collection[POSetElement[MType]] */
const struct type type_abstract_collection__Collectionposet__POSetElementmodel__MType = {
1590,
"Collection[POSetElement[MType]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1590, /* Collection[POSetElement[MType]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
1591,
"NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType,
4,
{
0, /* nullable Object */
1, /* Object */
404, /* NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
1591, /* NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* NativeArray#0: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
}
};
/* runtime type NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
404,
"NativeArray[nullable HashMapNode[MType, POSetElement[MType]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
404, /* NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* NativeArray#0: nullable HashMapNode[MType, POSetElement[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
}
};
/* runtime type HashMapNode[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
2126,
"HashMapNode[MClassType, POSetElement[MClassType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
143, /* nullable HashMapNode[MType, POSetElement[MType]] */
405, /* nullable HashMapNode[MClassType, POSetElement[MClassType]] */
1592, /* HashMapNode[MType, POSetElement[MType]] */
2126, /* HashMapNode[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_poset__POSetElementmodel__MClassType, /* HashMapNode#1: POSetElement[MClassType] */
&type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* N: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type HashMapNode[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
1592,
"HashMapNode[MType, POSetElement[MType]]", /* class_name_string */
4,
0,
&resolution_table_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType,
5,
{
0, /* nullable Object */
1, /* Object */
143, /* nullable HashMapNode[MType, POSetElement[MType]] */
-1, /* empty */
1592, /* HashMapNode[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_poset__POSetElementmodel__MType, /* HashMapNode#1: POSetElement[MType] */
&type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* N: HashMapNode[MType, POSetElement[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type nullable HashMapNode[MClassType, POSetElement[MClassType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
405,
"nullable HashMapNode[MClassType, POSetElement[MClassType]]", /* class_name_string */
3,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType,
4,
{
0, /* nullable Object */
-1, /* empty */
143, /* nullable HashMapNode[MType, POSetElement[MType]] */
405, /* nullable HashMapNode[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* HashMapNode#0: MClassType */
&type_poset__POSetElementmodel__MClassType, /* HashMapNode#1: POSetElement[MClassType] */
&type_hash_collection__HashMapNodemodel__MClassTypeposet__POSetElementmodel__MClassType, /* N: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* HashNode#0: MClassType */
}
};
/* runtime type nullable HashMapNode[MType, POSetElement[MType]] */
const struct type type_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
143,
"nullable HashMapNode[MType, POSetElement[MType]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType,
3,
{
0, /* nullable Object */
-1, /* empty */
143, /* nullable HashMapNode[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_model__MType, /* HashMapNode#0: MType */
&type_poset__POSetElementmodel__MType, /* HashMapNode#1: POSetElement[MType] */
&type_hash_collection__HashMapNodemodel__MTypeposet__POSetElementmodel__MType, /* N: HashMapNode[MType, POSetElement[MType]] */
&type_model__MType, /* HashNode#0: MType */
}
};
/* runtime type HashMapIterator[MClassType, POSetElement[MClassType]] */
const struct type type_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
2127,
"HashMapIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType,
6,
{
0, /* nullable Object */
1, /* Object */
406, /* MapIterator[MType, POSetElement[MType]] */
1593, /* HashMapIterator[MType, POSetElement[MType]] */
1594, /* MapIterator[MClassType, POSetElement[MClassType]] */
2127, /* HashMapIterator[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MClassType, POSetElement[MClassType]] */
}
};
/* runtime type HashMapIterator[MType, POSetElement[MType]] */
const struct type type_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType = {
1593,
"HashMapIterator[MType, POSetElement[MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
406, /* MapIterator[MType, POSetElement[MType]] */
1593, /* HashMapIterator[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel__MTypeposet__POSetElementmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MType, POSetElement[MType]] */
}
};
/* runtime type MapIterator[MClassType, POSetElement[MClassType]] */
const struct type type_abstract_collection__MapIteratormodel__MClassTypeposet__POSetElementmodel__MClassType = {
1594,
"MapIterator[MClassType, POSetElement[MClassType]]", /* class_name_string */
4,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
406, /* MapIterator[MType, POSetElement[MType]] */
-1, /* empty */
1594, /* MapIterator[MClassType, POSetElement[MClassType]] */
},
};
/* runtime type MapIterator[MType, POSetElement[MType]] */
const struct type type_abstract_collection__MapIteratormodel__MTypeposet__POSetElementmodel__MType = {
406,
"MapIterator[MType, POSetElement[MType]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
406, /* MapIterator[MType, POSetElement[MType]] */
},
};
/* runtime type MapKeysIterator[String, Array[MClass]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass = {
407,
"MapKeysIterator[String, Array[MClass]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
407, /* MapKeysIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MClass, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, Array[MClass]] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, Array[MClass]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass = {
408,
"MapValuesIterator[String, Array[MClass]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
408, /* MapValuesIterator[String, Array[MClass]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MClass, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, Array[MClass]] */
&type_array__Arrayarray__Arraymodel__MClass, /* Array[Iterator#0]: Array[Array[MClass]] */
}
};
/* runtime type MapKeysIterator[String, Array[MProperty]] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty = {
409,
"MapKeysIterator[String, Array[MProperty]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
409, /* MapKeysIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MProperty, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, Array[MProperty]] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, Array[MProperty]] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty = {
410,
"MapValuesIterator[String, Array[MProperty]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
410, /* MapValuesIterator[String, Array[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringarray__Arraymodel__MProperty = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringarray__Arraymodel__MProperty, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, Array[MProperty]] */
&type_array__Arrayarray__Arraymodel__MProperty, /* Array[Iterator#0]: Array[Array[MProperty]] */
}
};
/* runtime type HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapKeysmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1861,
"HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapKeysmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
5,
{
0, /* nullable Object */
1, /* Object */
588, /* Collection[MModule] */
1861, /* HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_abstract_collection__MapKeysIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model_base__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmodel_base__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapValuesmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1862,
"HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapValuesmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
5,
{
0, /* nullable Object */
1, /* Object */
1595, /* Collection[HashMap2[MType, String, nullable MProperty]] */
1862, /* HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
164, /* Collection[Object] */
},
};
const struct types resolution_table_hash_collection__HashMapValuesmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[HashMapValues#0, HashMapValues#1]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_abstract_collection__MapValuesIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* MapValuesIterator[HashMapValues#0, HashMapValues#1]: MapValuesIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* RemovableCollection#0: HashMap2[MType, String, nullable MProperty] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Collection#0: HashMap2[MType, String, nullable MProperty] */
&type_abstract_collection__Collectionmore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* Collection[Collection#0]: Collection[HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type Collection[HashMap2[MType, String, nullable MProperty]] */
const struct type type_abstract_collection__Collectionmore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1595,
"Collection[HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
NULL,
5,
{
0, /* nullable Object */
1, /* Object */
1595, /* Collection[HashMap2[MType, String, nullable MProperty]] */
-1, /* empty */
164, /* Collection[Object] */
},
};
/* runtime type NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
const struct type type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
411,
"NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
411, /* NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
},
};
const struct types resolution_table_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_nullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* NativeArray#0: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* NativeArray[NativeArray#0]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
}
};
/* runtime type HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1596,
"HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
144, /* nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
1596, /* HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapNode#1: HashMap2[MType, String, nullable MProperty] */
&type_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* N: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_nullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
144,
"nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
1,
&resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
-1, /* empty */
144, /* nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_nullable_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_model_base__MModule, /* HashMapNode#0: MModule */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMapNode#1: HashMap2[MType, String, nullable MProperty] */
&type_hash_collection__HashMapNodemodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* N: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_model_base__MModule, /* HashNode#0: MModule */
}
};
/* runtime type HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_hash_collection__HashMapIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
1597,
"HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
412, /* MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
1597, /* HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[HashMapIterator#0, HashMapIterator#1]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_abstract_collection__MapIteratormodel_base__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty = {
412,
"MapIterator[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
2,
0,
NULL,
3,
{
0, /* nullable Object */
1, /* Object */
412, /* MapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
/* runtime type HashMap[MType, HashMap[String, nullable MProperty]] */
const struct type type_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty = {
413,
"HashMap[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
413, /* HashMap[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, HashMap[String, nullable MProperty]] */
&type_hash_collection__HashMapValuesmodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, HashMap[String, nullable MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
&type_model__MType, /* MapRead#0: MType */
&type_hash_collection__HashMapIteratormodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, HashMap[String, nullable MProperty]] */
&type_model__MType, /* Map#0: MType */
&type_hash_collection__HashMapstring__Stringnullable_model__MProperty, /* Map#1: HashMap[String, nullable MProperty] */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, HashMap[String, nullable MProperty]] */
NULL, /* empty (Map[Map#0, Map#1]: Map[MType, HashMap[String, nullable MProperty]] not a live type) */
&type_hash_collection__HashMapstring__Stringnullable_model__MProperty, /* MapRead#1: HashMap[String, nullable MProperty] */
&type_model__MType, /* HashCollection#0: MType */
&type_hash_collection__HashMapNodemodel__MTypehash_collection__HashMapstring__Stringnullable_model__MProperty, /* HashCollection#1: HashMapNode[MType, HashMap[String, nullable MProperty]] */
}
};
/* runtime type HashMap[String, nullable MProperty] */
const struct type type_hash_collection__HashMapstring__Stringnullable_model__MProperty = {
414,
"HashMap[String, nullable MProperty]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
414, /* HashMap[String, nullable MProperty] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringnullable_model__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_hash_collection__HashMapKeysstring__Stringnullable_model__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, nullable MProperty] */
&type_hash_collection__HashMapValuesstring__Stringnullable_model__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, nullable MProperty] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, nullable MProperty]] */
&type_string__String, /* MapRead#0: String */
&type_hash_collection__HashMapIteratorstring__Stringnullable_model__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, nullable MProperty] */
&type_string__String, /* Map#0: String */
&type_nullable_model__MProperty, /* Map#1: nullable MProperty */
&type_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, nullable MProperty] */
NULL, /* empty (Map[Map#0, Map#1]: Map[String, nullable MProperty] not a live type) */
&type_nullable_model__MProperty, /* MapRead#1: nullable MProperty */
&type_string__String, /* HashCollection#0: String */
&type_hash_collection__HashMapNodestring__Stringnullable_model__MProperty, /* HashCollection#1: HashMapNode[String, nullable MProperty] */
}
};
/* runtime type MapKeysIterator[String, AModule] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__AModule = {
415,
"MapKeysIterator[String, AModule]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
415, /* MapKeysIterator[String, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringparser_nodes__AModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringparser_nodes__AModule, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, AModule] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, AModule] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__AModule = {
416,
"MapValuesIterator[String, AModule]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
416, /* MapValuesIterator[String, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringparser_nodes__AModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringparser_nodes__AModule, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, AModule] */
&type_array__Arrayparser_nodes__AModule, /* Array[Iterator#0]: Array[AModule] */
}
};
/* runtime type MapKeysIterator[MModule, AModule] */
const struct type type_abstract_collection__MapKeysIteratormodel_base__MModuleparser_nodes__AModule = {
417,
"MapKeysIterator[MModule, AModule]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel_base__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
417, /* MapKeysIterator[MModule, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel_base__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel_base__MModuleparser_nodes__AModule, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MModule, AModule] */
&type_array__Arraymodel_base__MModule, /* Array[Iterator#0]: Array[MModule] */
}
};
/* runtime type MapValuesIterator[MModule, AModule] */
const struct type type_abstract_collection__MapValuesIteratormodel_base__MModuleparser_nodes__AModule = {
418,
"MapValuesIterator[MModule, AModule]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel_base__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
418, /* MapValuesIterator[MModule, AModule] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel_base__MModuleparser_nodes__AModule = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel_base__MModuleparser_nodes__AModule, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MModule, AModule] */
&type_array__Arrayparser_nodes__AModule, /* Array[Iterator#0]: Array[AModule] */
}
};
/* runtime type MapKeysIterator[MClassDef, AClassdef] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef = {
419,
"MapKeysIterator[MClassDef, AClassdef]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
419, /* MapKeysIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassDefparser_nodes__AClassdef, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClassDef, AClassdef] */
&type_array__Arraymodel__MClassDef, /* Array[Iterator#0]: Array[MClassDef] */
}
};
/* runtime type MapValuesIterator[MClassDef, AClassdef] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef = {
420,
"MapValuesIterator[MClassDef, AClassdef]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
420, /* MapValuesIterator[MClassDef, AClassdef] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassDefparser_nodes__AClassdef, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClassDef, AClassdef] */
&type_array__Arrayparser_nodes__AClassdef, /* Array[Iterator#0]: Array[AClassdef] */
}
};
/* runtime type MapKeysIterator[MPropDef, APropdef] */
const struct type type_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef = {
421,
"MapKeysIterator[MPropDef, APropdef]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
421, /* MapKeysIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MPropDefparser_nodes__APropdef, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MPropDef, APropdef] */
&type_array__Arraymodel__MPropDef, /* Array[Iterator#0]: Array[MPropDef] */
}
};
/* runtime type MapValuesIterator[MPropDef, APropdef] */
const struct type type_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef = {
422,
"MapValuesIterator[MPropDef, APropdef]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
422, /* MapValuesIterator[MPropDef, APropdef] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MPropDefparser_nodes__APropdef, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MPropDef, APropdef] */
&type_array__Arrayparser_nodes__APropdef, /* Array[Iterator#0]: Array[APropdef] */
}
};
/* runtime type MapKeysIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
1598,
"MapKeysIterator[MClass, Set[MProperty]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
423, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
1598, /* MapKeysIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClass, Set[MProperty]] */
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
}
};
/* runtime type MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
423,
"MapKeysIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
423, /* MapKeysIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClass, Set[PropertyLayoutElement]] */
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
}
};
/* runtime type MapValuesIterator[MClass, Set[MProperty]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
1599,
"MapValuesIterator[MClass, Set[MProperty]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
424, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
1599, /* MapValuesIterator[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClass, Set[MProperty]] */
&type_array__Arrayabstract_collection__Setmodel__MProperty, /* Array[Iterator#0]: Array[Set[MProperty]] */
}
};
/* runtime type MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
424,
"MapValuesIterator[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
424, /* MapValuesIterator[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutElement, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClass, Set[PropertyLayoutElement]] */
&type_array__Arrayabstract_collection__Setlayout_builders__PropertyLayoutElement, /* Array[Iterator#0]: Array[Set[PropertyLayoutElement]] */
}
};
/* runtime type MapKeysIterator[String, Option] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringopts__Option = {
425,
"MapKeysIterator[String, Option]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
425, /* MapKeysIterator[String, Option] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringopts__Option = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringopts__Option, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, Option] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, Option] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringopts__Option = {
426,
"MapValuesIterator[String, Option]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
426, /* MapValuesIterator[String, Option] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringopts__Option = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringopts__Option, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, Option] */
&type_array__Arrayopts__Option, /* Array[Iterator#0]: Array[Option] */
}
};
/* runtime type NativeArray[Char] */
const struct type type_array__NativeArraykernel__Char = {
1600,
"NativeArray[Char]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraykernel__Char,
4,
{
0, /* nullable Object */
1, /* Object */
185, /* NativeArray[Object] */
1600, /* NativeArray[Char] */
},
};
const struct types resolution_table_array__NativeArraykernel__Char = {
0, /* dummy */
{
&type_kernel__Char, /* NativeArray#0: Char */
&type_array__NativeArraykernel__Char, /* NativeArray[NativeArray#0]: NativeArray[Char] */
}
};
/* runtime type ContainerIterator[MMethodDef] */
const struct type type_abstract_collection__ContainerIteratormodel__MMethodDef = {
427,
"ContainerIterator[MMethodDef]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__ContainerIteratormodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
427, /* ContainerIterator[MMethodDef] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratormodel__MMethodDef = {
0, /* dummy */
{
&type_abstract_collection__Containermodel__MMethodDef, /* Container[ContainerIterator#0]: Container[MMethodDef] */
&type_array__Arraymodel__MMethodDef, /* Array[Iterator#0]: Array[MMethodDef] */
}
};
/* runtime type MapKeysIterator[MClassDef, HashSet[MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
428,
"MapKeysIterator[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
428, /* MapKeysIterator[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClassDef, HashSet[MType]] */
&type_array__Arraymodel__MClassDef, /* Array[Iterator#0]: Array[MClassDef] */
}
};
/* runtime type MapValuesIterator[MClassDef, HashSet[MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
429,
"MapValuesIterator[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
429, /* MapValuesIterator[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClassDef, HashSet[MType]] */
&type_array__Arrayhash_collection__HashSetmodel__MType, /* Array[Iterator#0]: Array[HashSet[MType]] */
}
};
/* runtime type MapKeysIterator[MClass, Int] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClasskernel__Int = {
430,
"MapKeysIterator[MClass, Int]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
430, /* MapKeysIterator[MClass, Int] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClasskernel__Int = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClasskernel__Int, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClass, Int] */
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
}
};
/* runtime type MapValuesIterator[MClass, Int] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClasskernel__Int = {
431,
"MapValuesIterator[MClass, Int]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
431, /* MapValuesIterator[MClass, Int] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClasskernel__Int = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClasskernel__Int, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClass, Int] */
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
}
};
/* runtime type MapKeysIterator[MType, Array[nullable MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType = {
432,
"MapKeysIterator[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
432, /* MapKeysIterator[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraynullable_model__MType, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MType, Array[nullable MType]] */
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
}
};
/* runtime type MapValuesIterator[MType, Array[nullable MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType = {
433,
"MapValuesIterator[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
433, /* MapValuesIterator[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraynullable_model__MType, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MType, Array[nullable MType]] */
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[Iterator#0]: Array[Array[nullable MType]] */
}
};
/* runtime type MapKeysIterator[MClassType, Array[nullable MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType = {
1601,
"MapKeysIterator[MClassType, Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
432, /* MapKeysIterator[MType, Array[nullable MType]] */
1601, /* MapKeysIterator[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClassType, Array[nullable MType]] */
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
}
};
/* runtime type MapValuesIterator[MClassType, Array[nullable MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType = {
1602,
"MapValuesIterator[MClassType, Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
433, /* MapValuesIterator[MType, Array[nullable MType]] */
1602, /* MapValuesIterator[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClassType, Array[nullable MType]] */
&type_array__Arrayarray__Arraynullable_model__MType, /* Array[Iterator#0]: Array[Array[nullable MType]] */
}
};
/* runtime type MapKeysIterator[MClass, Array[nullable MPropDef]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
434,
"MapKeysIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
434, /* MapKeysIterator[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClass, Array[nullable MPropDef]] */
&type_array__Arraymodel__MClass, /* Array[Iterator#0]: Array[MClass] */
}
};
/* runtime type MapValuesIterator[MClass, Array[nullable MPropDef]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
435,
"MapValuesIterator[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
435, /* MapValuesIterator[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClass, Array[nullable MPropDef]] */
&type_array__Arrayarray__Arraynullable_model__MPropDef, /* Array[Iterator#0]: Array[Array[nullable MPropDef]] */
}
};
/* runtime type ContainerIterator[CodeFile] */
const struct type type_abstract_collection__ContainerIteratorabstract_compiler__CodeFile = {
436,
"ContainerIterator[CodeFile]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__ContainerIteratorabstract_compiler__CodeFile,
3,
{
0, /* nullable Object */
1, /* Object */
436, /* ContainerIterator[CodeFile] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_abstract_collection__Containerabstract_compiler__CodeFile, /* Container[ContainerIterator#0]: Container[CodeFile] */
&type_array__Arrayabstract_compiler__CodeFile, /* Array[Iterator#0]: Array[CodeFile] */
}
};
/* runtime type Array[CodeFile] */
const struct type type_array__Arrayabstract_compiler__CodeFile = {
2510,
"Array[CodeFile]", /* class_name_string */
7,
0,
&resolution_table_array__Arrayabstract_compiler__CodeFile,
10,
{
0, /* nullable Object */
1, /* Object */
606, /* Collection[CodeFile] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2379, /* AbstractArrayRead[CodeFile] */
1728, /* AbstractArrayRead[Object] */
2510, /* Array[CodeFile] */
-1, /* empty */
1911, /* Array[Object] */
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
2379,
"AbstractArrayRead[CodeFile]", /* class_name_string */
5,
0,
NULL,
7,
{
0, /* nullable Object */
1, /* Object */
606, /* Collection[CodeFile] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2379, /* AbstractArrayRead[CodeFile] */
1728, /* AbstractArrayRead[Object] */
},
};
/* runtime type MapKeysIterator[String, String] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringstring__String = {
437,
"MapKeysIterator[String, String]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
437, /* MapKeysIterator[String, String] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringstring__String = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringstring__String, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, String] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, String] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringstring__String = {
438,
"MapValuesIterator[String, String]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
438, /* MapValuesIterator[String, String] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringstring__String = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringstring__String, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, String] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapKeysIterator[MClassType, String] */
const struct type type_abstract_collection__MapKeysIteratormodel__MClassTypestring__String = {
439,
"MapKeysIterator[MClassType, String]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypestring__String,
3,
{
0, /* nullable Object */
1, /* Object */
439, /* MapKeysIterator[MClassType, String] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MClassTypestring__String = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassTypestring__String, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MClassType, String] */
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
}
};
/* runtime type MapValuesIterator[MClassType, String] */
const struct type type_abstract_collection__MapValuesIteratormodel__MClassTypestring__String = {
440,
"MapValuesIterator[MClassType, String]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypestring__String,
3,
{
0, /* nullable Object */
1, /* Object */
440, /* MapValuesIterator[MClassType, String] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MClassTypestring__String = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MClassTypestring__String, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MClassType, String] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type ContainerIterator[AbstractRuntimeFunction] */
const struct type type_abstract_collection__ContainerIteratorabstract_compiler__AbstractRuntimeFunction = {
441,
"ContainerIterator[AbstractRuntimeFunction]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__ContainerIteratorabstract_compiler__AbstractRuntimeFunction,
3,
{
0, /* nullable Object */
1, /* Object */
441, /* ContainerIterator[AbstractRuntimeFunction] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratorabstract_compiler__AbstractRuntimeFunction = {
0, /* dummy */
{
&type_abstract_collection__Containerabstract_compiler__AbstractRuntimeFunction, /* Container[ContainerIterator#0]: Container[AbstractRuntimeFunction] */
&type_array__Arrayabstract_compiler__AbstractRuntimeFunction, /* Array[Iterator#0]: Array[AbstractRuntimeFunction] */
}
};
/* runtime type Array[AbstractRuntimeFunction] */
const struct type type_array__Arrayabstract_compiler__AbstractRuntimeFunction = {
2511,
"Array[AbstractRuntimeFunction]", /* class_name_string */
7,
0,
&resolution_table_array__Arrayabstract_compiler__AbstractRuntimeFunction,
10,
{
0, /* nullable Object */
1, /* Object */
609, /* Collection[AbstractRuntimeFunction] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2380, /* AbstractArrayRead[AbstractRuntimeFunction] */
1728, /* AbstractArrayRead[Object] */
2511, /* Array[AbstractRuntimeFunction] */
-1, /* empty */
1911, /* Array[Object] */
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
2380,
"AbstractArrayRead[AbstractRuntimeFunction]", /* class_name_string */
5,
0,
NULL,
7,
{
0, /* nullable Object */
1, /* Object */
609, /* Collection[AbstractRuntimeFunction] */
163, /* SequenceRead[nullable Object] */
164, /* Collection[Object] */
2380, /* AbstractArrayRead[AbstractRuntimeFunction] */
1728, /* AbstractArrayRead[Object] */
},
};
/* runtime type MapKeysIterator[MType, Array[MClassType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MClassType = {
1863,
"MapKeysIterator[MType, Array[MClassType]]", /* class_name_string */
4,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
432, /* MapKeysIterator[MType, Array[nullable MType]] */
1603, /* MapKeysIterator[MType, Array[MType]] */
1863, /* MapKeysIterator[MType, Array[MClassType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MClassType, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MType, Array[MClassType]] */
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
}
};
/* runtime type MapKeysIterator[MType, Array[MType]] */
const struct type type_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MType = {
1603,
"MapKeysIterator[MType, Array[MType]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
432, /* MapKeysIterator[MType, Array[nullable MType]] */
1603, /* MapKeysIterator[MType, Array[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratormodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MType, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[MType, Array[MType]] */
&type_array__Arraymodel__MType, /* Array[Iterator#0]: Array[MType] */
}
};
/* runtime type MapValuesIterator[MType, Array[MClassType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MClassType = {
1864,
"MapValuesIterator[MType, Array[MClassType]]", /* class_name_string */
4,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MClassType,
5,
{
0, /* nullable Object */
1, /* Object */
433, /* MapValuesIterator[MType, Array[nullable MType]] */
1604, /* MapValuesIterator[MType, Array[MType]] */
1864, /* MapValuesIterator[MType, Array[MClassType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MClassType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MClassType, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MType, Array[MClassType]] */
&type_array__Arrayarray__Arraymodel__MClassType, /* Array[Iterator#0]: Array[Array[MClassType]] */
}
};
/* runtime type MapValuesIterator[MType, Array[MType]] */
const struct type type_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MType = {
1604,
"MapValuesIterator[MType, Array[MType]]", /* class_name_string */
3,
0,
&resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MType,
4,
{
0, /* nullable Object */
1, /* Object */
433, /* MapValuesIterator[MType, Array[nullable MType]] */
1604, /* MapValuesIterator[MType, Array[MType]] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratormodel__MTypearray__Arraymodel__MType = {
0, /* dummy */
{
&type_abstract_collection__MapIteratormodel__MTypearray__Arraymodel__MType, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[MType, Array[MType]] */
&type_array__Arrayarray__Arraymodel__MType, /* Array[Iterator#0]: Array[Array[MType]] */
}
};
/* runtime type ContainerIterator[MClassType] */
const struct type type_abstract_collection__ContainerIteratormodel__MClassType = {
442,
"ContainerIterator[MClassType]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__ContainerIteratormodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
442, /* ContainerIterator[MClassType] */
},
};
const struct types resolution_table_abstract_collection__ContainerIteratormodel__MClassType = {
0, /* dummy */
{
&type_abstract_collection__Containermodel__MClassType, /* Container[ContainerIterator#0]: Container[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[Iterator#0]: Array[MClassType] */
}
};
/* runtime type MapKeysIterator[String, Int] */
const struct type type_abstract_collection__MapKeysIteratorstring__Stringkernel__Int = {
443,
"MapKeysIterator[String, Int]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapKeysIteratorstring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
443, /* MapKeysIterator[String, Int] */
},
};
const struct types resolution_table_abstract_collection__MapKeysIteratorstring__Stringkernel__Int = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringkernel__Int, /* MapIterator[MapKeysIterator#0, MapKeysIterator#1]: MapIterator[String, Int] */
&type_array__Arraystring__String, /* Array[Iterator#0]: Array[String] */
}
};
/* runtime type MapValuesIterator[String, Int] */
const struct type type_abstract_collection__MapValuesIteratorstring__Stringkernel__Int = {
444,
"MapValuesIterator[String, Int]", /* class_name_string */
2,
0,
&resolution_table_abstract_collection__MapValuesIteratorstring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
444, /* MapValuesIterator[String, Int] */
},
};
const struct types resolution_table_abstract_collection__MapValuesIteratorstring__Stringkernel__Int = {
0, /* dummy */
{
&type_abstract_collection__MapIteratorstring__Stringkernel__Int, /* MapIterator[MapValuesIterator#0, MapValuesIterator#1]: MapIterator[String, Int] */
&type_array__Arraykernel__Int, /* Array[Iterator#0]: Array[Int] */
}
};
/* runtime type HashMapKeys[MClass, Array[MClass]] */
const struct type type_hash_collection__HashMapKeysmodel__MClassarray__Arraymodel__MClass = {
2381,
"HashMapKeys[MClass, Array[MClass]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraymodel__MClass,
7,
{
0, /* nullable Object */
1, /* Object */
171, /* Collection[nullable MClass] */
2104, /* HashMapKeys[MClass, Array[nullable MClass]] */
164, /* Collection[Object] */
1733, /* Collection[MClass] */
2381, /* HashMapKeys[MClass, Array[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapKeysmodel__MClassarray__Arraymodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassarray__Arraymodel__MClass, /* HashMap[HashMapKeys#0, HashMapKeys#1]: HashMap[MClass, Array[MClass]] */
&type_abstract_collection__MapKeysIteratormodel__MClassarray__Arraymodel__MClass, /* MapKeysIterator[HashMapKeys#0, HashMapKeys#1]: MapKeysIterator[MClass, Array[MClass]] */
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
