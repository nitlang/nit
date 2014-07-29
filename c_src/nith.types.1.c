#include "nith.types.0.h"
/* runtime type Sys */
const struct type type_kernel__Sys = {
-1, /*CAST DEAD*/
"Sys", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
74, /* Sys */
},
};
/* runtime type Object */
const struct type type_kernel__Object = {
1,
"Object", /* class_name_string */
1,
0,
NULL, /*NO RESOLUTIONS*/
2,
{
0, /* nullable Object */
1, /* Object */
},
};
/* runtime type nullable Object */
const struct type type_nullable_kernel__Object = {
0,
"nullable Object", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Stdin */
const struct type type_file__Stdin = {
-1, /*CAST DEAD*/
"Stdin", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
75, /* IFStream */
580, /* Stdin */
},
};
/* runtime type IFStream */
const struct type type_file__IFStream = {
-1, /*CAST DEAD*/
"IFStream", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
75, /* IFStream */
},
};
/* runtime type Bool */
const struct type type_kernel__Bool = {
76,
"Bool", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
76, /* Bool */
},
};
/* runtime type Int */
const struct type type_kernel__Int = {
77,
"Int", /* class_name_string */
2,
0,
&resolution_table_kernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
77, /* Int */
},
};
const struct types resolution_table_kernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* OTHER: Int */
}
};
/* runtime type Stdout */
const struct type type_file__Stdout = {
-1, /*CAST DEAD*/
"Stdout", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
78, /* OFStream */
581, /* Stdout */
},
};
/* runtime type OFStream */
const struct type type_file__OFStream = {
-1, /*CAST DEAD*/
"OFStream", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
78, /* OFStream */
},
};
/* runtime type Stderr */
const struct type type_file__Stderr = {
-1, /*CAST DEAD*/
"Stderr", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
78, /* OFStream */
582, /* Stderr */
},
};
/* runtime type Float */
const struct type type_kernel__Float = {
79,
"Float", /* class_name_string */
2,
0,
&resolution_table_kernel__Float,
3,
{
0, /* nullable Object */
1, /* Object */
79, /* Float */
},
};
const struct types resolution_table_kernel__Float = {
0, /* dummy */
{
&type_kernel__Float, /* OTHER: Float */
}
};
/* runtime type Char */
const struct type type_kernel__Char = {
80,
"Char", /* class_name_string */
2,
0,
&resolution_table_kernel__Char,
3,
{
0, /* nullable Object */
1, /* Object */
80, /* Char */
},
};
const struct types resolution_table_kernel__Char = {
0, /* dummy */
{
&type_kernel__Char, /* OTHER: Char */
}
};
/* runtime type NativeFile */
const struct type type_file__NativeFile = {
-1, /*CAST DEAD*/
"NativeFile", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
81, /* Pointer */
583, /* NativeFile */
},
};
/* runtime type Pointer */
const struct type type_kernel__Pointer = {
-1, /*CAST DEAD*/
"Pointer", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
81, /* Pointer */
},
};
/* runtime type NativeString */
const struct type type_string__NativeString = {
-1, /*CAST DEAD*/
"NativeString", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
81, /* Pointer */
584, /* NativeString */
},
};
/* runtime type ToolContext */
const struct type type_toolcontext__ToolContext = {
-1, /*CAST DEAD*/
"ToolContext", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
82, /* ToolContext */
},
};
/* runtime type Array[Message] */
const struct type type_array__Arraytoolcontext__Message = {
2015,
"Array[Message]", /* class_name_string */
10,
0,
&resolution_table_array__Arraytoolcontext__Message,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
585, /* Collection[Message] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1642, /* AbstractArrayRead[Message] */
1459, /* Array[Object] */
2015, /* Array[Message] */
},
};
const struct types resolution_table_array__Arraytoolcontext__Message = {
0, /* dummy */
{
&type_toolcontext__Message, /* Sequence#0: Message */
&type_toolcontext__Message, /* SimpleCollection#0: Message */
&type_array__NativeArraytoolcontext__Message, /* NativeArray[Array#0]: NativeArray[Message] */
&type_array__Arraytoolcontext__Message, /* Array[Array#0]: Array[Message] */
&type_array__NativeArraytoolcontext__Message, /* NativeArray[ArrayCapable#0]: NativeArray[Message] */
&type_toolcontext__Message, /* RemovableCollection#0: Message */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[Sequence#0]: Collection[Message] */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[SimpleCollection#0]: Collection[Message] */
&type_toolcontext__Message, /* Collection#0: Message */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[Collection#0]: Collection[Message] */
&type_toolcontext__Message, /* SequenceRead#0: Message */
&type_toolcontext__Message, /* AbstractArrayRead#0: Message */
&type_array__Arraytoolcontext__Message, /* Array[AbstractArrayRead#0]: Array[Message] */
&type_array__ArrayIteratortoolcontext__Message, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Message] */
}
};
/* runtime type Array[Object] */
const struct type type_array__Arraykernel__Object = {
1459,
"Array[Object]", /* class_name_string */
9,
0,
&resolution_table_array__Arraykernel__Object,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
},
};
const struct types resolution_table_array__Arraykernel__Object = {
0, /* dummy */
{
&type_kernel__Object, /* Sequence#0: Object */
&type_kernel__Object, /* SimpleCollection#0: Object */
&type_array__NativeArraykernel__Object, /* NativeArray[Array#0]: NativeArray[Object] */
&type_array__Arraykernel__Object, /* Array[Array#0]: Array[Object] */
&type_array__NativeArraykernel__Object, /* NativeArray[ArrayCapable#0]: NativeArray[Object] */
&type_kernel__Object, /* RemovableCollection#0: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[Sequence#0]: Collection[Object] */
&type_abstract_collection__Collectionkernel__Object, /* Collection[SimpleCollection#0]: Collection[Object] */
&type_kernel__Object, /* Collection#0: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[Collection#0]: Collection[Object] */
&type_kernel__Object, /* SequenceRead#0: Object */
&type_kernel__Object, /* AbstractArrayRead#0: Object */
&type_array__Arraykernel__Object, /* Array[AbstractArrayRead#0]: Array[Object] */
&type_array__ArrayIteratorkernel__Object, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Object] */
}
};
/* runtime type SequenceRead[nullable Object] */
const struct type type_abstract_collection__SequenceReadnullable_kernel__Object = {
83,
"SequenceRead[nullable Object]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Message] */
const struct type type_abstract_collection__Collectiontoolcontext__Message = {
585,
"Collection[Message]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Object] */
const struct type type_abstract_collection__Collectionkernel__Object = {
84,
"Collection[Object]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Message] */
const struct type type_array__AbstractArrayReadtoolcontext__Message = {
1642,
"AbstractArrayRead[Message]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Object] */
const struct type type_array__AbstractArrayReadkernel__Object = {
1294,
"AbstractArrayRead[Object]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ComparableSorter[Message] */
const struct type type_sorter__ComparableSortertoolcontext__Message = {
-1, /*CAST DEAD*/
"ComparableSorter[Message]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_sorter__ComparableSortertoolcontext__Message,
3,
{
0, /* nullable Object */
1, /* Object */
85, /* ComparableSorter[Message] */
},
};
const struct types resolution_table_sorter__ComparableSortertoolcontext__Message = {
0, /* dummy */
{
&type_toolcontext__Message, /* Comparator#0: Message */
&type_array__Arraytoolcontext__Message, /* Array[Comparator#0]: Array[Message] */
}
};
/* runtime type OptionContext */
const struct type type_opts__OptionContext = {
-1, /*CAST DEAD*/
"OptionContext", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
86, /* OptionContext */
},
};
/* runtime type OptionCount */
const struct type type_opts__OptionCount = {
-1, /*CAST DEAD*/
"OptionCount", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_opts__OptionCount,
4,
{
0, /* nullable Object */
1, /* Object */
87, /* Option */
586, /* OptionCount */
},
};
const struct types resolution_table_opts__OptionCount = {
0, /* dummy */
{
&type_kernel__Int, /* VALUE: Int */
}
};
/* runtime type Option */
const struct type type_opts__Option = {
87,
"Option", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[String] */
const struct type type_array__Arraystring__String = {
2143,
"Array[String]", /* class_name_string */
13,
0,
&resolution_table_array__Arraystring__String,
14,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1643, /* AbstractArrayRead[Streamable] */
2016, /* Array[Streamable] */
2017, /* AbstractArrayRead[String] */
2143, /* Array[String] */
},
};
const struct types resolution_table_array__Arraystring__String = {
0, /* dummy */
{
&type_string__String, /* Sequence#0: String */
&type_string__String, /* SimpleCollection#0: String */
&type_array__NativeArraystring__String, /* NativeArray[Array#0]: NativeArray[String] */
&type_array__Arraystring__String, /* Array[Array#0]: Array[String] */
&type_array__NativeArraystring__String, /* NativeArray[ArrayCapable#0]: NativeArray[String] */
&type_string__String, /* RemovableCollection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Sequence#0]: Collection[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[SimpleCollection#0]: Collection[String] */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
&type_string__String, /* SequenceRead#0: String */
&type_string__String, /* AbstractArrayRead#0: String */
&type_array__Arraystring__String, /* Array[AbstractArrayRead#0]: Array[String] */
&type_array__ArrayIteratorstring__String, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[String] */
}
};
/* runtime type Array[Streamable] */
const struct type type_array__Arraystream__Streamable = {
-1, /*CAST DEAD*/
"Array[Streamable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystream__Streamable,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1643, /* AbstractArrayRead[Streamable] */
2016, /* Array[Streamable] */
},
};
const struct types resolution_table_array__Arraystream__Streamable = {
0, /* dummy */
{
&type_stream__Streamable, /* Sequence#0: Streamable */
&type_stream__Streamable, /* SimpleCollection#0: Streamable */
&type_array__NativeArraystream__Streamable, /* NativeArray[Array#0]: NativeArray[Streamable] */
&type_array__Arraystream__Streamable, /* Array[Array#0]: Array[Streamable] */
&type_array__NativeArraystream__Streamable, /* NativeArray[ArrayCapable#0]: NativeArray[Streamable] */
&type_stream__Streamable, /* RemovableCollection#0: Streamable */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[Sequence#0]: Collection[Streamable] */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[SimpleCollection#0]: Collection[Streamable] */
&type_stream__Streamable, /* Collection#0: Streamable */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[Collection#0]: Collection[Streamable] */
&type_stream__Streamable, /* SequenceRead#0: Streamable */
&type_stream__Streamable, /* AbstractArrayRead#0: Streamable */
&type_array__Arraystream__Streamable, /* Array[AbstractArrayRead#0]: Array[Streamable] */
&type_array__ArrayIteratorstream__Streamable, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Streamable] */
}
};
/* runtime type Collection[String] */
const struct type type_abstract_collection__Collectionstring__String = {
1295,
"Collection[String]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Streamable] */
const struct type type_abstract_collection__Collectionstream__Streamable = {
587,
"Collection[Streamable]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[String] */
const struct type type_array__AbstractArrayReadstring__String = {
2017,
"AbstractArrayRead[String]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Streamable] */
const struct type type_array__AbstractArrayReadstream__Streamable = {
1643,
"AbstractArrayRead[Streamable]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type OptionBool */
const struct type type_opts__OptionBool = {
-1, /*CAST DEAD*/
"OptionBool", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_opts__OptionBool,
4,
{
0, /* nullable Object */
1, /* Object */
87, /* Option */
588, /* OptionBool */
},
};
const struct types resolution_table_opts__OptionBool = {
0, /* dummy */
{
&type_kernel__Bool, /* VALUE: Bool */
}
};
/* runtime type OptionString */
const struct type type_opts__OptionString = {
-1, /*CAST DEAD*/
"OptionString", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_opts__OptionString,
5,
{
0, /* nullable Object */
1, /* Object */
87, /* Option */
589, /* OptionParameter */
1296, /* OptionString */
},
};
const struct types resolution_table_opts__OptionString = {
0, /* dummy */
{
&type_nullable_string__String, /* VALUE: nullable String */
}
};
/* runtime type OptionParameter */
const struct type type_opts__OptionParameter = {
589,
"OptionParameter", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[Phase] */
const struct type type_poset__POSetphase__Phase = {
1297,
"POSet[Phase]", /* class_name_string */
6,
0,
&resolution_table_poset__POSetphase__Phase,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
590, /* Collection[Phase] */
1297, /* POSet[Phase] */
},
};
const struct types resolution_table_poset__POSetphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[Phase, POSetElement[Phase]] */
&type_array__Arrayphase__Phase, /* Array[Comparator#0]: Array[Phase] */
&type_phase__Phase, /* POSet#0: Phase */
&type_poset__POSetElementphase__Phase, /* POSetElement[POSet#0]: POSetElement[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[POSet#0]: Collection[Phase] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_phase__Phase, /* Collection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Collection#0]: Collection[Phase] */
}
};
/* runtime type Collection[Phase] */
const struct type type_abstract_collection__Collectionphase__Phase = {
590,
"Collection[Phase]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type OptionArray */
const struct type type_opts__OptionArray = {
-1, /*CAST DEAD*/
"OptionArray", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_opts__OptionArray,
5,
{
0, /* nullable Object */
1, /* Object */
87, /* Option */
589, /* OptionParameter */
1298, /* OptionArray */
},
};
const struct types resolution_table_opts__OptionArray = {
0, /* dummy */
{
&type_array__Arraystring__String, /* VALUE: Array[String] */
}
};
/* runtime type LiteralPhase */
const struct type type_literal__LiteralPhase = {
-1, /*CAST DEAD*/
"LiteralPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1299, /* LiteralPhase */
},
};
/* runtime type Phase */
const struct type type_phase__Phase = {
591,
"Phase", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable Phase */
const struct type type_nullable_phase__Phase = {
2,
"nullable Phase", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ScopePhase */
const struct type type_scope__ScopePhase = {
-1, /*CAST DEAD*/
"ScopePhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1300, /* ScopePhase */
},
};
/* runtime type FlowPhase */
const struct type type_flow__FlowPhase = {
-1, /*CAST DEAD*/
"FlowPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1301, /* FlowPhase */
},
};
/* runtime type Array[Phase] */
const struct type type_array__Arrayphase__Phase = {
2018,
"Array[Phase]", /* class_name_string */
10,
0,
&resolution_table_array__Arrayphase__Phase,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
590, /* Collection[Phase] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1644, /* AbstractArrayRead[Phase] */
1459, /* Array[Object] */
2018, /* Array[Phase] */
},
};
const struct types resolution_table_array__Arrayphase__Phase = {
0, /* dummy */
{
&type_phase__Phase, /* Sequence#0: Phase */
&type_phase__Phase, /* SimpleCollection#0: Phase */
&type_array__NativeArrayphase__Phase, /* NativeArray[Array#0]: NativeArray[Phase] */
&type_array__Arrayphase__Phase, /* Array[Array#0]: Array[Phase] */
&type_array__NativeArrayphase__Phase, /* NativeArray[ArrayCapable#0]: NativeArray[Phase] */
&type_phase__Phase, /* RemovableCollection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Sequence#0]: Collection[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[SimpleCollection#0]: Collection[Phase] */
&type_phase__Phase, /* Collection#0: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[Collection#0]: Collection[Phase] */
&type_phase__Phase, /* SequenceRead#0: Phase */
&type_phase__Phase, /* AbstractArrayRead#0: Phase */
&type_array__Arrayphase__Phase, /* Array[AbstractArrayRead#0]: Array[Phase] */
&type_array__ArrayIteratorphase__Phase, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Phase] */
}
};
/* runtime type AbstractArrayRead[Phase] */
const struct type type_array__AbstractArrayReadphase__Phase = {
1644,
"AbstractArrayRead[Phase]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type LocalVarInitPhase */
const struct type type_local_var_init__LocalVarInitPhase = {
-1, /*CAST DEAD*/
"LocalVarInitPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1302, /* LocalVarInitPhase */
},
};
/* runtime type ModelizeClassPhase */
const struct type type_modelize_class__ModelizeClassPhase = {
-1, /*CAST DEAD*/
"ModelizeClassPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1303, /* ModelizeClassPhase */
},
};
/* runtime type ModelizePropertyPhase */
const struct type type_modelize_property__ModelizePropertyPhase = {
-1, /*CAST DEAD*/
"ModelizePropertyPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1304, /* ModelizePropertyPhase */
},
};
/* runtime type PlatformPhase */
const struct type type_platform__PlatformPhase = {
-1, /*CAST DEAD*/
"PlatformPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1305, /* PlatformPhase */
},
};
/* runtime type TypingPhase */
const struct type type_typing__TypingPhase = {
-1, /*CAST DEAD*/
"TypingPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1306, /* TypingPhase */
},
};
/* runtime type AutoSuperInitPhase */
const struct type type_auto_super_init__AutoSuperInitPhase = {
-1, /*CAST DEAD*/
"AutoSuperInitPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1307, /* AutoSuperInitPhase */
},
};
/* runtime type TransformPhase */
const struct type type_transform__TransformPhase = {
-1, /*CAST DEAD*/
"TransformPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1308, /* TransformPhase */
},
};
/* runtime type SeparateCompilerPhase */
const struct type type_separate_compiler__SeparateCompilerPhase = {
-1, /*CAST DEAD*/
"SeparateCompilerPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1309, /* SeparateCompilerPhase */
},
};
/* runtime type ErasureCompilerPhase */
const struct type type_separate_erasure_compiler__ErasureCompilerPhase = {
-1, /*CAST DEAD*/
"ErasureCompilerPhase", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable Phase */
591, /* Phase */
1310, /* ErasureCompilerPhase */
},
};
/* runtime type Model */
const struct type type_model_base__Model = {
-1, /*CAST DEAD*/
"Model", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
88, /* Model */
},
};
/* runtime type Array[MProject] */
const struct type type_array__Arraymproject__MProject = {
2019,
"Array[MProject]", /* class_name_string */
10,
0,
&resolution_table_array__Arraymproject__MProject,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
592, /* Collection[MProject] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1645, /* AbstractArrayRead[MProject] */
1459, /* Array[Object] */
2019, /* Array[MProject] */
},
};
const struct types resolution_table_array__Arraymproject__MProject = {
0, /* dummy */
{
&type_mproject__MProject, /* Sequence#0: MProject */
&type_mproject__MProject, /* SimpleCollection#0: MProject */
&type_array__NativeArraymproject__MProject, /* NativeArray[Array#0]: NativeArray[MProject] */
&type_array__Arraymproject__MProject, /* Array[Array#0]: Array[MProject] */
&type_array__NativeArraymproject__MProject, /* NativeArray[ArrayCapable#0]: NativeArray[MProject] */
&type_mproject__MProject, /* RemovableCollection#0: MProject */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[Sequence#0]: Collection[MProject] */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[SimpleCollection#0]: Collection[MProject] */
&type_mproject__MProject, /* Collection#0: MProject */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[Collection#0]: Collection[MProject] */
&type_mproject__MProject, /* SequenceRead#0: MProject */
&type_mproject__MProject, /* AbstractArrayRead#0: MProject */
&type_array__Arraymproject__MProject, /* Array[AbstractArrayRead#0]: Array[MProject] */
&type_array__ArrayIteratormproject__MProject, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MProject] */
}
};
/* runtime type Collection[MProject] */
const struct type type_abstract_collection__Collectionmproject__MProject = {
592,
"Collection[MProject]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MProject] */
const struct type type_array__AbstractArrayReadmproject__MProject = {
1645,
"AbstractArrayRead[MProject]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MultiHashMap[String, MProject] */
const struct type type_more_collections__MultiHashMapstring__Stringmproject__MProject = {
-1, /*CAST DEAD*/
"MultiHashMap[String, MProject]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__MultiHashMapstring__Stringmproject__MProject,
4,
{
0, /* nullable Object */
1, /* Object */
89, /* HashMap[String, Array[MProject]] */
593, /* MultiHashMap[String, MProject] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmproject__MProject = {
0, /* dummy */
{
&type_string__String, /* MultiHashMap#0: String */
&type_mproject__MProject, /* MultiHashMap#1: MProject */
&type_array__Arraymproject__MProject, /* Array[MultiHashMap#1]: Array[MProject] */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Array[MProject]]] */
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymproject__MProject, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Array[MProject]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymproject__MProject, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Array[MProject]] */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymproject__MProject, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Array[MProject]] */
&type_string__String, /* Map#0: String */
&type_array__Arraymproject__MProject, /* Map#1: Array[MProject] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Array[MProject]] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* nullable HashCollection#1: nullable HashMapNode[String, Array[MProject]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* HashCollection#1: HashMapNode[String, Array[MProject]] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type HashMap[String, Array[MProject]] */
const struct type type_hash_collection__HashMapstring__Stringarray__Arraymproject__MProject = {
89,
"HashMap[String, Array[MProject]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MModule] */
const struct type type_array__Arraymmodule__MModule = {
2020,
"Array[MModule]", /* class_name_string */
10,
0,
&resolution_table_array__Arraymmodule__MModule,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
594, /* Collection[MModule] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1646, /* AbstractArrayRead[MModule] */
1459, /* Array[Object] */
2020, /* Array[MModule] */
},
};
const struct types resolution_table_array__Arraymmodule__MModule = {
0, /* dummy */
{
&type_mmodule__MModule, /* Sequence#0: MModule */
&type_mmodule__MModule, /* SimpleCollection#0: MModule */
&type_array__NativeArraymmodule__MModule, /* NativeArray[Array#0]: NativeArray[MModule] */
&type_array__Arraymmodule__MModule, /* Array[Array#0]: Array[MModule] */
&type_array__NativeArraymmodule__MModule, /* NativeArray[ArrayCapable#0]: NativeArray[MModule] */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Sequence#0]: Collection[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[SimpleCollection#0]: Collection[MModule] */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
&type_mmodule__MModule, /* SequenceRead#0: MModule */
&type_mmodule__MModule, /* AbstractArrayRead#0: MModule */
&type_array__Arraymmodule__MModule, /* Array[AbstractArrayRead#0]: Array[MModule] */
&type_array__ArrayIteratormmodule__MModule, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MModule] */
}
};
/* runtime type Collection[MModule] */
const struct type type_abstract_collection__Collectionmmodule__MModule = {
594,
"Collection[MModule]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MModule] */
const struct type type_array__AbstractArrayReadmmodule__MModule = {
1646,
"AbstractArrayRead[MModule]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MModule] */
const struct type type_poset__POSetmmodule__MModule = {
1311,
"POSet[MModule]", /* class_name_string */
6,
0,
&resolution_table_poset__POSetmmodule__MModule,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
1311, /* POSet[MModule] */
},
};
const struct types resolution_table_poset__POSetmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[MModule, POSetElement[MModule]] */
&type_array__Arraymmodule__MModule, /* Array[Comparator#0]: Array[MModule] */
&type_mmodule__MModule, /* POSet#0: MModule */
&type_poset__POSetElementmmodule__MModule, /* POSetElement[POSet#0]: POSetElement[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[POSet#0]: Collection[MModule] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type MultiHashMap[String, MModule] */
const struct type type_more_collections__MultiHashMapstring__Stringmmodule__MModule = {
-1, /*CAST DEAD*/
"MultiHashMap[String, MModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__MultiHashMapstring__Stringmmodule__MModule,
4,
{
0, /* nullable Object */
1, /* Object */
90, /* HashMap[String, Array[MModule]] */
595, /* MultiHashMap[String, MModule] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmmodule__MModule = {
0, /* dummy */
{
&type_string__String, /* MultiHashMap#0: String */
&type_mmodule__MModule, /* MultiHashMap#1: MModule */
&type_array__Arraymmodule__MModule, /* Array[MultiHashMap#1]: Array[MModule] */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Array[MModule]]] */
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymmodule__MModule, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Array[MModule]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymmodule__MModule, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Array[MModule]] */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymmodule__MModule, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Array[MModule]] */
&type_string__String, /* Map#0: String */
&type_array__Arraymmodule__MModule, /* Map#1: Array[MModule] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Array[MModule]] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* nullable HashCollection#1: nullable HashMapNode[String, Array[MModule]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* HashCollection#1: HashMapNode[String, Array[MModule]] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type HashMap[String, Array[MModule]] */
const struct type type_hash_collection__HashMapstring__Stringarray__Arraymmodule__MModule = {
90,
"HashMap[String, Array[MModule]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MClass] */
const struct type type_array__Arraymodel__MClass = {
2144,
"Array[MClass]", /* class_name_string */
11,
0,
&resolution_table_array__Arraymodel__MClass,
12,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
1313, /* AbstractArrayRead[nullable MClass] */
1294, /* AbstractArrayRead[Object] */
1460, /* Array[nullable MClass] */
1459, /* Array[Object] */
2021, /* AbstractArrayRead[MClass] */
2144, /* Array[MClass] */
},
};
const struct types resolution_table_array__Arraymodel__MClass = {
0, /* dummy */
{
&type_model__MClass, /* Sequence#0: MClass */
&type_model__MClass, /* SimpleCollection#0: MClass */
&type_array__NativeArraymodel__MClass, /* NativeArray[Array#0]: NativeArray[MClass] */
&type_array__Arraymodel__MClass, /* Array[Array#0]: Array[MClass] */
&type_array__NativeArraymodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[MClass] */
&type_model__MClass, /* RemovableCollection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Sequence#0]: Collection[MClass] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[SimpleCollection#0]: Collection[MClass] */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
&type_model__MClass, /* SequenceRead#0: MClass */
&type_model__MClass, /* AbstractArrayRead#0: MClass */
&type_array__Arraymodel__MClass, /* Array[AbstractArrayRead#0]: Array[MClass] */
&type_array__ArrayIteratormodel__MClass, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MClass] */
}
};
/* runtime type Array[nullable MClass] */
const struct type type_array__Arraynullable_model__MClass = {
1460,
"Array[nullable MClass]", /* class_name_string */
8,
0,
&resolution_table_array__Arraynullable_model__MClass,
9,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
83, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
1313, /* AbstractArrayRead[nullable MClass] */
-1, /* empty */
1460, /* Array[nullable MClass] */
},
};
const struct types resolution_table_array__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_nullable_model__MClass, /* Sequence#0: nullable MClass */
&type_nullable_model__MClass, /* SimpleCollection#0: nullable MClass */
&type_array__NativeArraynullable_model__MClass, /* NativeArray[Array#0]: NativeArray[nullable MClass] */
&type_array__Arraynullable_model__MClass, /* Array[Array#0]: Array[nullable MClass] */
&type_array__NativeArraynullable_model__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable MClass] */
&type_nullable_model__MClass, /* RemovableCollection#0: nullable MClass */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[Sequence#0]: Collection[nullable MClass] */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[SimpleCollection#0]: Collection[nullable MClass] */
&type_nullable_model__MClass, /* Collection#0: nullable MClass */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[Collection#0]: Collection[nullable MClass] */
&type_nullable_model__MClass, /* SequenceRead#0: nullable MClass */
&type_nullable_model__MClass, /* AbstractArrayRead#0: nullable MClass */
&type_array__Arraynullable_model__MClass, /* Array[AbstractArrayRead#0]: Array[nullable MClass] */
&type_array__ArrayIteratornullable_model__MClass, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[nullable MClass] */
}
};
/* runtime type Collection[MClass] */
const struct type type_abstract_collection__Collectionmodel__MClass = {
1312,
"Collection[MClass]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MClass] */
const struct type type_abstract_collection__Collectionnullable_model__MClass = {
91,
"Collection[nullable MClass]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MClass] */
const struct type type_array__AbstractArrayReadmodel__MClass = {
2021,
"AbstractArrayRead[MClass]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MClass] */
const struct type type_array__AbstractArrayReadnullable_model__MClass = {
1313,
"AbstractArrayRead[nullable MClass]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MProperty] */
const struct type type_array__Arraymodel__MProperty = {
2176,
"Array[MProperty]", /* class_name_string */
16,
0,
&resolution_table_array__Arraymodel__MProperty,
17,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
1314, /* AbstractArrayRead[nullable MProperty] */
596, /* Collection[PropertyLayoutElement] */
1294, /* AbstractArrayRead[Object] */
1461, /* Array[nullable MProperty] */
1459, /* Array[Object] */
1462, /* Collection[MProperty] */
-1, /* empty */
1647, /* AbstractArrayRead[PropertyLayoutElement] */
2119, /* AbstractArrayRead[MProperty] */
2022, /* Array[PropertyLayoutElement] */
-1, /* empty */
2176, /* Array[MProperty] */
},
};
const struct types resolution_table_array__Arraymodel__MProperty = {
0, /* dummy */
{
&type_model__MProperty, /* Sequence#0: MProperty */
&type_model__MProperty, /* SimpleCollection#0: MProperty */
&type_array__NativeArraymodel__MProperty, /* NativeArray[Array#0]: NativeArray[MProperty] */
&type_array__Arraymodel__MProperty, /* Array[Array#0]: Array[MProperty] */
&type_array__NativeArraymodel__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[MProperty] */
&type_model__MProperty, /* RemovableCollection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Sequence#0]: Collection[MProperty] */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[SimpleCollection#0]: Collection[MProperty] */
&type_model__MProperty, /* Collection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Collection#0]: Collection[MProperty] */
&type_model__MProperty, /* SequenceRead#0: MProperty */
&type_model__MProperty, /* AbstractArrayRead#0: MProperty */
&type_array__Arraymodel__MProperty, /* Array[AbstractArrayRead#0]: Array[MProperty] */
&type_array__ArrayIteratormodel__MProperty, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MProperty] */
}
};
/* runtime type Array[PropertyLayoutElement] */
const struct type type_array__Arrayseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"Array[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayseparate_compiler__PropertyLayoutElement,
15,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
-1, /* empty */
-1, /* empty */
1647, /* AbstractArrayRead[PropertyLayoutElement] */
-1, /* empty */
2022, /* Array[PropertyLayoutElement] */
},
};
const struct types resolution_table_array__Arrayseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_separate_compiler__PropertyLayoutElement, /* Sequence#0: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* SimpleCollection#0: PropertyLayoutElement */
&type_array__NativeArrayseparate_compiler__PropertyLayoutElement, /* NativeArray[Array#0]: NativeArray[PropertyLayoutElement] */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[Array#0]: Array[PropertyLayoutElement] */
&type_array__NativeArrayseparate_compiler__PropertyLayoutElement, /* NativeArray[ArrayCapable#0]: NativeArray[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* RemovableCollection#0: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[Sequence#0]: Collection[PropertyLayoutElement] */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[SimpleCollection#0]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* Collection#0: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[Collection#0]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* SequenceRead#0: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* AbstractArrayRead#0: PropertyLayoutElement */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[AbstractArrayRead#0]: Array[PropertyLayoutElement] */
&type_array__ArrayIteratorseparate_compiler__PropertyLayoutElement, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[PropertyLayoutElement] */
}
};
/* runtime type Array[nullable MProperty] */
const struct type type_array__Arraynullable_model__MProperty = {
-1, /*CAST DEAD*/
"Array[nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraynullable_model__MProperty,
9,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
83, /* SequenceRead[nullable Object] */
-1, /* empty */
1314, /* AbstractArrayRead[nullable MProperty] */
-1, /* empty */
-1, /* empty */
1461, /* Array[nullable MProperty] */
},
};
const struct types resolution_table_array__Arraynullable_model__MProperty = {
0, /* dummy */
{
&type_nullable_model__MProperty, /* Sequence#0: nullable MProperty */
&type_nullable_model__MProperty, /* SimpleCollection#0: nullable MProperty */
&type_array__NativeArraynullable_model__MProperty, /* NativeArray[Array#0]: NativeArray[nullable MProperty] */
&type_array__Arraynullable_model__MProperty, /* Array[Array#0]: Array[nullable MProperty] */
&type_array__NativeArraynullable_model__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable MProperty] */
&type_nullable_model__MProperty, /* RemovableCollection#0: nullable MProperty */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[Sequence#0]: Collection[nullable MProperty] */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[SimpleCollection#0]: Collection[nullable MProperty] */
&type_nullable_model__MProperty, /* Collection#0: nullable MProperty */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[Collection#0]: Collection[nullable MProperty] */
&type_nullable_model__MProperty, /* SequenceRead#0: nullable MProperty */
&type_nullable_model__MProperty, /* AbstractArrayRead#0: nullable MProperty */
&type_array__Arraynullable_model__MProperty, /* Array[AbstractArrayRead#0]: Array[nullable MProperty] */
&type_array__ArrayIteratornullable_model__MProperty, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[nullable MProperty] */
}
};
/* runtime type Collection[MProperty] */
const struct type type_abstract_collection__Collectionmodel__MProperty = {
1462,
"Collection[MProperty]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[PropertyLayoutElement] */
const struct type type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement = {
596,
"Collection[PropertyLayoutElement]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MProperty] */
const struct type type_abstract_collection__Collectionnullable_model__MProperty = {
92,
"Collection[nullable MProperty]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MProperty] */
const struct type type_array__AbstractArrayReadmodel__MProperty = {
2119,
"AbstractArrayRead[MProperty]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[PropertyLayoutElement] */
const struct type type_array__AbstractArrayReadseparate_compiler__PropertyLayoutElement = {
1647,
"AbstractArrayRead[PropertyLayoutElement]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MProperty] */
const struct type type_array__AbstractArrayReadnullable_model__MProperty = {
1314,
"AbstractArrayRead[nullable MProperty]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MClassDef] */
const struct type type_poset__POSetmodel__MClassDef = {
1315,
"POSet[MClassDef]", /* class_name_string */
6,
0,
&resolution_table_poset__POSetmodel__MClassDef,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
597, /* Collection[MClassDef] */
1315, /* POSet[MClassDef] */
},
};
const struct types resolution_table_poset__POSetmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_array__Arraymodel__MClassDef, /* Array[Comparator#0]: Array[MClassDef] */
&type_model__MClassDef, /* POSet#0: MClassDef */
&type_poset__POSetElementmodel__MClassDef, /* POSetElement[POSet#0]: POSetElement[MClassDef] */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[POSet#0]: Collection[MClassDef] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* Collection#0: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[Collection#0]: Collection[MClassDef] */
}
};
/* runtime type Collection[MClassDef] */
const struct type type_abstract_collection__Collectionmodel__MClassDef = {
597,
"Collection[MClassDef]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MClassType] */
const struct type type_poset__POSetmodel__MClassType = {
1863,
"POSet[MClassType]", /* class_name_string */
11,
0,
&resolution_table_poset__POSetmodel__MClassType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1463, /* POSet[MType] */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
1863, /* POSet[MClassType] */
},
};
const struct types resolution_table_poset__POSetmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[MClassType, POSetElement[MClassType]] */
&type_array__Arraymodel__MClassType, /* Array[Comparator#0]: Array[MClassType] */
&type_model__MClassType, /* POSet#0: MClassType */
&type_poset__POSetElementmodel__MClassType, /* POSetElement[POSet#0]: POSetElement[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[POSet#0]: Collection[MClassType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
}
};
/* runtime type POSet[MType] */
const struct type type_poset__POSetmodel__MType = {
1463,
"POSet[MType]", /* class_name_string */
7,
0,
&resolution_table_poset__POSetmodel__MType,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1463, /* POSet[MType] */
},
};
const struct types resolution_table_poset__POSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[MType, POSetElement[MType]] */
&type_array__Arraymodel__MType, /* Array[Comparator#0]: Array[MType] */
&type_model__MType, /* POSet#0: MType */
&type_poset__POSetElementmodel__MType, /* POSetElement[POSet#0]: POSetElement[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[POSet#0]: Collection[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
}
};
/* runtime type Collection[MClassType] */
const struct type type_abstract_collection__Collectionmodel__MClassType = {
1464,
"Collection[MClassType]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MType] */
const struct type type_abstract_collection__Collectionmodel__MType = {
1316,
"Collection[MType]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MType] */
const struct type type_abstract_collection__Collectionnullable_model__MType = {
93,
"Collection[nullable MType]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MultiHashMap[String, MClass] */
const struct type type_more_collections__MultiHashMapstring__Stringmodel__MClass = {
-1, /*CAST DEAD*/
"MultiHashMap[String, MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__MultiHashMapstring__Stringmodel__MClass,
4,
{
0, /* nullable Object */
1, /* Object */
94, /* HashMap[String, Array[MClass]] */
598, /* MultiHashMap[String, MClass] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmodel__MClass = {
0, /* dummy */
{
&type_string__String, /* MultiHashMap#0: String */
&type_model__MClass, /* MultiHashMap#1: MClass */
&type_array__Arraymodel__MClass, /* Array[MultiHashMap#1]: Array[MClass] */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Array[MClass]]] */
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MClass, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Array[MClass]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MClass, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Array[MClass]] */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MClass, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Array[MClass]] */
&type_string__String, /* Map#0: String */
&type_array__Arraymodel__MClass, /* Map#1: Array[MClass] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Array[MClass]] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* nullable HashCollection#1: nullable HashMapNode[String, Array[MClass]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* HashCollection#1: HashMapNode[String, Array[MClass]] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type HashMap[String, Array[MClass]] */
const struct type type_hash_collection__HashMapstring__Stringarray__Arraymodel__MClass = {
94,
"HashMap[String, Array[MClass]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MultiHashMap[String, MProperty] */
const struct type type_more_collections__MultiHashMapstring__Stringmodel__MProperty = {
-1, /*CAST DEAD*/
"MultiHashMap[String, MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__MultiHashMapstring__Stringmodel__MProperty,
4,
{
0, /* nullable Object */
1, /* Object */
95, /* HashMap[String, Array[MProperty]] */
599, /* MultiHashMap[String, MProperty] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmodel__MProperty = {
0, /* dummy */
{
&type_string__String, /* MultiHashMap#0: String */
&type_model__MProperty, /* MultiHashMap#1: MProperty */
&type_array__Arraymodel__MProperty, /* Array[MultiHashMap#1]: Array[MProperty] */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Array[MProperty]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Array[MProperty]] */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Array[MProperty]] */
&type_string__String, /* Map#0: String */
&type_array__Arraymodel__MProperty, /* Map#1: Array[MProperty] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Array[MProperty]] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* nullable HashCollection#1: nullable HashMapNode[String, Array[MProperty]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* HashCollection#1: HashMapNode[String, Array[MProperty]] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type HashMap[String, Array[MProperty]] */
const struct type type_hash_collection__HashMapstring__Stringarray__Arraymodel__MProperty = {
95,
"HashMap[String, Array[MProperty]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MNullType */
const struct type type_model__MNullType = {
1317,
"MNullType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
0, /* nullable Object */
1, /* Object */
3, /* nullable MType */
-1, /* empty */
600, /* MType */
1317, /* MNullType */
},
};
/* runtime type MType */
const struct type type_model__MType = {
600,
"MType", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MType */
const struct type type_nullable_model__MType = {
3,
"nullable MType", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ModelBuilder */
const struct type type_modelbuilder__ModelBuilder = {
-1, /*CAST DEAD*/
"ModelBuilder", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
96, /* ModelBuilder */
},
};
/* runtime type HashMap3[MModule, MType, String, nullable MProperty] */
const struct type type_more_collections__HashMap3mmodule__MModulemodel__MTypestring__Stringnullable_model__MProperty = {
-1, /*CAST DEAD*/
"HashMap3[MModule, MType, String, nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap3mmodule__MModulemodel__MTypestring__Stringnullable_model__MProperty,
3,
{
0, /* nullable Object */
1, /* Object */
97, /* HashMap3[MModule, MType, String, nullable MProperty] */
},
};
const struct types resolution_table_more_collections__HashMap3mmodule__MModulemodel__MTypestring__Stringnullable_model__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[HashMap3#0, HashMap2[HashMap3#1, HashMap3#2, HashMap3#3]]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* HashMap3#0: MModule */
&type_model__MType, /* HashMap3#1: MType */
&type_string__String, /* HashMap3#2: String */
&type_nullable_model__MProperty, /* HashMap3#3: nullable MProperty */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap2[HashMap3#1, HashMap3#2, HashMap3#3]: HashMap2[MType, String, nullable MProperty] */
}
};
/* runtime type HashMap[String, nullable ModulePath] */
const struct type type_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath = {
98,
"HashMap[String, nullable ModulePath]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath,
3,
{
0, /* nullable Object */
1, /* Object */
98, /* HashMap[String, nullable ModulePath] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
&type_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, nullable ModulePath] */
&type_hash_collection__HashMapValuesstring__Stringnullable_modelbuilder__ModulePath, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, nullable ModulePath] */
&type_hash_collection__HashMapIteratorstring__Stringnullable_modelbuilder__ModulePath, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, nullable ModulePath] */
&type_string__String, /* Map#0: String */
&type_nullable_modelbuilder__ModulePath, /* Map#1: nullable ModulePath */
&type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, nullable ModulePath] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* nullable HashCollection#1: nullable HashMapNode[String, nullable ModulePath] */
&type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* HashCollection#1: HashMapNode[String, nullable ModulePath] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type HashMap[String, nullable MGroup] */
const struct type type_hash_collection__HashMapstring__Stringnullable_mproject__MGroup = {
99,
"HashMap[String, nullable MGroup]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringnullable_mproject__MGroup,
3,
{
0, /* nullable Object */
1, /* Object */
99, /* HashMap[String, nullable MGroup] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringnullable_mproject__MGroup = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, nullable MGroup]] */
&type_hash_collection__HashMapKeysstring__Stringnullable_mproject__MGroup, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, nullable MGroup] */
&type_hash_collection__HashMapValuesstring__Stringnullable_mproject__MGroup, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, nullable MGroup] */
&type_hash_collection__HashMapIteratorstring__Stringnullable_mproject__MGroup, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, nullable MGroup] */
&type_string__String, /* Map#0: String */
&type_nullable_mproject__MGroup, /* Map#1: nullable MGroup */
&type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, nullable MGroup] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* nullable HashCollection#1: nullable HashMapNode[String, nullable MGroup] */
&type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* HashCollection#1: HashMapNode[String, nullable MGroup] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type Array[AModule] */
const struct type type_array__Arrayparser_nodes__AModule = {
-1, /*CAST DEAD*/
"Array[AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AModule,
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
1465, /* Collection[AModule] */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
2120, /* AbstractArrayRead[AModule] */
2145, /* Array[Prod] */
2177, /* Array[AModule] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AModule = {
0, /* dummy */
{
&type_parser_nodes__AModule, /* Sequence#0: AModule */
&type_parser_nodes__AModule, /* SimpleCollection#0: AModule */
&type_array__NativeArrayparser_nodes__AModule, /* NativeArray[Array#0]: NativeArray[AModule] */
&type_array__Arrayparser_nodes__AModule, /* Array[Array#0]: Array[AModule] */
&type_array__NativeArrayparser_nodes__AModule, /* NativeArray[ArrayCapable#0]: NativeArray[AModule] */
&type_parser_nodes__AModule, /* RemovableCollection#0: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[Sequence#0]: Collection[AModule] */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[SimpleCollection#0]: Collection[AModule] */
&type_parser_nodes__AModule, /* Collection#0: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[Collection#0]: Collection[AModule] */
&type_parser_nodes__AModule, /* SequenceRead#0: AModule */
&type_parser_nodes__AModule, /* AbstractArrayRead#0: AModule */
&type_array__Arrayparser_nodes__AModule, /* Array[AbstractArrayRead#0]: Array[AModule] */
&type_array__ArrayIteratorparser_nodes__AModule, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[AModule] */
}
};
/* runtime type Array[Prod] */
const struct type type_array__Arrayparser_nodes__Prod = {
-1, /*CAST DEAD*/
"Array[Prod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__Prod,
16,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
2024, /* AbstractArrayRead[Prod] */
-1, /* empty */
2145, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__Prod = {
0, /* dummy */
{
&type_parser_nodes__Prod, /* Sequence#0: Prod */
&type_parser_nodes__Prod, /* SimpleCollection#0: Prod */
&type_array__NativeArrayparser_nodes__Prod, /* NativeArray[Array#0]: NativeArray[Prod] */
&type_array__Arrayparser_nodes__Prod, /* Array[Array#0]: Array[Prod] */
&type_array__NativeArrayparser_nodes__Prod, /* NativeArray[ArrayCapable#0]: NativeArray[Prod] */
&type_parser_nodes__Prod, /* RemovableCollection#0: Prod */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[Sequence#0]: Collection[Prod] */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[SimpleCollection#0]: Collection[Prod] */
&type_parser_nodes__Prod, /* Collection#0: Prod */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[Collection#0]: Collection[Prod] */
&type_parser_nodes__Prod, /* SequenceRead#0: Prod */
&type_parser_nodes__Prod, /* AbstractArrayRead#0: Prod */
&type_array__Arrayparser_nodes__Prod, /* Array[AbstractArrayRead#0]: Array[Prod] */
&type_array__ArrayIteratorparser_nodes__Prod, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Prod] */
}
};
/* runtime type Array[ANode] */
const struct type type_array__Arrayparser_nodes__ANode = {
-1, /*CAST DEAD*/
"Array[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__ANode,
13,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
-1, /* empty */
1459, /* Array[Object] */
1648, /* AbstractArrayRead[ANode] */
-1, /* empty */
2023, /* Array[ANode] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* Sequence#0: ANode */
&type_parser_nodes__ANode, /* SimpleCollection#0: ANode */
&type_array__NativeArrayparser_nodes__ANode, /* NativeArray[Array#0]: NativeArray[ANode] */
&type_array__Arrayparser_nodes__ANode, /* Array[Array#0]: Array[ANode] */
&type_array__NativeArrayparser_nodes__ANode, /* NativeArray[ArrayCapable#0]: NativeArray[ANode] */
&type_parser_nodes__ANode, /* RemovableCollection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Sequence#0]: Collection[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[SimpleCollection#0]: Collection[ANode] */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
&type_parser_nodes__ANode, /* SequenceRead#0: ANode */
&type_parser_nodes__ANode, /* AbstractArrayRead#0: ANode */
&type_array__Arrayparser_nodes__ANode, /* Array[AbstractArrayRead#0]: Array[ANode] */
&type_array__ArrayIteratorparser_nodes__ANode, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ANode] */
}
};
/* runtime type Collection[AModule] */
const struct type type_abstract_collection__Collectionparser_nodes__AModule = {
1465,
"Collection[AModule]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[ANode] */
const struct type type_abstract_collection__Collectionparser_nodes__ANode = {
601,
"Collection[ANode]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Prod] */
const struct type type_abstract_collection__Collectionparser_nodes__Prod = {
1318,
"Collection[Prod]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[AModule] */
const struct type type_array__AbstractArrayReadparser_nodes__AModule = {
2120,
"AbstractArrayRead[AModule]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Prod] */
const struct type type_array__AbstractArrayReadparser_nodes__Prod = {
2024,
"AbstractArrayRead[Prod]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ANode] */
const struct type type_array__AbstractArrayReadparser_nodes__ANode = {
1648,
"AbstractArrayRead[ANode]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MModule, AModule] */
const struct type type_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule = {
100,
"HashMap[MModule, AModule]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule,
3,
{
0, /* nullable Object */
1, /* Object */
100, /* HashMap[MModule, AModule] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mmodule__MModule, /* MapRead#0: MModule */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MModule, AModule]] */
&type_hash_collection__HashMapKeysmmodule__MModuleparser_nodes__AModule, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MModule, AModule] */
&type_hash_collection__HashMapValuesmmodule__MModuleparser_nodes__AModule, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MModule, AModule] */
&type_hash_collection__HashMapIteratormmodule__MModuleparser_nodes__AModule, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MModule, AModule] */
&type_mmodule__MModule, /* Map#0: MModule */
&type_parser_nodes__AModule, /* Map#1: AModule */
&type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MModule, AModule] */
&type_mmodule__MModule, /* HashCollection#0: MModule */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* nullable HashCollection#1: nullable HashMapNode[MModule, AModule] */
&type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* HashCollection#1: HashMapNode[MModule, AModule] */
&type_nullable_mmodule__MModule, /* nullable HashCollection#0: nullable MModule */
}
};
/* runtime type HashMap[MClassDef, AClassdef] */
const struct type type_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef = {
101,
"HashMap[MClassDef, AClassdef]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef,
3,
{
0, /* nullable Object */
1, /* Object */
101, /* HashMap[MClassDef, AClassdef] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* MapRead#0: MClassDef */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
&type_hash_collection__HashMapKeysmodel__MClassDefparser_nodes__AClassdef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassDef, AClassdef] */
&type_hash_collection__HashMapValuesmodel__MClassDefparser_nodes__AClassdef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassDef, AClassdef] */
&type_hash_collection__HashMapIteratormodel__MClassDefparser_nodes__AClassdef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassDef, AClassdef] */
&type_model__MClassDef, /* Map#0: MClassDef */
&type_parser_nodes__AClassdef, /* Map#1: AClassdef */
&type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassDef, AClassdef] */
&type_model__MClassDef, /* HashCollection#0: MClassDef */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* nullable HashCollection#1: nullable HashMapNode[MClassDef, AClassdef] */
&type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* HashCollection#1: HashMapNode[MClassDef, AClassdef] */
&type_nullable_model__MClassDef, /* nullable HashCollection#0: nullable MClassDef */
}
};
/* runtime type HashMap[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef = {
102,
"HashMap[MPropDef, APropdef]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
102, /* HashMap[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MPropDef, /* MapRead#0: MPropDef */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
&type_hash_collection__HashMapKeysmodel__MPropDefparser_nodes__APropdef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MPropDef, APropdef] */
&type_hash_collection__HashMapValuesmodel__MPropDefparser_nodes__APropdef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MPropDef, APropdef] */
&type_hash_collection__HashMapIteratormodel__MPropDefparser_nodes__APropdef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MPropDef, APropdef] */
&type_model__MPropDef, /* Map#0: MPropDef */
&type_parser_nodes__APropdef, /* Map#1: APropdef */
&type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MPropDef, APropdef] */
&type_model__MPropDef, /* HashCollection#0: MPropDef */
&type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* nullable HashCollection#1: nullable HashMapNode[MPropDef, APropdef] */
&type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* HashCollection#1: HashMapNode[MPropDef, APropdef] */
&type_nullable_model__MPropDef, /* nullable HashCollection#0: nullable MPropDef */
}
};
/* runtime type NativeArray[Object] */
const struct type type_array__NativeArraykernel__Object = {
103,
"NativeArray[Object]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraykernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
},
};
const struct types resolution_table_array__NativeArraykernel__Object = {
0, /* dummy */
{
&type_kernel__Object, /* NativeArray#0: Object */
&type_array__NativeArraykernel__Object, /* NativeArray[NativeArray#0]: NativeArray[Object] */
}
};
/* runtime type FlatString */
const struct type type_string__FlatString = {
1864,
"FlatString", /* class_name_string */
7,
0,
&resolution_table_string__FlatString,
8,
{
0, /* nullable Object */
1, /* Object */
4, /* nullable String */
104, /* Streamable */
602, /* Text */
1319, /* FlatText */
1466, /* String */
1864, /* FlatString */
},
};
const struct types resolution_table_string__FlatString = {
0, /* dummy */
{
&type_string__Text, /* OTHER: Text */
&type_string__String, /* SELFTYPE: String */
&type_array__Arraystring__String, /* Array[SELFTYPE]: Array[String] */
}
};
/* runtime type Text */
const struct type type_string__Text = {
602,
"Text", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatText */
const struct type type_string__FlatText = {
1319,
"FlatText", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable String */
const struct type type_nullable_string__String = {
4,
"nullable String", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type String */
const struct type type_string__String = {
1466,
"String", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Streamable */
const struct type type_stream__Streamable = {
104,
"Streamable", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatStringCharView */
const struct type type_string__FlatStringCharView = {
-1, /*CAST DEAD*/
"FlatStringCharView", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_string__FlatStringCharView,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
603, /* Collection[Char] */
1467, /* FlatStringCharView */
},
};
const struct types resolution_table_string__FlatStringCharView = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
&type_string__FlatString, /* SELFTYPE: FlatString */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Char, /* Collection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Collection#0]: Collection[Char] */
&type_kernel__Char, /* SequenceRead#0: Char */
}
};
/* runtime type Collection[Char] */
const struct type type_abstract_collection__Collectionkernel__Char = {
603,
"Collection[Char]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatBuffer */
const struct type type_string__FlatBuffer = {
1468,
"FlatBuffer", /* class_name_string */
6,
0,
&resolution_table_string__FlatBuffer,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
104, /* Streamable */
602, /* Text */
1319, /* FlatText */
1468, /* FlatBuffer */
},
};
const struct types resolution_table_string__FlatBuffer = {
0, /* dummy */
{
&type_string__Text, /* OTHER: Text */
&type_string__FlatBuffer, /* SELFTYPE: FlatBuffer */
&type_array__Arraystring__FlatBuffer, /* Array[SELFTYPE]: Array[FlatBuffer] */
}
};
/* runtime type FlatBufferCharView */
const struct type type_string__FlatBufferCharView = {
-1, /*CAST DEAD*/
"FlatBufferCharView", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_string__FlatBufferCharView,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
603, /* Collection[Char] */
1469, /* FlatBufferCharView */
},
};
const struct types resolution_table_string__FlatBufferCharView = {
0, /* dummy */
{
&type_kernel__Char, /* Sequence#0: Char */
&type_kernel__Char, /* SimpleCollection#0: Char */
&type_string__FlatBuffer, /* SELFTYPE: FlatBuffer */
NULL, /* empty */
NULL, /* empty */
&type_kernel__Char, /* RemovableCollection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Sequence#0]: Collection[Char] */
&type_abstract_collection__Collectionkernel__Char, /* Collection[SimpleCollection#0]: Collection[Char] */
&type_kernel__Char, /* Collection#0: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[Collection#0]: Collection[Char] */
&type_kernel__Char, /* SequenceRead#0: Char */
}
};
/* runtime type Array[Option] */
const struct type type_array__Arrayopts__Option = {
-1, /*CAST DEAD*/
"Array[Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayopts__Option,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
604, /* Collection[Option] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1649, /* AbstractArrayRead[Option] */
1459, /* Array[Object] */
2025, /* Array[Option] */
},
};
const struct types resolution_table_array__Arrayopts__Option = {
0, /* dummy */
{
&type_opts__Option, /* Sequence#0: Option */
&type_opts__Option, /* SimpleCollection#0: Option */
&type_array__NativeArrayopts__Option, /* NativeArray[Array#0]: NativeArray[Option] */
&type_array__Arrayopts__Option, /* Array[Array#0]: Array[Option] */
&type_array__NativeArrayopts__Option, /* NativeArray[ArrayCapable#0]: NativeArray[Option] */
&type_opts__Option, /* RemovableCollection#0: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[Sequence#0]: Collection[Option] */
&type_abstract_collection__Collectionopts__Option, /* Collection[SimpleCollection#0]: Collection[Option] */
&type_opts__Option, /* Collection#0: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[Collection#0]: Collection[Option] */
&type_opts__Option, /* SequenceRead#0: Option */
&type_opts__Option, /* AbstractArrayRead#0: Option */
&type_array__Arrayopts__Option, /* Array[AbstractArrayRead#0]: Array[Option] */
&type_array__ArrayIteratoropts__Option, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Option] */
}
};
/* runtime type Collection[Option] */
const struct type type_abstract_collection__Collectionopts__Option = {
604,
"Collection[Option]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Option] */
const struct type type_array__AbstractArrayReadopts__Option = {
1649,
"AbstractArrayRead[Option]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Option] */
const struct type type_hash_collection__HashMapstring__Stringopts__Option = {
105,
"HashMap[String, Option]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
105, /* HashMap[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringopts__Option = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Option]] */
&type_hash_collection__HashMapKeysstring__Stringopts__Option, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Option] */
&type_hash_collection__HashMapValuesstring__Stringopts__Option, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Option] */
&type_hash_collection__HashMapIteratorstring__Stringopts__Option, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Option] */
&type_string__String, /* Map#0: String */
&type_opts__Option, /* Map#1: Option */
&type_hash_collection__HashMapNodestring__Stringopts__Option, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Option] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringopts__Option, /* nullable HashCollection#1: nullable HashMapNode[String, Option] */
&type_hash_collection__HashMapNodestring__Stringopts__Option, /* HashCollection#1: HashMapNode[String, Option] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type NativeArray[String] */
const struct type type_array__NativeArraystring__String = {
1320,
"NativeArray[String]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraystring__String,
5,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
605, /* NativeArray[Streamable] */
1320, /* NativeArray[String] */
},
};
const struct types resolution_table_array__NativeArraystring__String = {
0, /* dummy */
{
&type_string__String, /* NativeArray#0: String */
&type_array__NativeArraystring__String, /* NativeArray[NativeArray#0]: NativeArray[String] */
}
};
/* runtime type NativeArray[Streamable] */
const struct type type_array__NativeArraystream__Streamable = {
605,
"NativeArray[Streamable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraystream__Streamable,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
605, /* NativeArray[Streamable] */
},
};
const struct types resolution_table_array__NativeArraystream__Streamable = {
0, /* dummy */
{
&type_stream__Streamable, /* NativeArray#0: Streamable */
&type_array__NativeArraystream__Streamable, /* NativeArray[NativeArray#0]: NativeArray[Streamable] */
}
};
/* runtime type NativeArray[Option] */
const struct type type_array__NativeArrayopts__Option = {
606,
"NativeArray[Option]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayopts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
103, /* NativeArray[Object] */
606, /* NativeArray[Option] */
},
};
const struct types resolution_table_array__NativeArrayopts__Option = {
0, /* dummy */
{
&type_opts__Option, /* NativeArray#0: Option */
&type_array__NativeArrayopts__Option, /* NativeArray[NativeArray#0]: NativeArray[Option] */
}
};
/* runtime type ArraySet[MModule] */
const struct type type_array__ArraySetmmodule__MModule = {
-1, /*CAST DEAD*/
"ArraySet[MModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetmmodule__MModule,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
-1, /* empty */
607, /* Set[Object] */
1470, /* ArraySet[MModule] */
},
};
const struct types resolution_table_array__ArraySetmmodule__MModule = {
0, /* dummy */
{
&type_array__ArraySetIteratormmodule__MModule, /* ArraySetIterator[ArraySet#0]: ArraySetIterator[MModule] */
&type_mmodule__MModule, /* SimpleCollection#0: MModule */
&type_array__Arraymmodule__MModule, /* Array[ArraySet#0]: Array[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Set#0]: Collection[MModule] */
NULL, /* empty */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
NULL, /* empty */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[SimpleCollection#0]: Collection[MModule] */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
}
};
/* runtime type Set[Object] */
const struct type type_abstract_collection__Setkernel__Object = {
607,
"Set[Object]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MModule */
const struct type type_mmodule__MModule = {
608,
"MModule", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
5, /* nullable MModule */
608, /* MModule */
},
};
/* runtime type nullable MModule */
const struct type type_nullable_mmodule__MModule = {
5,
"nullable MModule", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MModule] */
const struct type type_hash_collection__HashSetmmodule__MModule = {
1650,
"HashSet[MModule]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetmmodule__MModule,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
594, /* Collection[MModule] */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1650, /* HashSet[MModule] */
},
};
const struct types resolution_table_hash_collection__HashSetmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemmodule__MModule, /* HashSetNode[HashSet#0]: HashSetNode[MModule] */
&type_mmodule__MModule, /* SimpleCollection#0: MModule */
&type_hash_collection__HashSetIteratormmodule__MModule, /* HashSetIterator[HashSet#0]: HashSetIterator[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Set#0]: Collection[MModule] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MModule]] */
&type_mmodule__MModule, /* RemovableCollection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[HashSet#0]: Collection[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[SimpleCollection#0]: Collection[MModule] */
&type_mmodule__MModule, /* Collection#0: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[Collection#0]: Collection[MModule] */
NULL, /* empty */
&type_mmodule__MModule, /* HashCollection#0: MModule */
&type_nullable_hash_collection__HashSetNodemmodule__MModule, /* nullable HashCollection#1: nullable HashSetNode[MModule] */
&type_hash_collection__HashSetNodemmodule__MModule, /* HashCollection#1: HashSetNode[MModule] */
&type_nullable_mmodule__MModule, /* nullable HashCollection#0: nullable MModule */
}
};
/* runtime type HashSet[Object] */
const struct type type_hash_collection__HashSetkernel__Object = {
1321,
"HashSet[Object]", /* class_name_string */
8,
0,
&resolution_table_hash_collection__HashSetkernel__Object,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetkernel__Object = {
0, /* dummy */
{
&type_hash_collection__HashSetNodekernel__Object, /* HashSetNode[HashSet#0]: HashSetNode[Object] */
&type_kernel__Object, /* SimpleCollection#0: Object */
&type_hash_collection__HashSetIteratorkernel__Object, /* HashSetIterator[HashSet#0]: HashSetIterator[Object] */
&type_abstract_collection__Collectionkernel__Object, /* Collection[Set#0]: Collection[Object] */
&type_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[Object]] */
&type_kernel__Object, /* RemovableCollection#0: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[HashSet#0]: Collection[Object] */
&type_abstract_collection__Collectionkernel__Object, /* Collection[SimpleCollection#0]: Collection[Object] */
&type_kernel__Object, /* Collection#0: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[Collection#0]: Collection[Object] */
NULL, /* empty */
&type_kernel__Object, /* HashCollection#0: Object */
&type_nullable_hash_collection__HashSetNodekernel__Object, /* nullable HashCollection#1: nullable HashSetNode[Object] */
&type_hash_collection__HashSetNodekernel__Object, /* HashCollection#1: HashSetNode[Object] */
&type_nullable_kernel__Object, /* nullable HashCollection#0: nullable Object */
}
};
/* runtime type Array[MClassDef] */
const struct type type_array__Arraymodel__MClassDef = {
2026,
"Array[MClassDef]", /* class_name_string */
10,
0,
&resolution_table_array__Arraymodel__MClassDef,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
597, /* Collection[MClassDef] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1651, /* AbstractArrayRead[MClassDef] */
1459, /* Array[Object] */
2026, /* Array[MClassDef] */
},
};
const struct types resolution_table_array__Arraymodel__MClassDef = {
0, /* dummy */
{
&type_model__MClassDef, /* Sequence#0: MClassDef */
&type_model__MClassDef, /* SimpleCollection#0: MClassDef */
&type_array__NativeArraymodel__MClassDef, /* NativeArray[Array#0]: NativeArray[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[Array#0]: Array[MClassDef] */
&type_array__NativeArraymodel__MClassDef, /* NativeArray[ArrayCapable#0]: NativeArray[MClassDef] */
&type_model__MClassDef, /* RemovableCollection#0: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[Sequence#0]: Collection[MClassDef] */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[SimpleCollection#0]: Collection[MClassDef] */
&type_model__MClassDef, /* Collection#0: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[Collection#0]: Collection[MClassDef] */
&type_model__MClassDef, /* SequenceRead#0: MClassDef */
&type_model__MClassDef, /* AbstractArrayRead#0: MClassDef */
&type_array__Arraymodel__MClassDef, /* Array[AbstractArrayRead#0]: Array[MClassDef] */
&type_array__ArrayIteratormodel__MClassDef, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MClassDef] */
}
};
/* runtime type AbstractArrayRead[MClassDef] */
const struct type type_array__AbstractArrayReadmodel__MClassDef = {
1651,
"AbstractArrayRead[MClassDef]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty = {
1322,
"HashMap[MClass, Set[MProperty]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty,
6,
{
0, /* nullable Object */
1, /* Object */
106, /* Map[MClass, Set[PropertyLayoutElement]] */
609, /* HashMap[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1322, /* HashMap[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[MProperty]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[MProperty]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[MProperty]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setmodel__MProperty, /* Map#1: Set[MProperty] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[MProperty]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* nullable HashCollection#1: nullable HashMapNode[MClass, Set[MProperty]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* HashCollection#1: HashMapNode[MClass, Set[MProperty]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type HashMap[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
609,
"HashMap[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
106, /* Map[MClass, Set[PropertyLayoutElement]] */
609, /* HashMap[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[PropertyLayoutElement]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[PropertyLayoutElement]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Map#1: Set[PropertyLayoutElement] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* nullable HashCollection#1: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashCollection#1: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Map[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
106,
"Map[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Location */
const struct type type_location__Location = {
107,
"Location", /* class_name_string */
2,
0,
&resolution_table_location__Location,
3,
{
0, /* nullable Object */
1, /* Object */
107, /* Location */
},
};
const struct types resolution_table_location__Location = {
0, /* dummy */
{
&type_location__Location, /* OTHER: Location */
}
};
/* runtime type Range[Int] */
const struct type type_range__Rangekernel__Int = {
1323,
"Range[Int]", /* class_name_string */
6,
0,
&resolution_table_range__Rangekernel__Int,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
610, /* Collection[Int] */
1323, /* Range[Int] */
},
};
const struct types resolution_table_range__Rangekernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* Range#0: Int */
&type_range__IteratorRangekernel__Int, /* IteratorRange[Range#0]: IteratorRange[Int] */
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
/* runtime type Collection[Int] */
const struct type type_abstract_collection__Collectionkernel__Int = {
610,
"Collection[Int]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AnnotationPhaseVisitor */
const struct type type_phase__AnnotationPhaseVisitor = {
-1, /*CAST DEAD*/
"AnnotationPhaseVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
108, /* AnnotationPhaseVisitor */
},
};
/* runtime type FlatStringIterator */
const struct type type_string__FlatStringIterator = {
-1, /*CAST DEAD*/
"FlatStringIterator", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_string__FlatStringIterator,
3,
{
0, /* nullable Object */
1, /* Object */
109, /* FlatStringIterator */
},
};
const struct types resolution_table_string__FlatStringIterator = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[Iterator#0]: Array[Char] */
}
};
/* runtime type FlatBufferIterator */
const struct type type_string__FlatBufferIterator = {
-1, /*CAST DEAD*/
"FlatBufferIterator", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_string__FlatBufferIterator,
3,
{
0, /* nullable Object */
1, /* Object */
110, /* FlatBufferIterator */
},
};
const struct types resolution_table_string__FlatBufferIterator = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[Iterator#0]: Array[Char] */
}
};
/* runtime type FlatSubstringsIter */
const struct type type_string__FlatSubstringsIter = {
-1, /*CAST DEAD*/
"FlatSubstringsIter", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_string__FlatSubstringsIter,
3,
{
0, /* nullable Object */
1, /* Object */
111, /* FlatSubstringsIter */
},
};
const struct types resolution_table_string__FlatSubstringsIter = {
0, /* dummy */
{
&type_array__Arraystring__FlatText, /* Array[Iterator#0]: Array[FlatText] */
}
};
/* runtime type MProject */
const struct type type_mproject__MProject = {
112,
"MProject", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
112, /* MProject */
},
};
/* runtime type POSet[MGroup] */
const struct type type_poset__POSetmproject__MGroup = {
1471,
"POSet[MGroup]", /* class_name_string */
6,
0,
&resolution_table_poset__POSetmproject__MGroup,
7,
{
0, /* nullable Object */
1, /* Object */
113, /* Collection[nullable MGroup] */
-1, /* empty */
84, /* Collection[Object] */
1324, /* Collection[MGroup] */
1471, /* POSet[MGroup] */
},
};
const struct types resolution_table_poset__POSetmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMap[POSet#0, POSetElement[POSet#0]]: HashMap[MGroup, POSetElement[MGroup]] */
&type_array__Arraymproject__MGroup, /* Array[Comparator#0]: Array[MGroup] */
&type_mproject__MGroup, /* POSet#0: MGroup */
&type_poset__POSetElementmproject__MGroup, /* POSetElement[POSet#0]: POSetElement[MGroup] */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[POSet#0]: Collection[MGroup] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_mproject__MGroup, /* Collection#0: MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[Collection#0]: Collection[MGroup] */
}
};
/* runtime type Collection[MGroup] */
const struct type type_abstract_collection__Collectionmproject__MGroup = {
1324,
"Collection[MGroup]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MGroup] */
const struct type type_abstract_collection__Collectionnullable_mproject__MGroup = {
113,
"Collection[nullable MGroup]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MGroup */
const struct type type_mproject__MGroup = {
611,
"MGroup", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
6, /* nullable MGroup */
611, /* MGroup */
},
};
/* runtime type nullable MGroup */
const struct type type_nullable_mproject__MGroup = {
6,
"nullable MGroup", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[ModulePath] */
const struct type type_array__Arraymodelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"Array[ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodelbuilder__ModulePath,
12,
{
0, /* nullable Object */
1, /* Object */
114, /* Collection[nullable ModulePath] */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
1325, /* Collection[ModulePath] */
1326, /* AbstractArrayRead[nullable ModulePath] */
1294, /* AbstractArrayRead[Object] */
1472, /* Array[nullable ModulePath] */
1459, /* Array[Object] */
2027, /* AbstractArrayRead[ModulePath] */
2146, /* Array[ModulePath] */
},
};
const struct types resolution_table_array__Arraymodelbuilder__ModulePath = {
0, /* dummy */
{
&type_modelbuilder__ModulePath, /* Sequence#0: ModulePath */
&type_modelbuilder__ModulePath, /* SimpleCollection#0: ModulePath */
&type_array__NativeArraymodelbuilder__ModulePath, /* NativeArray[Array#0]: NativeArray[ModulePath] */
&type_array__Arraymodelbuilder__ModulePath, /* Array[Array#0]: Array[ModulePath] */
&type_array__NativeArraymodelbuilder__ModulePath, /* NativeArray[ArrayCapable#0]: NativeArray[ModulePath] */
&type_modelbuilder__ModulePath, /* RemovableCollection#0: ModulePath */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[Sequence#0]: Collection[ModulePath] */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[SimpleCollection#0]: Collection[ModulePath] */
&type_modelbuilder__ModulePath, /* Collection#0: ModulePath */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[Collection#0]: Collection[ModulePath] */
&type_modelbuilder__ModulePath, /* SequenceRead#0: ModulePath */
&type_modelbuilder__ModulePath, /* AbstractArrayRead#0: ModulePath */
&type_array__Arraymodelbuilder__ModulePath, /* Array[AbstractArrayRead#0]: Array[ModulePath] */
&type_array__ArrayIteratormodelbuilder__ModulePath, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ModulePath] */
}
};
/* runtime type Array[nullable ModulePath] */
const struct type type_array__Arraynullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"Array[nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraynullable_modelbuilder__ModulePath,
9,
{
0, /* nullable Object */
1, /* Object */
114, /* Collection[nullable ModulePath] */
83, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
1326, /* AbstractArrayRead[nullable ModulePath] */
-1, /* empty */
1472, /* Array[nullable ModulePath] */
},
};
const struct types resolution_table_array__Arraynullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_nullable_modelbuilder__ModulePath, /* Sequence#0: nullable ModulePath */
&type_nullable_modelbuilder__ModulePath, /* SimpleCollection#0: nullable ModulePath */
&type_array__NativeArraynullable_modelbuilder__ModulePath, /* NativeArray[Array#0]: NativeArray[nullable ModulePath] */
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[Array#0]: Array[nullable ModulePath] */
&type_array__NativeArraynullable_modelbuilder__ModulePath, /* NativeArray[ArrayCapable#0]: NativeArray[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* RemovableCollection#0: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[Sequence#0]: Collection[nullable ModulePath] */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[SimpleCollection#0]: Collection[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* Collection#0: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[Collection#0]: Collection[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* SequenceRead#0: nullable ModulePath */
&type_nullable_modelbuilder__ModulePath, /* AbstractArrayRead#0: nullable ModulePath */
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[AbstractArrayRead#0]: Array[nullable ModulePath] */
&type_array__ArrayIteratornullable_modelbuilder__ModulePath, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[nullable ModulePath] */
}
};
/* runtime type Collection[ModulePath] */
const struct type type_abstract_collection__Collectionmodelbuilder__ModulePath = {
1325,
"Collection[ModulePath]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable ModulePath] */
const struct type type_abstract_collection__Collectionnullable_modelbuilder__ModulePath = {
114,
"Collection[nullable ModulePath]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ModulePath] */
const struct type type_array__AbstractArrayReadmodelbuilder__ModulePath = {
2027,
"AbstractArrayRead[ModulePath]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable ModulePath] */
const struct type type_array__AbstractArrayReadnullable_modelbuilder__ModulePath = {
1326,
"AbstractArrayRead[nullable ModulePath]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ModulePath */
const struct type type_modelbuilder__ModulePath = {
612,
"ModulePath", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable ModulePath */
612, /* ModulePath */
},
};
/* runtime type nullable ModulePath */
const struct type type_nullable_modelbuilder__ModulePath = {
7,
"nullable ModulePath", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Lexer */
const struct type type_lexer_work__Lexer = {
-1, /*CAST DEAD*/
"Lexer", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
115, /* TablesCapable */
613, /* Lexer */
},
};
/* runtime type TablesCapable */
const struct type type_tables__TablesCapable = {
-1, /*CAST DEAD*/
"TablesCapable", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
115, /* TablesCapable */
},
};
/* runtime type SourceFile */
const struct type type_location__SourceFile = {
-1, /*CAST DEAD*/
"SourceFile", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
116, /* SourceFile */
},
};
/* runtime type Array[Int] */
const struct type type_array__Arraykernel__Int = {
-1, /*CAST DEAD*/
"Array[Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraykernel__Int,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
610, /* Collection[Int] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1652, /* AbstractArrayRead[Int] */
1459, /* Array[Object] */
2028, /* Array[Int] */
},
};
const struct types resolution_table_array__Arraykernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* Sequence#0: Int */
&type_kernel__Int, /* SimpleCollection#0: Int */
&type_array__NativeArraykernel__Int, /* NativeArray[Array#0]: NativeArray[Int] */
&type_array__Arraykernel__Int, /* Array[Array#0]: Array[Int] */
&type_array__NativeArraykernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[Int] */
&type_kernel__Int, /* RemovableCollection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Sequence#0]: Collection[Int] */
&type_abstract_collection__Collectionkernel__Int, /* Collection[SimpleCollection#0]: Collection[Int] */
&type_kernel__Int, /* Collection#0: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[Collection#0]: Collection[Int] */
&type_kernel__Int, /* SequenceRead#0: Int */
&type_kernel__Int, /* AbstractArrayRead#0: Int */
&type_array__Arraykernel__Int, /* Array[AbstractArrayRead#0]: Array[Int] */
&type_array__ArrayIteratorkernel__Int, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Int] */
}
};
/* runtime type AbstractArrayRead[Int] */
const struct type type_array__AbstractArrayReadkernel__Int = {
1652,
"AbstractArrayRead[Int]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Parser */
const struct type type_parser_work__Parser = {
-1, /*CAST DEAD*/
"Parser", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
115, /* TablesCapable */
614, /* Parser */
},
};
/* runtime type ANodes[AClassdef] */
const struct type type_parser_nodes__ANodesparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"ANodes[AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__AClassdef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1473, /* Collection[AClassdef] */
1865, /* ANodes[AClassdef] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__AClassdef = {
0, /* dummy */
{
&type_parser_nodes__AClassdef, /* Sequence#0: AClassdef */
&type_parser_nodes__AClassdef, /* SimpleCollection#0: AClassdef */
&type_array__Arrayparser_nodes__AClassdef, /* Array[ANodes#0]: Array[AClassdef] */
&type_parser_nodes__AClassdef, /* ANodes#0: AClassdef */
NULL, /* empty */
&type_parser_nodes__AClassdef, /* RemovableCollection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Sequence#0]: Collection[AClassdef] */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[SimpleCollection#0]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* Collection#0: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[Collection#0]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* SequenceRead#0: AClassdef */
}
};
/* runtime type Collection[AClassdef] */
const struct type type_abstract_collection__Collectionparser_nodes__AClassdef = {
1473,
"Collection[AClassdef]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ANodes[APropdef] */
const struct type type_parser_nodes__ANodesparser_nodes__APropdef = {
-1, /*CAST DEAD*/
"ANodes[APropdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__APropdef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1474, /* Collection[APropdef] */
1866, /* ANodes[APropdef] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__APropdef = {
0, /* dummy */
{
&type_parser_nodes__APropdef, /* Sequence#0: APropdef */
&type_parser_nodes__APropdef, /* SimpleCollection#0: APropdef */
&type_array__Arrayparser_nodes__APropdef, /* Array[ANodes#0]: Array[APropdef] */
&type_parser_nodes__APropdef, /* ANodes#0: APropdef */
NULL, /* empty */
&type_parser_nodes__APropdef, /* RemovableCollection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Sequence#0]: Collection[APropdef] */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[SimpleCollection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* Collection#0: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[Collection#0]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* SequenceRead#0: APropdef */
}
};
/* runtime type Collection[APropdef] */
const struct type type_abstract_collection__Collectionparser_nodes__APropdef = {
1474,
"Collection[APropdef]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TransformVisitor */
const struct type type_transform__TransformVisitor = {
-1, /*CAST DEAD*/
"TransformVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
117, /* TransformVisitor */
},
};
/* runtime type ASTValidationVisitor */
const struct type type_astvalidation__ASTValidationVisitor = {
-1, /*CAST DEAD*/
"ASTValidationVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
118, /* ASTValidationVisitor */
},
};
/* runtime type List[ANode] */
const struct type type_list__Listparser_nodes__ANode = {
1475,
"List[ANode]", /* class_name_string */
6,
0,
&resolution_table_list__Listparser_nodes__ANode,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1475, /* List[ANode] */
},
};
const struct types resolution_table_list__Listparser_nodes__ANode = {
0, /* dummy */
{
&type_parser_nodes__ANode, /* Sequence#0: ANode */
&type_parser_nodes__ANode, /* SimpleCollection#0: ANode */
&type_list__ListNodeparser_nodes__ANode, /* ListNode[List#0]: ListNode[ANode] */
&type_list__ListIteratorparser_nodes__ANode, /* ListIterator[List#0]: ListIterator[ANode] */
&type_parser_nodes__ANode, /* List#0: ANode */
&type_parser_nodes__ANode, /* RemovableCollection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Sequence#0]: Collection[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[SimpleCollection#0]: Collection[ANode] */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
&type_parser_nodes__ANode, /* SequenceRead#0: ANode */
&type_nullable_list__ListNodeparser_nodes__ANode, /* nullable ListNode[List#0]: nullable ListNode[ANode] */
}
};
/* runtime type HashSet[ANode] */
const struct type type_hash_collection__HashSetparser_nodes__ANode = {
1653,
"HashSet[ANode]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetparser_nodes__ANode,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
601, /* Collection[ANode] */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1653, /* HashSet[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* HashSetNode[HashSet#0]: HashSetNode[ANode] */
&type_parser_nodes__ANode, /* SimpleCollection#0: ANode */
&type_hash_collection__HashSetIteratorparser_nodes__ANode, /* HashSetIterator[HashSet#0]: HashSetIterator[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Set#0]: Collection[ANode] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[ANode]] */
&type_parser_nodes__ANode, /* RemovableCollection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[HashSet#0]: Collection[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[SimpleCollection#0]: Collection[ANode] */
&type_parser_nodes__ANode, /* Collection#0: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[Collection#0]: Collection[ANode] */
NULL, /* empty */
&type_parser_nodes__ANode, /* HashCollection#0: ANode */
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* nullable HashCollection#1: nullable HashSetNode[ANode] */
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* HashCollection#1: HashSetNode[ANode] */
&type_nullable_parser_nodes__ANode, /* nullable HashCollection#0: nullable ANode */
}
};
/* runtime type RapidTypeAnalysis */
const struct type type_rapid_type_analysis__RapidTypeAnalysis = {
-1, /*CAST DEAD*/
"RapidTypeAnalysis", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
119, /* RapidTypeAnalysis */
},
};
/* runtime type HashSet[MClassType] */
const struct type type_hash_collection__HashSetmodel__MClassType = {
2147,
"HashSet[MClassType]", /* class_name_string */
13,
0,
&resolution_table_hash_collection__HashSetmodel__MClassType,
14,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1654, /* Set[MType] */
1464, /* Collection[MClassType] */
2029, /* HashSet[MType] */
2030, /* Set[MClassType] */
2147, /* HashSet[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MClassType, /* HashSetNode[HashSet#0]: HashSetNode[MClassType] */
&type_model__MClassType, /* SimpleCollection#0: MClassType */
&type_hash_collection__HashSetIteratormodel__MClassType, /* HashSetIterator[HashSet#0]: HashSetIterator[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Set#0]: Collection[MClassType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MClassType]] */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[HashSet#0]: Collection[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[SimpleCollection#0]: Collection[MClassType] */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
NULL, /* empty */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_nullable_hash_collection__HashSetNodemodel__MClassType, /* nullable HashCollection#1: nullable HashSetNode[MClassType] */
&type_hash_collection__HashSetNodemodel__MClassType, /* HashCollection#1: HashSetNode[MClassType] */
&type_nullable_model__MClassType, /* nullable HashCollection#0: nullable MClassType */
}
};
/* runtime type HashSet[MType] */
const struct type type_hash_collection__HashSetmodel__MType = {
2029,
"HashSet[MType]", /* class_name_string */
11,
0,
&resolution_table_hash_collection__HashSetmodel__MType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1654, /* Set[MType] */
-1, /* empty */
2029, /* HashSet[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MType, /* HashSetNode[HashSet#0]: HashSetNode[MType] */
&type_model__MType, /* SimpleCollection#0: MType */
&type_hash_collection__HashSetIteratormodel__MType, /* HashSetIterator[HashSet#0]: HashSetIterator[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Set#0]: Collection[MType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MType]] */
&type_model__MType, /* RemovableCollection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[HashSet#0]: Collection[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[SimpleCollection#0]: Collection[MType] */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
NULL, /* empty */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashSetNodemodel__MType, /* nullable HashCollection#1: nullable HashSetNode[MType] */
&type_hash_collection__HashSetNodemodel__MType, /* HashCollection#1: HashSetNode[MType] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type Set[MClassType] */
const struct type type_abstract_collection__Setmodel__MClassType = {
2030,
"Set[MClassType]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Set[MType] */
const struct type type_abstract_collection__Setmodel__MType = {
1654,
"Set[MType]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MClass] */
const struct type type_hash_collection__HashSetmodel__MClass = {
2031,
"HashSet[MClass]", /* class_name_string */
10,
0,
&resolution_table_hash_collection__HashSetmodel__MClass,
11,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
84, /* Collection[Object] */
1312, /* Collection[MClass] */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1655, /* Set[MClass] */
2031, /* HashSet[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MClass, /* HashSetNode[HashSet#0]: HashSetNode[MClass] */
&type_model__MClass, /* SimpleCollection#0: MClass */
&type_hash_collection__HashSetIteratormodel__MClass, /* HashSetIterator[HashSet#0]: HashSetIterator[MClass] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Set#0]: Collection[MClass] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MClass]] */
&type_model__MClass, /* RemovableCollection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[HashSet#0]: Collection[MClass] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[SimpleCollection#0]: Collection[MClass] */
&type_model__MClass, /* Collection#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[Collection#0]: Collection[MClass] */
NULL, /* empty */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashSetNodemodel__MClass, /* nullable HashCollection#1: nullable HashSetNode[MClass] */
&type_hash_collection__HashSetNodemodel__MClass, /* HashCollection#1: HashSetNode[MClass] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Set[MClass] */
const struct type type_abstract_collection__Setmodel__MClass = {
1655,
"Set[MClass]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MMethodDef] */
const struct type type_hash_collection__HashSetmodel__MMethodDef = {
2163,
"HashSet[MMethodDef]", /* class_name_string */
15,
0,
&resolution_table_hash_collection__HashSetmodel__MMethodDef,
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
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
1477, /* Collection[MPropDef] */
-1, /* empty */
1867, /* HashSet[PropertyLayoutElement] */
1656, /* Collection[MMethodDef] */
2109, /* Set[MMethodDef] */
2163, /* HashSet[MMethodDef] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MMethodDef, /* HashSetNode[HashSet#0]: HashSetNode[MMethodDef] */
&type_model__MMethodDef, /* SimpleCollection#0: MMethodDef */
&type_hash_collection__HashSetIteratormodel__MMethodDef, /* HashSetIterator[HashSet#0]: HashSetIterator[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Set#0]: Collection[MMethodDef] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MMethodDef]] */
&type_model__MMethodDef, /* RemovableCollection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[HashSet#0]: Collection[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[SimpleCollection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
NULL, /* empty */
&type_model__MMethodDef, /* HashCollection#0: MMethodDef */
&type_nullable_hash_collection__HashSetNodemodel__MMethodDef, /* nullable HashCollection#1: nullable HashSetNode[MMethodDef] */
&type_hash_collection__HashSetNodemodel__MMethodDef, /* HashCollection#1: HashSetNode[MMethodDef] */
&type_nullable_model__MMethodDef, /* nullable HashCollection#0: nullable MMethodDef */
}
};
/* runtime type HashSet[PropertyLayoutElement] */
const struct type type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement = {
1867,
"HashSet[PropertyLayoutElement]", /* class_name_string */
12,
0,
&resolution_table_hash_collection__HashSetseparate_compiler__PropertyLayoutElement,
13,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
1867, /* HashSet[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* HashSetNode[HashSet#0]: HashSetNode[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* SimpleCollection#0: PropertyLayoutElement */
&type_hash_collection__HashSetIteratorseparate_compiler__PropertyLayoutElement, /* HashSetIterator[HashSet#0]: HashSetIterator[PropertyLayoutElement] */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[Set#0]: Collection[PropertyLayoutElement] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
&type_separate_compiler__PropertyLayoutElement, /* RemovableCollection#0: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[HashSet#0]: Collection[PropertyLayoutElement] */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[SimpleCollection#0]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* Collection#0: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[Collection#0]: Collection[PropertyLayoutElement] */
NULL, /* empty */
&type_separate_compiler__PropertyLayoutElement, /* HashCollection#0: PropertyLayoutElement */
&type_nullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* nullable HashCollection#1: nullable HashSetNode[PropertyLayoutElement] */
&type_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* HashCollection#1: HashSetNode[PropertyLayoutElement] */
&type_nullable_separate_compiler__PropertyLayoutElement, /* nullable HashCollection#0: nullable PropertyLayoutElement */
}
};
/* runtime type Set[PropertyLayoutElement] */
const struct type type_abstract_collection__Setseparate_compiler__PropertyLayoutElement = {
1476,
"Set[PropertyLayoutElement]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Set[MMethodDef] */
const struct type type_abstract_collection__Setmodel__MMethodDef = {
2109,
"Set[MMethodDef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MMethodDef] */
const struct type type_abstract_collection__Collectionmodel__MMethodDef = {
1656,
"Collection[MMethodDef]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MPropDef] */
const struct type type_abstract_collection__Collectionmodel__MPropDef = {
1477,
"Collection[MPropDef]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MPropDef] */
const struct type type_abstract_collection__Collectionnullable_model__MPropDef = {
120,
"Collection[nullable MPropDef]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MMethod] */
const struct type type_hash_collection__HashSetmodel__MMethod = {
2175,
"HashSet[MMethod]", /* class_name_string */
16,
0,
&resolution_table_hash_collection__HashSetmodel__MMethod,
17,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
1462, /* Collection[MProperty] */
1657, /* Collection[MMethod] */
1867, /* HashSet[PropertyLayoutElement] */
2032, /* Set[MProperty] */
-1, /* empty */
2148, /* HashSet[MProperty] */
2175, /* HashSet[MMethod] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MMethod = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MMethod, /* HashSetNode[HashSet#0]: HashSetNode[MMethod] */
&type_model__MMethod, /* SimpleCollection#0: MMethod */
&type_hash_collection__HashSetIteratormodel__MMethod, /* HashSetIterator[HashSet#0]: HashSetIterator[MMethod] */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[Set#0]: Collection[MMethod] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MMethod]] */
&type_model__MMethod, /* RemovableCollection#0: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[HashSet#0]: Collection[MMethod] */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[SimpleCollection#0]: Collection[MMethod] */
&type_model__MMethod, /* Collection#0: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[Collection#0]: Collection[MMethod] */
NULL, /* empty */
&type_model__MMethod, /* HashCollection#0: MMethod */
&type_nullable_hash_collection__HashSetNodemodel__MMethod, /* nullable HashCollection#1: nullable HashSetNode[MMethod] */
&type_hash_collection__HashSetNodemodel__MMethod, /* HashCollection#1: HashSetNode[MMethod] */
&type_nullable_model__MMethod, /* nullable HashCollection#0: nullable MMethod */
}
};
/* runtime type HashSet[MProperty] */
const struct type type_hash_collection__HashSetmodel__MProperty = {
2148,
"HashSet[MProperty]", /* class_name_string */
15,
0,
&resolution_table_hash_collection__HashSetmodel__MProperty,
16,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
1462, /* Collection[MProperty] */
-1, /* empty */
1867, /* HashSet[PropertyLayoutElement] */
2032, /* Set[MProperty] */
-1, /* empty */
2148, /* HashSet[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MProperty, /* HashSetNode[HashSet#0]: HashSetNode[MProperty] */
&type_model__MProperty, /* SimpleCollection#0: MProperty */
&type_hash_collection__HashSetIteratormodel__MProperty, /* HashSetIterator[HashSet#0]: HashSetIterator[MProperty] */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Set#0]: Collection[MProperty] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MProperty]] */
&type_model__MProperty, /* RemovableCollection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[HashSet#0]: Collection[MProperty] */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[SimpleCollection#0]: Collection[MProperty] */
&type_model__MProperty, /* Collection#0: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[Collection#0]: Collection[MProperty] */
NULL, /* empty */
&type_model__MProperty, /* HashCollection#0: MProperty */
&type_nullable_hash_collection__HashSetNodemodel__MProperty, /* nullable HashCollection#1: nullable HashSetNode[MProperty] */
&type_hash_collection__HashSetNodemodel__MProperty, /* HashCollection#1: HashSetNode[MProperty] */
&type_nullable_model__MProperty, /* nullable HashCollection#0: nullable MProperty */
}
};
/* runtime type Set[MProperty] */
const struct type type_abstract_collection__Setmodel__MProperty = {
2032,
"Set[MProperty]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MMethod] */
const struct type type_abstract_collection__Collectionmodel__MMethod = {
1657,
"Collection[MMethod]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[CallSite] */
const struct type type_hash_collection__HashSettyping__CallSite = {
1658,
"HashSet[CallSite]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSettyping__CallSite,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
615, /* Collection[CallSite] */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1658, /* HashSet[CallSite] */
},
};
const struct types resolution_table_hash_collection__HashSettyping__CallSite = {
0, /* dummy */
{
&type_hash_collection__HashSetNodetyping__CallSite, /* HashSetNode[HashSet#0]: HashSetNode[CallSite] */
&type_typing__CallSite, /* SimpleCollection#0: CallSite */
&type_hash_collection__HashSetIteratortyping__CallSite, /* HashSetIterator[HashSet#0]: HashSetIterator[CallSite] */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[Set#0]: Collection[CallSite] */
&type_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[CallSite]] */
&type_typing__CallSite, /* RemovableCollection#0: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[HashSet#0]: Collection[CallSite] */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[SimpleCollection#0]: Collection[CallSite] */
&type_typing__CallSite, /* Collection#0: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[Collection#0]: Collection[CallSite] */
NULL, /* empty */
&type_typing__CallSite, /* HashCollection#0: CallSite */
&type_nullable_hash_collection__HashSetNodetyping__CallSite, /* nullable HashCollection#1: nullable HashSetNode[CallSite] */
&type_hash_collection__HashSetNodetyping__CallSite, /* HashCollection#1: HashSetNode[CallSite] */
&type_nullable_typing__CallSite, /* nullable HashCollection#0: nullable CallSite */
}
};
/* runtime type Collection[CallSite] */
const struct type type_abstract_collection__Collectiontyping__CallSite = {
615,
"Collection[CallSite]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap2[MType, MProperty, Set[MMethodDef]] */
const struct type type_more_collections__HashMap2model__MTypemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
-1, /*CAST DEAD*/
"HashMap2[MType, MProperty, Set[MMethodDef]]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_more_collections__HashMap2model__MTypemodel__MPropertyabstract_collection__Setmodel__MMethodDef,
3,
{
0, /* nullable Object */
1, /* Object */
121, /* HashMap2[MType, MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2model__MTypemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[HashMap2#0, HashMap[HashMap2#1, HashMap2#2]]: HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_model__MType, /* HashMap2#0: MType */
&type_model__MProperty, /* HashMap2#1: MProperty */
&type_abstract_collection__Setmodel__MMethodDef, /* HashMap2#2: Set[MMethodDef] */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[HashMap2#1, HashMap2#2]: HashMap[MProperty, Set[MMethodDef]] */
}
};
/* runtime type Array[MMethod] */
const struct type type_array__Arraymodel__MMethod = {
-1, /*CAST DEAD*/
"Array[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MMethod,
18,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
1314, /* AbstractArrayRead[nullable MProperty] */
596, /* Collection[PropertyLayoutElement] */
1294, /* AbstractArrayRead[Object] */
1461, /* Array[nullable MProperty] */
1459, /* Array[Object] */
1462, /* Collection[MProperty] */
1657, /* Collection[MMethod] */
1647, /* AbstractArrayRead[PropertyLayoutElement] */
2119, /* AbstractArrayRead[MProperty] */
2022, /* Array[PropertyLayoutElement] */
2164, /* AbstractArrayRead[MMethod] */
2176, /* Array[MProperty] */
2199, /* Array[MMethod] */
},
};
const struct types resolution_table_array__Arraymodel__MMethod = {
0, /* dummy */
{
&type_model__MMethod, /* Sequence#0: MMethod */
&type_model__MMethod, /* SimpleCollection#0: MMethod */
&type_array__NativeArraymodel__MMethod, /* NativeArray[Array#0]: NativeArray[MMethod] */
&type_array__Arraymodel__MMethod, /* Array[Array#0]: Array[MMethod] */
&type_array__NativeArraymodel__MMethod, /* NativeArray[ArrayCapable#0]: NativeArray[MMethod] */
&type_model__MMethod, /* RemovableCollection#0: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[Sequence#0]: Collection[MMethod] */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[SimpleCollection#0]: Collection[MMethod] */
&type_model__MMethod, /* Collection#0: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[Collection#0]: Collection[MMethod] */
&type_model__MMethod, /* SequenceRead#0: MMethod */
&type_model__MMethod, /* AbstractArrayRead#0: MMethod */
&type_array__Arraymodel__MMethod, /* Array[AbstractArrayRead#0]: Array[MMethod] */
&type_array__ArrayIteratormodel__MMethod, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MMethod] */
}
};
/* runtime type AbstractArrayRead[MMethod] */
const struct type type_array__AbstractArrayReadmodel__MMethod = {
2164,
"AbstractArrayRead[MMethod]", /* class_name_string */
15,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type List[MMethodDef] */
const struct type type_list__Listmodel__MMethodDef = {
2033,
"List[MMethodDef]", /* class_name_string */
14,
0,
&resolution_table_list__Listmodel__MMethodDef,
15,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
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
2033, /* List[MMethodDef] */
},
};
const struct types resolution_table_list__Listmodel__MMethodDef = {
0, /* dummy */
{
&type_model__MMethodDef, /* Sequence#0: MMethodDef */
&type_model__MMethodDef, /* SimpleCollection#0: MMethodDef */
&type_list__ListNodemodel__MMethodDef, /* ListNode[List#0]: ListNode[MMethodDef] */
&type_list__ListIteratormodel__MMethodDef, /* ListIterator[List#0]: ListIterator[MMethodDef] */
&type_model__MMethodDef, /* List#0: MMethodDef */
&type_model__MMethodDef, /* RemovableCollection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Sequence#0]: Collection[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[SimpleCollection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* Collection#0: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[Collection#0]: Collection[MMethodDef] */
&type_model__MMethodDef, /* SequenceRead#0: MMethodDef */
&type_nullable_list__ListNodemodel__MMethodDef, /* nullable ListNode[List#0]: nullable ListNode[MMethodDef] */
}
};
/* runtime type SeparateCompiler */
const struct type type_separate_compiler__SeparateCompiler = {
616,
"SeparateCompiler", /* class_name_string */
3,
0,
&resolution_table_separate_compiler__SeparateCompiler,
4,
{
0, /* nullable Object */
1, /* Object */
122, /* AbstractCompiler */
616, /* SeparateCompiler */
},
};
const struct types resolution_table_separate_compiler__SeparateCompiler = {
0, /* dummy */
{
&type_separate_compiler__SeparateCompilerVisitor, /* VISITOR: SeparateCompilerVisitor */
}
};
/* runtime type AbstractCompiler */
const struct type type_abstract_compiler__AbstractCompiler = {
122,
"AbstractCompiler", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType = {
123,
"HashMap[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
123, /* HashMap[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassDef, /* MapRead#0: MClassDef */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
&type_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassDef, HashSet[MType]] */
&type_hash_collection__HashMapValuesmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassDef, HashSet[MType]] */
&type_hash_collection__HashMapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* Map#0: MClassDef */
&type_hash_collection__HashSetmodel__MType, /* Map#1: HashSet[MType] */
&type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* HashCollection#0: MClassDef */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* nullable HashCollection#1: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* HashCollection#1: HashMapNode[MClassDef, HashSet[MType]] */
&type_nullable_model__MClassDef, /* nullable HashCollection#0: nullable MClassDef */
}
};
/* runtime type HashMap[MClass, Int] */
const struct type type_hash_collection__HashMapmodel__MClasskernel__Int = {
124,
"HashMap[MClass, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
124, /* HashMap[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClasskernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Int]] */
&type_hash_collection__HashMapKeysmodel__MClasskernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Int] */
&type_hash_collection__HashMapValuesmodel__MClasskernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Int] */
&type_hash_collection__HashMapIteratormodel__MClasskernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Int] */
&type_model__MClass, /* Map#0: MClass */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodemodel__MClasskernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Int] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* nullable HashCollection#1: nullable HashMapNode[MClass, Int] */
&type_hash_collection__HashMapNodemodel__MClasskernel__Int, /* HashCollection#1: HashMapNode[MClass, Int] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type HashMap[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType = {
125,
"HashMap[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
125, /* HashMap[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MType, /* MapRead#0: MType */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
&type_hash_collection__HashMapKeysmodel__MTypearray__Arraynullable_model__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MType, Array[nullable MType]] */
&type_hash_collection__HashMapValuesmodel__MTypearray__Arraynullable_model__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MType, Array[nullable MType]] */
&type_hash_collection__HashMapIteratormodel__MTypearray__Arraynullable_model__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MType, Array[nullable MType]] */
&type_model__MType, /* Map#0: MType */
&type_array__Arraynullable_model__MType, /* Map#1: Array[nullable MType] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MType, Array[nullable MType]] */
&type_model__MType, /* HashCollection#0: MType */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* nullable HashCollection#1: nullable HashMapNode[MType, Array[nullable MType]] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* HashCollection#1: HashMapNode[MType, Array[nullable MType]] */
&type_nullable_model__MType, /* nullable HashCollection#0: nullable MType */
}
};
/* runtime type HashMap[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType = {
617,
"HashMap[MClassType, Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
125, /* HashMap[MType, Array[nullable MType]] */
617, /* HashMap[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClassType, /* MapRead#0: MClassType */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
&type_hash_collection__HashMapKeysmodel__MClassTypearray__Arraynullable_model__MType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClassType, Array[nullable MType]] */
&type_hash_collection__HashMapValuesmodel__MClassTypearray__Arraynullable_model__MType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClassType, Array[nullable MType]] */
&type_hash_collection__HashMapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* Map#0: MClassType */
&type_array__Arraynullable_model__MType, /* Map#1: Array[nullable MType] */
&type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* HashCollection#0: MClassType */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* nullable HashCollection#1: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* HashCollection#1: HashMapNode[MClassType, Array[nullable MType]] */
&type_nullable_model__MClassType, /* nullable HashCollection#0: nullable MClassType */
}
};
/* runtime type HashMap[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef = {
126,
"HashMap[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
126, /* HashMap[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
&type_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Array[nullable MPropDef]] */
&type_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Array[nullable MPropDef]] */
&type_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* Map#0: MClass */
&type_array__Arraynullable_model__MPropDef, /* Map#1: Array[nullable MPropDef] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* nullable HashCollection#1: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* HashCollection#1: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type HashMap[String, String] */
const struct type type_hash_collection__HashMapstring__Stringstring__String = {
127,
"HashMap[String, String]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
127, /* HashMap[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringstring__String = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, String]] */
&type_hash_collection__HashMapKeysstring__Stringstring__String, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, String] */
&type_hash_collection__HashMapValuesstring__Stringstring__String, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, String] */
&type_hash_collection__HashMapIteratorstring__Stringstring__String, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, String] */
&type_string__String, /* Map#0: String */
&type_string__String, /* Map#1: String */
&type_hash_collection__HashMapNodestring__Stringstring__String, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, String] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringstring__String, /* nullable HashCollection#1: nullable HashMapNode[String, String] */
&type_hash_collection__HashMapNodestring__Stringstring__String, /* HashCollection#1: HashMapNode[String, String] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type List[CodeFile] */
const struct type type_list__Listabstract_compiler__CodeFile = {
1478,
"List[CodeFile]", /* class_name_string */
6,
0,
&resolution_table_list__Listabstract_compiler__CodeFile,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
618, /* Collection[CodeFile] */
1478, /* List[CodeFile] */
},
};
const struct types resolution_table_list__Listabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_abstract_compiler__CodeFile, /* Sequence#0: CodeFile */
&type_abstract_compiler__CodeFile, /* SimpleCollection#0: CodeFile */
&type_list__ListNodeabstract_compiler__CodeFile, /* ListNode[List#0]: ListNode[CodeFile] */
&type_list__ListIteratorabstract_compiler__CodeFile, /* ListIterator[List#0]: ListIterator[CodeFile] */
&type_abstract_compiler__CodeFile, /* List#0: CodeFile */
&type_abstract_compiler__CodeFile, /* RemovableCollection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Sequence#0]: Collection[CodeFile] */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[SimpleCollection#0]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* Collection#0: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[Collection#0]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* SequenceRead#0: CodeFile */
&type_nullable_list__ListNodeabstract_compiler__CodeFile, /* nullable ListNode[List#0]: nullable ListNode[CodeFile] */
}
};
/* runtime type Collection[CodeFile] */
const struct type type_abstract_collection__Collectionabstract_compiler__CodeFile = {
618,
"Collection[CodeFile]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, ANode] */
const struct type type_hash_collection__HashMapstring__Stringparser_nodes__ANode = {
128,
"HashMap[String, ANode]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
128, /* HashMap[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, ANode]] */
&type_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, ANode] */
&type_hash_collection__HashMapValuesstring__Stringparser_nodes__ANode, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, ANode] */
&type_hash_collection__HashMapIteratorstring__Stringparser_nodes__ANode, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, ANode] */
&type_string__String, /* Map#0: String */
&type_parser_nodes__ANode, /* Map#1: ANode */
&type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, ANode] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* nullable HashCollection#1: nullable HashMapNode[String, ANode] */
&type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* HashCollection#1: HashMapNode[String, ANode] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type Array[ExternFile] */
const struct type type_array__Arrayc_tools__ExternFile = {
-1, /*CAST DEAD*/
"Array[ExternFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayc_tools__ExternFile,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
619, /* Collection[ExternFile] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1659, /* AbstractArrayRead[ExternFile] */
1459, /* Array[Object] */
2034, /* Array[ExternFile] */
},
};
const struct types resolution_table_array__Arrayc_tools__ExternFile = {
0, /* dummy */
{
&type_c_tools__ExternFile, /* Sequence#0: ExternFile */
&type_c_tools__ExternFile, /* SimpleCollection#0: ExternFile */
&type_array__NativeArrayc_tools__ExternFile, /* NativeArray[Array#0]: NativeArray[ExternFile] */
&type_array__Arrayc_tools__ExternFile, /* Array[Array#0]: Array[ExternFile] */
&type_array__NativeArrayc_tools__ExternFile, /* NativeArray[ArrayCapable#0]: NativeArray[ExternFile] */
&type_c_tools__ExternFile, /* RemovableCollection#0: ExternFile */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[Sequence#0]: Collection[ExternFile] */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[SimpleCollection#0]: Collection[ExternFile] */
&type_c_tools__ExternFile, /* Collection#0: ExternFile */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[Collection#0]: Collection[ExternFile] */
&type_c_tools__ExternFile, /* SequenceRead#0: ExternFile */
&type_c_tools__ExternFile, /* AbstractArrayRead#0: ExternFile */
&type_array__Arrayc_tools__ExternFile, /* Array[AbstractArrayRead#0]: Array[ExternFile] */
&type_array__ArrayIteratorc_tools__ExternFile, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ExternFile] */
}
};
/* runtime type Collection[ExternFile] */
const struct type type_abstract_collection__Collectionc_tools__ExternFile = {
619,
"Collection[ExternFile]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ExternFile] */
const struct type type_array__AbstractArrayReadc_tools__ExternFile = {
1659,
"AbstractArrayRead[ExternFile]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ArraySet[String] */
const struct type type_array__ArraySetstring__String = {
-1, /*CAST DEAD*/
"ArraySet[String]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetstring__String,
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
607, /* Set[Object] */
1660, /* ArraySet[String] */
},
};
const struct types resolution_table_array__ArraySetstring__String = {
0, /* dummy */
{
&type_array__ArraySetIteratorstring__String, /* ArraySetIterator[ArraySet#0]: ArraySetIterator[String] */
&type_string__String, /* SimpleCollection#0: String */
&type_array__Arraystring__String, /* Array[ArraySet#0]: Array[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[Set#0]: Collection[String] */
NULL, /* empty */
&type_string__String, /* RemovableCollection#0: String */
NULL, /* empty */
&type_abstract_collection__Collectionstring__String, /* Collection[SimpleCollection#0]: Collection[String] */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
}
};
/* runtime type SeparateErasureCompiler */
const struct type type_separate_erasure_compiler__SeparateErasureCompiler = {
1327,
"SeparateErasureCompiler", /* class_name_string */
4,
0,
&resolution_table_separate_erasure_compiler__SeparateErasureCompiler,
5,
{
0, /* nullable Object */
1, /* Object */
122, /* AbstractCompiler */
616, /* SeparateCompiler */
1327, /* SeparateErasureCompiler */
},
};
const struct types resolution_table_separate_erasure_compiler__SeparateErasureCompiler = {
0, /* dummy */
{
&type_separate_compiler__SeparateCompilerVisitor, /* VISITOR: SeparateCompilerVisitor */
}
};
/* runtime type Array[Match] */
const struct type type_array__Arraystring_search__Match = {
-1, /*CAST DEAD*/
"Array[Match]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystring_search__Match,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
620, /* Collection[Match] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1661, /* AbstractArrayRead[Match] */
1459, /* Array[Object] */
2035, /* Array[Match] */
},
};
const struct types resolution_table_array__Arraystring_search__Match = {
0, /* dummy */
{
&type_string_search__Match, /* Sequence#0: Match */
&type_string_search__Match, /* SimpleCollection#0: Match */
&type_array__NativeArraystring_search__Match, /* NativeArray[Array#0]: NativeArray[Match] */
&type_array__Arraystring_search__Match, /* Array[Array#0]: Array[Match] */
&type_array__NativeArraystring_search__Match, /* NativeArray[ArrayCapable#0]: NativeArray[Match] */
&type_string_search__Match, /* RemovableCollection#0: Match */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[Sequence#0]: Collection[Match] */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[SimpleCollection#0]: Collection[Match] */
&type_string_search__Match, /* Collection#0: Match */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[Collection#0]: Collection[Match] */
&type_string_search__Match, /* SequenceRead#0: Match */
&type_string_search__Match, /* AbstractArrayRead#0: Match */
&type_array__Arraystring_search__Match, /* Array[AbstractArrayRead#0]: Array[Match] */
&type_array__ArrayIteratorstring_search__Match, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[Match] */
}
};
/* runtime type Collection[Match] */
const struct type type_abstract_collection__Collectionstring_search__Match = {
620,
"Collection[Match]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Match] */
const struct type type_array__AbstractArrayReadstring_search__Match = {
1661,
"AbstractArrayRead[Match]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Match */
const struct type type_string_search__Match = {
129,
"Match", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
129, /* Match */
},
};
/* runtime type MDoc */
const struct type type_mdoc__MDoc = {
-1, /*CAST DEAD*/
"MDoc", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
130, /* MDoc */
},
};
/* runtime type Message */
const struct type type_toolcontext__Message = {
131,
"Message", /* class_name_string */
2,
0,
&resolution_table_toolcontext__Message,
3,
{
0, /* nullable Object */
1, /* Object */
131, /* Message */
},
};
const struct types resolution_table_toolcontext__Message = {
0, /* dummy */
{
&type_toolcontext__Message, /* OTHER: Message */
}
};
/* runtime type Array[State] */
const struct type type_array__Arrayparser_work__State = {
-1, /*CAST DEAD*/
"Array[State]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_work__State,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
621, /* Collection[State] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1662, /* AbstractArrayRead[State] */
1459, /* Array[Object] */
2036, /* Array[State] */
},
};
const struct types resolution_table_array__Arrayparser_work__State = {
0, /* dummy */
{
&type_parser_work__State, /* Sequence#0: State */
&type_parser_work__State, /* SimpleCollection#0: State */
&type_array__NativeArrayparser_work__State, /* NativeArray[Array#0]: NativeArray[State] */
&type_array__Arrayparser_work__State, /* Array[Array#0]: Array[State] */
&type_array__NativeArrayparser_work__State, /* NativeArray[ArrayCapable#0]: NativeArray[State] */
&type_parser_work__State, /* RemovableCollection#0: State */
&type_abstract_collection__Collectionparser_work__State, /* Collection[Sequence#0]: Collection[State] */
&type_abstract_collection__Collectionparser_work__State, /* Collection[SimpleCollection#0]: Collection[State] */
&type_parser_work__State, /* Collection#0: State */
&type_abstract_collection__Collectionparser_work__State, /* Collection[Collection#0]: Collection[State] */
&type_parser_work__State, /* SequenceRead#0: State */
&type_parser_work__State, /* AbstractArrayRead#0: State */
&type_array__Arrayparser_work__State, /* Array[AbstractArrayRead#0]: Array[State] */
&type_array__ArrayIteratorparser_work__State, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[State] */
}
};
/* runtime type Collection[State] */
const struct type type_abstract_collection__Collectionparser_work__State = {
621,
"Collection[State]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[State] */
const struct type type_array__AbstractArrayReadparser_work__State = {
1662,
"AbstractArrayRead[State]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Start */
const struct type type_parser_nodes__Start = {
-1, /*CAST DEAD*/
"Start", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
7,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
-1, /* empty */
622, /* ANode */
1328, /* Prod */
1479, /* Start */
},
};
/* runtime type Prod */
const struct type type_parser_nodes__Prod = {
1328,
"Prod", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ANode */
const struct type type_parser_nodes__ANode = {
622,
"ANode", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable ANode */
const struct type type_nullable_parser_nodes__ANode = {
8,
"nullable ANode", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ComputeProdLocationVisitor */
const struct type type_parser_work__ComputeProdLocationVisitor = {
-1, /*CAST DEAD*/
"ComputeProdLocationVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
132, /* ComputeProdLocationVisitor */
},
};
/* runtime type AParserError */
const struct type type_parser_nodes__AParserError = {
-1, /*CAST DEAD*/
"AParserError", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
9,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
-1, /* empty */
622, /* ANode */
1329, /* Token */
1480, /* EOF */
1663, /* AError */
1868, /* AParserError */
},
};
/* runtime type EOF */
const struct type type_parser_nodes__EOF = {
1480,
"EOF", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable ANode */
-1, /* empty */
622, /* ANode */
1329, /* Token */
1480, /* EOF */
},
};
/* runtime type AError */
const struct type type_parser_nodes__AError = {
1663,
"AError", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Token */
const struct type type_parser_nodes__Token = {
1329,
"Token", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ANodes[AImport] */
const struct type type_parser_nodes__ANodesparser_nodes__AImport = {
-1, /*CAST DEAD*/
"ANodes[AImport]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__AImport,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1318, /* Collection[Prod] */
-1, /* empty */
1481, /* Collection[AImport] */
1869, /* ANodes[AImport] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__AImport = {
0, /* dummy */
{
&type_parser_nodes__AImport, /* Sequence#0: AImport */
&type_parser_nodes__AImport, /* SimpleCollection#0: AImport */
&type_array__Arrayparser_nodes__AImport, /* Array[ANodes#0]: Array[AImport] */
&type_parser_nodes__AImport, /* ANodes#0: AImport */
NULL, /* empty */
&type_parser_nodes__AImport, /* RemovableCollection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Sequence#0]: Collection[AImport] */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[SimpleCollection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* Collection#0: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[Collection#0]: Collection[AImport] */
&type_parser_nodes__AImport, /* SequenceRead#0: AImport */
}
};
/* runtime type Collection[AImport] */
const struct type type_abstract_collection__Collectionparser_nodes__AImport = {
1481,
"Collection[AImport]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ANodes[TId] */
const struct type type_parser_nodes__ANodesparser_nodes__TId = {
-1, /*CAST DEAD*/
"ANodes[TId]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__TId,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
601, /* Collection[ANode] */
1330, /* Collection[TId] */
1664, /* ANodes[TId] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__TId = {
0, /* dummy */
{
&type_parser_nodes__TId, /* Sequence#0: TId */
&type_parser_nodes__TId, /* SimpleCollection#0: TId */
&type_array__Arrayparser_nodes__TId, /* Array[ANodes#0]: Array[TId] */
&type_parser_nodes__TId, /* ANodes#0: TId */
NULL, /* empty */
&type_parser_nodes__TId, /* RemovableCollection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Sequence#0]: Collection[TId] */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[SimpleCollection#0]: Collection[TId] */
&type_parser_nodes__TId, /* Collection#0: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[Collection#0]: Collection[TId] */
&type_parser_nodes__TId, /* SequenceRead#0: TId */
}
};
/* runtime type Collection[TId] */
const struct type type_abstract_collection__Collectionparser_nodes__TId = {
1330,
"Collection[TId]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MVisibility */
const struct type type_model_base__MVisibility = {
133,
"MVisibility", /* class_name_string */
2,
0,
&resolution_table_model_base__MVisibility,
3,
{
0, /* nullable Object */
1, /* Object */
133, /* MVisibility */
},
};
const struct types resolution_table_model_base__MVisibility = {
0, /* dummy */
{
&type_model_base__MVisibility, /* OTHER: MVisibility */
}
};
/* runtime type LiteralVisitor */
const struct type type_literal__LiteralVisitor = {
-1, /*CAST DEAD*/
"LiteralVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
134, /* LiteralVisitor */
},
};
/* runtime type HashMap[MClass, MClassType] */
const struct type type_hash_collection__HashMapmodel__MClassmodel__MClassType = {
135,
"HashMap[MClass, MClassType]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
135, /* HashMap[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassmodel__MClassType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
&type_hash_collection__HashMapKeysmodel__MClassmodel__MClassType, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, MClassType] */
&type_hash_collection__HashMapValuesmodel__MClassmodel__MClassType, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, MClassType] */
&type_hash_collection__HashMapIteratormodel__MClassmodel__MClassType, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, MClassType] */
&type_model__MClass, /* Map#0: MClass */
&type_model__MClassType, /* Map#1: MClassType */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, MClassType] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* nullable HashCollection#1: nullable HashMapNode[MClass, MClassType] */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* HashCollection#1: HashMapNode[MClass, MClassType] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type ArrayMap[MClass, AType] */
const struct type type_array__ArrayMapmodel__MClassparser_nodes__AType = {
136,
"ArrayMap[MClass, AType]", /* class_name_string */
2,
0,
&resolution_table_array__ArrayMapmodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
136, /* ArrayMap[MClass, AType] */
},
};
const struct types resolution_table_array__ArrayMapmodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__ArrayMapKeysmodel__MClassparser_nodes__AType, /* ArrayMapKeys[ArrayMap#0, ArrayMap#1]: ArrayMapKeys[MClass, AType] */
&type_array__ArrayMapValuesmodel__MClassparser_nodes__AType, /* ArrayMapValues[ArrayMap#0, ArrayMap#1]: ArrayMapValues[MClass, AType] */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Couple[ArrayMap#0, ArrayMap#1]: Couple[MClass, AType] */
&type_model__MClass, /* MapRead#0: MClass */
&type_model__MClass, /* ArrayMap#0: MClass */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[Couple[ArrayMap#0, ArrayMap#1]]: Array[Couple[MClass, AType]] */
&type_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType, /* CoupleMapIterator[CoupleMap#0, CoupleMap#1]: CoupleMapIterator[MClass, AType] */
NULL, /* empty */
&type_model__MClass, /* Map#0: MClass */
&type_parser_nodes__AType, /* Map#1: AType */
}
};
/* runtime type ScopeVisitor */
const struct type type_scope__ScopeVisitor = {
-1, /*CAST DEAD*/
"ScopeVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
137, /* ScopeVisitor */
},
};
/* runtime type Variable */
const struct type type_scope__Variable = {
623,
"Variable", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
9, /* nullable Variable */
623, /* Variable */
},
};
/* runtime type nullable Variable */
const struct type type_nullable_scope__Variable = {
9,
"nullable Variable", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type List[Scope] */
const struct type type_list__Listscope__Scope = {
1482,
"List[Scope]", /* class_name_string */
6,
0,
&resolution_table_list__Listscope__Scope,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
624, /* Collection[Scope] */
1482, /* List[Scope] */
},
};
const struct types resolution_table_list__Listscope__Scope = {
0, /* dummy */
{
&type_scope__Scope, /* Sequence#0: Scope */
&type_scope__Scope, /* SimpleCollection#0: Scope */
&type_list__ListNodescope__Scope, /* ListNode[List#0]: ListNode[Scope] */
&type_list__ListIteratorscope__Scope, /* ListIterator[List#0]: ListIterator[Scope] */
&type_scope__Scope, /* List#0: Scope */
&type_scope__Scope, /* RemovableCollection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Sequence#0]: Collection[Scope] */
&type_abstract_collection__Collectionscope__Scope, /* Collection[SimpleCollection#0]: Collection[Scope] */
&type_scope__Scope, /* Collection#0: Scope */
&type_abstract_collection__Collectionscope__Scope, /* Collection[Collection#0]: Collection[Scope] */
&type_scope__Scope, /* SequenceRead#0: Scope */
&type_nullable_list__ListNodescope__Scope, /* nullable ListNode[List#0]: nullable ListNode[Scope] */
}
};
/* runtime type Collection[Scope] */
const struct type type_abstract_collection__Collectionscope__Scope = {
624,
"Collection[Scope]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlowVisitor */
const struct type type_flow__FlowVisitor = {
-1, /*CAST DEAD*/
"FlowVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
138, /* FlowVisitor */
},
};
/* runtime type Array[FlowContext] */
const struct type type_array__Arrayflow__FlowContext = {
-1, /*CAST DEAD*/
"Array[FlowContext]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayflow__FlowContext,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
625, /* Collection[FlowContext] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1665, /* AbstractArrayRead[FlowContext] */
1459, /* Array[Object] */
2037, /* Array[FlowContext] */
},
};
const struct types resolution_table_array__Arrayflow__FlowContext = {
0, /* dummy */
{
&type_flow__FlowContext, /* Sequence#0: FlowContext */
&type_flow__FlowContext, /* SimpleCollection#0: FlowContext */
&type_array__NativeArrayflow__FlowContext, /* NativeArray[Array#0]: NativeArray[FlowContext] */
&type_array__Arrayflow__FlowContext, /* Array[Array#0]: Array[FlowContext] */
&type_array__NativeArrayflow__FlowContext, /* NativeArray[ArrayCapable#0]: NativeArray[FlowContext] */
&type_flow__FlowContext, /* RemovableCollection#0: FlowContext */
&type_abstract_collection__Collectionflow__FlowContext, /* Collection[Sequence#0]: Collection[FlowContext] */
&type_abstract_collection__Collectionflow__FlowContext, /* Collection[SimpleCollection#0]: Collection[FlowContext] */
&type_flow__FlowContext, /* Collection#0: FlowContext */
&type_abstract_collection__Collectionflow__FlowContext, /* Collection[Collection#0]: Collection[FlowContext] */
&type_flow__FlowContext, /* SequenceRead#0: FlowContext */
&type_flow__FlowContext, /* AbstractArrayRead#0: FlowContext */
&type_array__Arrayflow__FlowContext, /* Array[AbstractArrayRead#0]: Array[FlowContext] */
&type_array__ArrayIteratorflow__FlowContext, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[FlowContext] */
}
};
/* runtime type Collection[FlowContext] */
const struct type type_abstract_collection__Collectionflow__FlowContext = {
625,
"Collection[FlowContext]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[FlowContext] */
const struct type type_array__AbstractArrayReadflow__FlowContext = {
1665,
"AbstractArrayRead[FlowContext]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type LocalVarInitVisitor */
const struct type type_local_var_init__LocalVarInitVisitor = {
-1, /*CAST DEAD*/
"LocalVarInitVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
139, /* LocalVarInitVisitor */
},
};
/* runtime type HashSet[Variable] */
const struct type type_hash_collection__HashSetscope__Variable = {
1666,
"HashSet[Variable]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetscope__Variable,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
626, /* Collection[Variable] */
-1, /* empty */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1666, /* HashSet[Variable] */
},
};
const struct types resolution_table_hash_collection__HashSetscope__Variable = {
0, /* dummy */
{
&type_hash_collection__HashSetNodescope__Variable, /* HashSetNode[HashSet#0]: HashSetNode[Variable] */
&type_scope__Variable, /* SimpleCollection#0: Variable */
&type_hash_collection__HashSetIteratorscope__Variable, /* HashSetIterator[HashSet#0]: HashSetIterator[Variable] */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Set#0]: Collection[Variable] */
&type_array__NativeArraynullable_hash_collection__HashSetNodescope__Variable, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[Variable]] */
&type_scope__Variable, /* RemovableCollection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[HashSet#0]: Collection[Variable] */
&type_abstract_collection__Collectionscope__Variable, /* Collection[SimpleCollection#0]: Collection[Variable] */
&type_scope__Variable, /* Collection#0: Variable */
&type_abstract_collection__Collectionscope__Variable, /* Collection[Collection#0]: Collection[Variable] */
NULL, /* empty */
&type_scope__Variable, /* HashCollection#0: Variable */
&type_nullable_hash_collection__HashSetNodescope__Variable, /* nullable HashCollection#1: nullable HashSetNode[Variable] */
&type_hash_collection__HashSetNodescope__Variable, /* HashCollection#1: HashSetNode[Variable] */
&type_nullable_scope__Variable, /* nullable HashCollection#0: nullable Variable */
}
};
/* runtime type Collection[Variable] */
const struct type type_abstract_collection__Collectionscope__Variable = {
626,
"Collection[Variable]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AutoSuperInitVisitor */
const struct type type_auto_super_init__AutoSuperInitVisitor = {
-1, /*CAST DEAD*/
"AutoSuperInitVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
140, /* AutoSuperInitVisitor */
},
};
/* runtime type Array[CallSite] */
const struct type type_array__Arraytyping__CallSite = {
-1, /*CAST DEAD*/
"Array[CallSite]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraytyping__CallSite,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
615, /* Collection[CallSite] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1667, /* AbstractArrayRead[CallSite] */
1459, /* Array[Object] */
2038, /* Array[CallSite] */
},
};
const struct types resolution_table_array__Arraytyping__CallSite = {
0, /* dummy */
{
&type_typing__CallSite, /* Sequence#0: CallSite */
&type_typing__CallSite, /* SimpleCollection#0: CallSite */
&type_array__NativeArraytyping__CallSite, /* NativeArray[Array#0]: NativeArray[CallSite] */
&type_array__Arraytyping__CallSite, /* Array[Array#0]: Array[CallSite] */
&type_array__NativeArraytyping__CallSite, /* NativeArray[ArrayCapable#0]: NativeArray[CallSite] */
&type_typing__CallSite, /* RemovableCollection#0: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[Sequence#0]: Collection[CallSite] */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[SimpleCollection#0]: Collection[CallSite] */
&type_typing__CallSite, /* Collection#0: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[Collection#0]: Collection[CallSite] */
&type_typing__CallSite, /* SequenceRead#0: CallSite */
&type_typing__CallSite, /* AbstractArrayRead#0: CallSite */
&type_array__Arraytyping__CallSite, /* Array[AbstractArrayRead#0]: Array[CallSite] */
&type_array__ArrayIteratortyping__CallSite, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[CallSite] */
}
};
/* runtime type AbstractArrayRead[CallSite] */
const struct type type_array__AbstractArrayReadtyping__CallSite = {
1667,
"AbstractArrayRead[CallSite]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type CallSite */
const struct type type_typing__CallSite = {
627,
"CallSite", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
10, /* nullable CallSite */
627, /* CallSite */
},
};
/* runtime type nullable CallSite */
const struct type type_nullable_typing__CallSite = {
10,
"nullable CallSite", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ASTBuilder */
const struct type type_astbuilder__ASTBuilder = {
-1, /*CAST DEAD*/
"ASTBuilder", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
141, /* ASTBuilder */
},
};
/* runtime type RapidTypeVisitor */
const struct type type_rapid_type_analysis__RapidTypeVisitor = {
-1, /*CAST DEAD*/
"RapidTypeVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
142, /* RapidTypeVisitor */
},
};
/* runtime type Array[MType] */
const struct type type_array__Arraymodel__MType = {
2165,
"Array[MType]", /* class_name_string */
15,
0,
&resolution_table_array__Arraymodel__MType,
16,
{
0, /* nullable Object */
1, /* Object */
11, /* nullable Array[nullable MType] */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
1294, /* AbstractArrayRead[Object] */
1331, /* AbstractArrayRead[nullable MType] */
1459, /* Array[Object] */
-1, /* empty */
1668, /* Array[nullable MType] */
-1, /* empty */
2039, /* AbstractArrayRead[MType] */
-1, /* empty */
2165, /* Array[MType] */
},
};
const struct types resolution_table_array__Arraymodel__MType = {
0, /* dummy */
{
&type_model__MType, /* Sequence#0: MType */
&type_model__MType, /* SimpleCollection#0: MType */
&type_array__NativeArraymodel__MType, /* NativeArray[Array#0]: NativeArray[MType] */
&type_array__Arraymodel__MType, /* Array[Array#0]: Array[MType] */
&type_array__NativeArraymodel__MType, /* NativeArray[ArrayCapable#0]: NativeArray[MType] */
&type_model__MType, /* RemovableCollection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Sequence#0]: Collection[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[SimpleCollection#0]: Collection[MType] */
&type_model__MType, /* Collection#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[Collection#0]: Collection[MType] */
&type_model__MType, /* SequenceRead#0: MType */
&type_model__MType, /* AbstractArrayRead#0: MType */
&type_array__Arraymodel__MType, /* Array[AbstractArrayRead#0]: Array[MType] */
&type_array__ArrayIteratormodel__MType, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[MType] */
}
};
/* runtime type Array[nullable MType] */
const struct type type_array__Arraynullable_model__MType = {
1668,
"Array[nullable MType]", /* class_name_string */
11,
0,
&resolution_table_array__Arraynullable_model__MType,
12,
{
0, /* nullable Object */
1, /* Object */
11, /* nullable Array[nullable MType] */
83, /* SequenceRead[nullable Object] */
-1, /* empty */
93, /* Collection[nullable MType] */
-1, /* empty */
-1, /* empty */
1331, /* AbstractArrayRead[nullable MType] */
-1, /* empty */
-1, /* empty */
1668, /* Array[nullable MType] */
},
};
const struct types resolution_table_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_nullable_model__MType, /* Sequence#0: nullable MType */
&type_nullable_model__MType, /* SimpleCollection#0: nullable MType */
&type_array__NativeArraynullable_model__MType, /* NativeArray[Array#0]: NativeArray[nullable MType] */
&type_array__Arraynullable_model__MType, /* Array[Array#0]: Array[nullable MType] */
&type_array__NativeArraynullable_model__MType, /* NativeArray[ArrayCapable#0]: NativeArray[nullable MType] */
&type_nullable_model__MType, /* RemovableCollection#0: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[Sequence#0]: Collection[nullable MType] */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[SimpleCollection#0]: Collection[nullable MType] */
&type_nullable_model__MType, /* Collection#0: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[Collection#0]: Collection[nullable MType] */
&type_nullable_model__MType, /* SequenceRead#0: nullable MType */
&type_nullable_model__MType, /* AbstractArrayRead#0: nullable MType */
&type_array__Arraynullable_model__MType, /* Array[AbstractArrayRead#0]: Array[nullable MType] */
&type_array__ArrayIteratornullable_model__MType, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[nullable MType] */
}
};
/* runtime type nullable Array[nullable MType] */
const struct type type_nullable_array__Arraynullable_model__MType = {
11,
"nullable Array[nullable MType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MType] */
const struct type type_array__AbstractArrayReadmodel__MType = {
2039,
"AbstractArrayRead[MType]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MType] */
const struct type type_array__AbstractArrayReadnullable_model__MType = {
1331,
"AbstractArrayRead[nullable MType]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type List[MClassType] */
const struct type type_list__Listmodel__MClassType = {
1870,
"List[MClassType]", /* class_name_string */
11,
0,
&resolution_table_list__Listmodel__MClassType,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
93, /* Collection[nullable MType] */
1316, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1464, /* Collection[MClassType] */
1870, /* List[MClassType] */
},
};
const struct types resolution_table_list__Listmodel__MClassType = {
0, /* dummy */
{
&type_model__MClassType, /* Sequence#0: MClassType */
&type_model__MClassType, /* SimpleCollection#0: MClassType */
&type_list__ListNodemodel__MClassType, /* ListNode[List#0]: ListNode[MClassType] */
&type_list__ListIteratormodel__MClassType, /* ListIterator[List#0]: ListIterator[MClassType] */
&type_model__MClassType, /* List#0: MClassType */
&type_model__MClassType, /* RemovableCollection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Sequence#0]: Collection[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[SimpleCollection#0]: Collection[MClassType] */
&type_model__MClassType, /* Collection#0: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[Collection#0]: Collection[MClassType] */
&type_model__MClassType, /* SequenceRead#0: MClassType */
&type_nullable_list__ListNodemodel__MClassType, /* nullable ListNode[List#0]: nullable ListNode[MClassType] */
}
};
/* runtime type HashMap[String, Int] */
const struct type type_hash_collection__HashMapstring__Stringkernel__Int = {
143,
"HashMap[String, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringkernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
143, /* HashMap[String, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringkernel__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_string__String, /* MapRead#0: String */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[String, Int]] */
&type_hash_collection__HashMapKeysstring__Stringkernel__Int, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[String, Int] */
&type_hash_collection__HashMapValuesstring__Stringkernel__Int, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[String, Int] */
&type_hash_collection__HashMapIteratorstring__Stringkernel__Int, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[String, Int] */
&type_string__String, /* Map#0: String */
&type_kernel__Int, /* Map#1: Int */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[String, Int] */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* nullable HashCollection#1: nullable HashMapNode[String, Int] */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* HashCollection#1: HashMapNode[String, Int] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type CodeWriter */
const struct type type_abstract_compiler__CodeWriter = {
144,
"CodeWriter", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
144, /* CodeWriter */
},
};
/* runtime type List[String] */
const struct type type_list__Liststring__String = {
1669,
"List[String]", /* class_name_string */
7,
0,
&resolution_table_list__Liststring__String,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
1669, /* List[String] */
},
};
const struct types resolution_table_list__Liststring__String = {
0, /* dummy */
{
&type_string__String, /* Sequence#0: String */
&type_string__String, /* SimpleCollection#0: String */
&type_list__ListNodestring__String, /* ListNode[List#0]: ListNode[String] */
&type_list__ListIteratorstring__String, /* ListIterator[List#0]: ListIterator[String] */
&type_string__String, /* List#0: String */
&type_string__String, /* RemovableCollection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Sequence#0]: Collection[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[SimpleCollection#0]: Collection[String] */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
&type_string__String, /* SequenceRead#0: String */
&type_nullable_list__ListNodestring__String, /* nullable ListNode[List#0]: nullable ListNode[String] */
}
};
/* runtime type CodeFile */
const struct type type_abstract_compiler__CodeFile = {
145,
"CodeFile", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
145, /* CodeFile */
},
};
/* runtime type Array[CodeWriter] */
const struct type type_array__Arrayabstract_compiler__CodeWriter = {
-1, /*CAST DEAD*/
"Array[CodeWriter]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_compiler__CodeWriter,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
628, /* Collection[CodeWriter] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1670, /* AbstractArrayRead[CodeWriter] */
1459, /* Array[Object] */
2040, /* Array[CodeWriter] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_abstract_compiler__CodeWriter, /* Sequence#0: CodeWriter */
&type_abstract_compiler__CodeWriter, /* SimpleCollection#0: CodeWriter */
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[Array#0]: NativeArray[CodeWriter] */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[Array#0]: Array[CodeWriter] */
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[ArrayCapable#0]: NativeArray[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* RemovableCollection#0: CodeWriter */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[Sequence#0]: Collection[CodeWriter] */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[SimpleCollection#0]: Collection[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* Collection#0: CodeWriter */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[Collection#0]: Collection[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* SequenceRead#0: CodeWriter */
&type_abstract_compiler__CodeWriter, /* AbstractArrayRead#0: CodeWriter */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[AbstractArrayRead#0]: Array[CodeWriter] */
&type_array__ArrayIteratorabstract_compiler__CodeWriter, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[CodeWriter] */
}
};
/* runtime type Collection[CodeWriter] */
const struct type type_abstract_collection__Collectionabstract_compiler__CodeWriter = {
628,
"Collection[CodeWriter]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[CodeWriter] */
const struct type type_array__AbstractArrayReadabstract_compiler__CodeWriter = {
1670,
"AbstractArrayRead[CodeWriter]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[String] */
const struct type type_hash_collection__HashSetstring__String = {
1871,
"HashSet[String]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetstring__String,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
84, /* Collection[Object] */
587, /* Collection[Streamable] */
1295, /* Collection[String] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1871, /* HashSet[String] */
},
};
const struct types resolution_table_hash_collection__HashSetstring__String = {
0, /* dummy */
{
&type_hash_collection__HashSetNodestring__String, /* HashSetNode[HashSet#0]: HashSetNode[String] */
&type_string__String, /* SimpleCollection#0: String */
&type_hash_collection__HashSetIteratorstring__String, /* HashSetIterator[HashSet#0]: HashSetIterator[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[Set#0]: Collection[String] */
&type_array__NativeArraynullable_hash_collection__HashSetNodestring__String, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[String]] */
&type_string__String, /* RemovableCollection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[HashSet#0]: Collection[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[SimpleCollection#0]: Collection[String] */
&type_string__String, /* Collection#0: String */
&type_abstract_collection__Collectionstring__String, /* Collection[Collection#0]: Collection[String] */
NULL, /* empty */
&type_string__String, /* HashCollection#0: String */
&type_nullable_hash_collection__HashSetNodestring__String, /* nullable HashCollection#1: nullable HashSetNode[String] */
&type_hash_collection__HashSetNodestring__String, /* HashCollection#1: HashSetNode[String] */
&type_nullable_string__String, /* nullable HashCollection#0: nullable String */
}
};
/* runtime type POSetColorer[MClass] */
const struct type type_coloring__POSetColorermodel__MClass = {
-1, /*CAST DEAD*/
"POSetColorer[MClass]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_coloring__POSetColorermodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
146, /* POSetColorer[MClass] */
},
};
const struct types resolution_table_coloring__POSetColorermodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[POSetColorer#0, Int]: HashMap[MClass, Int] */
&type_poset__POSetmodel__MClass, /* POSet[POSetColorer#0]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[POSetColorer#0, Set[POSetColorer#0]]: Map[MClass, Set[MClass]] */
&type_coloring__POSetConflictGraphmodel__MClass, /* POSetConflictGraph[POSetColorer#0]: POSetConflictGraph[MClass] */
&type_hash_collection__HashSetmodel__MClass, /* HashSet[POSetColorer#0]: HashSet[MClass] */
&type_abstract_collection__Setmodel__MClass, /* Set[POSetColorer#0]: Set[MClass] */
&type_model__MClass, /* POSetColorer#0: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[POSetColorer#0]: Collection[MClass] */
}
};
/* runtime type HashMap[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute = {
1671,
"HashMap[MClass, Set[MAttribute]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute,
7,
{
0, /* nullable Object */
1, /* Object */
106, /* Map[MClass, Set[PropertyLayoutElement]] */
609, /* HashMap[MClass, Set[PropertyLayoutElement]] */
629, /* Map[MClass, Set[MAttribute]] */
1322, /* HashMap[MClass, Set[MProperty]] */
1671, /* HashMap[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[MAttribute]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[MAttribute]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[MAttribute]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* Map#1: Set[MAttribute] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[MAttribute]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* nullable HashCollection#1: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* HashCollection#1: HashMapNode[MClass, Set[MAttribute]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MAttribute = {
629,
"Map[MClass, Set[MAttribute]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MAttribute] */
const struct type type_hash_collection__HashSetmodel__MAttribute = {
2178,
"HashSet[MAttribute]", /* class_name_string */
16,
0,
&resolution_table_hash_collection__HashSetmodel__MAttribute,
17,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
1462, /* Collection[MProperty] */
1672, /* Collection[MAttribute] */
1867, /* HashSet[PropertyLayoutElement] */
2032, /* Set[MProperty] */
2121, /* Set[MAttribute] */
2148, /* HashSet[MProperty] */
2178, /* HashSet[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MAttribute, /* HashSetNode[HashSet#0]: HashSetNode[MAttribute] */
&type_model__MAttribute, /* SimpleCollection#0: MAttribute */
&type_hash_collection__HashSetIteratormodel__MAttribute, /* HashSetIterator[HashSet#0]: HashSetIterator[MAttribute] */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[Set#0]: Collection[MAttribute] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MAttribute]] */
&type_model__MAttribute, /* RemovableCollection#0: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[HashSet#0]: Collection[MAttribute] */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[SimpleCollection#0]: Collection[MAttribute] */
&type_model__MAttribute, /* Collection#0: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[Collection#0]: Collection[MAttribute] */
NULL, /* empty */
&type_model__MAttribute, /* HashCollection#0: MAttribute */
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* nullable HashCollection#1: nullable HashSetNode[MAttribute] */
&type_hash_collection__HashSetNodemodel__MAttribute, /* HashCollection#1: HashSetNode[MAttribute] */
&type_nullable_model__MAttribute, /* nullable HashCollection#0: nullable MAttribute */
}
};
/* runtime type Set[MAttribute] */
const struct type type_abstract_collection__Setmodel__MAttribute = {
2121,
"Set[MAttribute]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MAttribute] */
const struct type type_abstract_collection__Collectionmodel__MAttribute = {
1672,
"Collection[MAttribute]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSetBucketsColorer[MClass, PropertyLayoutElement] */
const struct type type_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"POSetBucketsColorer[MClass, PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement,
3,
{
0, /* nullable Object */
1, /* Object */
147, /* POSetBucketsColorer[MClass, PropertyLayoutElement] */
},
};
const struct types resolution_table_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMap[POSetBucketsColorer#1, Int]: HashMap[PropertyLayoutElement, Int] */
&type_poset__POSetmodel__MClass, /* POSet[POSetBucketsColorer#0]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]: Map[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[POSetBucketsColorer#0]: Collection[MClass] */
&type_model__MClass, /* POSetBucketsColorer#0: MClass */
}
};
/* runtime type POSetBucketsColorer[MClass, MAttribute] */
const struct type type_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute = {
-1, /*CAST DEAD*/
"POSetBucketsColorer[MClass, MAttribute]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute,
4,
{
0, /* nullable Object */
1, /* Object */
147, /* POSetBucketsColorer[MClass, PropertyLayoutElement] */
630, /* POSetBucketsColorer[MClass, MAttribute] */
},
};
const struct types resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[POSetBucketsColorer#1, Int]: HashMap[MAttribute, Int] */
&type_poset__POSetmodel__MClass, /* POSet[POSetBucketsColorer#0]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MAttribute, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]: Map[MClass, Set[MAttribute]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[POSetBucketsColorer#0]: Collection[MClass] */
&type_model__MClass, /* POSetBucketsColorer#0: MClass */
}
};
/* runtime type MClassKind */
const struct type type_model__MClassKind = {
-1, /*CAST DEAD*/
"MClassKind", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
148, /* MClassKind */
},
};
/* runtime type Array[RuntimeVariable] */
const struct type type_array__Arrayabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"Array[RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_compiler__RuntimeVariable,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
631, /* Collection[RuntimeVariable] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1673, /* AbstractArrayRead[RuntimeVariable] */
1459, /* Array[Object] */
2041, /* Array[RuntimeVariable] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_abstract_compiler__RuntimeVariable, /* Sequence#0: RuntimeVariable */
&type_abstract_compiler__RuntimeVariable, /* SimpleCollection#0: RuntimeVariable */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[Array#0]: NativeArray[RuntimeVariable] */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[Array#0]: Array[RuntimeVariable] */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[ArrayCapable#0]: NativeArray[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* RemovableCollection#0: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[Sequence#0]: Collection[RuntimeVariable] */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[SimpleCollection#0]: Collection[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* Collection#0: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[Collection#0]: Collection[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* SequenceRead#0: RuntimeVariable */
&type_abstract_compiler__RuntimeVariable, /* AbstractArrayRead#0: RuntimeVariable */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[AbstractArrayRead#0]: Array[RuntimeVariable] */
&type_array__ArrayIteratorabstract_compiler__RuntimeVariable, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[RuntimeVariable] */
}
};
/* runtime type Collection[RuntimeVariable] */
const struct type type_abstract_collection__Collectionabstract_compiler__RuntimeVariable = {
631,
"Collection[RuntimeVariable]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[RuntimeVariable] */
const struct type type_array__AbstractArrayReadabstract_compiler__RuntimeVariable = {
1673,
"AbstractArrayRead[RuntimeVariable]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSetColorer[MType] */
const struct type type_coloring__POSetColorermodel__MType = {
-1, /*CAST DEAD*/
"POSetColorer[MType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_coloring__POSetColorermodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
149, /* POSetColorer[MType] */
},
};
const struct types resolution_table_coloring__POSetColorermodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[POSetColorer#0, Int]: HashMap[MType, Int] */
&type_poset__POSetmodel__MType, /* POSet[POSetColorer#0]: POSet[MType] */
&type_abstract_collection__Mapmodel__MTypeabstract_collection__Setmodel__MType, /* Map[POSetColorer#0, Set[POSetColorer#0]]: Map[MType, Set[MType]] */
&type_coloring__POSetConflictGraphmodel__MType, /* POSetConflictGraph[POSetColorer#0]: POSetConflictGraph[MType] */
&type_hash_collection__HashSetmodel__MType, /* HashSet[POSetColorer#0]: HashSet[MType] */
&type_abstract_collection__Setmodel__MType, /* Set[POSetColorer#0]: Set[MType] */
&type_model__MType, /* POSetColorer#0: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[POSetColorer#0]: Collection[MType] */
}
};
/* runtime type SeparateCompilerVisitor */
const struct type type_separate_compiler__SeparateCompilerVisitor = {
632,
"SeparateCompilerVisitor", /* class_name_string */
3,
0,
&resolution_table_separate_compiler__SeparateCompilerVisitor,
4,
{
0, /* nullable Object */
1, /* Object */
150, /* AbstractCompilerVisitor */
632, /* SeparateCompilerVisitor */
},
};
const struct types resolution_table_separate_compiler__SeparateCompilerVisitor = {
0, /* dummy */
{
&type_separate_compiler__SeparateCompiler, /* COMPILER: SeparateCompiler */
}
};
/* runtime type AbstractCompilerVisitor */
const struct type type_abstract_compiler__AbstractCompilerVisitor = {
150,
"AbstractCompilerVisitor", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[EscapeMark, String] */
const struct type type_hash_collection__HashMapscope__EscapeMarkstring__String = {
151,
"HashMap[EscapeMark, String]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapscope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
151, /* HashMap[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapscope__EscapeMarkstring__String = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__EscapeMark, /* MapRead#0: EscapeMark */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
&type_hash_collection__HashMapKeysscope__EscapeMarkstring__String, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[EscapeMark, String] */
&type_hash_collection__HashMapValuesscope__EscapeMarkstring__String, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[EscapeMark, String] */
&type_hash_collection__HashMapIteratorscope__EscapeMarkstring__String, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[EscapeMark, String] */
&type_scope__EscapeMark, /* Map#0: EscapeMark */
&type_string__String, /* Map#1: String */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[EscapeMark, String] */
&type_scope__EscapeMark, /* HashCollection#0: EscapeMark */
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* nullable HashCollection#1: nullable HashMapNode[EscapeMark, String] */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* HashCollection#1: HashMapNode[EscapeMark, String] */
&type_nullable_scope__EscapeMark, /* nullable HashCollection#0: nullable EscapeMark */
}
};
/* runtime type HashMap[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable = {
152,
"HashMap[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
152, /* HashMap[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_scope__Variable, /* MapRead#0: Variable */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
&type_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[Variable, RuntimeVariable] */
&type_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[Variable, RuntimeVariable] */
&type_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[Variable, RuntimeVariable] */
&type_scope__Variable, /* Map#0: Variable */
&type_abstract_compiler__RuntimeVariable, /* Map#1: RuntimeVariable */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[Variable, RuntimeVariable] */
&type_scope__Variable, /* HashCollection#0: Variable */
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* nullable HashCollection#1: nullable HashMapNode[Variable, RuntimeVariable] */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* HashCollection#1: HashMapNode[Variable, RuntimeVariable] */
&type_nullable_scope__Variable, /* nullable HashCollection#0: nullable Variable */
}
};
/* runtime type MakefileToolchain */
const struct type type_abstract_compiler__MakefileToolchain = {
-1, /*CAST DEAD*/
"MakefileToolchain", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
153, /* MakefileToolchain */
},
};
/* runtime type HashMap[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1674,
"HashMap[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
7,
{
0, /* nullable Object */
1, /* Object */
106, /* Map[MClass, Set[PropertyLayoutElement]] */
609, /* HashMap[MClass, Set[PropertyLayoutElement]] */
633, /* Map[MClass, Set[MVirtualTypeProp]] */
1322, /* HashMap[MClass, Set[MProperty]] */
1674, /* HashMap[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_model__MClass, /* MapRead#0: MClass */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapKeys[HashMap#0, HashMap#1]: HashMapKeys[MClass, Set[MVirtualTypeProp]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapValues[HashMap#0, HashMap#1]: HashMapValues[MClass, Set[MVirtualTypeProp]] */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapIterator[HashMap#0, HashMap#1]: HashMapIterator[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* Map#0: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* Map#1: Set[MVirtualTypeProp] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode[HashMap#0, HashMap#1]: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* HashCollection#0: MClass */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* nullable HashCollection#1: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashCollection#1: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_nullable_model__MClass, /* nullable HashCollection#0: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
633,
"Map[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetmodel__MVirtualTypeProp = {
2179,
"HashSet[MVirtualTypeProp]", /* class_name_string */
16,
0,
&resolution_table_hash_collection__HashSetmodel__MVirtualTypeProp,
17,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
-1, /* empty */
84, /* Collection[Object] */
-1, /* empty */
596, /* Collection[PropertyLayoutElement] */
607, /* Set[Object] */
1321, /* HashSet[Object] */
1476, /* Set[PropertyLayoutElement] */
1462, /* Collection[MProperty] */
1675, /* Collection[MVirtualTypeProp] */
1867, /* HashSet[PropertyLayoutElement] */
2032, /* Set[MProperty] */
2122, /* Set[MVirtualTypeProp] */
2148, /* HashSet[MProperty] */
2179, /* HashSet[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* HashSetNode[HashSet#0]: HashSetNode[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* SimpleCollection#0: MVirtualTypeProp */
&type_hash_collection__HashSetIteratormodel__MVirtualTypeProp, /* HashSetIterator[HashSet#0]: HashSetIterator[MVirtualTypeProp] */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[Set#0]: Collection[MVirtualTypeProp] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray[ArrayCapable#0]: NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
&type_model__MVirtualTypeProp, /* RemovableCollection#0: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[HashSet#0]: Collection[MVirtualTypeProp] */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[SimpleCollection#0]: Collection[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* Collection#0: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[Collection#0]: Collection[MVirtualTypeProp] */
NULL, /* empty */
&type_model__MVirtualTypeProp, /* HashCollection#0: MVirtualTypeProp */
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* nullable HashCollection#1: nullable HashSetNode[MVirtualTypeProp] */
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* HashCollection#1: HashSetNode[MVirtualTypeProp] */
&type_nullable_model__MVirtualTypeProp, /* nullable HashCollection#0: nullable MVirtualTypeProp */
}
};
/* runtime type Set[MVirtualTypeProp] */
const struct type type_abstract_collection__Setmodel__MVirtualTypeProp = {
2122,
"Set[MVirtualTypeProp]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MVirtualTypeProp] */
const struct type type_abstract_collection__Collectionmodel__MVirtualTypeProp = {
1675,
"Collection[MVirtualTypeProp]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSetBucketsColorer[MClass, MVirtualTypeProp] */
const struct type type_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp = {
-1, /*CAST DEAD*/
"POSetBucketsColorer[MClass, MVirtualTypeProp]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp,
4,
{
0, /* nullable Object */
1, /* Object */
147, /* POSetBucketsColorer[MClass, PropertyLayoutElement] */
634, /* POSetBucketsColorer[MClass, MVirtualTypeProp] */
},
};
const struct types resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[POSetBucketsColorer#1, Int]: HashMap[MVirtualTypeProp, Int] */
&type_poset__POSetmodel__MClass, /* POSet[POSetBucketsColorer#0]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]: Map[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[POSetBucketsColorer#0]: Collection[MClass] */
&type_model__MClass, /* POSetBucketsColorer#0: MClass */
}
};
/* runtime type BashCompletion */
const struct type type_toolcontext__BashCompletion = {
-1, /*CAST DEAD*/
"BashCompletion", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
104, /* Streamable */
635, /* BashCompletion */
},
};
/* runtime type Array[ReduceAction] */
const struct type type_array__Arrayparser_work__ReduceAction = {
-1, /*CAST DEAD*/
"Array[ReduceAction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_work__ReduceAction,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
83, /* SequenceRead[nullable Object] */
84, /* Collection[Object] */
636, /* Collection[ReduceAction] */
-1, /* empty */
1294, /* AbstractArrayRead[Object] */
1676, /* AbstractArrayRead[ReduceAction] */
1459, /* Array[Object] */
2042, /* Array[ReduceAction] */
},
};
const struct types resolution_table_array__Arrayparser_work__ReduceAction = {
0, /* dummy */
{
&type_parser_work__ReduceAction, /* Sequence#0: ReduceAction */
&type_parser_work__ReduceAction, /* SimpleCollection#0: ReduceAction */
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[Array#0]: NativeArray[ReduceAction] */
&type_array__Arrayparser_work__ReduceAction, /* Array[Array#0]: Array[ReduceAction] */
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[ArrayCapable#0]: NativeArray[ReduceAction] */
&type_parser_work__ReduceAction, /* RemovableCollection#0: ReduceAction */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[Sequence#0]: Collection[ReduceAction] */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[SimpleCollection#0]: Collection[ReduceAction] */
&type_parser_work__ReduceAction, /* Collection#0: ReduceAction */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[Collection#0]: Collection[ReduceAction] */
&type_parser_work__ReduceAction, /* SequenceRead#0: ReduceAction */
&type_parser_work__ReduceAction, /* AbstractArrayRead#0: ReduceAction */
&type_array__Arrayparser_work__ReduceAction, /* Array[AbstractArrayRead#0]: Array[ReduceAction] */
&type_array__ArrayIteratorparser_work__ReduceAction, /* ArrayIterator[AbstractArrayRead#0]: ArrayIterator[ReduceAction] */
}
};
/* runtime type Collection[ReduceAction] */
const struct type type_abstract_collection__Collectionparser_work__ReduceAction = {
636,
"Collection[ReduceAction]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ReduceAction] */
const struct type type_array__AbstractArrayReadparser_work__ReduceAction = {
1676,
"AbstractArrayRead[ReduceAction]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ReduceAction0 */
const struct type type_parser__ReduceAction0 = {
-1, /*CAST DEAD*/
"ReduceAction0", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
637, /* ReduceAction0 */
},
};
/* runtime type ReduceAction */
const struct type type_parser_work__ReduceAction = {
154,
"ReduceAction", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ReduceAction1 */
const struct type type_parser__ReduceAction1 = {
-1, /*CAST DEAD*/
"ReduceAction1", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
638, /* ReduceAction1 */
},
};
/* runtime type ReduceAction2 */
const struct type type_parser__ReduceAction2 = {
-1, /*CAST DEAD*/
"ReduceAction2", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
639, /* ReduceAction2 */
},
};
/* runtime type ReduceAction3 */
const struct type type_parser__ReduceAction3 = {
-1, /*CAST DEAD*/
"ReduceAction3", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
640, /* ReduceAction3 */
},
};
/* runtime type ReduceAction4 */
const struct type type_parser__ReduceAction4 = {
-1, /*CAST DEAD*/
"ReduceAction4", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
641, /* ReduceAction4 */
},
};
/* runtime type ReduceAction5 */
const struct type type_parser__ReduceAction5 = {
-1, /*CAST DEAD*/
"ReduceAction5", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
642, /* ReduceAction5 */
},
};
/* runtime type ReduceAction6 */
const struct type type_parser__ReduceAction6 = {
-1, /*CAST DEAD*/
"ReduceAction6", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
643, /* ReduceAction6 */
},
};
/* runtime type ReduceAction7 */
const struct type type_parser__ReduceAction7 = {
-1, /*CAST DEAD*/
"ReduceAction7", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
644, /* ReduceAction7 */
},
};
/* runtime type ReduceAction8 */
const struct type type_parser__ReduceAction8 = {
-1, /*CAST DEAD*/
"ReduceAction8", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
645, /* ReduceAction8 */
},
};
/* runtime type ReduceAction9 */
const struct type type_parser__ReduceAction9 = {
-1, /*CAST DEAD*/
"ReduceAction9", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
646, /* ReduceAction9 */
},
};
/* runtime type ReduceAction10 */
const struct type type_parser__ReduceAction10 = {
-1, /*CAST DEAD*/
"ReduceAction10", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
647, /* ReduceAction10 */
},
};
/* runtime type ReduceAction11 */
const struct type type_parser__ReduceAction11 = {
-1, /*CAST DEAD*/
"ReduceAction11", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
648, /* ReduceAction11 */
},
};
/* runtime type ReduceAction12 */
const struct type type_parser__ReduceAction12 = {
-1, /*CAST DEAD*/
"ReduceAction12", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
649, /* ReduceAction12 */
},
};
/* runtime type ReduceAction13 */
const struct type type_parser__ReduceAction13 = {
-1, /*CAST DEAD*/
"ReduceAction13", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
650, /* ReduceAction13 */
},
};
/* runtime type ReduceAction14 */
const struct type type_parser__ReduceAction14 = {
-1, /*CAST DEAD*/
"ReduceAction14", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
651, /* ReduceAction14 */
},
};
/* runtime type ReduceAction15 */
const struct type type_parser__ReduceAction15 = {
-1, /*CAST DEAD*/
"ReduceAction15", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
652, /* ReduceAction15 */
},
};
/* runtime type ReduceAction16 */
const struct type type_parser__ReduceAction16 = {
-1, /*CAST DEAD*/
"ReduceAction16", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
653, /* ReduceAction16 */
},
};
/* runtime type ReduceAction17 */
const struct type type_parser__ReduceAction17 = {
-1, /*CAST DEAD*/
"ReduceAction17", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
654, /* ReduceAction17 */
},
};
/* runtime type ReduceAction18 */
const struct type type_parser__ReduceAction18 = {
-1, /*CAST DEAD*/
"ReduceAction18", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
655, /* ReduceAction18 */
},
};
/* runtime type ReduceAction19 */
const struct type type_parser__ReduceAction19 = {
-1, /*CAST DEAD*/
"ReduceAction19", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
656, /* ReduceAction19 */
},
};
/* runtime type ReduceAction20 */
const struct type type_parser__ReduceAction20 = {
-1, /*CAST DEAD*/
"ReduceAction20", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
657, /* ReduceAction20 */
},
};
/* runtime type ReduceAction21 */
const struct type type_parser__ReduceAction21 = {
-1, /*CAST DEAD*/
"ReduceAction21", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
658, /* ReduceAction21 */
},
};
/* runtime type ReduceAction22 */
const struct type type_parser__ReduceAction22 = {
-1, /*CAST DEAD*/
"ReduceAction22", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
659, /* ReduceAction22 */
},
};
/* runtime type ReduceAction23 */
const struct type type_parser__ReduceAction23 = {
-1, /*CAST DEAD*/
"ReduceAction23", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
660, /* ReduceAction23 */
},
};
/* runtime type ReduceAction24 */
const struct type type_parser__ReduceAction24 = {
-1, /*CAST DEAD*/
"ReduceAction24", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
661, /* ReduceAction24 */
},
};
/* runtime type ReduceAction26 */
const struct type type_parser__ReduceAction26 = {
-1, /*CAST DEAD*/
"ReduceAction26", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
662, /* ReduceAction26 */
},
};
/* runtime type ReduceAction27 */
const struct type type_parser__ReduceAction27 = {
-1, /*CAST DEAD*/
"ReduceAction27", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
663, /* ReduceAction27 */
},
};
/* runtime type ReduceAction28 */
const struct type type_parser__ReduceAction28 = {
-1, /*CAST DEAD*/
"ReduceAction28", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
664, /* ReduceAction28 */
},
};
/* runtime type ReduceAction29 */
const struct type type_parser__ReduceAction29 = {
-1, /*CAST DEAD*/
"ReduceAction29", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
665, /* ReduceAction29 */
},
};
/* runtime type ReduceAction30 */
const struct type type_parser__ReduceAction30 = {
-1, /*CAST DEAD*/
"ReduceAction30", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
666, /* ReduceAction30 */
},
};
/* runtime type ReduceAction31 */
const struct type type_parser__ReduceAction31 = {
-1, /*CAST DEAD*/
"ReduceAction31", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
667, /* ReduceAction31 */
},
};
/* runtime type ReduceAction32 */
const struct type type_parser__ReduceAction32 = {
-1, /*CAST DEAD*/
"ReduceAction32", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
668, /* ReduceAction32 */
},
};
/* runtime type ReduceAction33 */
const struct type type_parser__ReduceAction33 = {
-1, /*CAST DEAD*/
"ReduceAction33", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
669, /* ReduceAction33 */
},
};
/* runtime type ReduceAction34 */
const struct type type_parser__ReduceAction34 = {
-1, /*CAST DEAD*/
"ReduceAction34", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
670, /* ReduceAction34 */
},
};
/* runtime type ReduceAction35 */
const struct type type_parser__ReduceAction35 = {
-1, /*CAST DEAD*/
"ReduceAction35", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
671, /* ReduceAction35 */
},
};
/* runtime type ReduceAction36 */
const struct type type_parser__ReduceAction36 = {
-1, /*CAST DEAD*/
"ReduceAction36", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
672, /* ReduceAction36 */
},
};
/* runtime type ReduceAction37 */
const struct type type_parser__ReduceAction37 = {
-1, /*CAST DEAD*/
"ReduceAction37", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
673, /* ReduceAction37 */
},
};
/* runtime type ReduceAction38 */
const struct type type_parser__ReduceAction38 = {
-1, /*CAST DEAD*/
"ReduceAction38", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
674, /* ReduceAction38 */
},
};
/* runtime type ReduceAction39 */
const struct type type_parser__ReduceAction39 = {
-1, /*CAST DEAD*/
"ReduceAction39", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
675, /* ReduceAction39 */
},
};
/* runtime type ReduceAction40 */
const struct type type_parser__ReduceAction40 = {
-1, /*CAST DEAD*/
"ReduceAction40", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
676, /* ReduceAction40 */
},
};
/* runtime type ReduceAction41 */
const struct type type_parser__ReduceAction41 = {
-1, /*CAST DEAD*/
"ReduceAction41", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
677, /* ReduceAction41 */
},
};
/* runtime type ReduceAction43 */
const struct type type_parser__ReduceAction43 = {
-1, /*CAST DEAD*/
"ReduceAction43", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
678, /* ReduceAction43 */
},
};
/* runtime type ReduceAction44 */
const struct type type_parser__ReduceAction44 = {
-1, /*CAST DEAD*/
"ReduceAction44", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
679, /* ReduceAction44 */
},
};
/* runtime type ReduceAction45 */
const struct type type_parser__ReduceAction45 = {
-1, /*CAST DEAD*/
"ReduceAction45", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
680, /* ReduceAction45 */
},
};
/* runtime type ReduceAction46 */
const struct type type_parser__ReduceAction46 = {
-1, /*CAST DEAD*/
"ReduceAction46", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
681, /* ReduceAction46 */
},
};
/* runtime type ReduceAction47 */
const struct type type_parser__ReduceAction47 = {
-1, /*CAST DEAD*/
"ReduceAction47", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
682, /* ReduceAction47 */
},
};
/* runtime type ReduceAction48 */
const struct type type_parser__ReduceAction48 = {
-1, /*CAST DEAD*/
"ReduceAction48", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
683, /* ReduceAction48 */
},
};
/* runtime type ReduceAction49 */
const struct type type_parser__ReduceAction49 = {
-1, /*CAST DEAD*/
"ReduceAction49", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
684, /* ReduceAction49 */
},
};
/* runtime type ReduceAction50 */
const struct type type_parser__ReduceAction50 = {
-1, /*CAST DEAD*/
"ReduceAction50", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
685, /* ReduceAction50 */
},
};
/* runtime type ReduceAction51 */
const struct type type_parser__ReduceAction51 = {
-1, /*CAST DEAD*/
"ReduceAction51", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
686, /* ReduceAction51 */
},
};
/* runtime type ReduceAction52 */
const struct type type_parser__ReduceAction52 = {
-1, /*CAST DEAD*/
"ReduceAction52", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
687, /* ReduceAction52 */
},
};
/* runtime type ReduceAction53 */
const struct type type_parser__ReduceAction53 = {
-1, /*CAST DEAD*/
"ReduceAction53", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
688, /* ReduceAction53 */
},
};
/* runtime type ReduceAction54 */
const struct type type_parser__ReduceAction54 = {
-1, /*CAST DEAD*/
"ReduceAction54", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
689, /* ReduceAction54 */
},
};
/* runtime type ReduceAction55 */
const struct type type_parser__ReduceAction55 = {
-1, /*CAST DEAD*/
"ReduceAction55", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
690, /* ReduceAction55 */
},
};
/* runtime type ReduceAction56 */
const struct type type_parser__ReduceAction56 = {
-1, /*CAST DEAD*/
"ReduceAction56", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
691, /* ReduceAction56 */
},
};
/* runtime type ReduceAction57 */
const struct type type_parser__ReduceAction57 = {
-1, /*CAST DEAD*/
"ReduceAction57", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
692, /* ReduceAction57 */
},
};
/* runtime type ReduceAction58 */
const struct type type_parser__ReduceAction58 = {
-1, /*CAST DEAD*/
"ReduceAction58", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
693, /* ReduceAction58 */
},
};
/* runtime type ReduceAction59 */
const struct type type_parser__ReduceAction59 = {
-1, /*CAST DEAD*/
"ReduceAction59", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
694, /* ReduceAction59 */
},
};
/* runtime type ReduceAction60 */
const struct type type_parser__ReduceAction60 = {
-1, /*CAST DEAD*/
"ReduceAction60", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
695, /* ReduceAction60 */
},
};
/* runtime type ReduceAction61 */
const struct type type_parser__ReduceAction61 = {
-1, /*CAST DEAD*/
"ReduceAction61", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
696, /* ReduceAction61 */
},
};
/* runtime type ReduceAction62 */
const struct type type_parser__ReduceAction62 = {
-1, /*CAST DEAD*/
"ReduceAction62", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
697, /* ReduceAction62 */
},
};
/* runtime type ReduceAction63 */
const struct type type_parser__ReduceAction63 = {
-1, /*CAST DEAD*/
"ReduceAction63", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
698, /* ReduceAction63 */
},
};
/* runtime type ReduceAction64 */
const struct type type_parser__ReduceAction64 = {
-1, /*CAST DEAD*/
"ReduceAction64", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
699, /* ReduceAction64 */
},
};
/* runtime type ReduceAction65 */
const struct type type_parser__ReduceAction65 = {
-1, /*CAST DEAD*/
"ReduceAction65", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
700, /* ReduceAction65 */
},
};
/* runtime type ReduceAction66 */
const struct type type_parser__ReduceAction66 = {
-1, /*CAST DEAD*/
"ReduceAction66", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
701, /* ReduceAction66 */
},
};
/* runtime type ReduceAction67 */
const struct type type_parser__ReduceAction67 = {
-1, /*CAST DEAD*/
"ReduceAction67", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
702, /* ReduceAction67 */
},
};
/* runtime type ReduceAction68 */
const struct type type_parser__ReduceAction68 = {
-1, /*CAST DEAD*/
"ReduceAction68", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
703, /* ReduceAction68 */
},
};
/* runtime type ReduceAction69 */
const struct type type_parser__ReduceAction69 = {
-1, /*CAST DEAD*/
"ReduceAction69", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
704, /* ReduceAction69 */
},
};
/* runtime type ReduceAction70 */
const struct type type_parser__ReduceAction70 = {
-1, /*CAST DEAD*/
"ReduceAction70", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
705, /* ReduceAction70 */
},
};
/* runtime type ReduceAction71 */
const struct type type_parser__ReduceAction71 = {
-1, /*CAST DEAD*/
"ReduceAction71", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
706, /* ReduceAction71 */
},
};
/* runtime type ReduceAction72 */
const struct type type_parser__ReduceAction72 = {
-1, /*CAST DEAD*/
"ReduceAction72", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
707, /* ReduceAction72 */
},
};
/* runtime type ReduceAction73 */
const struct type type_parser__ReduceAction73 = {
-1, /*CAST DEAD*/
"ReduceAction73", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
708, /* ReduceAction73 */
},
};
/* runtime type ReduceAction74 */
const struct type type_parser__ReduceAction74 = {
-1, /*CAST DEAD*/
"ReduceAction74", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
709, /* ReduceAction74 */
},
};
/* runtime type ReduceAction75 */
const struct type type_parser__ReduceAction75 = {
-1, /*CAST DEAD*/
"ReduceAction75", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
710, /* ReduceAction75 */
},
};
/* runtime type ReduceAction76 */
const struct type type_parser__ReduceAction76 = {
-1, /*CAST DEAD*/
"ReduceAction76", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
711, /* ReduceAction76 */
},
};
/* runtime type ReduceAction77 */
const struct type type_parser__ReduceAction77 = {
-1, /*CAST DEAD*/
"ReduceAction77", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
712, /* ReduceAction77 */
},
};
/* runtime type ReduceAction78 */
const struct type type_parser__ReduceAction78 = {
-1, /*CAST DEAD*/
"ReduceAction78", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
713, /* ReduceAction78 */
},
};
/* runtime type ReduceAction79 */
const struct type type_parser__ReduceAction79 = {
-1, /*CAST DEAD*/
"ReduceAction79", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
714, /* ReduceAction79 */
},
};
/* runtime type ReduceAction80 */
const struct type type_parser__ReduceAction80 = {
-1, /*CAST DEAD*/
"ReduceAction80", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
715, /* ReduceAction80 */
},
};
/* runtime type ReduceAction81 */
const struct type type_parser__ReduceAction81 = {
-1, /*CAST DEAD*/
"ReduceAction81", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
716, /* ReduceAction81 */
},
};
/* runtime type ReduceAction82 */
const struct type type_parser__ReduceAction82 = {
-1, /*CAST DEAD*/
"ReduceAction82", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
717, /* ReduceAction82 */
},
};
/* runtime type ReduceAction83 */
const struct type type_parser__ReduceAction83 = {
-1, /*CAST DEAD*/
"ReduceAction83", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
718, /* ReduceAction83 */
},
};
/* runtime type ReduceAction84 */
const struct type type_parser__ReduceAction84 = {
-1, /*CAST DEAD*/
"ReduceAction84", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
719, /* ReduceAction84 */
},
};
/* runtime type ReduceAction85 */
const struct type type_parser__ReduceAction85 = {
-1, /*CAST DEAD*/
"ReduceAction85", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
720, /* ReduceAction85 */
},
};
/* runtime type ReduceAction86 */
const struct type type_parser__ReduceAction86 = {
-1, /*CAST DEAD*/
"ReduceAction86", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
721, /* ReduceAction86 */
},
};
/* runtime type ReduceAction87 */
const struct type type_parser__ReduceAction87 = {
-1, /*CAST DEAD*/
"ReduceAction87", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
722, /* ReduceAction87 */
},
};
/* runtime type ReduceAction88 */
const struct type type_parser__ReduceAction88 = {
-1, /*CAST DEAD*/
"ReduceAction88", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
723, /* ReduceAction88 */
},
};
/* runtime type ReduceAction89 */
const struct type type_parser__ReduceAction89 = {
-1, /*CAST DEAD*/
"ReduceAction89", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
724, /* ReduceAction89 */
},
};
/* runtime type ReduceAction90 */
const struct type type_parser__ReduceAction90 = {
-1, /*CAST DEAD*/
"ReduceAction90", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
725, /* ReduceAction90 */
},
};
/* runtime type ReduceAction91 */
const struct type type_parser__ReduceAction91 = {
-1, /*CAST DEAD*/
"ReduceAction91", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
726, /* ReduceAction91 */
},
};
/* runtime type ReduceAction94 */
const struct type type_parser__ReduceAction94 = {
-1, /*CAST DEAD*/
"ReduceAction94", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
727, /* ReduceAction94 */
},
};
/* runtime type ReduceAction95 */
const struct type type_parser__ReduceAction95 = {
-1, /*CAST DEAD*/
"ReduceAction95", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
728, /* ReduceAction95 */
},
};
/* runtime type ReduceAction96 */
const struct type type_parser__ReduceAction96 = {
-1, /*CAST DEAD*/
"ReduceAction96", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
729, /* ReduceAction96 */
},
};
/* runtime type ReduceAction97 */
const struct type type_parser__ReduceAction97 = {
-1, /*CAST DEAD*/
"ReduceAction97", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
730, /* ReduceAction97 */
},
};
/* runtime type ReduceAction98 */
const struct type type_parser__ReduceAction98 = {
-1, /*CAST DEAD*/
"ReduceAction98", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
731, /* ReduceAction98 */
},
};
/* runtime type ReduceAction99 */
const struct type type_parser__ReduceAction99 = {
-1, /*CAST DEAD*/
"ReduceAction99", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
732, /* ReduceAction99 */
},
};
/* runtime type ReduceAction100 */
const struct type type_parser__ReduceAction100 = {
-1, /*CAST DEAD*/
"ReduceAction100", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
733, /* ReduceAction100 */
},
};
/* runtime type ReduceAction101 */
const struct type type_parser__ReduceAction101 = {
-1, /*CAST DEAD*/
"ReduceAction101", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
734, /* ReduceAction101 */
},
};
/* runtime type ReduceAction102 */
const struct type type_parser__ReduceAction102 = {
-1, /*CAST DEAD*/
"ReduceAction102", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
735, /* ReduceAction102 */
},
};
/* runtime type ReduceAction103 */
const struct type type_parser__ReduceAction103 = {
-1, /*CAST DEAD*/
"ReduceAction103", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
736, /* ReduceAction103 */
},
};
/* runtime type ReduceAction104 */
const struct type type_parser__ReduceAction104 = {
-1, /*CAST DEAD*/
"ReduceAction104", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
737, /* ReduceAction104 */
},
};
/* runtime type ReduceAction105 */
const struct type type_parser__ReduceAction105 = {
-1, /*CAST DEAD*/
"ReduceAction105", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
738, /* ReduceAction105 */
},
};
/* runtime type ReduceAction106 */
const struct type type_parser__ReduceAction106 = {
-1, /*CAST DEAD*/
"ReduceAction106", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
739, /* ReduceAction106 */
},
};
/* runtime type ReduceAction107 */
const struct type type_parser__ReduceAction107 = {
-1, /*CAST DEAD*/
"ReduceAction107", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
740, /* ReduceAction107 */
},
};
/* runtime type ReduceAction108 */
const struct type type_parser__ReduceAction108 = {
-1, /*CAST DEAD*/
"ReduceAction108", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
741, /* ReduceAction108 */
},
};
/* runtime type ReduceAction109 */
const struct type type_parser__ReduceAction109 = {
-1, /*CAST DEAD*/
"ReduceAction109", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
742, /* ReduceAction109 */
},
};
/* runtime type ReduceAction110 */
const struct type type_parser__ReduceAction110 = {
-1, /*CAST DEAD*/
"ReduceAction110", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
743, /* ReduceAction110 */
},
};
/* runtime type ReduceAction111 */
const struct type type_parser__ReduceAction111 = {
-1, /*CAST DEAD*/
"ReduceAction111", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
744, /* ReduceAction111 */
},
};
/* runtime type ReduceAction112 */
const struct type type_parser__ReduceAction112 = {
-1, /*CAST DEAD*/
"ReduceAction112", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
745, /* ReduceAction112 */
},
};
/* runtime type ReduceAction113 */
const struct type type_parser__ReduceAction113 = {
-1, /*CAST DEAD*/
"ReduceAction113", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
746, /* ReduceAction113 */
},
};
/* runtime type ReduceAction114 */
const struct type type_parser__ReduceAction114 = {
-1, /*CAST DEAD*/
"ReduceAction114", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
747, /* ReduceAction114 */
},
};
/* runtime type ReduceAction115 */
const struct type type_parser__ReduceAction115 = {
-1, /*CAST DEAD*/
"ReduceAction115", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
748, /* ReduceAction115 */
},
};
/* runtime type ReduceAction116 */
const struct type type_parser__ReduceAction116 = {
-1, /*CAST DEAD*/
"ReduceAction116", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
749, /* ReduceAction116 */
},
};
/* runtime type ReduceAction117 */
const struct type type_parser__ReduceAction117 = {
-1, /*CAST DEAD*/
"ReduceAction117", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
750, /* ReduceAction117 */
},
};
/* runtime type ReduceAction118 */
const struct type type_parser__ReduceAction118 = {
-1, /*CAST DEAD*/
"ReduceAction118", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
751, /* ReduceAction118 */
},
};
/* runtime type ReduceAction119 */
const struct type type_parser__ReduceAction119 = {
-1, /*CAST DEAD*/
"ReduceAction119", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
752, /* ReduceAction119 */
},
};
/* runtime type ReduceAction120 */
const struct type type_parser__ReduceAction120 = {
-1, /*CAST DEAD*/
"ReduceAction120", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
753, /* ReduceAction120 */
},
};
/* runtime type ReduceAction121 */
const struct type type_parser__ReduceAction121 = {
-1, /*CAST DEAD*/
"ReduceAction121", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
754, /* ReduceAction121 */
},
};
/* runtime type ReduceAction122 */
const struct type type_parser__ReduceAction122 = {
-1, /*CAST DEAD*/
"ReduceAction122", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
755, /* ReduceAction122 */
},
};
/* runtime type ReduceAction123 */
const struct type type_parser__ReduceAction123 = {
-1, /*CAST DEAD*/
"ReduceAction123", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
756, /* ReduceAction123 */
},
};
/* runtime type ReduceAction124 */
const struct type type_parser__ReduceAction124 = {
-1, /*CAST DEAD*/
"ReduceAction124", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
757, /* ReduceAction124 */
},
};
/* runtime type ReduceAction125 */
const struct type type_parser__ReduceAction125 = {
-1, /*CAST DEAD*/
"ReduceAction125", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
758, /* ReduceAction125 */
},
};
/* runtime type ReduceAction127 */
const struct type type_parser__ReduceAction127 = {
-1, /*CAST DEAD*/
"ReduceAction127", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
759, /* ReduceAction127 */
},
};
/* runtime type ReduceAction128 */
const struct type type_parser__ReduceAction128 = {
-1, /*CAST DEAD*/
"ReduceAction128", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
760, /* ReduceAction128 */
},
};
/* runtime type ReduceAction129 */
const struct type type_parser__ReduceAction129 = {
-1, /*CAST DEAD*/
"ReduceAction129", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
761, /* ReduceAction129 */
},
};
/* runtime type ReduceAction130 */
const struct type type_parser__ReduceAction130 = {
-1, /*CAST DEAD*/
"ReduceAction130", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
762, /* ReduceAction130 */
},
};
/* runtime type ReduceAction131 */
const struct type type_parser__ReduceAction131 = {
-1, /*CAST DEAD*/
"ReduceAction131", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
763, /* ReduceAction131 */
},
};
/* runtime type ReduceAction132 */
const struct type type_parser__ReduceAction132 = {
-1, /*CAST DEAD*/
"ReduceAction132", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
764, /* ReduceAction132 */
},
};
/* runtime type ReduceAction133 */
const struct type type_parser__ReduceAction133 = {
-1, /*CAST DEAD*/
"ReduceAction133", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
765, /* ReduceAction133 */
},
};
/* runtime type ReduceAction134 */
const struct type type_parser__ReduceAction134 = {
-1, /*CAST DEAD*/
"ReduceAction134", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
766, /* ReduceAction134 */
},
};
/* runtime type ReduceAction136 */
const struct type type_parser__ReduceAction136 = {
-1, /*CAST DEAD*/
"ReduceAction136", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
767, /* ReduceAction136 */
},
};
/* runtime type ReduceAction137 */
const struct type type_parser__ReduceAction137 = {
-1, /*CAST DEAD*/
"ReduceAction137", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
768, /* ReduceAction137 */
},
};
/* runtime type ReduceAction139 */
const struct type type_parser__ReduceAction139 = {
-1, /*CAST DEAD*/
"ReduceAction139", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
769, /* ReduceAction139 */
},
};
/* runtime type ReduceAction140 */
const struct type type_parser__ReduceAction140 = {
-1, /*CAST DEAD*/
"ReduceAction140", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
770, /* ReduceAction140 */
},
};
/* runtime type ReduceAction141 */
const struct type type_parser__ReduceAction141 = {
-1, /*CAST DEAD*/
"ReduceAction141", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
771, /* ReduceAction141 */
},
};
/* runtime type ReduceAction142 */
const struct type type_parser__ReduceAction142 = {
-1, /*CAST DEAD*/
"ReduceAction142", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
772, /* ReduceAction142 */
},
};
/* runtime type ReduceAction143 */
const struct type type_parser__ReduceAction143 = {
-1, /*CAST DEAD*/
"ReduceAction143", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
773, /* ReduceAction143 */
},
};
/* runtime type ReduceAction144 */
const struct type type_parser__ReduceAction144 = {
-1, /*CAST DEAD*/
"ReduceAction144", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
774, /* ReduceAction144 */
},
};
/* runtime type ReduceAction145 */
const struct type type_parser__ReduceAction145 = {
-1, /*CAST DEAD*/
"ReduceAction145", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
775, /* ReduceAction145 */
},
};
/* runtime type ReduceAction146 */
const struct type type_parser__ReduceAction146 = {
-1, /*CAST DEAD*/
"ReduceAction146", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
776, /* ReduceAction146 */
},
};
/* runtime type ReduceAction147 */
const struct type type_parser__ReduceAction147 = {
-1, /*CAST DEAD*/
"ReduceAction147", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
777, /* ReduceAction147 */
},
};
/* runtime type ReduceAction148 */
const struct type type_parser__ReduceAction148 = {
-1, /*CAST DEAD*/
"ReduceAction148", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
778, /* ReduceAction148 */
},
};
/* runtime type ReduceAction150 */
const struct type type_parser__ReduceAction150 = {
-1, /*CAST DEAD*/
"ReduceAction150", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
779, /* ReduceAction150 */
},
};
/* runtime type ReduceAction151 */
const struct type type_parser__ReduceAction151 = {
-1, /*CAST DEAD*/
"ReduceAction151", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
780, /* ReduceAction151 */
},
};
/* runtime type ReduceAction152 */
const struct type type_parser__ReduceAction152 = {
-1, /*CAST DEAD*/
"ReduceAction152", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
781, /* ReduceAction152 */
},
};
/* runtime type ReduceAction153 */
const struct type type_parser__ReduceAction153 = {
-1, /*CAST DEAD*/
"ReduceAction153", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
782, /* ReduceAction153 */
},
};
/* runtime type ReduceAction154 */
const struct type type_parser__ReduceAction154 = {
-1, /*CAST DEAD*/
"ReduceAction154", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
783, /* ReduceAction154 */
},
};
/* runtime type ReduceAction156 */
const struct type type_parser__ReduceAction156 = {
-1, /*CAST DEAD*/
"ReduceAction156", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
784, /* ReduceAction156 */
},
};
/* runtime type ReduceAction157 */
const struct type type_parser__ReduceAction157 = {
-1, /*CAST DEAD*/
"ReduceAction157", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
785, /* ReduceAction157 */
},
};
/* runtime type ReduceAction158 */
const struct type type_parser__ReduceAction158 = {
-1, /*CAST DEAD*/
"ReduceAction158", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
786, /* ReduceAction158 */
},
};
/* runtime type ReduceAction159 */
const struct type type_parser__ReduceAction159 = {
-1, /*CAST DEAD*/
"ReduceAction159", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
787, /* ReduceAction159 */
},
};
/* runtime type ReduceAction160 */
const struct type type_parser__ReduceAction160 = {
-1, /*CAST DEAD*/
"ReduceAction160", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
788, /* ReduceAction160 */
},
};
/* runtime type ReduceAction161 */
const struct type type_parser__ReduceAction161 = {
-1, /*CAST DEAD*/
"ReduceAction161", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
789, /* ReduceAction161 */
},
};
/* runtime type ReduceAction162 */
const struct type type_parser__ReduceAction162 = {
-1, /*CAST DEAD*/
"ReduceAction162", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
790, /* ReduceAction162 */
},
};
/* runtime type ReduceAction163 */
const struct type type_parser__ReduceAction163 = {
-1, /*CAST DEAD*/
"ReduceAction163", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
791, /* ReduceAction163 */
},
};
/* runtime type ReduceAction167 */
const struct type type_parser__ReduceAction167 = {
-1, /*CAST DEAD*/
"ReduceAction167", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
792, /* ReduceAction167 */
},
};
/* runtime type ReduceAction168 */
const struct type type_parser__ReduceAction168 = {
-1, /*CAST DEAD*/
"ReduceAction168", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
793, /* ReduceAction168 */
},
};
/* runtime type ReduceAction169 */
const struct type type_parser__ReduceAction169 = {
-1, /*CAST DEAD*/
"ReduceAction169", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
794, /* ReduceAction169 */
},
};
/* runtime type ReduceAction170 */
const struct type type_parser__ReduceAction170 = {
-1, /*CAST DEAD*/
"ReduceAction170", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
795, /* ReduceAction170 */
},
};
/* runtime type ReduceAction171 */
const struct type type_parser__ReduceAction171 = {
-1, /*CAST DEAD*/
"ReduceAction171", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
796, /* ReduceAction171 */
},
};
/* runtime type ReduceAction172 */
const struct type type_parser__ReduceAction172 = {
-1, /*CAST DEAD*/
"ReduceAction172", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
797, /* ReduceAction172 */
},
};
/* runtime type ReduceAction173 */
const struct type type_parser__ReduceAction173 = {
-1, /*CAST DEAD*/
"ReduceAction173", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
798, /* ReduceAction173 */
},
};
/* runtime type ReduceAction174 */
const struct type type_parser__ReduceAction174 = {
-1, /*CAST DEAD*/
"ReduceAction174", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
799, /* ReduceAction174 */
},
};
/* runtime type ReduceAction175 */
const struct type type_parser__ReduceAction175 = {
-1, /*CAST DEAD*/
"ReduceAction175", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
800, /* ReduceAction175 */
},
};
/* runtime type ReduceAction176 */
const struct type type_parser__ReduceAction176 = {
-1, /*CAST DEAD*/
"ReduceAction176", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
801, /* ReduceAction176 */
},
};
/* runtime type ReduceAction180 */
const struct type type_parser__ReduceAction180 = {
-1, /*CAST DEAD*/
"ReduceAction180", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
802, /* ReduceAction180 */
},
};
/* runtime type ReduceAction181 */
const struct type type_parser__ReduceAction181 = {
-1, /*CAST DEAD*/
"ReduceAction181", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
803, /* ReduceAction181 */
},
};
/* runtime type ReduceAction182 */
const struct type type_parser__ReduceAction182 = {
-1, /*CAST DEAD*/
"ReduceAction182", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
804, /* ReduceAction182 */
},
};
/* runtime type ReduceAction183 */
const struct type type_parser__ReduceAction183 = {
-1, /*CAST DEAD*/
"ReduceAction183", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
805, /* ReduceAction183 */
},
};
/* runtime type ReduceAction184 */
const struct type type_parser__ReduceAction184 = {
-1, /*CAST DEAD*/
"ReduceAction184", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
806, /* ReduceAction184 */
},
};
/* runtime type ReduceAction185 */
const struct type type_parser__ReduceAction185 = {
-1, /*CAST DEAD*/
"ReduceAction185", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
807, /* ReduceAction185 */
},
};
/* runtime type ReduceAction186 */
const struct type type_parser__ReduceAction186 = {
-1, /*CAST DEAD*/
"ReduceAction186", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
808, /* ReduceAction186 */
},
};
/* runtime type ReduceAction193 */
const struct type type_parser__ReduceAction193 = {
-1, /*CAST DEAD*/
"ReduceAction193", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
809, /* ReduceAction193 */
},
};
/* runtime type ReduceAction194 */
const struct type type_parser__ReduceAction194 = {
-1, /*CAST DEAD*/
"ReduceAction194", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
810, /* ReduceAction194 */
},
};
/* runtime type ReduceAction195 */
const struct type type_parser__ReduceAction195 = {
-1, /*CAST DEAD*/
"ReduceAction195", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
811, /* ReduceAction195 */
},
};
/* runtime type ReduceAction196 */
const struct type type_parser__ReduceAction196 = {
-1, /*CAST DEAD*/
"ReduceAction196", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
812, /* ReduceAction196 */
},
};
/* runtime type ReduceAction197 */
const struct type type_parser__ReduceAction197 = {
-1, /*CAST DEAD*/
"ReduceAction197", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
813, /* ReduceAction197 */
},
};
/* runtime type ReduceAction198 */
const struct type type_parser__ReduceAction198 = {
-1, /*CAST DEAD*/
"ReduceAction198", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
814, /* ReduceAction198 */
},
};
/* runtime type ReduceAction199 */
const struct type type_parser__ReduceAction199 = {
-1, /*CAST DEAD*/
"ReduceAction199", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
815, /* ReduceAction199 */
},
};
/* runtime type ReduceAction201 */
const struct type type_parser__ReduceAction201 = {
-1, /*CAST DEAD*/
"ReduceAction201", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
816, /* ReduceAction201 */
},
};
/* runtime type ReduceAction202 */
const struct type type_parser__ReduceAction202 = {
-1, /*CAST DEAD*/
"ReduceAction202", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
817, /* ReduceAction202 */
},
};
/* runtime type ReduceAction204 */
const struct type type_parser__ReduceAction204 = {
-1, /*CAST DEAD*/
"ReduceAction204", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
818, /* ReduceAction204 */
},
};
/* runtime type ReduceAction205 */
const struct type type_parser__ReduceAction205 = {
-1, /*CAST DEAD*/
"ReduceAction205", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
819, /* ReduceAction205 */
},
};
/* runtime type ReduceAction206 */
const struct type type_parser__ReduceAction206 = {
-1, /*CAST DEAD*/
"ReduceAction206", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
820, /* ReduceAction206 */
},
};
/* runtime type ReduceAction207 */
const struct type type_parser__ReduceAction207 = {
-1, /*CAST DEAD*/
"ReduceAction207", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
821, /* ReduceAction207 */
},
};
/* runtime type ReduceAction208 */
const struct type type_parser__ReduceAction208 = {
-1, /*CAST DEAD*/
"ReduceAction208", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
822, /* ReduceAction208 */
},
};
/* runtime type ReduceAction209 */
const struct type type_parser__ReduceAction209 = {
-1, /*CAST DEAD*/
"ReduceAction209", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
823, /* ReduceAction209 */
},
};
/* runtime type ReduceAction210 */
const struct type type_parser__ReduceAction210 = {
-1, /*CAST DEAD*/
"ReduceAction210", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
824, /* ReduceAction210 */
},
};
/* runtime type ReduceAction211 */
const struct type type_parser__ReduceAction211 = {
-1, /*CAST DEAD*/
"ReduceAction211", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
825, /* ReduceAction211 */
},
};
/* runtime type ReduceAction212 */
const struct type type_parser__ReduceAction212 = {
-1, /*CAST DEAD*/
"ReduceAction212", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
826, /* ReduceAction212 */
},
};
/* runtime type ReduceAction213 */
const struct type type_parser__ReduceAction213 = {
-1, /*CAST DEAD*/
"ReduceAction213", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
827, /* ReduceAction213 */
},
};
/* runtime type ReduceAction214 */
const struct type type_parser__ReduceAction214 = {
-1, /*CAST DEAD*/
"ReduceAction214", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
828, /* ReduceAction214 */
},
};
/* runtime type ReduceAction215 */
const struct type type_parser__ReduceAction215 = {
-1, /*CAST DEAD*/
"ReduceAction215", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
829, /* ReduceAction215 */
},
};
/* runtime type ReduceAction216 */
const struct type type_parser__ReduceAction216 = {
-1, /*CAST DEAD*/
"ReduceAction216", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
830, /* ReduceAction216 */
},
};
/* runtime type ReduceAction217 */
const struct type type_parser__ReduceAction217 = {
-1, /*CAST DEAD*/
"ReduceAction217", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
831, /* ReduceAction217 */
},
};
/* runtime type ReduceAction218 */
const struct type type_parser__ReduceAction218 = {
-1, /*CAST DEAD*/
"ReduceAction218", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
832, /* ReduceAction218 */
},
};
/* runtime type ReduceAction219 */
const struct type type_parser__ReduceAction219 = {
-1, /*CAST DEAD*/
"ReduceAction219", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
833, /* ReduceAction219 */
},
};
/* runtime type ReduceAction220 */
const struct type type_parser__ReduceAction220 = {
-1, /*CAST DEAD*/
"ReduceAction220", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
834, /* ReduceAction220 */
},
};
/* runtime type ReduceAction221 */
const struct type type_parser__ReduceAction221 = {
-1, /*CAST DEAD*/
"ReduceAction221", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
835, /* ReduceAction221 */
},
};
/* runtime type ReduceAction222 */
const struct type type_parser__ReduceAction222 = {
-1, /*CAST DEAD*/
"ReduceAction222", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
836, /* ReduceAction222 */
},
};
/* runtime type ReduceAction223 */
const struct type type_parser__ReduceAction223 = {
-1, /*CAST DEAD*/
"ReduceAction223", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
837, /* ReduceAction223 */
},
};
/* runtime type ReduceAction224 */
const struct type type_parser__ReduceAction224 = {
-1, /*CAST DEAD*/
"ReduceAction224", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
838, /* ReduceAction224 */
},
};
/* runtime type ReduceAction225 */
const struct type type_parser__ReduceAction225 = {
-1, /*CAST DEAD*/
"ReduceAction225", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
839, /* ReduceAction225 */
},
};
/* runtime type ReduceAction226 */
const struct type type_parser__ReduceAction226 = {
-1, /*CAST DEAD*/
"ReduceAction226", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
840, /* ReduceAction226 */
},
};
/* runtime type ReduceAction227 */
const struct type type_parser__ReduceAction227 = {
-1, /*CAST DEAD*/
"ReduceAction227", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
841, /* ReduceAction227 */
},
};
/* runtime type ReduceAction228 */
const struct type type_parser__ReduceAction228 = {
-1, /*CAST DEAD*/
"ReduceAction228", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
842, /* ReduceAction228 */
},
};
/* runtime type ReduceAction229 */
const struct type type_parser__ReduceAction229 = {
-1, /*CAST DEAD*/
"ReduceAction229", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
843, /* ReduceAction229 */
},
};
/* runtime type ReduceAction232 */
const struct type type_parser__ReduceAction232 = {
-1, /*CAST DEAD*/
"ReduceAction232", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
844, /* ReduceAction232 */
},
};
/* runtime type ReduceAction233 */
const struct type type_parser__ReduceAction233 = {
-1, /*CAST DEAD*/
"ReduceAction233", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
845, /* ReduceAction233 */
},
};
/* runtime type ReduceAction234 */
const struct type type_parser__ReduceAction234 = {
-1, /*CAST DEAD*/
"ReduceAction234", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
846, /* ReduceAction234 */
},
};
/* runtime type ReduceAction235 */
const struct type type_parser__ReduceAction235 = {
-1, /*CAST DEAD*/
"ReduceAction235", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
847, /* ReduceAction235 */
},
};
/* runtime type ReduceAction236 */
const struct type type_parser__ReduceAction236 = {
-1, /*CAST DEAD*/
"ReduceAction236", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
848, /* ReduceAction236 */
},
};
/* runtime type ReduceAction237 */
const struct type type_parser__ReduceAction237 = {
-1, /*CAST DEAD*/
"ReduceAction237", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
849, /* ReduceAction237 */
},
};
/* runtime type ReduceAction238 */
const struct type type_parser__ReduceAction238 = {
-1, /*CAST DEAD*/
"ReduceAction238", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
850, /* ReduceAction238 */
},
};
/* runtime type ReduceAction239 */
const struct type type_parser__ReduceAction239 = {
-1, /*CAST DEAD*/
"ReduceAction239", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
851, /* ReduceAction239 */
},
};
/* runtime type ReduceAction240 */
const struct type type_parser__ReduceAction240 = {
-1, /*CAST DEAD*/
"ReduceAction240", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
852, /* ReduceAction240 */
},
};
/* runtime type ReduceAction241 */
const struct type type_parser__ReduceAction241 = {
-1, /*CAST DEAD*/
"ReduceAction241", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
853, /* ReduceAction241 */
},
};
/* runtime type ReduceAction242 */
const struct type type_parser__ReduceAction242 = {
-1, /*CAST DEAD*/
"ReduceAction242", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
854, /* ReduceAction242 */
},
};
/* runtime type ReduceAction243 */
const struct type type_parser__ReduceAction243 = {
-1, /*CAST DEAD*/
"ReduceAction243", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
855, /* ReduceAction243 */
},
};
/* runtime type ReduceAction244 */
const struct type type_parser__ReduceAction244 = {
-1, /*CAST DEAD*/
"ReduceAction244", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
856, /* ReduceAction244 */
},
};
/* runtime type ReduceAction247 */
const struct type type_parser__ReduceAction247 = {
-1, /*CAST DEAD*/
"ReduceAction247", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
857, /* ReduceAction247 */
},
};
/* runtime type ReduceAction249 */
const struct type type_parser__ReduceAction249 = {
-1, /*CAST DEAD*/
"ReduceAction249", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
858, /* ReduceAction249 */
},
};
/* runtime type ReduceAction250 */
const struct type type_parser__ReduceAction250 = {
-1, /*CAST DEAD*/
"ReduceAction250", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
859, /* ReduceAction250 */
},
};
/* runtime type ReduceAction251 */
const struct type type_parser__ReduceAction251 = {
-1, /*CAST DEAD*/
"ReduceAction251", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
860, /* ReduceAction251 */
},
};
/* runtime type ReduceAction252 */
const struct type type_parser__ReduceAction252 = {
-1, /*CAST DEAD*/
"ReduceAction252", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
861, /* ReduceAction252 */
},
};
/* runtime type ReduceAction254 */
const struct type type_parser__ReduceAction254 = {
-1, /*CAST DEAD*/
"ReduceAction254", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
862, /* ReduceAction254 */
},
};
/* runtime type ReduceAction256 */
const struct type type_parser__ReduceAction256 = {
-1, /*CAST DEAD*/
"ReduceAction256", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
863, /* ReduceAction256 */
},
};
/* runtime type ReduceAction257 */
const struct type type_parser__ReduceAction257 = {
-1, /*CAST DEAD*/
"ReduceAction257", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
864, /* ReduceAction257 */
},
};
/* runtime type ReduceAction258 */
const struct type type_parser__ReduceAction258 = {
-1, /*CAST DEAD*/
"ReduceAction258", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
865, /* ReduceAction258 */
},
};
/* runtime type ReduceAction259 */
const struct type type_parser__ReduceAction259 = {
-1, /*CAST DEAD*/
"ReduceAction259", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
866, /* ReduceAction259 */
},
};
/* runtime type ReduceAction260 */
const struct type type_parser__ReduceAction260 = {
-1, /*CAST DEAD*/
"ReduceAction260", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
867, /* ReduceAction260 */
},
};
/* runtime type ReduceAction261 */
const struct type type_parser__ReduceAction261 = {
-1, /*CAST DEAD*/
"ReduceAction261", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
868, /* ReduceAction261 */
},
};
/* runtime type ReduceAction262 */
const struct type type_parser__ReduceAction262 = {
-1, /*CAST DEAD*/
"ReduceAction262", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
869, /* ReduceAction262 */
},
};
/* runtime type ReduceAction263 */
const struct type type_parser__ReduceAction263 = {
-1, /*CAST DEAD*/
"ReduceAction263", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
870, /* ReduceAction263 */
},
};
/* runtime type ReduceAction264 */
const struct type type_parser__ReduceAction264 = {
-1, /*CAST DEAD*/
"ReduceAction264", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
871, /* ReduceAction264 */
},
};
/* runtime type ReduceAction265 */
const struct type type_parser__ReduceAction265 = {
-1, /*CAST DEAD*/
"ReduceAction265", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
872, /* ReduceAction265 */
},
};
/* runtime type ReduceAction267 */
const struct type type_parser__ReduceAction267 = {
-1, /*CAST DEAD*/
"ReduceAction267", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
873, /* ReduceAction267 */
},
};
/* runtime type ReduceAction268 */
const struct type type_parser__ReduceAction268 = {
-1, /*CAST DEAD*/
"ReduceAction268", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
874, /* ReduceAction268 */
},
};
/* runtime type ReduceAction270 */
const struct type type_parser__ReduceAction270 = {
-1, /*CAST DEAD*/
"ReduceAction270", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
875, /* ReduceAction270 */
},
};
/* runtime type ReduceAction271 */
const struct type type_parser__ReduceAction271 = {
-1, /*CAST DEAD*/
"ReduceAction271", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
876, /* ReduceAction271 */
},
};
/* runtime type ReduceAction272 */
const struct type type_parser__ReduceAction272 = {
-1, /*CAST DEAD*/
"ReduceAction272", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
877, /* ReduceAction272 */
},
};
/* runtime type ReduceAction274 */
const struct type type_parser__ReduceAction274 = {
-1, /*CAST DEAD*/
"ReduceAction274", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
878, /* ReduceAction274 */
},
};
/* runtime type ReduceAction275 */
const struct type type_parser__ReduceAction275 = {
-1, /*CAST DEAD*/
"ReduceAction275", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
879, /* ReduceAction275 */
},
};
/* runtime type ReduceAction277 */
const struct type type_parser__ReduceAction277 = {
-1, /*CAST DEAD*/
"ReduceAction277", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
880, /* ReduceAction277 */
},
};
/* runtime type ReduceAction278 */
const struct type type_parser__ReduceAction278 = {
-1, /*CAST DEAD*/
"ReduceAction278", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
881, /* ReduceAction278 */
},
};
/* runtime type ReduceAction279 */
const struct type type_parser__ReduceAction279 = {
-1, /*CAST DEAD*/
"ReduceAction279", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
882, /* ReduceAction279 */
},
};
/* runtime type ReduceAction280 */
const struct type type_parser__ReduceAction280 = {
-1, /*CAST DEAD*/
"ReduceAction280", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
883, /* ReduceAction280 */
},
};
/* runtime type ReduceAction281 */
const struct type type_parser__ReduceAction281 = {
-1, /*CAST DEAD*/
"ReduceAction281", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
884, /* ReduceAction281 */
},
};
/* runtime type ReduceAction287 */
const struct type type_parser__ReduceAction287 = {
-1, /*CAST DEAD*/
"ReduceAction287", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
154, /* ReduceAction */
885, /* ReduceAction287 */
},
};
