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
75, /* Sys */
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
76, /* IFStream */
581, /* Stdin */
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
76, /* IFStream */
},
};
/* runtime type Bool */
const struct type type_kernel__Bool = {
77,
"Bool", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
77, /* Bool */
},
};
/* runtime type Int */
const struct type type_kernel__Int = {
582,
"Int", /* class_name_string */
4,
0,
&resolution_table_kernel__Int,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
582, /* Int */
},
};
const struct types resolution_table_kernel__Int = {
0, /* dummy */
{
&type_kernel__Int, /* OTHER: Int */
}
};
/* runtime type Comparable */
const struct type type_kernel__Comparable = {
78,
"Comparable", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
79, /* OFStream */
583, /* Stdout */
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
79, /* OFStream */
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
79, /* OFStream */
584, /* Stderr */
},
};
/* runtime type Float */
const struct type type_kernel__Float = {
585,
"Float", /* class_name_string */
4,
0,
&resolution_table_kernel__Float,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
585, /* Float */
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
586,
"Char", /* class_name_string */
4,
0,
&resolution_table_kernel__Char,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
586, /* Char */
},
};
const struct types resolution_table_kernel__Char = {
0, /* dummy */
{
&type_kernel__Char, /* OTHER: Char */
}
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
80, /* Pointer */
},
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
80, /* Pointer */
587, /* NativeFile */
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
80, /* Pointer */
588, /* NativeString */
},
};
/* runtime type FlatString */
const struct type type_string__FlatString = {
2071,
"FlatString", /* class_name_string */
8,
0,
&resolution_table_string__FlatString,
9,
{
0, /* nullable Object */
1, /* Object */
2, /* nullable String */
78, /* Comparable */
81, /* Streamable */
1344, /* Text */
1509, /* FlatText */
1674, /* String */
2071, /* FlatString */
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
1344,
"Text", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatText */
const struct type type_string__FlatText = {
1509,
"FlatText", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type String */
const struct type type_string__String = {
1674,
"String", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable String */
const struct type type_nullable_string__String = {
2,
"nullable String", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Streamable */
const struct type type_stream__Streamable = {
81,
"Streamable", /* class_name_string */
4,
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
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
589, /* Collection[Char] */
1510, /* FlatStringCharView */
},
};
const struct types resolution_table_string__FlatStringCharView = {
0, /* dummy */
{
&type_string__FlatString, /* SELFTYPE: FlatString */
&type_kernel__Char, /* E: Char */
&type_kernel__Char, /* E: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[E]: Collection[Char] */
&type_array__Arraykernel__Char, /* Array[E]: Array[Char] */
}
};
/* runtime type SequenceRead[nullable Object] */
const struct type type_abstract_collection__SequenceReadnullable_kernel__Object = {
82,
"SequenceRead[nullable Object]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Object] */
const struct type type_abstract_collection__Collectionkernel__Object = {
83,
"Collection[Object]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Char] */
const struct type type_abstract_collection__Collectionkernel__Char = {
589,
"Collection[Char]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatBuffer */
const struct type type_string__FlatBuffer = {
1675,
"FlatBuffer", /* class_name_string */
7,
0,
&resolution_table_string__FlatBuffer,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
81, /* Streamable */
1344, /* Text */
1509, /* FlatText */
1675, /* FlatBuffer */
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
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
589, /* Collection[Char] */
1511, /* FlatBufferCharView */
},
};
const struct types resolution_table_string__FlatBufferCharView = {
0, /* dummy */
{
&type_string__FlatBuffer, /* SELFTYPE: FlatBuffer */
&type_kernel__Char, /* E: Char */
&type_kernel__Char, /* E: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[E]: Collection[Char] */
&type_array__Arraykernel__Char, /* Array[E]: Array[Char] */
&type_kernel__Char, /* E: Char */
&type_kernel__Char, /* E: Char */
&type_abstract_collection__Collectionkernel__Char, /* Collection[E]: Collection[Char] */
&type_abstract_collection__Collectionkernel__Char, /* Collection[E]: Collection[Char] */
&type_kernel__Char, /* E: Char */
}
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
84, /* ToolContext */
},
};
/* runtime type Array[Message] */
const struct type type_array__Arraytoolcontext__Message = {
-1, /*CAST DEAD*/
"Array[Message]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraytoolcontext__Message,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
591, /* Collection[Message] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1676, /* AbstractArrayRead[Message] */
1512, /* AbstractArray[Object] */
2073, /* AbstractArray[Message] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2072, /* Array[Comparable] */
2265, /* Array[Message] */
},
};
const struct types resolution_table_array__Arraytoolcontext__Message = {
0, /* dummy */
{
&type_array__NativeArraytoolcontext__Message, /* NativeArray[E]: NativeArray[Message] */
&type_toolcontext__Message, /* E: Message */
&type_toolcontext__Message, /* E: Message */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[E]: Collection[Message] */
&type_array__Arraytoolcontext__Message, /* Array[E]: Array[Message] */
&type_toolcontext__Message, /* E: Message */
&type_toolcontext__Message, /* E: Message */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[E]: Collection[Message] */
&type_abstract_collection__Collectiontoolcontext__Message, /* Collection[E]: Collection[Message] */
&type_toolcontext__Message, /* E: Message */
&type_array__Arraytoolcontext__Message, /* Array[E]: Array[Message] */
&type_array__NativeArraytoolcontext__Message, /* NativeArray[E]: NativeArray[Message] */
&type_toolcontext__Message, /* E: Message */
&type_toolcontext__Message, /* E: Message */
&type_array__Arraytoolcontext__Message, /* Array[E]: Array[Message] */
&type_array__AbstractArraytoolcontext__Message, /* AbstractArray[E]: AbstractArray[Message] */
&type_array__ArrayIteratortoolcontext__Message, /* ArrayIterator[E]: ArrayIterator[Message] */
}
};
/* runtime type Array[Object] */
const struct type type_array__Arraykernel__Object = {
1909,
"Array[Object]", /* class_name_string */
15,
0,
&resolution_table_array__Arraykernel__Object,
16,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
-1, /* empty */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
},
};
const struct types resolution_table_array__Arraykernel__Object = {
0, /* dummy */
{
&type_array__NativeArraykernel__Object, /* NativeArray[E]: NativeArray[Object] */
&type_kernel__Object, /* E: Object */
&type_kernel__Object, /* E: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_array__Arraykernel__Object, /* Array[E]: Array[Object] */
&type_kernel__Object, /* E: Object */
&type_kernel__Object, /* E: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_kernel__Object, /* E: Object */
&type_array__Arraykernel__Object, /* Array[E]: Array[Object] */
&type_array__NativeArraykernel__Object, /* NativeArray[E]: NativeArray[Object] */
&type_kernel__Object, /* E: Object */
&type_kernel__Object, /* E: Object */
&type_array__Arraykernel__Object, /* Array[E]: Array[Object] */
&type_array__AbstractArraykernel__Object, /* AbstractArray[E]: AbstractArray[Object] */
&type_array__ArrayIteratorkernel__Object, /* ArrayIterator[E]: ArrayIterator[Object] */
}
};
/* runtime type Array[nullable Object] */
const struct type type_array__Arraynullable_kernel__Object = {
590,
"Array[nullable Object]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Message] */
const struct type type_abstract_collection__Collectiontoolcontext__Message = {
591,
"Collection[Message]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[Comparable] */
const struct type type_array__Arraykernel__Comparable = {
2072,
"Array[Comparable]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Message] */
const struct type type_array__AbstractArrayReadtoolcontext__Message = {
1676,
"AbstractArrayRead[Message]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Object] */
const struct type type_array__AbstractArrayReadkernel__Object = {
1345,
"AbstractArrayRead[Object]", /* class_name_string */
8,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Message] */
const struct type type_array__AbstractArraytoolcontext__Message = {
2073,
"AbstractArray[Message]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Object] */
const struct type type_array__AbstractArraykernel__Object = {
1512,
"AbstractArray[Object]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
85, /* OptionContext */
},
};
/* runtime type Array[Option] */
const struct type type_array__Arrayopts__Option = {
-1, /*CAST DEAD*/
"Array[Option]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayopts__Option,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
592, /* Collection[Option] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1677, /* AbstractArrayRead[Option] */
1512, /* AbstractArray[Object] */
2074, /* AbstractArray[Option] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2201, /* Array[Option] */
},
};
const struct types resolution_table_array__Arrayopts__Option = {
0, /* dummy */
{
&type_array__NativeArrayopts__Option, /* NativeArray[E]: NativeArray[Option] */
&type_opts__Option, /* E: Option */
&type_opts__Option, /* E: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[E]: Collection[Option] */
&type_array__Arrayopts__Option, /* Array[E]: Array[Option] */
&type_opts__Option, /* E: Option */
&type_opts__Option, /* E: Option */
&type_abstract_collection__Collectionopts__Option, /* Collection[E]: Collection[Option] */
&type_abstract_collection__Collectionopts__Option, /* Collection[E]: Collection[Option] */
&type_opts__Option, /* E: Option */
&type_array__Arrayopts__Option, /* Array[E]: Array[Option] */
&type_array__NativeArrayopts__Option, /* NativeArray[E]: NativeArray[Option] */
&type_opts__Option, /* E: Option */
&type_opts__Option, /* E: Option */
&type_array__Arrayopts__Option, /* Array[E]: Array[Option] */
&type_array__AbstractArrayopts__Option, /* AbstractArray[E]: AbstractArray[Option] */
&type_array__ArrayIteratoropts__Option, /* ArrayIterator[E]: ArrayIterator[Option] */
}
};
/* runtime type Collection[Option] */
const struct type type_abstract_collection__Collectionopts__Option = {
592,
"Collection[Option]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Option] */
const struct type type_array__AbstractArrayReadopts__Option = {
1677,
"AbstractArrayRead[Option]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Option] */
const struct type type_array__AbstractArrayopts__Option = {
2074,
"AbstractArray[Option]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[String] */
const struct type type_array__Arraystring__String = {
2349,
"Array[String]", /* class_name_string */
23,
0,
&resolution_table_array__Arraystring__String,
24,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
590, /* Array[nullable Object] */
1346, /* Collection[Text] */
1345, /* AbstractArrayRead[Object] */
1513, /* Collection[String] */
1512, /* AbstractArray[Object] */
1678, /* AbstractArrayRead[Streamable] */
-1, /* empty */
2075, /* AbstractArrayRead[Text] */
2076, /* AbstractArray[Streamable] */
1909, /* Array[Object] */
2072, /* Array[Comparable] */
2177, /* AbstractArrayRead[String] */
2202, /* Array[Streamable] */
2203, /* AbstractArray[Text] */
2281, /* AbstractArray[String] */
-1, /* empty */
2320, /* Array[Text] */
2349, /* Array[String] */
},
};
const struct types resolution_table_array__Arraystring__String = {
0, /* dummy */
{
&type_array__NativeArraystring__String, /* NativeArray[E]: NativeArray[String] */
&type_string__String, /* E: String */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_string__String, /* E: String */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_string__String, /* E: String */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_array__NativeArraystring__String, /* NativeArray[E]: NativeArray[String] */
&type_string__String, /* E: String */
&type_string__String, /* E: String */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_array__AbstractArraystring__String, /* AbstractArray[E]: AbstractArray[String] */
&type_array__ArrayIteratorstring__String, /* ArrayIterator[E]: ArrayIterator[String] */
}
};
/* runtime type Array[Text] */
const struct type type_array__Arraystring__Text = {
-1, /*CAST DEAD*/
"Array[Text]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystring__Text,
23,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
590, /* Array[nullable Object] */
1346, /* Collection[Text] */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1678, /* AbstractArrayRead[Streamable] */
-1, /* empty */
2075, /* AbstractArrayRead[Text] */
2076, /* AbstractArray[Streamable] */
1909, /* Array[Object] */
2072, /* Array[Comparable] */
-1, /* empty */
2202, /* Array[Streamable] */
2203, /* AbstractArray[Text] */
-1, /* empty */
-1, /* empty */
2320, /* Array[Text] */
},
};
const struct types resolution_table_array__Arraystring__Text = {
0, /* dummy */
{
&type_array__NativeArraystring__Text, /* NativeArray[E]: NativeArray[Text] */
&type_string__Text, /* E: Text */
&type_string__Text, /* E: Text */
&type_abstract_collection__Collectionstring__Text, /* Collection[E]: Collection[Text] */
&type_array__Arraystring__Text, /* Array[E]: Array[Text] */
&type_string__Text, /* E: Text */
&type_string__Text, /* E: Text */
&type_abstract_collection__Collectionstring__Text, /* Collection[E]: Collection[Text] */
&type_abstract_collection__Collectionstring__Text, /* Collection[E]: Collection[Text] */
&type_string__Text, /* E: Text */
&type_array__Arraystring__Text, /* Array[E]: Array[Text] */
&type_array__NativeArraystring__Text, /* NativeArray[E]: NativeArray[Text] */
&type_string__Text, /* E: Text */
&type_string__Text, /* E: Text */
&type_array__Arraystring__Text, /* Array[E]: Array[Text] */
&type_array__AbstractArraystring__Text, /* AbstractArray[E]: AbstractArray[Text] */
&type_array__ArrayIteratorstring__Text, /* ArrayIterator[E]: ArrayIterator[Text] */
}
};
/* runtime type Array[Streamable] */
const struct type type_array__Arraystream__Streamable = {
-1, /*CAST DEAD*/
"Array[Streamable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraystream__Streamable,
19,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1678, /* AbstractArrayRead[Streamable] */
-1, /* empty */
-1, /* empty */
2076, /* AbstractArray[Streamable] */
1909, /* Array[Object] */
-1, /* empty */
-1, /* empty */
2202, /* Array[Streamable] */
},
};
const struct types resolution_table_array__Arraystream__Streamable = {
0, /* dummy */
{
&type_array__NativeArraystream__Streamable, /* NativeArray[E]: NativeArray[Streamable] */
&type_stream__Streamable, /* E: Streamable */
&type_stream__Streamable, /* E: Streamable */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[E]: Collection[Streamable] */
&type_array__Arraystream__Streamable, /* Array[E]: Array[Streamable] */
&type_stream__Streamable, /* E: Streamable */
&type_stream__Streamable, /* E: Streamable */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[E]: Collection[Streamable] */
&type_abstract_collection__Collectionstream__Streamable, /* Collection[E]: Collection[Streamable] */
&type_stream__Streamable, /* E: Streamable */
&type_array__Arraystream__Streamable, /* Array[E]: Array[Streamable] */
&type_array__NativeArraystream__Streamable, /* NativeArray[E]: NativeArray[Streamable] */
&type_stream__Streamable, /* E: Streamable */
&type_stream__Streamable, /* E: Streamable */
&type_array__Arraystream__Streamable, /* Array[E]: Array[Streamable] */
&type_array__AbstractArraystream__Streamable, /* AbstractArray[E]: AbstractArray[Streamable] */
&type_array__ArrayIteratorstream__Streamable, /* ArrayIterator[E]: ArrayIterator[Streamable] */
}
};
/* runtime type Collection[String] */
const struct type type_abstract_collection__Collectionstring__String = {
1513,
"Collection[String]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Text] */
const struct type type_abstract_collection__Collectionstring__Text = {
1346,
"Collection[Text]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Streamable] */
const struct type type_abstract_collection__Collectionstream__Streamable = {
593,
"Collection[Streamable]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[String] */
const struct type type_array__AbstractArrayReadstring__String = {
2177,
"AbstractArrayRead[String]", /* class_name_string */
17,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Text] */
const struct type type_array__AbstractArrayReadstring__Text = {
2075,
"AbstractArrayRead[Text]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Streamable] */
const struct type type_array__AbstractArrayReadstream__Streamable = {
1678,
"AbstractArrayRead[Streamable]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[String] */
const struct type type_array__AbstractArraystring__String = {
2281,
"AbstractArray[String]", /* class_name_string */
20,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Text] */
const struct type type_array__AbstractArraystring__Text = {
2203,
"AbstractArray[Text]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Streamable] */
const struct type type_array__AbstractArraystream__Streamable = {
2076,
"AbstractArray[Streamable]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Option] */
const struct type type_hash_collection__HashMapstring__Stringopts__Option = {
86,
"HashMap[String, Option]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringopts__Option,
3,
{
0, /* nullable Object */
1, /* Object */
86, /* HashMap[String, Option] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringopts__Option = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringopts__Option, /* HashMapKeys[K, V]: HashMapKeys[String, Option] */
&type_hash_collection__HashMapValuesstring__Stringopts__Option, /* HashMapValues[K, V]: HashMapValues[String, Option] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringopts__Option, /* HashMapIterator[K, V]: HashMapIterator[String, Option] */
&type_string__String, /* K: String */
&type_opts__Option, /* V: Option */
&type_hash_collection__HashMapNodestring__Stringopts__Option, /* HashMapNode[K, V]: HashMapNode[String, Option] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringopts__Option, /* nullable N: nullable HashMapNode[String, Option] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringopts__Option, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Option]] */
&type_hash_collection__HashMapNodestring__Stringopts__Option, /* N: HashMapNode[String, Option] */
&type_nullable_string__String, /* nullable K: nullable String */
}
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
594, /* OptionCount */
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
595, /* OptionParameter */
1347, /* OptionArray */
},
};
const struct types resolution_table_opts__OptionArray = {
0, /* dummy */
{
&type_array__Arraystring__String, /* VALUE: Array[String] */
}
};
/* runtime type OptionParameter */
const struct type type_opts__OptionParameter = {
595,
"OptionParameter", /* class_name_string */
3,
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
596, /* OptionBool */
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
595, /* OptionParameter */
1348, /* OptionString */
},
};
const struct types resolution_table_opts__OptionString = {
0, /* dummy */
{
&type_nullable_string__String, /* VALUE: nullable String */
}
};
/* runtime type POSet[Phase] */
const struct type type_poset__POSetphase__Phase = {
1349,
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
83, /* Collection[Object] */
597, /* Collection[Phase] */
1349, /* POSet[Phase] */
},
};
const struct types resolution_table_poset__POSetphase__Phase = {
0, /* dummy */
{
&type_hash_collection__HashMapphase__Phaseposet__POSetElementphase__Phase, /* HashMap[E, POSetElement[E]]: HashMap[Phase, POSetElement[Phase]] */
&type_phase__Phase, /* E: Phase */
&type_phase__Phase, /* E: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
&type_poset__POSetElementphase__Phase, /* POSetElement[E]: POSetElement[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_array__Arrayphase__Phase, /* Array[COMPARED]: Array[Phase] */
}
};
/* runtime type Collection[Phase] */
const struct type type_abstract_collection__Collectionphase__Phase = {
597,
"Collection[Phase]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[AModule] */
const struct type type_hash_collection__HashSetparser_nodes__AModule = {
2171,
"HashSet[AModule]", /* class_name_string */
11,
0,
&resolution_table_hash_collection__HashSetparser_nodes__AModule,
12,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
599, /* Collection[ANode] */
598, /* Set[Object] */
1351, /* Collection[Prod] */
1350, /* HashSet[Object] */
1514, /* Collection[AModule] */
1679, /* HashSet[ANode] */
2171, /* HashSet[AModule] */
},
};
const struct types resolution_table_hash_collection__HashSetparser_nodes__AModule = {
0, /* dummy */
{
&type_hash_collection__HashSetNodeparser_nodes__AModule, /* HashSetNode[E]: HashSetNode[AModule] */
&type_hash_collection__HashSetIteratorparser_nodes__AModule, /* HashSetIterator[E]: HashSetIterator[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_array__Arrayparser_nodes__AModule, /* Array[E]: Array[AModule] */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_parser_nodes__AModule, /* K: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_nullable_hash_collection__HashSetNodeparser_nodes__AModule, /* nullable N: nullable HashSetNode[AModule] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__AModule, /* NativeArray[E]: NativeArray[nullable HashSetNode[AModule]] */
&type_hash_collection__HashSetNodeparser_nodes__AModule, /* N: HashSetNode[AModule] */
&type_nullable_parser_nodes__AModule, /* nullable K: nullable AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
}
};
/* runtime type HashSet[Object] */
const struct type type_hash_collection__HashSetkernel__Object = {
1350,
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
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
},
};
const struct types resolution_table_hash_collection__HashSetkernel__Object = {
0, /* dummy */
{
&type_hash_collection__HashSetNodekernel__Object, /* HashSetNode[E]: HashSetNode[Object] */
&type_hash_collection__HashSetIteratorkernel__Object, /* HashSetIterator[E]: HashSetIterator[Object] */
&type_kernel__Object, /* E: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_array__Arraykernel__Object, /* Array[E]: Array[Object] */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_kernel__Object, /* E: Object */
&type_kernel__Object, /* K: Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
&type_kernel__Object, /* E: Object */
&type_nullable_hash_collection__HashSetNodekernel__Object, /* nullable N: nullable HashSetNode[Object] */
&type_array__NativeArraynullable_hash_collection__HashSetNodekernel__Object, /* NativeArray[E]: NativeArray[nullable HashSetNode[Object]] */
&type_hash_collection__HashSetNodekernel__Object, /* N: HashSetNode[Object] */
&type_nullable_kernel__Object, /* nullable K: nullable Object */
&type_abstract_collection__Collectionkernel__Object, /* Collection[E]: Collection[Object] */
}
};
/* runtime type HashSet[ANode] */
const struct type type_hash_collection__HashSetparser_nodes__ANode = {
1679,
"HashSet[ANode]", /* class_name_string */
10,
0,
&resolution_table_hash_collection__HashSetparser_nodes__ANode,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
599, /* Collection[ANode] */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
-1, /* empty */
1679, /* HashSet[ANode] */
},
};
const struct types resolution_table_hash_collection__HashSetparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* HashSetNode[E]: HashSetNode[ANode] */
&type_hash_collection__HashSetIteratorparser_nodes__ANode, /* HashSetIterator[E]: HashSetIterator[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* K: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_nullable_hash_collection__HashSetNodeparser_nodes__ANode, /* nullable N: nullable HashSetNode[ANode] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeparser_nodes__ANode, /* NativeArray[E]: NativeArray[nullable HashSetNode[ANode]] */
&type_hash_collection__HashSetNodeparser_nodes__ANode, /* N: HashSetNode[ANode] */
&type_nullable_parser_nodes__ANode, /* nullable K: nullable ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
}
};
/* runtime type Set[Object] */
const struct type type_abstract_collection__Setkernel__Object = {
598,
"Set[Object]", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[AModule] */
const struct type type_abstract_collection__Collectionparser_nodes__AModule = {
1514,
"Collection[AModule]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[ANode] */
const struct type type_abstract_collection__Collectionparser_nodes__ANode = {
599,
"Collection[ANode]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[Prod] */
const struct type type_abstract_collection__Collectionparser_nodes__Prod = {
1351,
"Collection[Prod]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
3, /* nullable Phase */
600, /* Phase */
1352, /* LiteralPhase */
},
};
/* runtime type Phase */
const struct type type_phase__Phase = {
600,
"Phase", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable Phase */
const struct type type_nullable_phase__Phase = {
3,
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
3, /* nullable Phase */
600, /* Phase */
1353, /* ScopePhase */
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
3, /* nullable Phase */
600, /* Phase */
1354, /* FlowPhase */
},
};
/* runtime type Array[Phase] */
const struct type type_array__Arrayphase__Phase = {
2204,
"Array[Phase]", /* class_name_string */
16,
0,
&resolution_table_array__Arrayphase__Phase,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
597, /* Collection[Phase] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1680, /* AbstractArrayRead[Phase] */
1512, /* AbstractArray[Object] */
2077, /* AbstractArray[Phase] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2204, /* Array[Phase] */
},
};
const struct types resolution_table_array__Arrayphase__Phase = {
0, /* dummy */
{
&type_array__NativeArrayphase__Phase, /* NativeArray[E]: NativeArray[Phase] */
&type_phase__Phase, /* E: Phase */
&type_phase__Phase, /* E: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
&type_phase__Phase, /* E: Phase */
&type_phase__Phase, /* E: Phase */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_abstract_collection__Collectionphase__Phase, /* Collection[E]: Collection[Phase] */
&type_phase__Phase, /* E: Phase */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
&type_array__NativeArrayphase__Phase, /* NativeArray[E]: NativeArray[Phase] */
&type_phase__Phase, /* E: Phase */
&type_phase__Phase, /* E: Phase */
&type_array__Arrayphase__Phase, /* Array[E]: Array[Phase] */
&type_array__AbstractArrayphase__Phase, /* AbstractArray[E]: AbstractArray[Phase] */
&type_array__ArrayIteratorphase__Phase, /* ArrayIterator[E]: ArrayIterator[Phase] */
}
};
/* runtime type AbstractArrayRead[Phase] */
const struct type type_array__AbstractArrayReadphase__Phase = {
1680,
"AbstractArrayRead[Phase]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Phase] */
const struct type type_array__AbstractArrayphase__Phase = {
2077,
"AbstractArray[Phase]", /* class_name_string */
11,
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
3, /* nullable Phase */
600, /* Phase */
1355, /* LocalVarInitPhase */
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
3, /* nullable Phase */
600, /* Phase */
1356, /* ModelizeClassPhase */
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
3, /* nullable Phase */
600, /* Phase */
1357, /* ModelizePropertyPhase */
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
3, /* nullable Phase */
600, /* Phase */
1358, /* PlatformPhase */
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
3, /* nullable Phase */
600, /* Phase */
1359, /* TypingPhase */
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
3, /* nullable Phase */
600, /* Phase */
1360, /* AutoSuperInitPhase */
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
3, /* nullable Phase */
600, /* Phase */
1361, /* TransformPhase */
},
};
/* runtime type OptionInt */
const struct type type_opts__OptionInt = {
-1, /*CAST DEAD*/
"OptionInt", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_opts__OptionInt,
5,
{
0, /* nullable Object */
1, /* Object */
87, /* Option */
595, /* OptionParameter */
1362, /* OptionInt */
},
};
const struct types resolution_table_opts__OptionInt = {
0, /* dummy */
{
&type_kernel__Int, /* VALUE: Int */
}
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
3, /* nullable Phase */
600, /* Phase */
1363, /* SeparateCompilerPhase */
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
3, /* nullable Phase */
600, /* Phase */
1364, /* ErasureCompilerPhase */
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
2205,
"Array[MProject]", /* class_name_string */
16,
0,
&resolution_table_array__Arraymproject__MProject,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
601, /* Collection[MProject] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1681, /* AbstractArrayRead[MProject] */
1512, /* AbstractArray[Object] */
2078, /* AbstractArray[MProject] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2205, /* Array[MProject] */
},
};
const struct types resolution_table_array__Arraymproject__MProject = {
0, /* dummy */
{
&type_array__NativeArraymproject__MProject, /* NativeArray[E]: NativeArray[MProject] */
&type_mproject__MProject, /* E: MProject */
&type_mproject__MProject, /* E: MProject */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[E]: Collection[MProject] */
&type_array__Arraymproject__MProject, /* Array[E]: Array[MProject] */
&type_mproject__MProject, /* E: MProject */
&type_mproject__MProject, /* E: MProject */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[E]: Collection[MProject] */
&type_abstract_collection__Collectionmproject__MProject, /* Collection[E]: Collection[MProject] */
&type_mproject__MProject, /* E: MProject */
&type_array__Arraymproject__MProject, /* Array[E]: Array[MProject] */
&type_array__NativeArraymproject__MProject, /* NativeArray[E]: NativeArray[MProject] */
&type_mproject__MProject, /* E: MProject */
&type_mproject__MProject, /* E: MProject */
&type_array__Arraymproject__MProject, /* Array[E]: Array[MProject] */
&type_array__AbstractArraymproject__MProject, /* AbstractArray[E]: AbstractArray[MProject] */
&type_array__ArrayIteratormproject__MProject, /* ArrayIterator[E]: ArrayIterator[MProject] */
}
};
/* runtime type Collection[MProject] */
const struct type type_abstract_collection__Collectionmproject__MProject = {
601,
"Collection[MProject]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MProject] */
const struct type type_array__AbstractArrayReadmproject__MProject = {
1681,
"AbstractArrayRead[MProject]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MProject] */
const struct type type_array__AbstractArraymproject__MProject = {
2078,
"AbstractArray[MProject]", /* class_name_string */
11,
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
602, /* MultiHashMap[String, MProject] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmproject__MProject = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymproject__MProject, /* HashMapKeys[K, V]: HashMapKeys[String, Array[MProject]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymproject__MProject, /* HashMapValues[K, V]: HashMapValues[String, Array[MProject]] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymproject__MProject, /* HashMapIterator[K, V]: HashMapIterator[String, Array[MProject]] */
&type_string__String, /* K: String */
&type_array__Arraymproject__MProject, /* V: Array[MProject] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* HashMapNode[K, V]: HashMapNode[String, Array[MProject]] */
&type_string__String, /* K: String */
&type_string__String, /* K: String */
&type_mproject__MProject, /* V: MProject */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* nullable N: nullable HashMapNode[String, Array[MProject]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Array[MProject]]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymproject__MProject, /* N: HashMapNode[String, Array[MProject]] */
&type_nullable_string__String, /* nullable K: nullable String */
&type_array__Arraymproject__MProject, /* Array[V]: Array[MProject] */
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
2206,
"Array[MModule]", /* class_name_string */
16,
0,
&resolution_table_array__Arraymmodule__MModule,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
603, /* Collection[MModule] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1682, /* AbstractArrayRead[MModule] */
1512, /* AbstractArray[Object] */
2079, /* AbstractArray[MModule] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2206, /* Array[MModule] */
},
};
const struct types resolution_table_array__Arraymmodule__MModule = {
0, /* dummy */
{
&type_array__NativeArraymmodule__MModule, /* NativeArray[E]: NativeArray[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_array__NativeArraymmodule__MModule, /* NativeArray[E]: NativeArray[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_mmodule__MModule, /* E: MModule */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_array__AbstractArraymmodule__MModule, /* AbstractArray[E]: AbstractArray[MModule] */
&type_array__ArrayIteratormmodule__MModule, /* ArrayIterator[E]: ArrayIterator[MModule] */
}
};
/* runtime type Collection[MModule] */
const struct type type_abstract_collection__Collectionmmodule__MModule = {
603,
"Collection[MModule]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MModule] */
const struct type type_array__AbstractArrayReadmmodule__MModule = {
1682,
"AbstractArrayRead[MModule]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MModule] */
const struct type type_array__AbstractArraymmodule__MModule = {
2079,
"AbstractArray[MModule]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MModule] */
const struct type type_poset__POSetmmodule__MModule = {
1365,
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
83, /* Collection[Object] */
603, /* Collection[MModule] */
1365, /* POSet[MModule] */
},
};
const struct types resolution_table_poset__POSetmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapmmodule__MModuleposet__POSetElementmmodule__MModule, /* HashMap[E, POSetElement[E]]: HashMap[MModule, POSetElement[MModule]] */
&type_mmodule__MModule, /* E: MModule */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_poset__POSetElementmmodule__MModule, /* POSetElement[E]: POSetElement[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[COMPARED]: Array[MModule] */
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
604, /* MultiHashMap[String, MModule] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymmodule__MModule, /* HashMapKeys[K, V]: HashMapKeys[String, Array[MModule]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymmodule__MModule, /* HashMapValues[K, V]: HashMapValues[String, Array[MModule]] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymmodule__MModule, /* HashMapIterator[K, V]: HashMapIterator[String, Array[MModule]] */
&type_string__String, /* K: String */
&type_array__Arraymmodule__MModule, /* V: Array[MModule] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* HashMapNode[K, V]: HashMapNode[String, Array[MModule]] */
&type_string__String, /* K: String */
&type_string__String, /* K: String */
&type_mmodule__MModule, /* V: MModule */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* nullable N: nullable HashMapNode[String, Array[MModule]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Array[MModule]]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymmodule__MModule, /* N: HashMapNode[String, Array[MModule]] */
&type_nullable_string__String, /* nullable K: nullable String */
&type_array__Arraymmodule__MModule, /* Array[V]: Array[MModule] */
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
2304,
"Array[MClass]", /* class_name_string */
16,
0,
&resolution_table_array__Arraymodel__MClass,
17,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1366, /* Collection[MClass] */
590, /* Array[nullable Object] */
1367, /* AbstractArrayRead[nullable MClass] */
1345, /* AbstractArrayRead[Object] */
1515, /* AbstractArray[nullable MClass] */
1512, /* AbstractArray[Object] */
1910, /* Array[nullable MClass] */
2080, /* AbstractArrayRead[MClass] */
2207, /* AbstractArray[MClass] */
-1, /* empty */
1909, /* Array[Object] */
2304, /* Array[MClass] */
},
};
const struct types resolution_table_array__Arraymodel__MClass = {
0, /* dummy */
{
&type_array__NativeArraymodel__MClass, /* NativeArray[E]: NativeArray[MClass] */
&type_model__MClass, /* E: MClass */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_model__MClass, /* E: MClass */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_model__MClass, /* E: MClass */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_array__NativeArraymodel__MClass, /* NativeArray[E]: NativeArray[MClass] */
&type_model__MClass, /* E: MClass */
&type_model__MClass, /* E: MClass */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_array__AbstractArraymodel__MClass, /* AbstractArray[E]: AbstractArray[MClass] */
&type_array__ArrayIteratormodel__MClass, /* ArrayIterator[E]: ArrayIterator[MClass] */
}
};
/* runtime type Array[nullable MClass] */
const struct type type_array__Arraynullable_model__MClass = {
1910,
"Array[nullable MClass]", /* class_name_string */
11,
0,
&resolution_table_array__Arraynullable_model__MClass,
12,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
590, /* Array[nullable Object] */
1367, /* AbstractArrayRead[nullable MClass] */
-1, /* empty */
1515, /* AbstractArray[nullable MClass] */
-1, /* empty */
1910, /* Array[nullable MClass] */
},
};
const struct types resolution_table_array__Arraynullable_model__MClass = {
0, /* dummy */
{
&type_array__NativeArraynullable_model__MClass, /* NativeArray[E]: NativeArray[nullable MClass] */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[E]: Collection[nullable MClass] */
&type_array__Arraynullable_model__MClass, /* Array[E]: Array[nullable MClass] */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[E]: Collection[nullable MClass] */
&type_abstract_collection__Collectionnullable_model__MClass, /* Collection[E]: Collection[nullable MClass] */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_array__Arraynullable_model__MClass, /* Array[E]: Array[nullable MClass] */
&type_array__NativeArraynullable_model__MClass, /* NativeArray[E]: NativeArray[nullable MClass] */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_nullable_model__MClass, /* E: nullable MClass */
&type_array__Arraynullable_model__MClass, /* Array[E]: Array[nullable MClass] */
&type_array__AbstractArraynullable_model__MClass, /* AbstractArray[E]: AbstractArray[nullable MClass] */
&type_array__ArrayIteratornullable_model__MClass, /* ArrayIterator[E]: ArrayIterator[nullable MClass] */
}
};
/* runtime type Collection[MClass] */
const struct type type_abstract_collection__Collectionmodel__MClass = {
1366,
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
2080,
"AbstractArrayRead[MClass]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MClass] */
const struct type type_array__AbstractArrayReadnullable_model__MClass = {
1367,
"AbstractArrayRead[nullable MClass]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MClass] */
const struct type type_array__AbstractArraymodel__MClass = {
2207,
"AbstractArray[MClass]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable MClass] */
const struct type type_array__AbstractArraynullable_model__MClass = {
1515,
"AbstractArray[nullable MClass]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MProperty] */
const struct type type_array__Arraymodel__MProperty = {
2333,
"Array[MProperty]", /* class_name_string */
22,
0,
&resolution_table_array__Arraymodel__MProperty,
23,
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
-1, /* empty */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1911, /* Array[nullable MProperty] */
1909, /* Array[Object] */
2178, /* AbstractArrayRead[MProperty] */
2081, /* AbstractArray[PropertyLayoutElement] */
-1, /* empty */
2208, /* Array[PropertyLayoutElement] */
2282, /* AbstractArray[MProperty] */
-1, /* empty */
2333, /* Array[MProperty] */
},
};
const struct types resolution_table_array__Arraymodel__MProperty = {
0, /* dummy */
{
&type_array__NativeArraymodel__MProperty, /* NativeArray[E]: NativeArray[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_model__MProperty, /* E: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_model__MProperty, /* E: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
&type_array__NativeArraymodel__MProperty, /* NativeArray[E]: NativeArray[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_model__MProperty, /* E: MProperty */
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
&type_array__AbstractArraymodel__MProperty, /* AbstractArray[E]: AbstractArray[MProperty] */
&type_array__ArrayIteratormodel__MProperty, /* ArrayIterator[E]: ArrayIterator[MProperty] */
}
};
/* runtime type Array[PropertyLayoutElement] */
const struct type type_array__Arrayseparate_compiler__PropertyLayoutElement = {
-1, /*CAST DEAD*/
"Array[PropertyLayoutElement]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayseparate_compiler__PropertyLayoutElement,
20,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
-1, /* empty */
590, /* Array[nullable Object] */
605, /* Collection[PropertyLayoutElement] */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
-1, /* empty */
1909, /* Array[Object] */
-1, /* empty */
2081, /* AbstractArray[PropertyLayoutElement] */
-1, /* empty */
2208, /* Array[PropertyLayoutElement] */
},
};
const struct types resolution_table_array__Arrayseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_array__NativeArrayseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[PropertyLayoutElement] */
&type_array__NativeArrayseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[PropertyLayoutElement] */
&type_array__AbstractArrayseparate_compiler__PropertyLayoutElement, /* AbstractArray[E]: AbstractArray[PropertyLayoutElement] */
&type_array__ArrayIteratorseparate_compiler__PropertyLayoutElement, /* ArrayIterator[E]: ArrayIterator[PropertyLayoutElement] */
}
};
/* runtime type Array[nullable MProperty] */
const struct type type_array__Arraynullable_model__MProperty = {
-1, /*CAST DEAD*/
"Array[nullable MProperty]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraynullable_model__MProperty,
15,
{
0, /* nullable Object */
1, /* Object */
92, /* Collection[nullable MProperty] */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
1368, /* AbstractArrayRead[nullable MProperty] */
590, /* Array[nullable Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1517, /* AbstractArray[nullable MProperty] */
-1, /* empty */
-1, /* empty */
1911, /* Array[nullable MProperty] */
},
};
const struct types resolution_table_array__Arraynullable_model__MProperty = {
0, /* dummy */
{
&type_array__NativeArraynullable_model__MProperty, /* NativeArray[E]: NativeArray[nullable MProperty] */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[E]: Collection[nullable MProperty] */
&type_array__Arraynullable_model__MProperty, /* Array[E]: Array[nullable MProperty] */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[E]: Collection[nullable MProperty] */
&type_abstract_collection__Collectionnullable_model__MProperty, /* Collection[E]: Collection[nullable MProperty] */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_array__Arraynullable_model__MProperty, /* Array[E]: Array[nullable MProperty] */
&type_array__NativeArraynullable_model__MProperty, /* NativeArray[E]: NativeArray[nullable MProperty] */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_nullable_model__MProperty, /* E: nullable MProperty */
&type_array__Arraynullable_model__MProperty, /* Array[E]: Array[nullable MProperty] */
&type_array__AbstractArraynullable_model__MProperty, /* AbstractArray[E]: AbstractArray[nullable MProperty] */
&type_array__ArrayIteratornullable_model__MProperty, /* ArrayIterator[E]: ArrayIterator[nullable MProperty] */
}
};
/* runtime type Collection[PropertyLayoutElement] */
const struct type type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement = {
605,
"Collection[PropertyLayoutElement]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MProperty] */
const struct type type_abstract_collection__Collectionmodel__MProperty = {
1516,
"Collection[MProperty]", /* class_name_string */
9,
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
2178,
"AbstractArrayRead[MProperty]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[PropertyLayoutElement] */
const struct type type_array__AbstractArrayReadseparate_compiler__PropertyLayoutElement = {
1683,
"AbstractArrayRead[PropertyLayoutElement]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MProperty] */
const struct type type_array__AbstractArrayReadnullable_model__MProperty = {
1368,
"AbstractArrayRead[nullable MProperty]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MProperty] */
const struct type type_array__AbstractArraymodel__MProperty = {
2282,
"AbstractArray[MProperty]", /* class_name_string */
20,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[PropertyLayoutElement] */
const struct type type_array__AbstractArrayseparate_compiler__PropertyLayoutElement = {
2081,
"AbstractArray[PropertyLayoutElement]", /* class_name_string */
17,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable MProperty] */
const struct type type_array__AbstractArraynullable_model__MProperty = {
1517,
"AbstractArray[nullable MProperty]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MClassDef] */
const struct type type_poset__POSetmodel__MClassDef = {
1369,
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
83, /* Collection[Object] */
606, /* Collection[MClassDef] */
1369, /* POSet[MClassDef] */
},
};
const struct types resolution_table_poset__POSetmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassDefposet__POSetElementmodel__MClassDef, /* HashMap[E, POSetElement[E]]: HashMap[MClassDef, POSetElement[MClassDef]] */
&type_model__MClassDef, /* E: MClassDef */
&type_model__MClassDef, /* E: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_poset__POSetElementmodel__MClassDef, /* POSetElement[E]: POSetElement[MClassDef] */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[COMPARED]: Array[MClassDef] */
}
};
/* runtime type Collection[MClassDef] */
const struct type type_abstract_collection__Collectionmodel__MClassDef = {
606,
"Collection[MClassDef]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type POSet[MClassType] */
const struct type type_poset__POSetmodel__MClassType = {
1912,
"POSet[MClassType]", /* class_name_string */
12,
0,
&resolution_table_poset__POSetmodel__MClassType,
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
1518, /* POSet[MType] */
-1, /* empty */
-1, /* empty */
1519, /* Collection[MClassType] */
1912, /* POSet[MClassType] */
},
};
const struct types resolution_table_poset__POSetmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MClassTypeposet__POSetElementmodel__MClassType, /* HashMap[E, POSetElement[E]]: HashMap[MClassType, POSetElement[MClassType]] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_poset__POSetElementmodel__MClassType, /* POSetElement[E]: POSetElement[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[COMPARED]: Array[MClassType] */
}
};
/* runtime type POSet[MType] */
const struct type type_poset__POSetmodel__MType = {
1518,
"POSet[MType]", /* class_name_string */
8,
0,
&resolution_table_poset__POSetmodel__MType,
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
1518, /* POSet[MType] */
},
};
const struct types resolution_table_poset__POSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypeposet__POSetElementmodel__MType, /* HashMap[E, POSetElement[E]]: HashMap[MType, POSetElement[MType]] */
&type_model__MType, /* E: MType */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_poset__POSetElementmodel__MType, /* POSetElement[E]: POSetElement[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[COMPARED]: Array[MType] */
}
};
/* runtime type Collection[MClassType] */
const struct type type_abstract_collection__Collectionmodel__MClassType = {
1519,
"Collection[MClassType]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MType] */
const struct type type_abstract_collection__Collectionmodel__MType = {
1370,
"Collection[MType]", /* class_name_string */
7,
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
607, /* MultiHashMap[String, MClass] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MClass, /* HashMapKeys[K, V]: HashMapKeys[String, Array[MClass]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MClass, /* HashMapValues[K, V]: HashMapValues[String, Array[MClass]] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MClass, /* HashMapIterator[K, V]: HashMapIterator[String, Array[MClass]] */
&type_string__String, /* K: String */
&type_array__Arraymodel__MClass, /* V: Array[MClass] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* HashMapNode[K, V]: HashMapNode[String, Array[MClass]] */
&type_string__String, /* K: String */
&type_string__String, /* K: String */
&type_model__MClass, /* V: MClass */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* nullable N: nullable HashMapNode[String, Array[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Array[MClass]]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MClass, /* N: HashMapNode[String, Array[MClass]] */
&type_nullable_string__String, /* nullable K: nullable String */
&type_array__Arraymodel__MClass, /* Array[V]: Array[MClass] */
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
608, /* MultiHashMap[String, MProperty] */
},
};
const struct types resolution_table_more_collections__MultiHashMapstring__Stringmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringarray__Arraymodel__MProperty, /* HashMapKeys[K, V]: HashMapKeys[String, Array[MProperty]] */
&type_hash_collection__HashMapValuesstring__Stringarray__Arraymodel__MProperty, /* HashMapValues[K, V]: HashMapValues[String, Array[MProperty]] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringarray__Arraymodel__MProperty, /* HashMapIterator[K, V]: HashMapIterator[String, Array[MProperty]] */
&type_string__String, /* K: String */
&type_array__Arraymodel__MProperty, /* V: Array[MProperty] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* HashMapNode[K, V]: HashMapNode[String, Array[MProperty]] */
&type_string__String, /* K: String */
&type_string__String, /* K: String */
&type_model__MProperty, /* V: MProperty */
&type_nullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* nullable N: nullable HashMapNode[String, Array[MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Array[MProperty]]] */
&type_hash_collection__HashMapNodestring__Stringarray__Arraymodel__MProperty, /* N: HashMapNode[String, Array[MProperty]] */
&type_nullable_string__String, /* nullable K: nullable String */
&type_array__Arraymodel__MProperty, /* Array[V]: Array[MProperty] */
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
1371,
"MNullType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
0, /* nullable Object */
1, /* Object */
4, /* nullable MType */
-1, /* empty */
609, /* MType */
1371, /* MNullType */
},
};
/* runtime type MType */
const struct type type_model__MType = {
609,
"MType", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MType */
const struct type type_nullable_model__MType = {
4,
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
&type_hash_collection__HashMapmmodule__MModulemore_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap[K1, HashMap2[K2, K3, V]]: HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_mmodule__MModule, /* K1: MModule */
&type_model__MType, /* K2: MType */
&type_string__String, /* K3: String */
&type_nullable_model__MProperty, /* V: nullable MProperty */
&type_more_collections__HashMap2model__MTypestring__Stringnullable_model__MProperty, /* HashMap2[K2, K3, V]: HashMap2[MType, String, nullable MProperty] */
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
&type_hash_collection__HashMapKeysstring__Stringnullable_modelbuilder__ModulePath, /* HashMapKeys[K, V]: HashMapKeys[String, nullable ModulePath] */
&type_hash_collection__HashMapValuesstring__Stringnullable_modelbuilder__ModulePath, /* HashMapValues[K, V]: HashMapValues[String, nullable ModulePath] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringnullable_modelbuilder__ModulePath, /* HashMapIterator[K, V]: HashMapIterator[String, nullable ModulePath] */
&type_string__String, /* K: String */
&type_nullable_modelbuilder__ModulePath, /* V: nullable ModulePath */
&type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* HashMapNode[K, V]: HashMapNode[String, nullable ModulePath] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* nullable N: nullable HashMapNode[String, nullable ModulePath] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
&type_hash_collection__HashMapNodestring__Stringnullable_modelbuilder__ModulePath, /* N: HashMapNode[String, nullable ModulePath] */
&type_nullable_string__String, /* nullable K: nullable String */
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
&type_hash_collection__HashMapKeysstring__Stringnullable_mproject__MGroup, /* HashMapKeys[K, V]: HashMapKeys[String, nullable MGroup] */
&type_hash_collection__HashMapValuesstring__Stringnullable_mproject__MGroup, /* HashMapValues[K, V]: HashMapValues[String, nullable MGroup] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringnullable_mproject__MGroup, /* HashMapIterator[K, V]: HashMapIterator[String, nullable MGroup] */
&type_string__String, /* K: String */
&type_nullable_mproject__MGroup, /* V: nullable MGroup */
&type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* HashMapNode[K, V]: HashMapNode[String, nullable MGroup] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* nullable N: nullable HashMapNode[String, nullable MGroup] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, nullable MGroup]] */
&type_hash_collection__HashMapNodestring__Stringnullable_mproject__MGroup, /* N: HashMapNode[String, nullable MGroup] */
&type_nullable_string__String, /* nullable K: nullable String */
}
};
/* runtime type Array[AModule] */
const struct type type_array__Arrayparser_nodes__AModule = {
-1, /*CAST DEAD*/
"Array[AModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AModule,
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
1514, /* Collection[AModule] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2179, /* AbstractArrayRead[AModule] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2283, /* AbstractArray[AModule] */
-1, /* empty */
2305, /* Array[Prod] */
2334, /* Array[AModule] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AModule = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AModule, /* NativeArray[E]: NativeArray[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_parser_nodes__AModule, /* E: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_array__Arrayparser_nodes__AModule, /* Array[E]: Array[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_parser_nodes__AModule, /* E: AModule */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_abstract_collection__Collectionparser_nodes__AModule, /* Collection[E]: Collection[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_array__Arrayparser_nodes__AModule, /* Array[E]: Array[AModule] */
&type_array__NativeArrayparser_nodes__AModule, /* NativeArray[E]: NativeArray[AModule] */
&type_parser_nodes__AModule, /* E: AModule */
&type_parser_nodes__AModule, /* E: AModule */
&type_array__Arrayparser_nodes__AModule, /* Array[E]: Array[AModule] */
&type_array__AbstractArrayparser_nodes__AModule, /* AbstractArray[E]: AbstractArray[AModule] */
&type_array__ArrayIteratorparser_nodes__AModule, /* ArrayIterator[E]: ArrayIterator[AModule] */
}
};
/* runtime type Array[Prod] */
const struct type type_array__Arrayparser_nodes__Prod = {
-1, /*CAST DEAD*/
"Array[Prod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__Prod,
22,
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
-1, /* empty */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
-1, /* empty */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
-1, /* empty */
-1, /* empty */
2305, /* Array[Prod] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__Prod = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__Prod, /* NativeArray[E]: NativeArray[Prod] */
&type_parser_nodes__Prod, /* E: Prod */
&type_parser_nodes__Prod, /* E: Prod */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[E]: Collection[Prod] */
&type_array__Arrayparser_nodes__Prod, /* Array[E]: Array[Prod] */
&type_parser_nodes__Prod, /* E: Prod */
&type_parser_nodes__Prod, /* E: Prod */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[E]: Collection[Prod] */
&type_abstract_collection__Collectionparser_nodes__Prod, /* Collection[E]: Collection[Prod] */
&type_parser_nodes__Prod, /* E: Prod */
&type_array__Arrayparser_nodes__Prod, /* Array[E]: Array[Prod] */
&type_array__NativeArrayparser_nodes__Prod, /* NativeArray[E]: NativeArray[Prod] */
&type_parser_nodes__Prod, /* E: Prod */
&type_parser_nodes__Prod, /* E: Prod */
&type_array__Arrayparser_nodes__Prod, /* Array[E]: Array[Prod] */
&type_array__AbstractArrayparser_nodes__Prod, /* AbstractArray[E]: AbstractArray[Prod] */
&type_array__ArrayIteratorparser_nodes__Prod, /* ArrayIterator[E]: ArrayIterator[Prod] */
}
};
/* runtime type Array[ANode] */
const struct type type_array__Arrayparser_nodes__ANode = {
-1, /*CAST DEAD*/
"Array[ANode]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__ANode,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
-1, /* empty */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
-1, /* empty */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
-1, /* empty */
2209, /* Array[ANode] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__ANode = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__ANode, /* NativeArray[E]: NativeArray[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* E: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* E: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_array__NativeArrayparser_nodes__ANode, /* NativeArray[E]: NativeArray[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* E: ANode */
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_array__AbstractArrayparser_nodes__ANode, /* AbstractArray[E]: AbstractArray[ANode] */
&type_array__ArrayIteratorparser_nodes__ANode, /* ArrayIterator[E]: ArrayIterator[ANode] */
}
};
/* runtime type AbstractArrayRead[AModule] */
const struct type type_array__AbstractArrayReadparser_nodes__AModule = {
2179,
"AbstractArrayRead[AModule]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Prod] */
const struct type type_array__AbstractArrayReadparser_nodes__Prod = {
2082,
"AbstractArrayRead[Prod]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ANode] */
const struct type type_array__AbstractArrayReadparser_nodes__ANode = {
1684,
"AbstractArrayRead[ANode]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AModule] */
const struct type type_array__AbstractArrayparser_nodes__AModule = {
2283,
"AbstractArray[AModule]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Prod] */
const struct type type_array__AbstractArrayparser_nodes__Prod = {
2210,
"AbstractArray[Prod]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[ANode] */
const struct type type_array__AbstractArrayparser_nodes__ANode = {
2083,
"AbstractArray[ANode]", /* class_name_string */
14,
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
&type_hash_collection__HashMapKeysmmodule__MModuleparser_nodes__AModule, /* HashMapKeys[K, V]: HashMapKeys[MModule, AModule] */
&type_hash_collection__HashMapValuesmmodule__MModuleparser_nodes__AModule, /* HashMapValues[K, V]: HashMapValues[MModule, AModule] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapIteratormmodule__MModuleparser_nodes__AModule, /* HashMapIterator[K, V]: HashMapIterator[MModule, AModule] */
&type_mmodule__MModule, /* K: MModule */
&type_parser_nodes__AModule, /* V: AModule */
&type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* HashMapNode[K, V]: HashMapNode[MModule, AModule] */
&type_mmodule__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* nullable N: nullable HashMapNode[MModule, AModule] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, AModule]] */
&type_hash_collection__HashMapNodemmodule__MModuleparser_nodes__AModule, /* N: HashMapNode[MModule, AModule] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
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
&type_hash_collection__HashMapKeysmodel__MClassDefparser_nodes__AClassdef, /* HashMapKeys[K, V]: HashMapKeys[MClassDef, AClassdef] */
&type_hash_collection__HashMapValuesmodel__MClassDefparser_nodes__AClassdef, /* HashMapValues[K, V]: HashMapValues[MClassDef, AClassdef] */
&type_model__MClassDef, /* K: MClassDef */
&type_hash_collection__HashMapIteratormodel__MClassDefparser_nodes__AClassdef, /* HashMapIterator[K, V]: HashMapIterator[MClassDef, AClassdef] */
&type_model__MClassDef, /* K: MClassDef */
&type_parser_nodes__AClassdef, /* V: AClassdef */
&type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* HashMapNode[K, V]: HashMapNode[MClassDef, AClassdef] */
&type_model__MClassDef, /* K: MClassDef */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* nullable N: nullable HashMapNode[MClassDef, AClassdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
&type_hash_collection__HashMapNodemodel__MClassDefparser_nodes__AClassdef, /* N: HashMapNode[MClassDef, AClassdef] */
&type_nullable_model__MClassDef, /* nullable K: nullable MClassDef */
}
};
/* runtime type HashMap[String, MModuleData[AAnnotation]] */
const struct type type_hash_collection__HashMapstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
102,
"HashMap[String, MModuleData[AAnnotation]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation,
3,
{
0, /* nullable Object */
1, /* Object */
102, /* HashMap[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* HashMapKeys[K, V]: HashMapKeys[String, MModuleData[AAnnotation]] */
&type_hash_collection__HashMapValuesstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* HashMapValues[K, V]: HashMapValues[String, MModuleData[AAnnotation]] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* HashMapIterator[K, V]: HashMapIterator[String, MModuleData[AAnnotation]] */
&type_string__String, /* K: String */
&type_mmodule_data__MModuleDataparser_nodes__AAnnotation, /* V: MModuleData[AAnnotation] */
&type_hash_collection__HashMapNodestring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* HashMapNode[K, V]: HashMapNode[String, MModuleData[AAnnotation]] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* nullable N: nullable HashMapNode[String, MModuleData[AAnnotation]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, MModuleData[AAnnotation]]] */
&type_hash_collection__HashMapNodestring__Stringmmodule_data__MModuleDataparser_nodes__AAnnotation, /* N: HashMapNode[String, MModuleData[AAnnotation]] */
&type_nullable_string__String, /* nullable K: nullable String */
}
};
/* runtime type HashMap[MPropDef, APropdef] */
const struct type type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef = {
103,
"HashMap[MPropDef, APropdef]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
103, /* HashMap[MPropDef, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MPropDefparser_nodes__APropdef, /* HashMapKeys[K, V]: HashMapKeys[MPropDef, APropdef] */
&type_hash_collection__HashMapValuesmodel__MPropDefparser_nodes__APropdef, /* HashMapValues[K, V]: HashMapValues[MPropDef, APropdef] */
&type_model__MPropDef, /* K: MPropDef */
&type_hash_collection__HashMapIteratormodel__MPropDefparser_nodes__APropdef, /* HashMapIterator[K, V]: HashMapIterator[MPropDef, APropdef] */
&type_model__MPropDef, /* K: MPropDef */
&type_parser_nodes__APropdef, /* V: APropdef */
&type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* HashMapNode[K, V]: HashMapNode[MPropDef, APropdef] */
&type_model__MPropDef, /* K: MPropDef */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* nullable N: nullable HashMapNode[MPropDef, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
&type_hash_collection__HashMapNodemodel__MPropDefparser_nodes__APropdef, /* N: HashMapNode[MPropDef, APropdef] */
&type_nullable_model__MPropDef, /* nullable K: nullable MPropDef */
}
};
/* runtime type NativeArray[Object] */
const struct type type_array__NativeArraykernel__Object = {
104,
"NativeArray[Object]", /* class_name_string */
2,
0,
&resolution_table_array__NativeArraykernel__Object,
3,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
},
};
const struct types resolution_table_array__NativeArraykernel__Object = {
0, /* dummy */
{
&type_kernel__Object, /* E: Object */
&type_array__NativeArraykernel__Object, /* NativeArray[E]: NativeArray[Object] */
}
};
/* runtime type DefaultComparator */
const struct type type_sorter__DefaultComparator = {
-1, /*CAST DEAD*/
"DefaultComparator", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_sorter__DefaultComparator,
3,
{
0, /* nullable Object */
1, /* Object */
105, /* DefaultComparator */
},
};
const struct types resolution_table_sorter__DefaultComparator = {
0, /* dummy */
{
&type_kernel__Comparable, /* COMPARED: Comparable */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_array__Arraykernel__Comparable, /* Array[COMPARED]: Array[Comparable] */
}
};
/* runtime type NativeArray[String] */
const struct type type_array__NativeArraystring__String = {
1520,
"NativeArray[String]", /* class_name_string */
5,
0,
&resolution_table_array__NativeArraystring__String,
6,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
610, /* NativeArray[Streamable] */
1372, /* NativeArray[Text] */
1520, /* NativeArray[String] */
},
};
const struct types resolution_table_array__NativeArraystring__String = {
0, /* dummy */
{
&type_string__String, /* E: String */
&type_array__NativeArraystring__String, /* NativeArray[E]: NativeArray[String] */
}
};
/* runtime type NativeArray[Text] */
const struct type type_array__NativeArraystring__Text = {
1372,
"NativeArray[Text]", /* class_name_string */
4,
0,
&resolution_table_array__NativeArraystring__Text,
5,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
610, /* NativeArray[Streamable] */
1372, /* NativeArray[Text] */
},
};
const struct types resolution_table_array__NativeArraystring__Text = {
0, /* dummy */
{
&type_string__Text, /* E: Text */
&type_array__NativeArraystring__Text, /* NativeArray[E]: NativeArray[Text] */
}
};
/* runtime type NativeArray[Streamable] */
const struct type type_array__NativeArraystream__Streamable = {
610,
"NativeArray[Streamable]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArraystream__Streamable,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
610, /* NativeArray[Streamable] */
},
};
const struct types resolution_table_array__NativeArraystream__Streamable = {
0, /* dummy */
{
&type_stream__Streamable, /* E: Streamable */
&type_array__NativeArraystream__Streamable, /* NativeArray[E]: NativeArray[Streamable] */
}
};
/* runtime type ArraySet[MModule] */
const struct type type_array__ArraySetmmodule__MModule = {
-1, /*CAST DEAD*/
"ArraySet[MModule]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__ArraySetmmodule__MModule,
8,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
603, /* Collection[MModule] */
598, /* Set[Object] */
1521, /* ArraySet[MModule] */
},
};
const struct types resolution_table_array__ArraySetmmodule__MModule = {
0, /* dummy */
{
&type_array__ArraySetIteratormmodule__MModule, /* ArraySetIterator[E]: ArraySetIterator[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
NULL, /* empty */
&type_mmodule__MModule, /* E: MModule */
NULL, /* empty */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_mmodule__MModule, /* E: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
}
};
/* runtime type NativeArray[Option] */
const struct type type_array__NativeArrayopts__Option = {
611,
"NativeArray[Option]", /* class_name_string */
3,
0,
&resolution_table_array__NativeArrayopts__Option,
4,
{
0, /* nullable Object */
1, /* Object */
104, /* NativeArray[Object] */
611, /* NativeArray[Option] */
},
};
const struct types resolution_table_array__NativeArrayopts__Option = {
0, /* dummy */
{
&type_opts__Option, /* E: Option */
&type_array__NativeArrayopts__Option, /* NativeArray[E]: NativeArray[Option] */
}
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
106, /* AnnotationPhaseVisitor */
},
};
/* runtime type Array[AAnnotation] */
const struct type type_array__Arrayparser_nodes__AAnnotation = {
-1, /*CAST DEAD*/
"Array[AAnnotation]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_nodes__AAnnotation,
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
1522, /* Collection[AAnnotation] */
1512, /* AbstractArray[Object] */
1684, /* AbstractArrayRead[ANode] */
-1, /* empty */
2082, /* AbstractArrayRead[Prod] */
2083, /* AbstractArray[ANode] */
1909, /* Array[Object] */
2180, /* AbstractArrayRead[AAnnotation] */
2209, /* Array[ANode] */
2210, /* AbstractArray[Prod] */
2284, /* AbstractArray[AAnnotation] */
-1, /* empty */
2305, /* Array[Prod] */
2335, /* Array[AAnnotation] */
},
};
const struct types resolution_table_array__Arrayparser_nodes__AAnnotation = {
0, /* dummy */
{
&type_array__NativeArrayparser_nodes__AAnnotation, /* NativeArray[E]: NativeArray[AAnnotation] */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[E]: Collection[AAnnotation] */
&type_array__Arrayparser_nodes__AAnnotation, /* Array[E]: Array[AAnnotation] */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[E]: Collection[AAnnotation] */
&type_abstract_collection__Collectionparser_nodes__AAnnotation, /* Collection[E]: Collection[AAnnotation] */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_array__Arrayparser_nodes__AAnnotation, /* Array[E]: Array[AAnnotation] */
&type_array__NativeArrayparser_nodes__AAnnotation, /* NativeArray[E]: NativeArray[AAnnotation] */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_parser_nodes__AAnnotation, /* E: AAnnotation */
&type_array__Arrayparser_nodes__AAnnotation, /* Array[E]: Array[AAnnotation] */
&type_array__AbstractArrayparser_nodes__AAnnotation, /* AbstractArray[E]: AbstractArray[AAnnotation] */
&type_array__ArrayIteratorparser_nodes__AAnnotation, /* ArrayIterator[E]: ArrayIterator[AAnnotation] */
}
};
/* runtime type Collection[AAnnotation] */
const struct type type_abstract_collection__Collectionparser_nodes__AAnnotation = {
1522,
"Collection[AAnnotation]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[AAnnotation] */
const struct type type_array__AbstractArrayReadparser_nodes__AAnnotation = {
2180,
"AbstractArrayRead[AAnnotation]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[AAnnotation] */
const struct type type_array__AbstractArrayparser_nodes__AAnnotation = {
2284,
"AbstractArray[AAnnotation]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
107, /* FlatStringIterator */
},
};
const struct types resolution_table_string__FlatStringIterator = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[E]: Array[Char] */
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
108, /* FlatBufferIterator */
},
};
const struct types resolution_table_string__FlatBufferIterator = {
0, /* dummy */
{
&type_array__Arraykernel__Char, /* Array[E]: Array[Char] */
}
};
/* runtime type MModule */
const struct type type_mmodule__MModule = {
612,
"MModule", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
5, /* nullable MModule */
612, /* MModule */
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
1685,
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
83, /* Collection[Object] */
603, /* Collection[MModule] */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
1685, /* HashSet[MModule] */
},
};
const struct types resolution_table_hash_collection__HashSetmmodule__MModule = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemmodule__MModule, /* HashSetNode[E]: HashSetNode[MModule] */
&type_hash_collection__HashSetIteratormmodule__MModule, /* HashSetIterator[E]: HashSetIterator[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_array__Arraymmodule__MModule, /* Array[E]: Array[MModule] */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_mmodule__MModule, /* K: MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
&type_mmodule__MModule, /* E: MModule */
&type_nullable_hash_collection__HashSetNodemmodule__MModule, /* nullable N: nullable HashSetNode[MModule] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemmodule__MModule, /* NativeArray[E]: NativeArray[nullable HashSetNode[MModule]] */
&type_hash_collection__HashSetNodemmodule__MModule, /* N: HashSetNode[MModule] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
&type_abstract_collection__Collectionmmodule__MModule, /* Collection[E]: Collection[MModule] */
}
};
/* runtime type Array[MClassDef] */
const struct type type_array__Arraymodel__MClassDef = {
2211,
"Array[MClassDef]", /* class_name_string */
16,
0,
&resolution_table_array__Arraymodel__MClassDef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
606, /* Collection[MClassDef] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1686, /* AbstractArrayRead[MClassDef] */
1512, /* AbstractArray[Object] */
2084, /* AbstractArray[MClassDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2211, /* Array[MClassDef] */
},
};
const struct types resolution_table_array__Arraymodel__MClassDef = {
0, /* dummy */
{
&type_array__NativeArraymodel__MClassDef, /* NativeArray[E]: NativeArray[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_model__MClassDef, /* E: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_model__MClassDef, /* E: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_array__NativeArraymodel__MClassDef, /* NativeArray[E]: NativeArray[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_model__MClassDef, /* E: MClassDef */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_array__AbstractArraymodel__MClassDef, /* AbstractArray[E]: AbstractArray[MClassDef] */
&type_array__ArrayIteratormodel__MClassDef, /* ArrayIterator[E]: ArrayIterator[MClassDef] */
}
};
/* runtime type AbstractArrayRead[MClassDef] */
const struct type type_array__AbstractArrayReadmodel__MClassDef = {
1686,
"AbstractArrayRead[MClassDef]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MClassDef] */
const struct type type_array__AbstractArraymodel__MClassDef = {
2084,
"AbstractArray[MClassDef]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClass, Set[MProperty]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty = {
1373,
"HashMap[MClass, Set[MProperty]]", /* class_name_string */
5,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty,
6,
{
0, /* nullable Object */
1, /* Object */
109, /* Map[MClass, Set[PropertyLayoutElement]] */
613, /* HashMap[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
1373, /* HashMap[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MProperty]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MProperty]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MProperty]] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MProperty, /* V: Set[MProperty] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MProperty]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* nullable N: nullable HashMapNode[MClass, Set[MProperty]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MProperty, /* N: HashMapNode[MClass, Set[MProperty]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type HashMap[MClass, Set[PropertyLayoutElement]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
613,
"HashMap[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement,
4,
{
0, /* nullable Object */
1, /* Object */
109, /* Map[MClass, Set[PropertyLayoutElement]] */
613, /* HashMap[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[PropertyLayoutElement]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapValues[K, V]: HashMapValues[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setseparate_compiler__PropertyLayoutElement, /* V: Set[PropertyLayoutElement] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* HashMapNode[K, V]: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* nullable N: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* N: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type Map[MClass, Set[PropertyLayoutElement]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement = {
109,
"Map[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MClassDef */
const struct type type_model__MClassDef = {
614,
"MClassDef", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
6, /* nullable MClassDef */
614, /* MClassDef */
},
};
/* runtime type nullable MClassDef */
const struct type type_nullable_model__MClassDef = {
6,
"nullable MClassDef", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MClassType] */
const struct type type_array__Arraymodel__MClassType = {
2350,
"Array[MClassType]", /* class_name_string */
23,
0,
&resolution_table_array__Arraymodel__MClassType,
24,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable Array[nullable MType] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
590, /* Array[nullable Object] */
1370, /* Collection[MType] */
1345, /* AbstractArrayRead[Object] */
1374, /* AbstractArrayRead[nullable MType] */
1512, /* AbstractArray[Object] */
1519, /* Collection[MClassType] */
1523, /* AbstractArray[nullable MType] */
-1, /* empty */
2085, /* Array[nullable MType] */
1909, /* Array[Object] */
2086, /* AbstractArrayRead[MType] */
2181, /* AbstractArrayRead[MClassType] */
2212, /* AbstractArray[MType] */
-1, /* empty */
2285, /* AbstractArray[MClassType] */
2321, /* Array[MType] */
-1, /* empty */
2350, /* Array[MClassType] */
},
};
const struct types resolution_table_array__Arraymodel__MClassType = {
0, /* dummy */
{
&type_array__NativeArraymodel__MClassType, /* NativeArray[E]: NativeArray[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_array__NativeArraymodel__MClassType, /* NativeArray[E]: NativeArray[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_array__AbstractArraymodel__MClassType, /* AbstractArray[E]: AbstractArray[MClassType] */
&type_array__ArrayIteratormodel__MClassType, /* ArrayIterator[E]: ArrayIterator[MClassType] */
}
};
/* runtime type Array[MType] */
const struct type type_array__Arraymodel__MType = {
2321,
"Array[MType]", /* class_name_string */
21,
0,
&resolution_table_array__Arraymodel__MType,
22,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable Array[nullable MType] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
590, /* Array[nullable Object] */
1370, /* Collection[MType] */
1345, /* AbstractArrayRead[Object] */
1374, /* AbstractArrayRead[nullable MType] */
1512, /* AbstractArray[Object] */
-1, /* empty */
1523, /* AbstractArray[nullable MType] */
-1, /* empty */
2085, /* Array[nullable MType] */
1909, /* Array[Object] */
2086, /* AbstractArrayRead[MType] */
-1, /* empty */
2212, /* AbstractArray[MType] */
-1, /* empty */
-1, /* empty */
2321, /* Array[MType] */
},
};
const struct types resolution_table_array__Arraymodel__MType = {
0, /* dummy */
{
&type_array__NativeArraymodel__MType, /* NativeArray[E]: NativeArray[MType] */
&type_model__MType, /* E: MType */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_model__MType, /* E: MType */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_model__MType, /* E: MType */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_array__NativeArraymodel__MType, /* NativeArray[E]: NativeArray[MType] */
&type_model__MType, /* E: MType */
&type_model__MType, /* E: MType */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_array__AbstractArraymodel__MType, /* AbstractArray[E]: AbstractArray[MType] */
&type_array__ArrayIteratormodel__MType, /* ArrayIterator[E]: ArrayIterator[MType] */
}
};
/* runtime type Array[nullable MType] */
const struct type type_array__Arraynullable_model__MType = {
2085,
"Array[nullable MType]", /* class_name_string */
14,
0,
&resolution_table_array__Arraynullable_model__MType,
15,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable Array[nullable MType] */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
93, /* Collection[nullable MType] */
590, /* Array[nullable Object] */
-1, /* empty */
-1, /* empty */
1374, /* AbstractArrayRead[nullable MType] */
-1, /* empty */
-1, /* empty */
1523, /* AbstractArray[nullable MType] */
-1, /* empty */
2085, /* Array[nullable MType] */
},
};
const struct types resolution_table_array__Arraynullable_model__MType = {
0, /* dummy */
{
&type_array__NativeArraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable MType] */
&type_nullable_model__MType, /* E: nullable MType */
&type_nullable_model__MType, /* E: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[E]: Collection[nullable MType] */
&type_array__Arraynullable_model__MType, /* Array[E]: Array[nullable MType] */
&type_nullable_model__MType, /* E: nullable MType */
&type_nullable_model__MType, /* E: nullable MType */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[E]: Collection[nullable MType] */
&type_abstract_collection__Collectionnullable_model__MType, /* Collection[E]: Collection[nullable MType] */
&type_nullable_model__MType, /* E: nullable MType */
&type_array__Arraynullable_model__MType, /* Array[E]: Array[nullable MType] */
&type_array__NativeArraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable MType] */
&type_nullable_model__MType, /* E: nullable MType */
&type_nullable_model__MType, /* E: nullable MType */
&type_array__Arraynullable_model__MType, /* Array[E]: Array[nullable MType] */
&type_array__AbstractArraynullable_model__MType, /* AbstractArray[E]: AbstractArray[nullable MType] */
&type_array__ArrayIteratornullable_model__MType, /* ArrayIterator[E]: ArrayIterator[nullable MType] */
}
};
/* runtime type nullable Array[nullable MType] */
const struct type type_nullable_array__Arraynullable_model__MType = {
7,
"nullable Array[nullable MType]", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MClassType] */
const struct type type_array__AbstractArrayReadmodel__MClassType = {
2181,
"AbstractArrayRead[MClassType]", /* class_name_string */
17,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MType] */
const struct type type_array__AbstractArrayReadmodel__MType = {
2086,
"AbstractArrayRead[MType]", /* class_name_string */
16,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MType] */
const struct type type_array__AbstractArrayReadnullable_model__MType = {
1374,
"AbstractArrayRead[nullable MType]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MClassType] */
const struct type type_array__AbstractArraymodel__MClassType = {
2285,
"AbstractArray[MClassType]", /* class_name_string */
20,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MType] */
const struct type type_array__AbstractArraymodel__MType = {
2212,
"AbstractArray[MType]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable MType] */
const struct type type_array__AbstractArraynullable_model__MType = {
1523,
"AbstractArray[nullable MType]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MPropDef] */
const struct type type_array__Arraymodel__MPropDef = {
2336,
"Array[MPropDef]", /* class_name_string */
23,
0,
&resolution_table_array__Arraymodel__MPropDef,
24,
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
-1, /* empty */
1909, /* Array[Object] */
1913, /* Array[nullable MPropDef] */
2081, /* AbstractArray[PropertyLayoutElement] */
2182, /* AbstractArrayRead[MPropDef] */
2208, /* Array[PropertyLayoutElement] */
-1, /* empty */
2286, /* AbstractArray[MPropDef] */
-1, /* empty */
2336, /* Array[MPropDef] */
},
};
const struct types resolution_table_array__Arraymodel__MPropDef = {
0, /* dummy */
{
&type_array__NativeArraymodel__MPropDef, /* NativeArray[E]: NativeArray[MPropDef] */
&type_model__MPropDef, /* E: MPropDef */
&type_model__MPropDef, /* E: MPropDef */
&type_abstract_collection__Collectionmodel__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_array__Arraymodel__MPropDef, /* Array[E]: Array[MPropDef] */
&type_model__MPropDef, /* E: MPropDef */
&type_model__MPropDef, /* E: MPropDef */
&type_abstract_collection__Collectionmodel__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_abstract_collection__Collectionmodel__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_model__MPropDef, /* E: MPropDef */
&type_array__Arraymodel__MPropDef, /* Array[E]: Array[MPropDef] */
&type_array__NativeArraymodel__MPropDef, /* NativeArray[E]: NativeArray[MPropDef] */
&type_model__MPropDef, /* E: MPropDef */
&type_model__MPropDef, /* E: MPropDef */
&type_array__Arraymodel__MPropDef, /* Array[E]: Array[MPropDef] */
&type_array__AbstractArraymodel__MPropDef, /* AbstractArray[E]: AbstractArray[MPropDef] */
&type_array__ArrayIteratormodel__MPropDef, /* ArrayIterator[E]: ArrayIterator[MPropDef] */
}
};
/* runtime type Array[nullable MPropDef] */
const struct type type_array__Arraynullable_model__MPropDef = {
1913,
"Array[nullable MPropDef]", /* class_name_string */
16,
0,
&resolution_table_array__Arraynullable_model__MPropDef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
110, /* Collection[nullable MPropDef] */
590, /* Array[nullable Object] */
-1, /* empty */
-1, /* empty */
1375, /* AbstractArrayRead[nullable MPropDef] */
-1, /* empty */
-1, /* empty */
1525, /* AbstractArray[nullable MPropDef] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1913, /* Array[nullable MPropDef] */
},
};
const struct types resolution_table_array__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_array__NativeArraynullable_model__MPropDef, /* NativeArray[E]: NativeArray[nullable MPropDef] */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_abstract_collection__Collectionnullable_model__MPropDef, /* Collection[E]: Collection[nullable MPropDef] */
&type_array__Arraynullable_model__MPropDef, /* Array[E]: Array[nullable MPropDef] */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_abstract_collection__Collectionnullable_model__MPropDef, /* Collection[E]: Collection[nullable MPropDef] */
&type_abstract_collection__Collectionnullable_model__MPropDef, /* Collection[E]: Collection[nullable MPropDef] */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_array__Arraynullable_model__MPropDef, /* Array[E]: Array[nullable MPropDef] */
&type_array__NativeArraynullable_model__MPropDef, /* NativeArray[E]: NativeArray[nullable MPropDef] */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_nullable_model__MPropDef, /* E: nullable MPropDef */
&type_array__Arraynullable_model__MPropDef, /* Array[E]: Array[nullable MPropDef] */
&type_array__AbstractArraynullable_model__MPropDef, /* AbstractArray[E]: AbstractArray[nullable MPropDef] */
&type_array__ArrayIteratornullable_model__MPropDef, /* ArrayIterator[E]: ArrayIterator[nullable MPropDef] */
}
};
/* runtime type Collection[MPropDef] */
const struct type type_abstract_collection__Collectionmodel__MPropDef = {
1524,
"Collection[MPropDef]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MPropDef] */
const struct type type_abstract_collection__Collectionnullable_model__MPropDef = {
110,
"Collection[nullable MPropDef]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MPropDef] */
const struct type type_array__AbstractArrayReadmodel__MPropDef = {
2182,
"AbstractArrayRead[MPropDef]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable MPropDef] */
const struct type type_array__AbstractArrayReadnullable_model__MPropDef = {
1375,
"AbstractArrayRead[nullable MPropDef]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MPropDef] */
const struct type type_array__AbstractArraymodel__MPropDef = {
2286,
"AbstractArray[MPropDef]", /* class_name_string */
21,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable MPropDef] */
const struct type type_array__AbstractArraynullable_model__MPropDef = {
1525,
"AbstractArray[nullable MPropDef]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MProperty, APropdef] */
const struct type type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef = {
111,
"HashMap[MProperty, APropdef]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef,
3,
{
0, /* nullable Object */
1, /* Object */
111, /* HashMap[MProperty, APropdef] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MPropertyparser_nodes__APropdef, /* HashMapKeys[K, V]: HashMapKeys[MProperty, APropdef] */
&type_hash_collection__HashMapValuesmodel__MPropertyparser_nodes__APropdef, /* HashMapValues[K, V]: HashMapValues[MProperty, APropdef] */
&type_model__MProperty, /* K: MProperty */
&type_hash_collection__HashMapIteratormodel__MPropertyparser_nodes__APropdef, /* HashMapIterator[K, V]: HashMapIterator[MProperty, APropdef] */
&type_model__MProperty, /* K: MProperty */
&type_parser_nodes__APropdef, /* V: APropdef */
&type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* HashMapNode[K, V]: HashMapNode[MProperty, APropdef] */
&type_model__MProperty, /* K: MProperty */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* nullable N: nullable HashMapNode[MProperty, APropdef] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MProperty, APropdef]] */
&type_hash_collection__HashMapNodemodel__MPropertyparser_nodes__APropdef, /* N: HashMapNode[MProperty, APropdef] */
&type_nullable_model__MProperty, /* nullable K: nullable MProperty */
}
};
/* runtime type MMethodDef */
const struct type type_model__MMethodDef = {
1914,
"MMethodDef", /* class_name_string */
7,
0,
&resolution_table_model__MMethodDef,
8,
{
0, /* nullable Object */
1, /* Object */
8, /* nullable PropertyLayoutElement */
112, /* nullable MPropDef */
615, /* PropertyLayoutElement */
616, /* nullable MMethodDef */
1526, /* MPropDef */
1914, /* MMethodDef */
},
};
const struct types resolution_table_model__MMethodDef = {
0, /* dummy */
{
&type_model__MMethod, /* MPROPERTY: MMethod */
&type_abstract_compiler__AbstractCompilerVisitor, /* VISITOR: AbstractCompilerVisitor */
&type_model__MMethodDef, /* MPROPDEF: MMethodDef */
}
};
/* runtime type MPropDef */
const struct type type_model__MPropDef = {
1526,
"MPropDef", /* class_name_string */
6,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MPropDef */
const struct type type_nullable_model__MPropDef = {
112,
"nullable MPropDef", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type PropertyLayoutElement */
const struct type type_separate_compiler__PropertyLayoutElement = {
615,
"PropertyLayoutElement", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MMethodDef */
const struct type type_nullable_model__MMethodDef = {
616,
"nullable MMethodDef", /* class_name_string */
5,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable PropertyLayoutElement */
const struct type type_nullable_separate_compiler__PropertyLayoutElement = {
8,
"nullable PropertyLayoutElement", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
113, /* FlatSubstringsIter */
},
};
const struct types resolution_table_string__FlatSubstringsIter = {
0, /* dummy */
{
&type_array__Arraystring__FlatText, /* Array[E]: Array[FlatText] */
}
};
/* runtime type MProject */
const struct type type_mproject__MProject = {
114,
"MProject", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
114, /* MProject */
},
};
/* runtime type POSet[MGroup] */
const struct type type_poset__POSetmproject__MGroup = {
1527,
"POSet[MGroup]", /* class_name_string */
6,
0,
&resolution_table_poset__POSetmproject__MGroup,
7,
{
0, /* nullable Object */
1, /* Object */
115, /* Collection[nullable MGroup] */
-1, /* empty */
83, /* Collection[Object] */
1376, /* Collection[MGroup] */
1527, /* POSet[MGroup] */
},
};
const struct types resolution_table_poset__POSetmproject__MGroup = {
0, /* dummy */
{
&type_hash_collection__HashMapmproject__MGroupposet__POSetElementmproject__MGroup, /* HashMap[E, POSetElement[E]]: HashMap[MGroup, POSetElement[MGroup]] */
&type_mproject__MGroup, /* E: MGroup */
&type_mproject__MGroup, /* E: MGroup */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_array__Arraymproject__MGroup, /* Array[E]: Array[MGroup] */
&type_poset__POSetElementmproject__MGroup, /* POSetElement[E]: POSetElement[MGroup] */
&type_abstract_collection__Collectionmproject__MGroup, /* Collection[E]: Collection[MGroup] */
&type_array__Arraymproject__MGroup, /* Array[COMPARED]: Array[MGroup] */
}
};
/* runtime type Collection[MGroup] */
const struct type type_abstract_collection__Collectionmproject__MGroup = {
1376,
"Collection[MGroup]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable MGroup] */
const struct type type_abstract_collection__Collectionnullable_mproject__MGroup = {
115,
"Collection[nullable MGroup]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MGroup */
const struct type type_mproject__MGroup = {
617,
"MGroup", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
9, /* nullable MGroup */
617, /* MGroup */
},
};
/* runtime type nullable MGroup */
const struct type type_nullable_mproject__MGroup = {
9,
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
17,
{
0, /* nullable Object */
1, /* Object */
116, /* Collection[nullable ModulePath] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
1377, /* Collection[ModulePath] */
590, /* Array[nullable Object] */
1378, /* AbstractArrayRead[nullable ModulePath] */
1345, /* AbstractArrayRead[Object] */
1528, /* AbstractArray[nullable ModulePath] */
1512, /* AbstractArray[Object] */
1915, /* Array[nullable ModulePath] */
2087, /* AbstractArrayRead[ModulePath] */
2213, /* AbstractArray[ModulePath] */
-1, /* empty */
1909, /* Array[Object] */
2306, /* Array[ModulePath] */
},
};
const struct types resolution_table_array__Arraymodelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__NativeArraymodelbuilder__ModulePath, /* NativeArray[E]: NativeArray[ModulePath] */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[E]: Collection[ModulePath] */
&type_array__Arraymodelbuilder__ModulePath, /* Array[E]: Array[ModulePath] */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[E]: Collection[ModulePath] */
&type_abstract_collection__Collectionmodelbuilder__ModulePath, /* Collection[E]: Collection[ModulePath] */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_array__Arraymodelbuilder__ModulePath, /* Array[E]: Array[ModulePath] */
&type_array__NativeArraymodelbuilder__ModulePath, /* NativeArray[E]: NativeArray[ModulePath] */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_modelbuilder__ModulePath, /* E: ModulePath */
&type_array__Arraymodelbuilder__ModulePath, /* Array[E]: Array[ModulePath] */
&type_array__AbstractArraymodelbuilder__ModulePath, /* AbstractArray[E]: AbstractArray[ModulePath] */
&type_array__ArrayIteratormodelbuilder__ModulePath, /* ArrayIterator[E]: ArrayIterator[ModulePath] */
}
};
/* runtime type Array[nullable ModulePath] */
const struct type type_array__Arraynullable_modelbuilder__ModulePath = {
-1, /*CAST DEAD*/
"Array[nullable ModulePath]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraynullable_modelbuilder__ModulePath,
12,
{
0, /* nullable Object */
1, /* Object */
116, /* Collection[nullable ModulePath] */
82, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
590, /* Array[nullable Object] */
1378, /* AbstractArrayRead[nullable ModulePath] */
-1, /* empty */
1528, /* AbstractArray[nullable ModulePath] */
-1, /* empty */
1915, /* Array[nullable ModulePath] */
},
};
const struct types resolution_table_array__Arraynullable_modelbuilder__ModulePath = {
0, /* dummy */
{
&type_array__NativeArraynullable_modelbuilder__ModulePath, /* NativeArray[E]: NativeArray[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_abstract_collection__Collectionnullable_modelbuilder__ModulePath, /* Collection[E]: Collection[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_array__NativeArraynullable_modelbuilder__ModulePath, /* NativeArray[E]: NativeArray[nullable ModulePath] */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_nullable_modelbuilder__ModulePath, /* E: nullable ModulePath */
&type_array__Arraynullable_modelbuilder__ModulePath, /* Array[E]: Array[nullable ModulePath] */
&type_array__AbstractArraynullable_modelbuilder__ModulePath, /* AbstractArray[E]: AbstractArray[nullable ModulePath] */
&type_array__ArrayIteratornullable_modelbuilder__ModulePath, /* ArrayIterator[E]: ArrayIterator[nullable ModulePath] */
}
};
/* runtime type Collection[ModulePath] */
const struct type type_abstract_collection__Collectionmodelbuilder__ModulePath = {
1377,
"Collection[ModulePath]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[nullable ModulePath] */
const struct type type_abstract_collection__Collectionnullable_modelbuilder__ModulePath = {
116,
"Collection[nullable ModulePath]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ModulePath] */
const struct type type_array__AbstractArrayReadmodelbuilder__ModulePath = {
2087,
"AbstractArrayRead[ModulePath]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[nullable ModulePath] */
const struct type type_array__AbstractArrayReadnullable_modelbuilder__ModulePath = {
1378,
"AbstractArrayRead[nullable ModulePath]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[ModulePath] */
const struct type type_array__AbstractArraymodelbuilder__ModulePath = {
2213,
"AbstractArray[ModulePath]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[nullable ModulePath] */
const struct type type_array__AbstractArraynullable_modelbuilder__ModulePath = {
1528,
"AbstractArray[nullable ModulePath]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ModulePath */
const struct type type_modelbuilder__ModulePath = {
618,
"ModulePath", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
10, /* nullable ModulePath */
618, /* ModulePath */
},
};
/* runtime type nullable ModulePath */
const struct type type_nullable_modelbuilder__ModulePath = {
10,
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
117, /* TablesCapable */
619, /* Lexer */
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
117, /* TablesCapable */
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
118, /* SourceFile */
},
};
/* runtime type Array[Int] */
const struct type type_array__Arraykernel__Int = {
-1, /*CAST DEAD*/
"Array[Int]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraykernel__Int,
18,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
620, /* Collection[Int] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1687, /* AbstractArrayRead[Int] */
1512, /* AbstractArray[Object] */
2088, /* AbstractArray[Int] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2072, /* Array[Comparable] */
2266, /* Array[Int] */
},
};
const struct types resolution_table_array__Arraykernel__Int = {
0, /* dummy */
{
&type_array__NativeArraykernel__Int, /* NativeArray[E]: NativeArray[Int] */
&type_kernel__Int, /* E: Int */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
&type_kernel__Int, /* E: Int */
&type_kernel__Int, /* E: Int */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_abstract_collection__Collectionkernel__Int, /* Collection[E]: Collection[Int] */
&type_kernel__Int, /* E: Int */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
&type_array__NativeArraykernel__Int, /* NativeArray[E]: NativeArray[Int] */
&type_kernel__Int, /* E: Int */
&type_kernel__Int, /* E: Int */
&type_array__Arraykernel__Int, /* Array[E]: Array[Int] */
&type_array__AbstractArraykernel__Int, /* AbstractArray[E]: AbstractArray[Int] */
&type_array__ArrayIteratorkernel__Int, /* ArrayIterator[E]: ArrayIterator[Int] */
}
};
/* runtime type Collection[Int] */
const struct type type_abstract_collection__Collectionkernel__Int = {
620,
"Collection[Int]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Int] */
const struct type type_array__AbstractArrayReadkernel__Int = {
1687,
"AbstractArrayRead[Int]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Int] */
const struct type type_array__AbstractArraykernel__Int = {
2088,
"AbstractArray[Int]", /* class_name_string */
11,
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
117, /* TablesCapable */
621, /* Parser */
},
};
/* runtime type ANodes[AClassdef] */
const struct type type_parser_nodes__ANodesparser_nodes__AClassdef = {
-1, /*CAST DEAD*/
"ANodes[AClassdef]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__AClassdef,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1351, /* Collection[Prod] */
-1, /* empty */
1529, /* Collection[AClassdef] */
1916, /* ANodes[AClassdef] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__AClassdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AClassdef, /* Array[E]: Array[AClassdef] */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[E]: Collection[AClassdef] */
&type_array__Arrayparser_nodes__AClassdef, /* Array[E]: Array[AClassdef] */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[E]: Collection[AClassdef] */
&type_abstract_collection__Collectionparser_nodes__AClassdef, /* Collection[E]: Collection[AClassdef] */
&type_parser_nodes__AClassdef, /* E: AClassdef */
&type_parser_nodes__AClassdef, /* E: AClassdef */
}
};
/* runtime type Collection[AClassdef] */
const struct type type_abstract_collection__Collectionparser_nodes__AClassdef = {
1529,
"Collection[AClassdef]", /* class_name_string */
9,
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
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1351, /* Collection[Prod] */
-1, /* empty */
1530, /* Collection[APropdef] */
1917, /* ANodes[APropdef] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__APropdef = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__APropdef, /* Array[E]: Array[APropdef] */
&type_parser_nodes__APropdef, /* E: APropdef */
&type_parser_nodes__APropdef, /* E: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[E]: Collection[APropdef] */
&type_array__Arrayparser_nodes__APropdef, /* Array[E]: Array[APropdef] */
&type_parser_nodes__APropdef, /* E: APropdef */
&type_parser_nodes__APropdef, /* E: APropdef */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[E]: Collection[APropdef] */
&type_abstract_collection__Collectionparser_nodes__APropdef, /* Collection[E]: Collection[APropdef] */
&type_parser_nodes__APropdef, /* E: APropdef */
&type_parser_nodes__APropdef, /* E: APropdef */
}
};
/* runtime type Collection[APropdef] */
const struct type type_abstract_collection__Collectionparser_nodes__APropdef = {
1530,
"Collection[APropdef]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Location */
const struct type type_location__Location = {
622,
"Location", /* class_name_string */
4,
0,
&resolution_table_location__Location,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
622, /* Location */
},
};
const struct types resolution_table_location__Location = {
0, /* dummy */
{
&type_location__Location, /* OTHER: Location */
}
};
/* runtime type MClass */
const struct type type_model__MClass = {
623,
"MClass", /* class_name_string */
3,
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
11, /* nullable MClass */
623, /* MClass */
},
};
/* runtime type nullable MClass */
const struct type type_nullable_model__MClass = {
11,
"nullable MClass", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MParameterType] */
const struct type type_array__Arraymodel__MParameterType = {
-1, /*CAST DEAD*/
"Array[MParameterType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MParameterType,
23,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable Array[nullable MType] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
590, /* Array[nullable Object] */
1370, /* Collection[MType] */
1345, /* AbstractArrayRead[Object] */
1374, /* AbstractArrayRead[nullable MType] */
1512, /* AbstractArray[Object] */
1531, /* Collection[MParameterType] */
1523, /* AbstractArray[nullable MType] */
-1, /* empty */
2085, /* Array[nullable MType] */
1909, /* Array[Object] */
2086, /* AbstractArrayRead[MType] */
2183, /* AbstractArrayRead[MParameterType] */
2212, /* AbstractArray[MType] */
2287, /* AbstractArray[MParameterType] */
-1, /* empty */
2321, /* Array[MType] */
2351, /* Array[MParameterType] */
},
};
const struct types resolution_table_array__Arraymodel__MParameterType = {
0, /* dummy */
{
&type_array__NativeArraymodel__MParameterType, /* NativeArray[E]: NativeArray[MParameterType] */
&type_model__MParameterType, /* E: MParameterType */
&type_model__MParameterType, /* E: MParameterType */
&type_abstract_collection__Collectionmodel__MParameterType, /* Collection[E]: Collection[MParameterType] */
&type_array__Arraymodel__MParameterType, /* Array[E]: Array[MParameterType] */
&type_model__MParameterType, /* E: MParameterType */
&type_model__MParameterType, /* E: MParameterType */
&type_abstract_collection__Collectionmodel__MParameterType, /* Collection[E]: Collection[MParameterType] */
&type_abstract_collection__Collectionmodel__MParameterType, /* Collection[E]: Collection[MParameterType] */
&type_model__MParameterType, /* E: MParameterType */
&type_array__Arraymodel__MParameterType, /* Array[E]: Array[MParameterType] */
&type_array__NativeArraymodel__MParameterType, /* NativeArray[E]: NativeArray[MParameterType] */
&type_model__MParameterType, /* E: MParameterType */
&type_model__MParameterType, /* E: MParameterType */
&type_array__Arraymodel__MParameterType, /* Array[E]: Array[MParameterType] */
&type_array__AbstractArraymodel__MParameterType, /* AbstractArray[E]: AbstractArray[MParameterType] */
&type_array__ArrayIteratormodel__MParameterType, /* ArrayIterator[E]: ArrayIterator[MParameterType] */
}
};
/* runtime type Collection[MParameterType] */
const struct type type_abstract_collection__Collectionmodel__MParameterType = {
1531,
"Collection[MParameterType]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MParameterType] */
const struct type type_array__AbstractArrayReadmodel__MParameterType = {
2183,
"AbstractArrayRead[MParameterType]", /* class_name_string */
17,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MParameterType] */
const struct type type_array__AbstractArraymodel__MParameterType = {
2287,
"AbstractArray[MParameterType]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MGenericType] */
const struct type type_array__Arraymodel__MGenericType = {
-1, /*CAST DEAD*/
"Array[MGenericType]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MGenericType,
25,
{
0, /* nullable Object */
1, /* Object */
7, /* nullable Array[nullable MType] */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
590, /* Array[nullable Object] */
1370, /* Collection[MType] */
1345, /* AbstractArrayRead[Object] */
1374, /* AbstractArrayRead[nullable MType] */
1512, /* AbstractArray[Object] */
1519, /* Collection[MClassType] */
1523, /* AbstractArray[nullable MType] */
1688, /* Collection[MGenericType] */
2085, /* Array[nullable MType] */
1909, /* Array[Object] */
2086, /* AbstractArrayRead[MType] */
2181, /* AbstractArrayRead[MClassType] */
2212, /* AbstractArray[MType] */
2267, /* AbstractArrayRead[MGenericType] */
2285, /* AbstractArray[MClassType] */
2321, /* Array[MType] */
2322, /* AbstractArray[MGenericType] */
2350, /* Array[MClassType] */
2363, /* Array[MGenericType] */
},
};
const struct types resolution_table_array__Arraymodel__MGenericType = {
0, /* dummy */
{
&type_array__NativeArraymodel__MGenericType, /* NativeArray[E]: NativeArray[MGenericType] */
&type_model__MGenericType, /* E: MGenericType */
&type_model__MGenericType, /* E: MGenericType */
&type_abstract_collection__Collectionmodel__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_array__Arraymodel__MGenericType, /* Array[E]: Array[MGenericType] */
&type_model__MGenericType, /* E: MGenericType */
&type_model__MGenericType, /* E: MGenericType */
&type_abstract_collection__Collectionmodel__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_abstract_collection__Collectionmodel__MGenericType, /* Collection[E]: Collection[MGenericType] */
&type_model__MGenericType, /* E: MGenericType */
&type_array__Arraymodel__MGenericType, /* Array[E]: Array[MGenericType] */
&type_array__NativeArraymodel__MGenericType, /* NativeArray[E]: NativeArray[MGenericType] */
&type_model__MGenericType, /* E: MGenericType */
&type_model__MGenericType, /* E: MGenericType */
&type_array__Arraymodel__MGenericType, /* Array[E]: Array[MGenericType] */
&type_array__AbstractArraymodel__MGenericType, /* AbstractArray[E]: AbstractArray[MGenericType] */
&type_array__ArrayIteratormodel__MGenericType, /* ArrayIterator[E]: ArrayIterator[MGenericType] */
}
};
/* runtime type Collection[MGenericType] */
const struct type type_abstract_collection__Collectionmodel__MGenericType = {
1688,
"Collection[MGenericType]", /* class_name_string */
13,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[MGenericType] */
const struct type type_array__AbstractArrayReadmodel__MGenericType = {
2267,
"AbstractArrayRead[MGenericType]", /* class_name_string */
19,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MGenericType] */
const struct type type_array__AbstractArraymodel__MGenericType = {
2322,
"AbstractArray[MGenericType]", /* class_name_string */
22,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Message */
const struct type type_toolcontext__Message = {
624,
"Message", /* class_name_string */
4,
0,
&resolution_table_toolcontext__Message,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
624, /* Message */
},
};
const struct types resolution_table_toolcontext__Message = {
0, /* dummy */
{
&type_toolcontext__Message, /* OTHER: Message */
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
2214,
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
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
598, /* Set[Object] */
1370, /* Collection[MType] */
1350, /* HashSet[Object] */
1689, /* Set[MType] */
2089, /* HashSet[MType] */
1519, /* Collection[MClassType] */
2090, /* Set[MClassType] */
2214, /* HashSet[MClassType] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MClassType, /* HashSetNode[E]: HashSetNode[MClassType] */
&type_hash_collection__HashSetIteratormodel__MClassType, /* HashSetIterator[E]: HashSetIterator[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* K: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_nullable_hash_collection__HashSetNodemodel__MClassType, /* nullable N: nullable HashSetNode[MClassType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassType, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClassType]] */
&type_hash_collection__HashSetNodemodel__MClassType, /* N: HashSetNode[MClassType] */
&type_nullable_model__MClassType, /* nullable K: nullable MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
}
};
/* runtime type HashSet[MType] */
const struct type type_hash_collection__HashSetmodel__MType = {
2089,
"HashSet[MType]", /* class_name_string */
10,
0,
&resolution_table_hash_collection__HashSetmodel__MType,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
598, /* Set[Object] */
1370, /* Collection[MType] */
1350, /* HashSet[Object] */
1689, /* Set[MType] */
2089, /* HashSet[MType] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MType, /* HashSetNode[E]: HashSetNode[MType] */
&type_hash_collection__HashSetIteratormodel__MType, /* HashSetIterator[E]: HashSetIterator[MType] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_array__Arraymodel__MType, /* Array[E]: Array[MType] */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_model__MType, /* E: MType */
&type_model__MType, /* K: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
&type_model__MType, /* E: MType */
&type_nullable_hash_collection__HashSetNodemodel__MType, /* nullable N: nullable HashSetNode[MType] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MType, /* NativeArray[E]: NativeArray[nullable HashSetNode[MType]] */
&type_hash_collection__HashSetNodemodel__MType, /* N: HashSetNode[MType] */
&type_nullable_model__MType, /* nullable K: nullable MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
}
};
/* runtime type Set[MClassType] */
const struct type type_abstract_collection__Setmodel__MClassType = {
2090,
"Set[MClassType]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Set[MType] */
const struct type type_abstract_collection__Setmodel__MType = {
1689,
"Set[MType]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MClass] */
const struct type type_hash_collection__HashSetmodel__MClass = {
2091,
"HashSet[MClass]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetmodel__MClass,
10,
{
0, /* nullable Object */
1, /* Object */
91, /* Collection[nullable MClass] */
-1, /* empty */
83, /* Collection[Object] */
1366, /* Collection[MClass] */
598, /* Set[Object] */
1690, /* Set[MClass] */
1350, /* HashSet[Object] */
2091, /* HashSet[MClass] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MClass, /* HashSetNode[E]: HashSetNode[MClass] */
&type_hash_collection__HashSetIteratormodel__MClass, /* HashSetIterator[E]: HashSetIterator[MClass] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_array__Arraymodel__MClass, /* Array[E]: Array[MClass] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_model__MClass, /* E: MClass */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
&type_model__MClass, /* E: MClass */
&type_nullable_hash_collection__HashSetNodemodel__MClass, /* nullable N: nullable HashSetNode[MClass] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClass, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClass]] */
&type_hash_collection__HashSetNodemodel__MClass, /* N: HashSetNode[MClass] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
}
};
/* runtime type Set[MClass] */
const struct type type_abstract_collection__Setmodel__MClass = {
1690,
"Set[MClass]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MMethodDef] */
const struct type type_hash_collection__HashSetmodel__MMethodDef = {
2268,
"HashSet[MMethodDef]", /* class_name_string */
16,
0,
&resolution_table_hash_collection__HashSetmodel__MMethodDef,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
110, /* Collection[nullable MPropDef] */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
-1, /* empty */
1532, /* Set[PropertyLayoutElement] */
1524, /* Collection[MPropDef] */
-1, /* empty */
1918, /* HashSet[PropertyLayoutElement] */
1691, /* Collection[MMethodDef] */
2172, /* Set[MMethodDef] */
2268, /* HashSet[MMethodDef] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MMethodDef, /* HashSetNode[E]: HashSetNode[MMethodDef] */
&type_hash_collection__HashSetIteratormodel__MMethodDef, /* HashSetIterator[E]: HashSetIterator[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_array__Arraymodel__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_model__MMethodDef, /* K: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_nullable_hash_collection__HashSetNodemodel__MMethodDef, /* nullable N: nullable HashSetNode[MMethodDef] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethodDef, /* NativeArray[E]: NativeArray[nullable HashSetNode[MMethodDef]] */
&type_hash_collection__HashSetNodemodel__MMethodDef, /* N: HashSetNode[MMethodDef] */
&type_nullable_model__MMethodDef, /* nullable K: nullable MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
}
};
/* runtime type HashSet[PropertyLayoutElement] */
const struct type type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement = {
1918,
"HashSet[PropertyLayoutElement]", /* class_name_string */
13,
0,
&resolution_table_hash_collection__HashSetseparate_compiler__PropertyLayoutElement,
14,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
-1, /* empty */
1532, /* Set[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
1918, /* HashSet[PropertyLayoutElement] */
},
};
const struct types resolution_table_hash_collection__HashSetseparate_compiler__PropertyLayoutElement = {
0, /* dummy */
{
&type_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* HashSetNode[E]: HashSetNode[PropertyLayoutElement] */
&type_hash_collection__HashSetIteratorseparate_compiler__PropertyLayoutElement, /* HashSetIterator[E]: HashSetIterator[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_array__Arrayseparate_compiler__PropertyLayoutElement, /* Array[E]: Array[PropertyLayoutElement] */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_separate_compiler__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
&type_separate_compiler__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_nullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* nullable N: nullable HashSetNode[PropertyLayoutElement] */
&type_array__NativeArraynullable_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* NativeArray[E]: NativeArray[nullable HashSetNode[PropertyLayoutElement]] */
&type_hash_collection__HashSetNodeseparate_compiler__PropertyLayoutElement, /* N: HashSetNode[PropertyLayoutElement] */
&type_nullable_separate_compiler__PropertyLayoutElement, /* nullable K: nullable PropertyLayoutElement */
&type_abstract_collection__Collectionseparate_compiler__PropertyLayoutElement, /* Collection[E]: Collection[PropertyLayoutElement] */
}
};
/* runtime type Set[PropertyLayoutElement] */
const struct type type_abstract_collection__Setseparate_compiler__PropertyLayoutElement = {
1532,
"Set[PropertyLayoutElement]", /* class_name_string */
10,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Set[MMethodDef] */
const struct type type_abstract_collection__Setmodel__MMethodDef = {
2172,
"Set[MMethodDef]", /* class_name_string */
15,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MMethodDef] */
const struct type type_abstract_collection__Collectionmodel__MMethodDef = {
1691,
"Collection[MMethodDef]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MMethod] */
const struct type type_hash_collection__HashSetmodel__MMethod = {
2280,
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
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
1516, /* Collection[MProperty] */
1532, /* Set[PropertyLayoutElement] */
2092, /* Set[MProperty] */
1692, /* Collection[MMethod] */
1918, /* HashSet[PropertyLayoutElement] */
-1, /* empty */
2215, /* HashSet[MProperty] */
2280, /* HashSet[MMethod] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MMethod = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MMethod, /* HashSetNode[E]: HashSetNode[MMethod] */
&type_hash_collection__HashSetIteratormodel__MMethod, /* HashSetIterator[E]: HashSetIterator[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_array__Arraymodel__MMethod, /* Array[E]: Array[MMethod] */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_model__MMethod, /* K: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_nullable_hash_collection__HashSetNodemodel__MMethod, /* nullable N: nullable HashSetNode[MMethod] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MMethod, /* NativeArray[E]: NativeArray[nullable HashSetNode[MMethod]] */
&type_hash_collection__HashSetNodemodel__MMethod, /* N: HashSetNode[MMethod] */
&type_nullable_model__MMethod, /* nullable K: nullable MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
}
};
/* runtime type HashSet[MProperty] */
const struct type type_hash_collection__HashSetmodel__MProperty = {
2215,
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
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
1516, /* Collection[MProperty] */
1532, /* Set[PropertyLayoutElement] */
2092, /* Set[MProperty] */
-1, /* empty */
1918, /* HashSet[PropertyLayoutElement] */
-1, /* empty */
2215, /* HashSet[MProperty] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MProperty = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MProperty, /* HashSetNode[E]: HashSetNode[MProperty] */
&type_hash_collection__HashSetIteratormodel__MProperty, /* HashSetIterator[E]: HashSetIterator[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_array__Arraymodel__MProperty, /* Array[E]: Array[MProperty] */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_model__MProperty, /* K: MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
&type_model__MProperty, /* E: MProperty */
&type_nullable_hash_collection__HashSetNodemodel__MProperty, /* nullable N: nullable HashSetNode[MProperty] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MProperty, /* NativeArray[E]: NativeArray[nullable HashSetNode[MProperty]] */
&type_hash_collection__HashSetNodemodel__MProperty, /* N: HashSetNode[MProperty] */
&type_nullable_model__MProperty, /* nullable K: nullable MProperty */
&type_abstract_collection__Collectionmodel__MProperty, /* Collection[E]: Collection[MProperty] */
}
};
/* runtime type Set[MProperty] */
const struct type type_abstract_collection__Setmodel__MProperty = {
2092,
"Set[MProperty]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MMethod] */
const struct type type_abstract_collection__Collectionmodel__MMethod = {
1692,
"Collection[MMethod]", /* class_name_string */
12,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[CallSite] */
const struct type type_hash_collection__HashSettyping__CallSite = {
1693,
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
83, /* Collection[Object] */
625, /* Collection[CallSite] */
598, /* Set[Object] */
-1, /* empty */
1350, /* HashSet[Object] */
1693, /* HashSet[CallSite] */
},
};
const struct types resolution_table_hash_collection__HashSettyping__CallSite = {
0, /* dummy */
{
&type_hash_collection__HashSetNodetyping__CallSite, /* HashSetNode[E]: HashSetNode[CallSite] */
&type_hash_collection__HashSetIteratortyping__CallSite, /* HashSetIterator[E]: HashSetIterator[CallSite] */
&type_typing__CallSite, /* E: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[E]: Collection[CallSite] */
&type_array__Arraytyping__CallSite, /* Array[E]: Array[CallSite] */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[E]: Collection[CallSite] */
&type_typing__CallSite, /* E: CallSite */
&type_typing__CallSite, /* K: CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[E]: Collection[CallSite] */
&type_typing__CallSite, /* E: CallSite */
&type_nullable_hash_collection__HashSetNodetyping__CallSite, /* nullable N: nullable HashSetNode[CallSite] */
&type_array__NativeArraynullable_hash_collection__HashSetNodetyping__CallSite, /* NativeArray[E]: NativeArray[nullable HashSetNode[CallSite]] */
&type_hash_collection__HashSetNodetyping__CallSite, /* N: HashSetNode[CallSite] */
&type_nullable_typing__CallSite, /* nullable K: nullable CallSite */
&type_abstract_collection__Collectiontyping__CallSite, /* Collection[E]: Collection[CallSite] */
}
};
/* runtime type Collection[CallSite] */
const struct type type_abstract_collection__Collectiontyping__CallSite = {
625,
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
120, /* HashMap2[MType, MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_more_collections__HashMap2model__MTypemodel__MPropertyabstract_collection__Setmodel__MMethodDef = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypehash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K1, HashMap[K2, V]]: HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_model__MType, /* K1: MType */
&type_model__MProperty, /* K2: MProperty */
&type_abstract_collection__Setmodel__MMethodDef, /* V: Set[MMethodDef] */
&type_hash_collection__HashMapmodel__MPropertyabstract_collection__Setmodel__MMethodDef, /* HashMap[K2, V]: HashMap[MProperty, Set[MMethodDef]] */
}
};
/* runtime type Array[MMethod] */
const struct type type_array__Arraymodel__MMethod = {
-1, /*CAST DEAD*/
"Array[MMethod]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arraymodel__MMethod,
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
1692, /* Collection[MMethod] */
1683, /* AbstractArrayRead[PropertyLayoutElement] */
1911, /* Array[nullable MProperty] */
1909, /* Array[Object] */
2178, /* AbstractArrayRead[MProperty] */
2081, /* AbstractArray[PropertyLayoutElement] */
2269, /* AbstractArrayRead[MMethod] */
2208, /* Array[PropertyLayoutElement] */
2282, /* AbstractArray[MProperty] */
2323, /* AbstractArray[MMethod] */
2333, /* Array[MProperty] */
2354, /* Array[MMethod] */
},
};
const struct types resolution_table_array__Arraymodel__MMethod = {
0, /* dummy */
{
&type_array__NativeArraymodel__MMethod, /* NativeArray[E]: NativeArray[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_model__MMethod, /* E: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_array__Arraymodel__MMethod, /* Array[E]: Array[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_model__MMethod, /* E: MMethod */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_abstract_collection__Collectionmodel__MMethod, /* Collection[E]: Collection[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_array__Arraymodel__MMethod, /* Array[E]: Array[MMethod] */
&type_array__NativeArraymodel__MMethod, /* NativeArray[E]: NativeArray[MMethod] */
&type_model__MMethod, /* E: MMethod */
&type_model__MMethod, /* E: MMethod */
&type_array__Arraymodel__MMethod, /* Array[E]: Array[MMethod] */
&type_array__AbstractArraymodel__MMethod, /* AbstractArray[E]: AbstractArray[MMethod] */
&type_array__ArrayIteratormodel__MMethod, /* ArrayIterator[E]: ArrayIterator[MMethod] */
}
};
/* runtime type AbstractArrayRead[MMethod] */
const struct type type_array__AbstractArrayReadmodel__MMethod = {
2269,
"AbstractArrayRead[MMethod]", /* class_name_string */
18,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[MMethod] */
const struct type type_array__AbstractArraymodel__MMethod = {
2323,
"AbstractArray[MMethod]", /* class_name_string */
21,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type List[MMethodDef] */
const struct type type_list__Listmodel__MMethodDef = {
2093,
"List[MMethodDef]", /* class_name_string */
15,
0,
&resolution_table_list__Listmodel__MMethodDef,
16,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
110, /* Collection[nullable MPropDef] */
-1, /* empty */
605, /* Collection[PropertyLayoutElement] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1524, /* Collection[MPropDef] */
-1, /* empty */
-1, /* empty */
1691, /* Collection[MMethodDef] */
2093, /* List[MMethodDef] */
},
};
const struct types resolution_table_list__Listmodel__MMethodDef = {
0, /* dummy */
{
&type_list__ListNodemodel__MMethodDef, /* ListNode[E]: ListNode[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_model__MMethodDef, /* E: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_array__Arraymodel__MMethodDef, /* Array[E]: Array[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_model__MMethodDef, /* E: MMethodDef */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_abstract_collection__Collectionmodel__MMethodDef, /* Collection[E]: Collection[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_list__ListIteratormodel__MMethodDef, /* ListIterator[E]: ListIterator[MMethodDef] */
&type_model__MMethodDef, /* E: MMethodDef */
&type_nullable_list__ListNodemodel__MMethodDef, /* nullable ListNode[E]: nullable ListNode[MMethodDef] */
}
};
/* runtime type SeparateCompiler */
const struct type type_separate_compiler__SeparateCompiler = {
626,
"SeparateCompiler", /* class_name_string */
3,
0,
&resolution_table_separate_compiler__SeparateCompiler,
4,
{
0, /* nullable Object */
1, /* Object */
121, /* AbstractCompiler */
626, /* SeparateCompiler */
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
121,
"AbstractCompiler", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MClassDef, HashSet[MType]] */
const struct type type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType = {
122,
"HashMap[MClassDef, HashSet[MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType,
3,
{
0, /* nullable Object */
1, /* Object */
122, /* HashMap[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapKeys[K, V]: HashMapKeys[MClassDef, HashSet[MType]] */
&type_hash_collection__HashMapValuesmodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapValues[K, V]: HashMapValues[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* K: MClassDef */
&type_hash_collection__HashMapIteratormodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapIterator[K, V]: HashMapIterator[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* K: MClassDef */
&type_hash_collection__HashSetmodel__MType, /* V: HashSet[MType] */
&type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* HashMapNode[K, V]: HashMapNode[MClassDef, HashSet[MType]] */
&type_model__MClassDef, /* K: MClassDef */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* nullable N: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
&type_hash_collection__HashMapNodemodel__MClassDefhash_collection__HashSetmodel__MType, /* N: HashMapNode[MClassDef, HashSet[MType]] */
&type_nullable_model__MClassDef, /* nullable K: nullable MClassDef */
}
};
/* runtime type HashMap[MClass, Int] */
const struct type type_hash_collection__HashMapmodel__MClasskernel__Int = {
123,
"HashMap[MClass, Int]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClasskernel__Int,
3,
{
0, /* nullable Object */
1, /* Object */
123, /* HashMap[MClass, Int] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClasskernel__Int = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClasskernel__Int, /* HashMapKeys[K, V]: HashMapKeys[MClass, Int] */
&type_hash_collection__HashMapValuesmodel__MClasskernel__Int, /* HashMapValues[K, V]: HashMapValues[MClass, Int] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClasskernel__Int, /* HashMapIterator[K, V]: HashMapIterator[MClass, Int] */
&type_model__MClass, /* K: MClass */
&type_kernel__Int, /* V: Int */
&type_hash_collection__HashMapNodemodel__MClasskernel__Int, /* HashMapNode[K, V]: HashMapNode[MClass, Int] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* nullable N: nullable HashMapNode[MClass, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClasskernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Int]] */
&type_hash_collection__HashMapNodemodel__MClasskernel__Int, /* N: HashMapNode[MClass, Int] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type HashMap[MType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType = {
124,
"HashMap[MType, Array[nullable MType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType,
3,
{
0, /* nullable Object */
1, /* Object */
124, /* HashMap[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MTypearray__Arraynullable_model__MType, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[nullable MType]] */
&type_hash_collection__HashMapValuesmodel__MTypearray__Arraynullable_model__MType, /* HashMapValues[K, V]: HashMapValues[MType, Array[nullable MType]] */
&type_model__MType, /* K: MType */
&type_hash_collection__HashMapIteratormodel__MTypearray__Arraynullable_model__MType, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[nullable MType]] */
&type_model__MType, /* K: MType */
&type_array__Arraynullable_model__MType, /* V: Array[nullable MType] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* HashMapNode[K, V]: HashMapNode[MType, Array[nullable MType]] */
&type_model__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* nullable N: nullable HashMapNode[MType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
&type_hash_collection__HashMapNodemodel__MTypearray__Arraynullable_model__MType, /* N: HashMapNode[MType, Array[nullable MType]] */
&type_nullable_model__MType, /* nullable K: nullable MType */
}
};
/* runtime type HashMap[MClassType, Array[nullable MType]] */
const struct type type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType = {
627,
"HashMap[MClassType, Array[nullable MType]]", /* class_name_string */
3,
0,
&resolution_table_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType,
4,
{
0, /* nullable Object */
1, /* Object */
124, /* HashMap[MType, Array[nullable MType]] */
627, /* HashMap[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassTypearray__Arraynullable_model__MType, /* HashMapKeys[K, V]: HashMapKeys[MClassType, Array[nullable MType]] */
&type_hash_collection__HashMapValuesmodel__MClassTypearray__Arraynullable_model__MType, /* HashMapValues[K, V]: HashMapValues[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* K: MClassType */
&type_hash_collection__HashMapIteratormodel__MClassTypearray__Arraynullable_model__MType, /* HashMapIterator[K, V]: HashMapIterator[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* K: MClassType */
&type_array__Arraynullable_model__MType, /* V: Array[nullable MType] */
&type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* HashMapNode[K, V]: HashMapNode[MClassType, Array[nullable MType]] */
&type_model__MClassType, /* K: MClassType */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* nullable N: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
&type_hash_collection__HashMapNodemodel__MClassTypearray__Arraynullable_model__MType, /* N: HashMapNode[MClassType, Array[nullable MType]] */
&type_nullable_model__MClassType, /* nullable K: nullable MClassType */
}
};
/* runtime type HashMap[MClass, Array[nullable MPropDef]] */
const struct type type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef = {
125,
"HashMap[MClass, Array[nullable MPropDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef,
3,
{
0, /* nullable Object */
1, /* Object */
125, /* HashMap[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapKeys[K, V]: HashMapKeys[MClass, Array[nullable MPropDef]] */
&type_hash_collection__HashMapValuesmodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapValues[K, V]: HashMapValues[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapIterator[K, V]: HashMapIterator[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* K: MClass */
&type_array__Arraynullable_model__MPropDef, /* V: Array[nullable MPropDef] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* HashMapNode[K, V]: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* nullable N: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
&type_hash_collection__HashMapNodemodel__MClassarray__Arraynullable_model__MPropDef, /* N: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type HashMap[String, String] */
const struct type type_hash_collection__HashMapstring__Stringstring__String = {
126,
"HashMap[String, String]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
126, /* HashMap[String, String] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringstring__String, /* HashMapKeys[K, V]: HashMapKeys[String, String] */
&type_hash_collection__HashMapValuesstring__Stringstring__String, /* HashMapValues[K, V]: HashMapValues[String, String] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringstring__String, /* HashMapIterator[K, V]: HashMapIterator[String, String] */
&type_string__String, /* K: String */
&type_string__String, /* V: String */
&type_hash_collection__HashMapNodestring__Stringstring__String, /* HashMapNode[K, V]: HashMapNode[String, String] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringstring__String, /* nullable N: nullable HashMapNode[String, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringstring__String, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, String]] */
&type_hash_collection__HashMapNodestring__Stringstring__String, /* N: HashMapNode[String, String] */
&type_nullable_string__String, /* nullable K: nullable String */
}
};
/* runtime type List[CodeFile] */
const struct type type_list__Listabstract_compiler__CodeFile = {
1533,
"List[CodeFile]", /* class_name_string */
6,
0,
&resolution_table_list__Listabstract_compiler__CodeFile,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
628, /* Collection[CodeFile] */
1533, /* List[CodeFile] */
},
};
const struct types resolution_table_list__Listabstract_compiler__CodeFile = {
0, /* dummy */
{
&type_list__ListNodeabstract_compiler__CodeFile, /* ListNode[E]: ListNode[CodeFile] */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[E]: Collection[CodeFile] */
&type_array__Arrayabstract_compiler__CodeFile, /* Array[E]: Array[CodeFile] */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[E]: Collection[CodeFile] */
&type_abstract_collection__Collectionabstract_compiler__CodeFile, /* Collection[E]: Collection[CodeFile] */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_list__ListIteratorabstract_compiler__CodeFile, /* ListIterator[E]: ListIterator[CodeFile] */
&type_abstract_compiler__CodeFile, /* E: CodeFile */
&type_nullable_list__ListNodeabstract_compiler__CodeFile, /* nullable ListNode[E]: nullable ListNode[CodeFile] */
}
};
/* runtime type Collection[CodeFile] */
const struct type type_abstract_collection__Collectionabstract_compiler__CodeFile = {
628,
"Collection[CodeFile]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, ANode] */
const struct type type_hash_collection__HashMapstring__Stringparser_nodes__ANode = {
127,
"HashMap[String, ANode]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapstring__Stringparser_nodes__ANode,
3,
{
0, /* nullable Object */
1, /* Object */
127, /* HashMap[String, ANode] */
},
};
const struct types resolution_table_hash_collection__HashMapstring__Stringparser_nodes__ANode = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysstring__Stringparser_nodes__ANode, /* HashMapKeys[K, V]: HashMapKeys[String, ANode] */
&type_hash_collection__HashMapValuesstring__Stringparser_nodes__ANode, /* HashMapValues[K, V]: HashMapValues[String, ANode] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringparser_nodes__ANode, /* HashMapIterator[K, V]: HashMapIterator[String, ANode] */
&type_string__String, /* K: String */
&type_parser_nodes__ANode, /* V: ANode */
&type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* HashMapNode[K, V]: HashMapNode[String, ANode] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* nullable N: nullable HashMapNode[String, ANode] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, ANode]] */
&type_hash_collection__HashMapNodestring__Stringparser_nodes__ANode, /* N: HashMapNode[String, ANode] */
&type_nullable_string__String, /* nullable K: nullable String */
}
};
/* runtime type Array[ExternFile] */
const struct type type_array__Arrayc_tools__ExternFile = {
-1, /*CAST DEAD*/
"Array[ExternFile]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayc_tools__ExternFile,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
629, /* Collection[ExternFile] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1694, /* AbstractArrayRead[ExternFile] */
1512, /* AbstractArray[Object] */
2094, /* AbstractArray[ExternFile] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2216, /* Array[ExternFile] */
},
};
const struct types resolution_table_array__Arrayc_tools__ExternFile = {
0, /* dummy */
{
&type_array__NativeArrayc_tools__ExternFile, /* NativeArray[E]: NativeArray[ExternFile] */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[E]: Collection[ExternFile] */
&type_array__Arrayc_tools__ExternFile, /* Array[E]: Array[ExternFile] */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[E]: Collection[ExternFile] */
&type_abstract_collection__Collectionc_tools__ExternFile, /* Collection[E]: Collection[ExternFile] */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_array__Arrayc_tools__ExternFile, /* Array[E]: Array[ExternFile] */
&type_array__NativeArrayc_tools__ExternFile, /* NativeArray[E]: NativeArray[ExternFile] */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_c_tools__ExternFile, /* E: ExternFile */
&type_array__Arrayc_tools__ExternFile, /* Array[E]: Array[ExternFile] */
&type_array__AbstractArrayc_tools__ExternFile, /* AbstractArray[E]: AbstractArray[ExternFile] */
&type_array__ArrayIteratorc_tools__ExternFile, /* ArrayIterator[E]: ArrayIterator[ExternFile] */
}
};
/* runtime type Collection[ExternFile] */
const struct type type_abstract_collection__Collectionc_tools__ExternFile = {
629,
"Collection[ExternFile]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ExternFile] */
const struct type type_array__AbstractArrayReadc_tools__ExternFile = {
1694,
"AbstractArrayRead[ExternFile]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[ExternFile] */
const struct type type_array__AbstractArrayc_tools__ExternFile = {
2094,
"AbstractArray[ExternFile]", /* class_name_string */
11,
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
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
598, /* Set[Object] */
1346, /* Collection[Text] */
-1, /* empty */
1513, /* Collection[String] */
1919, /* ArraySet[String] */
},
};
const struct types resolution_table_array__ArraySetstring__String = {
0, /* dummy */
{
&type_array__ArraySetIteratorstring__String, /* ArraySetIterator[E]: ArraySetIterator[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
NULL, /* empty */
&type_string__String, /* E: String */
NULL, /* empty */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_string__String, /* E: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
}
};
/* runtime type SeparateErasureCompiler */
const struct type type_separate_erasure_compiler__SeparateErasureCompiler = {
1379,
"SeparateErasureCompiler", /* class_name_string */
4,
0,
&resolution_table_separate_erasure_compiler__SeparateErasureCompiler,
5,
{
0, /* nullable Object */
1, /* Object */
121, /* AbstractCompiler */
626, /* SeparateCompiler */
1379, /* SeparateErasureCompiler */
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
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
630, /* Collection[Match] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1695, /* AbstractArrayRead[Match] */
1512, /* AbstractArray[Object] */
2095, /* AbstractArray[Match] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2217, /* Array[Match] */
},
};
const struct types resolution_table_array__Arraystring_search__Match = {
0, /* dummy */
{
&type_array__NativeArraystring_search__Match, /* NativeArray[E]: NativeArray[Match] */
&type_string_search__Match, /* E: Match */
&type_string_search__Match, /* E: Match */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[E]: Collection[Match] */
&type_array__Arraystring_search__Match, /* Array[E]: Array[Match] */
&type_string_search__Match, /* E: Match */
&type_string_search__Match, /* E: Match */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[E]: Collection[Match] */
&type_abstract_collection__Collectionstring_search__Match, /* Collection[E]: Collection[Match] */
&type_string_search__Match, /* E: Match */
&type_array__Arraystring_search__Match, /* Array[E]: Array[Match] */
&type_array__NativeArraystring_search__Match, /* NativeArray[E]: NativeArray[Match] */
&type_string_search__Match, /* E: Match */
&type_string_search__Match, /* E: Match */
&type_array__Arraystring_search__Match, /* Array[E]: Array[Match] */
&type_array__AbstractArraystring_search__Match, /* AbstractArray[E]: AbstractArray[Match] */
&type_array__ArrayIteratorstring_search__Match, /* ArrayIterator[E]: ArrayIterator[Match] */
}
};
/* runtime type Collection[Match] */
const struct type type_abstract_collection__Collectionstring_search__Match = {
630,
"Collection[Match]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[Match] */
const struct type type_array__AbstractArrayReadstring_search__Match = {
1695,
"AbstractArrayRead[Match]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[Match] */
const struct type type_array__AbstractArraystring_search__Match = {
2095,
"AbstractArray[Match]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Match */
const struct type type_string_search__Match = {
128,
"Match", /* class_name_string */
2,
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
128, /* Match */
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
129, /* MDoc */
},
};
/* runtime type Array[State] */
const struct type type_array__Arrayparser_work__State = {
-1, /*CAST DEAD*/
"Array[State]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_work__State,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
631, /* Collection[State] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1696, /* AbstractArrayRead[State] */
1512, /* AbstractArray[Object] */
2096, /* AbstractArray[State] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2218, /* Array[State] */
},
};
const struct types resolution_table_array__Arrayparser_work__State = {
0, /* dummy */
{
&type_array__NativeArrayparser_work__State, /* NativeArray[E]: NativeArray[State] */
&type_parser_work__State, /* E: State */
&type_parser_work__State, /* E: State */
&type_abstract_collection__Collectionparser_work__State, /* Collection[E]: Collection[State] */
&type_array__Arrayparser_work__State, /* Array[E]: Array[State] */
&type_parser_work__State, /* E: State */
&type_parser_work__State, /* E: State */
&type_abstract_collection__Collectionparser_work__State, /* Collection[E]: Collection[State] */
&type_abstract_collection__Collectionparser_work__State, /* Collection[E]: Collection[State] */
&type_parser_work__State, /* E: State */
&type_array__Arrayparser_work__State, /* Array[E]: Array[State] */
&type_array__NativeArrayparser_work__State, /* NativeArray[E]: NativeArray[State] */
&type_parser_work__State, /* E: State */
&type_parser_work__State, /* E: State */
&type_array__Arrayparser_work__State, /* Array[E]: Array[State] */
&type_array__AbstractArrayparser_work__State, /* AbstractArray[E]: AbstractArray[State] */
&type_array__ArrayIteratorparser_work__State, /* ArrayIterator[E]: ArrayIterator[State] */
}
};
/* runtime type Collection[State] */
const struct type type_abstract_collection__Collectionparser_work__State = {
631,
"Collection[State]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[State] */
const struct type type_array__AbstractArrayReadparser_work__State = {
1696,
"AbstractArrayRead[State]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[State] */
const struct type type_array__AbstractArrayparser_work__State = {
2096,
"AbstractArray[State]", /* class_name_string */
11,
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
12, /* nullable ANode */
-1, /* empty */
632, /* ANode */
1380, /* Prod */
1534, /* Start */
},
};
/* runtime type Prod */
const struct type type_parser_nodes__Prod = {
1380,
"Prod", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ANode */
const struct type type_parser_nodes__ANode = {
632,
"ANode", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable ANode */
const struct type type_nullable_parser_nodes__ANode = {
12,
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
130, /* ComputeProdLocationVisitor */
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
12, /* nullable ANode */
-1, /* empty */
632, /* ANode */
1381, /* Token */
1535, /* EOF */
1697, /* AError */
1920, /* AParserError */
},
};
/* runtime type EOF */
const struct type type_parser_nodes__EOF = {
1535,
"EOF", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
0, /* nullable Object */
1, /* Object */
12, /* nullable ANode */
-1, /* empty */
632, /* ANode */
1381, /* Token */
1535, /* EOF */
},
};
/* runtime type AError */
const struct type type_parser_nodes__AError = {
1697,
"AError", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Token */
const struct type type_parser_nodes__Token = {
1381,
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
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1351, /* Collection[Prod] */
-1, /* empty */
1536, /* Collection[AImport] */
1921, /* ANodes[AImport] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__AImport = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AImport, /* Array[E]: Array[AImport] */
&type_parser_nodes__AImport, /* E: AImport */
&type_parser_nodes__AImport, /* E: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[E]: Collection[AImport] */
&type_array__Arrayparser_nodes__AImport, /* Array[E]: Array[AImport] */
&type_parser_nodes__AImport, /* E: AImport */
&type_parser_nodes__AImport, /* E: AImport */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[E]: Collection[AImport] */
&type_abstract_collection__Collectionparser_nodes__AImport, /* Collection[E]: Collection[AImport] */
&type_parser_nodes__AImport, /* E: AImport */
&type_parser_nodes__AImport, /* E: AImport */
}
};
/* runtime type Collection[AImport] */
const struct type type_abstract_collection__Collectionparser_nodes__AImport = {
1536,
"Collection[AImport]", /* class_name_string */
9,
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
9,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1382, /* Collection[TId] */
1698, /* ANodes[TId] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__TId = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__TId, /* Array[E]: Array[TId] */
&type_parser_nodes__TId, /* E: TId */
&type_parser_nodes__TId, /* E: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[E]: Collection[TId] */
&type_array__Arrayparser_nodes__TId, /* Array[E]: Array[TId] */
&type_parser_nodes__TId, /* E: TId */
&type_parser_nodes__TId, /* E: TId */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[E]: Collection[TId] */
&type_abstract_collection__Collectionparser_nodes__TId, /* Collection[E]: Collection[TId] */
&type_parser_nodes__TId, /* E: TId */
&type_parser_nodes__TId, /* E: TId */
}
};
/* runtime type Collection[TId] */
const struct type type_abstract_collection__Collectionparser_nodes__TId = {
1382,
"Collection[TId]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MVisibility */
const struct type type_model_base__MVisibility = {
633,
"MVisibility", /* class_name_string */
4,
0,
&resolution_table_model_base__MVisibility,
5,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
78, /* Comparable */
633, /* MVisibility */
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
131, /* LiteralVisitor */
},
};
/* runtime type HashMap[MClass, MClassType] */
const struct type type_hash_collection__HashMapmodel__MClassmodel__MClassType = {
132,
"HashMap[MClass, MClassType]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmodel__MClassmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
132, /* HashMap[MClass, MClassType] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassmodel__MClassType, /* HashMapKeys[K, V]: HashMapKeys[MClass, MClassType] */
&type_hash_collection__HashMapValuesmodel__MClassmodel__MClassType, /* HashMapValues[K, V]: HashMapValues[MClass, MClassType] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassmodel__MClassType, /* HashMapIterator[K, V]: HashMapIterator[MClass, MClassType] */
&type_model__MClass, /* K: MClass */
&type_model__MClassType, /* V: MClassType */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* HashMapNode[K, V]: HashMapNode[MClass, MClassType] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* nullable N: nullable HashMapNode[MClass, MClassType] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
&type_hash_collection__HashMapNodemodel__MClassmodel__MClassType, /* N: HashMapNode[MClass, MClassType] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type ArrayMap[MClass, AType] */
const struct type type_array__ArrayMapmodel__MClassparser_nodes__AType = {
133,
"ArrayMap[MClass, AType]", /* class_name_string */
2,
0,
&resolution_table_array__ArrayMapmodel__MClassparser_nodes__AType,
3,
{
0, /* nullable Object */
1, /* Object */
133, /* ArrayMap[MClass, AType] */
},
};
const struct types resolution_table_array__ArrayMapmodel__MClassparser_nodes__AType = {
0, /* dummy */
{
&type_array__ArrayMapKeysmodel__MClassparser_nodes__AType, /* ArrayMapKeys[K, E]: ArrayMapKeys[MClass, AType] */
&type_array__ArrayMapValuesmodel__MClassparser_nodes__AType, /* ArrayMapValues[K, E]: ArrayMapValues[MClass, AType] */
&type_model__MClass, /* K: MClass */
&type_array__Arrayabstract_collection__Couplemodel__MClassparser_nodes__AType, /* Array[Couple[K, E]]: Array[Couple[MClass, AType]] */
&type_model__MClass, /* K: MClass */
&type_parser_nodes__AType, /* V: AType */
&type_abstract_collection__Couplemodel__MClassparser_nodes__AType, /* Couple[K, E]: Couple[MClass, AType] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__CoupleMapIteratormodel__MClassparser_nodes__AType, /* CoupleMapIterator[K, V]: CoupleMapIterator[MClass, AType] */
}
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
134, /* TransformVisitor */
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
135, /* ASTValidationVisitor */
},
};
/* runtime type List[ANode] */
const struct type type_list__Listparser_nodes__ANode = {
1537,
"List[ANode]", /* class_name_string */
6,
0,
&resolution_table_list__Listparser_nodes__ANode,
7,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
1537, /* List[ANode] */
},
};
const struct types resolution_table_list__Listparser_nodes__ANode = {
0, /* dummy */
{
&type_list__ListNodeparser_nodes__ANode, /* ListNode[E]: ListNode[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* E: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_array__Arrayparser_nodes__ANode, /* Array[E]: Array[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_parser_nodes__ANode, /* E: ANode */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_abstract_collection__Collectionparser_nodes__ANode, /* Collection[E]: Collection[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_list__ListIteratorparser_nodes__ANode, /* ListIterator[E]: ListIterator[ANode] */
&type_parser_nodes__ANode, /* E: ANode */
&type_nullable_list__ListNodeparser_nodes__ANode, /* nullable ListNode[E]: nullable ListNode[ANode] */
}
};
/* runtime type ANodes[AExpr] */
const struct type type_parser_nodes__ANodesparser_nodes__AExpr = {
-1, /*CAST DEAD*/
"ANodes[AExpr]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_parser_nodes__ANodesparser_nodes__AExpr,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
599, /* Collection[ANode] */
-1, /* empty */
1351, /* Collection[Prod] */
-1, /* empty */
1538, /* Collection[AExpr] */
1922, /* ANodes[AExpr] */
},
};
const struct types resolution_table_parser_nodes__ANodesparser_nodes__AExpr = {
0, /* dummy */
{
&type_array__Arrayparser_nodes__AExpr, /* Array[E]: Array[AExpr] */
&type_parser_nodes__AExpr, /* E: AExpr */
&type_parser_nodes__AExpr, /* E: AExpr */
&type_abstract_collection__Collectionparser_nodes__AExpr, /* Collection[E]: Collection[AExpr] */
&type_array__Arrayparser_nodes__AExpr, /* Array[E]: Array[AExpr] */
&type_parser_nodes__AExpr, /* E: AExpr */
&type_parser_nodes__AExpr, /* E: AExpr */
&type_abstract_collection__Collectionparser_nodes__AExpr, /* Collection[E]: Collection[AExpr] */
&type_abstract_collection__Collectionparser_nodes__AExpr, /* Collection[E]: Collection[AExpr] */
&type_parser_nodes__AExpr, /* E: AExpr */
&type_parser_nodes__AExpr, /* E: AExpr */
}
};
/* runtime type Collection[AExpr] */
const struct type type_abstract_collection__Collectionparser_nodes__AExpr = {
1538,
"Collection[AExpr]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TextCollectorVisitor */
const struct type type_parser_work__TextCollectorVisitor = {
-1, /*CAST DEAD*/
"TextCollectorVisitor", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
3,
{
0, /* nullable Object */
1, /* Object */
136, /* TextCollectorVisitor */
},
};
/* runtime type MParameterType */
const struct type type_model__MParameterType = {
1383,
"MParameterType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
0, /* nullable Object */
1, /* Object */
4, /* nullable MType */
-1, /* empty */
609, /* MType */
1383, /* MParameterType */
},
};
/* runtime type MGenericType */
const struct type type_model__MGenericType = {
1699,
"MGenericType", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
0, /* nullable Object */
1, /* Object */
4, /* nullable MType */
137, /* nullable MClassType */
609, /* MType */
1539, /* MClassType */
1699, /* MGenericType */
},
};
/* runtime type MClassType */
const struct type type_model__MClassType = {
1539,
"MClassType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
0, /* nullable Object */
1, /* Object */
4, /* nullable MType */
137, /* nullable MClassType */
609, /* MType */
1539, /* MClassType */
},
};
/* runtime type nullable MClassType */
const struct type type_nullable_model__MClassType = {
137,
"nullable MClassType", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[MModule, Set[MClassDef]] */
const struct type type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
138,
"HashMap[MModule, Set[MClassDef]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef,
3,
{
0, /* nullable Object */
1, /* Object */
138, /* HashMap[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClassDef]] */
&type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClassDef]] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClassDef]] */
&type_mmodule__MModule, /* K: MModule */
&type_abstract_collection__Setmodel__MClassDef, /* V: Set[MClassDef] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClassDef]] */
&type_mmodule__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* nullable N: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassDef, /* N: HashMapNode[MModule, Set[MClassDef]] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
}
};
/* runtime type HashMap[MModule, Set[MClass]] */
const struct type type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass = {
139,
"HashMap[MModule, Set[MClass]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass,
3,
{
0, /* nullable Object */
1, /* Object */
139, /* HashMap[MModule, Set[MClass]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClass = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClass]] */
&type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClass]] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClass]] */
&type_mmodule__MModule, /* K: MModule */
&type_abstract_collection__Setmodel__MClass, /* V: Set[MClass] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClass]] */
&type_mmodule__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* nullable N: nullable HashMapNode[MModule, Set[MClass]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClass, /* N: HashMapNode[MModule, Set[MClass]] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
}
};
/* runtime type HashMap[MModule, Set[MClassType]] */
const struct type type_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType = {
140,
"HashMap[MModule, Set[MClassType]]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType,
3,
{
0, /* nullable Object */
1, /* Object */
140, /* HashMap[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_hash_collection__HashMapmmodule__MModuleabstract_collection__Setmodel__MClassType = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClassType]] */
&type_hash_collection__HashMapValuesmmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClassType]] */
&type_mmodule__MModule, /* K: MModule */
&type_hash_collection__HashMapIteratormmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClassType]] */
&type_mmodule__MModule, /* K: MModule */
&type_abstract_collection__Setmodel__MClassType, /* V: Set[MClassType] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClassType]] */
&type_mmodule__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* nullable N: nullable HashMapNode[MModule, Set[MClassType]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* NativeArray[E]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
&type_hash_collection__HashMapNodemmodule__MModuleabstract_collection__Setmodel__MClassType, /* N: HashMapNode[MModule, Set[MClassType]] */
&type_nullable_mmodule__MModule, /* nullable K: nullable MModule */
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
141, /* MClassKind */
},
};
/* runtime type HashSet[MClassDef] */
const struct type type_hash_collection__HashSetmodel__MClassDef = {
1923,
"HashSet[MClassDef]", /* class_name_string */
9,
0,
&resolution_table_hash_collection__HashSetmodel__MClassDef,
10,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
606, /* Collection[MClassDef] */
598, /* Set[Object] */
1540, /* Set[MClassDef] */
1350, /* HashSet[Object] */
1923, /* HashSet[MClassDef] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MClassDef = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MClassDef, /* HashSetNode[E]: HashSetNode[MClassDef] */
&type_hash_collection__HashSetIteratormodel__MClassDef, /* HashSetIterator[E]: HashSetIterator[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_array__Arraymodel__MClassDef, /* Array[E]: Array[MClassDef] */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_model__MClassDef, /* K: MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_model__MClassDef, /* E: MClassDef */
&type_nullable_hash_collection__HashSetNodemodel__MClassDef, /* nullable N: nullable HashSetNode[MClassDef] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MClassDef, /* NativeArray[E]: NativeArray[nullable HashSetNode[MClassDef]] */
&type_hash_collection__HashSetNodemodel__MClassDef, /* N: HashSetNode[MClassDef] */
&type_nullable_model__MClassDef, /* nullable K: nullable MClassDef */
&type_abstract_collection__Collectionmodel__MClassDef, /* Collection[E]: Collection[MClassDef] */
}
};
/* runtime type Set[MClassDef] */
const struct type type_abstract_collection__Setmodel__MClassDef = {
1540,
"Set[MClassDef]", /* class_name_string */
7,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
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
/* runtime type List[MClassType] */
const struct type type_list__Listmodel__MClassType = {
1924,
"List[MClassType]", /* class_name_string */
12,
0,
&resolution_table_list__Listmodel__MClassType,
13,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
93, /* Collection[nullable MType] */
-1, /* empty */
1370, /* Collection[MType] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1519, /* Collection[MClassType] */
1924, /* List[MClassType] */
},
};
const struct types resolution_table_list__Listmodel__MClassType = {
0, /* dummy */
{
&type_list__ListNodemodel__MClassType, /* ListNode[E]: ListNode[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_array__Arraymodel__MClassType, /* Array[E]: Array[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_model__MClassType, /* E: MClassType */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_abstract_collection__Collectionmodel__MClassType, /* Collection[E]: Collection[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_list__ListIteratormodel__MClassType, /* ListIterator[E]: ListIterator[MClassType] */
&type_model__MClassType, /* E: MClassType */
&type_nullable_list__ListNodemodel__MClassType, /* nullable ListNode[E]: nullable ListNode[MClassType] */
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
&type_hash_collection__HashMapKeysstring__Stringkernel__Int, /* HashMapKeys[K, V]: HashMapKeys[String, Int] */
&type_hash_collection__HashMapValuesstring__Stringkernel__Int, /* HashMapValues[K, V]: HashMapValues[String, Int] */
&type_string__String, /* K: String */
&type_hash_collection__HashMapIteratorstring__Stringkernel__Int, /* HashMapIterator[K, V]: HashMapIterator[String, Int] */
&type_string__String, /* K: String */
&type_kernel__Int, /* V: Int */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* HashMapNode[K, V]: HashMapNode[String, Int] */
&type_string__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* nullable N: nullable HashMapNode[String, Int] */
&type_array__NativeArraynullable_hash_collection__HashMapNodestring__Stringkernel__Int, /* NativeArray[E]: NativeArray[nullable HashMapNode[String, Int]] */
&type_hash_collection__HashMapNodestring__Stringkernel__Int, /* N: HashMapNode[String, Int] */
&type_nullable_string__String, /* nullable K: nullable String */
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
1925,
"List[String]", /* class_name_string */
10,
0,
&resolution_table_list__Liststring__String,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
-1, /* empty */
1346, /* Collection[Text] */
-1, /* empty */
1513, /* Collection[String] */
1925, /* List[String] */
},
};
const struct types resolution_table_list__Liststring__String = {
0, /* dummy */
{
&type_list__ListNodestring__String, /* ListNode[E]: ListNode[String] */
&type_string__String, /* E: String */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_string__String, /* E: String */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_string__String, /* E: String */
&type_list__ListIteratorstring__String, /* ListIterator[E]: ListIterator[String] */
&type_string__String, /* E: String */
&type_nullable_list__ListNodestring__String, /* nullable ListNode[E]: nullable ListNode[String] */
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
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
634, /* Collection[CodeWriter] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1700, /* AbstractArrayRead[CodeWriter] */
1512, /* AbstractArray[Object] */
2097, /* AbstractArray[CodeWriter] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2219, /* Array[CodeWriter] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__CodeWriter = {
0, /* dummy */
{
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[E]: NativeArray[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[E]: Collection[CodeWriter] */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[E]: Array[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[E]: Collection[CodeWriter] */
&type_abstract_collection__Collectionabstract_compiler__CodeWriter, /* Collection[E]: Collection[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[E]: Array[CodeWriter] */
&type_array__NativeArrayabstract_compiler__CodeWriter, /* NativeArray[E]: NativeArray[CodeWriter] */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_abstract_compiler__CodeWriter, /* E: CodeWriter */
&type_array__Arrayabstract_compiler__CodeWriter, /* Array[E]: Array[CodeWriter] */
&type_array__AbstractArrayabstract_compiler__CodeWriter, /* AbstractArray[E]: AbstractArray[CodeWriter] */
&type_array__ArrayIteratorabstract_compiler__CodeWriter, /* ArrayIterator[E]: ArrayIterator[CodeWriter] */
}
};
/* runtime type Collection[CodeWriter] */
const struct type type_abstract_collection__Collectionabstract_compiler__CodeWriter = {
634,
"Collection[CodeWriter]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[CodeWriter] */
const struct type type_array__AbstractArrayReadabstract_compiler__CodeWriter = {
1700,
"AbstractArrayRead[CodeWriter]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[CodeWriter] */
const struct type type_array__AbstractArrayabstract_compiler__CodeWriter = {
2097,
"AbstractArray[CodeWriter]", /* class_name_string */
11,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[String] */
const struct type type_hash_collection__HashSetstring__String = {
2098,
"HashSet[String]", /* class_name_string */
10,
0,
&resolution_table_hash_collection__HashSetstring__String,
11,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
-1, /* empty */
83, /* Collection[Object] */
593, /* Collection[Streamable] */
598, /* Set[Object] */
1346, /* Collection[Text] */
1350, /* HashSet[Object] */
1513, /* Collection[String] */
2098, /* HashSet[String] */
},
};
const struct types resolution_table_hash_collection__HashSetstring__String = {
0, /* dummy */
{
&type_hash_collection__HashSetNodestring__String, /* HashSetNode[E]: HashSetNode[String] */
&type_hash_collection__HashSetIteratorstring__String, /* HashSetIterator[E]: HashSetIterator[String] */
&type_string__String, /* E: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_array__Arraystring__String, /* Array[E]: Array[String] */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_string__String, /* E: String */
&type_string__String, /* K: String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
&type_string__String, /* E: String */
&type_nullable_hash_collection__HashSetNodestring__String, /* nullable N: nullable HashSetNode[String] */
&type_array__NativeArraynullable_hash_collection__HashSetNodestring__String, /* NativeArray[E]: NativeArray[nullable HashSetNode[String]] */
&type_hash_collection__HashSetNodestring__String, /* N: HashSetNode[String] */
&type_nullable_string__String, /* nullable K: nullable String */
&type_abstract_collection__Collectionstring__String, /* Collection[E]: Collection[String] */
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
&type_hash_collection__HashMapmodel__MClasskernel__Int, /* HashMap[E, Int]: HashMap[MClass, Int] */
&type_poset__POSetmodel__MClass, /* POSet[E]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[E, Set[E]]: Map[MClass, Set[MClass]] */
&type_coloring__POSetConflictGraphmodel__MClass, /* POSetConflictGraph[E]: POSetConflictGraph[MClass] */
&type_hash_collection__HashSetmodel__MClass, /* HashSet[E]: HashSet[MClass] */
&type_abstract_collection__Setmodel__MClass, /* Set[E]: Set[MClass] */
&type_model__MClass, /* E: MClass */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[E]: Collection[MClass] */
}
};
/* runtime type HashMap[MClass, Set[MAttribute]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute = {
1701,
"HashMap[MClass, Set[MAttribute]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute,
7,
{
0, /* nullable Object */
1, /* Object */
109, /* Map[MClass, Set[PropertyLayoutElement]] */
613, /* HashMap[MClass, Set[PropertyLayoutElement]] */
635, /* Map[MClass, Set[MAttribute]] */
1373, /* HashMap[MClass, Set[MProperty]] */
1701, /* HashMap[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MAttribute]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MAttribute]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MAttribute]] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MAttribute, /* V: Set[MAttribute] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MAttribute]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* nullable N: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MAttribute, /* N: HashMapNode[MClass, Set[MAttribute]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MAttribute]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MAttribute = {
635,
"Map[MClass, Set[MAttribute]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MAttribute] */
const struct type type_hash_collection__HashSetmodel__MAttribute = {
2288,
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
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
1516, /* Collection[MProperty] */
1532, /* Set[PropertyLayoutElement] */
2092, /* Set[MProperty] */
1702, /* Collection[MAttribute] */
1918, /* HashSet[PropertyLayoutElement] */
2184, /* Set[MAttribute] */
2215, /* HashSet[MProperty] */
2288, /* HashSet[MAttribute] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MAttribute, /* HashSetNode[E]: HashSetNode[MAttribute] */
&type_hash_collection__HashSetIteratormodel__MAttribute, /* HashSetIterator[E]: HashSetIterator[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_array__Arraymodel__MAttribute, /* Array[E]: Array[MAttribute] */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_model__MAttribute, /* K: MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
&type_model__MAttribute, /* E: MAttribute */
&type_nullable_hash_collection__HashSetNodemodel__MAttribute, /* nullable N: nullable HashSetNode[MAttribute] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MAttribute, /* NativeArray[E]: NativeArray[nullable HashSetNode[MAttribute]] */
&type_hash_collection__HashSetNodemodel__MAttribute, /* N: HashSetNode[MAttribute] */
&type_nullable_model__MAttribute, /* nullable K: nullable MAttribute */
&type_abstract_collection__Collectionmodel__MAttribute, /* Collection[E]: Collection[MAttribute] */
}
};
/* runtime type Set[MAttribute] */
const struct type type_abstract_collection__Setmodel__MAttribute = {
2184,
"Set[MAttribute]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MAttribute] */
const struct type type_abstract_collection__Collectionmodel__MAttribute = {
1702,
"Collection[MAttribute]", /* class_name_string */
12,
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
&type_hash_collection__HashMapseparate_compiler__PropertyLayoutElementkernel__Int, /* HashMap[E, Int]: HashMap[PropertyLayoutElement, Int] */
&type_poset__POSetmodel__MClass, /* POSet[H]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[H, Set[H]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement, /* Map[H, Set[E]]: Map[MClass, Set[PropertyLayoutElement]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[H]: Collection[MClass] */
&type_model__MClass, /* H: MClass */
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
636, /* POSetBucketsColorer[MClass, MAttribute] */
},
};
const struct types resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MAttributekernel__Int, /* HashMap[E, Int]: HashMap[MAttribute, Int] */
&type_poset__POSetmodel__MClass, /* POSet[H]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[H, Set[H]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MAttribute, /* Map[H, Set[E]]: Map[MClass, Set[MAttribute]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[H]: Collection[MClass] */
&type_model__MClass, /* H: MClass */
}
};
/* runtime type Array[RuntimeVariable] */
const struct type type_array__Arrayabstract_compiler__RuntimeVariable = {
-1, /*CAST DEAD*/
"Array[RuntimeVariable]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayabstract_compiler__RuntimeVariable,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
637, /* Collection[RuntimeVariable] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1703, /* AbstractArrayRead[RuntimeVariable] */
1512, /* AbstractArray[Object] */
2099, /* AbstractArray[RuntimeVariable] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2220, /* Array[RuntimeVariable] */
},
};
const struct types resolution_table_array__Arrayabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[E]: NativeArray[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[E]: Collection[RuntimeVariable] */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[E]: Collection[RuntimeVariable] */
&type_abstract_collection__Collectionabstract_compiler__RuntimeVariable, /* Collection[E]: Collection[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
&type_array__NativeArrayabstract_compiler__RuntimeVariable, /* NativeArray[E]: NativeArray[RuntimeVariable] */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_abstract_compiler__RuntimeVariable, /* E: RuntimeVariable */
&type_array__Arrayabstract_compiler__RuntimeVariable, /* Array[E]: Array[RuntimeVariable] */
&type_array__AbstractArrayabstract_compiler__RuntimeVariable, /* AbstractArray[E]: AbstractArray[RuntimeVariable] */
&type_array__ArrayIteratorabstract_compiler__RuntimeVariable, /* ArrayIterator[E]: ArrayIterator[RuntimeVariable] */
}
};
/* runtime type Collection[RuntimeVariable] */
const struct type type_abstract_collection__Collectionabstract_compiler__RuntimeVariable = {
637,
"Collection[RuntimeVariable]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[RuntimeVariable] */
const struct type type_array__AbstractArrayReadabstract_compiler__RuntimeVariable = {
1703,
"AbstractArrayRead[RuntimeVariable]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[RuntimeVariable] */
const struct type type_array__AbstractArrayabstract_compiler__RuntimeVariable = {
2099,
"AbstractArray[RuntimeVariable]", /* class_name_string */
11,
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
148, /* POSetColorer[MType] */
},
};
const struct types resolution_table_coloring__POSetColorermodel__MType = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MTypekernel__Int, /* HashMap[E, Int]: HashMap[MType, Int] */
&type_poset__POSetmodel__MType, /* POSet[E]: POSet[MType] */
&type_abstract_collection__Mapmodel__MTypeabstract_collection__Setmodel__MType, /* Map[E, Set[E]]: Map[MType, Set[MType]] */
&type_coloring__POSetConflictGraphmodel__MType, /* POSetConflictGraph[E]: POSetConflictGraph[MType] */
&type_hash_collection__HashSetmodel__MType, /* HashSet[E]: HashSet[MType] */
&type_abstract_collection__Setmodel__MType, /* Set[E]: Set[MType] */
&type_model__MType, /* E: MType */
&type_abstract_collection__Collectionmodel__MType, /* Collection[E]: Collection[MType] */
}
};
/* runtime type SeparateCompilerVisitor */
const struct type type_separate_compiler__SeparateCompilerVisitor = {
638,
"SeparateCompilerVisitor", /* class_name_string */
3,
0,
&resolution_table_separate_compiler__SeparateCompilerVisitor,
4,
{
0, /* nullable Object */
1, /* Object */
149, /* AbstractCompilerVisitor */
638, /* SeparateCompilerVisitor */
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
149,
"AbstractCompilerVisitor", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[EscapeMark, String] */
const struct type type_hash_collection__HashMapscope__EscapeMarkstring__String = {
150,
"HashMap[EscapeMark, String]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapscope__EscapeMarkstring__String,
3,
{
0, /* nullable Object */
1, /* Object */
150, /* HashMap[EscapeMark, String] */
},
};
const struct types resolution_table_hash_collection__HashMapscope__EscapeMarkstring__String = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysscope__EscapeMarkstring__String, /* HashMapKeys[K, V]: HashMapKeys[EscapeMark, String] */
&type_hash_collection__HashMapValuesscope__EscapeMarkstring__String, /* HashMapValues[K, V]: HashMapValues[EscapeMark, String] */
&type_scope__EscapeMark, /* K: EscapeMark */
&type_hash_collection__HashMapIteratorscope__EscapeMarkstring__String, /* HashMapIterator[K, V]: HashMapIterator[EscapeMark, String] */
&type_scope__EscapeMark, /* K: EscapeMark */
&type_string__String, /* V: String */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* HashMapNode[K, V]: HashMapNode[EscapeMark, String] */
&type_scope__EscapeMark, /* K: EscapeMark */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* nullable N: nullable HashMapNode[EscapeMark, String] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* NativeArray[E]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
&type_hash_collection__HashMapNodescope__EscapeMarkstring__String, /* N: HashMapNode[EscapeMark, String] */
&type_nullable_scope__EscapeMark, /* nullable K: nullable EscapeMark */
}
};
/* runtime type HashMap[Variable, RuntimeVariable] */
const struct type type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable = {
151,
"HashMap[Variable, RuntimeVariable]", /* class_name_string */
2,
0,
&resolution_table_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable,
3,
{
0, /* nullable Object */
1, /* Object */
151, /* HashMap[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysscope__Variableabstract_compiler__RuntimeVariable, /* HashMapKeys[K, V]: HashMapKeys[Variable, RuntimeVariable] */
&type_hash_collection__HashMapValuesscope__Variableabstract_compiler__RuntimeVariable, /* HashMapValues[K, V]: HashMapValues[Variable, RuntimeVariable] */
&type_scope__Variable, /* K: Variable */
&type_hash_collection__HashMapIteratorscope__Variableabstract_compiler__RuntimeVariable, /* HashMapIterator[K, V]: HashMapIterator[Variable, RuntimeVariable] */
&type_scope__Variable, /* K: Variable */
&type_abstract_compiler__RuntimeVariable, /* V: RuntimeVariable */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* HashMapNode[K, V]: HashMapNode[Variable, RuntimeVariable] */
&type_scope__Variable, /* K: Variable */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* nullable N: nullable HashMapNode[Variable, RuntimeVariable] */
&type_array__NativeArraynullable_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* NativeArray[E]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
&type_hash_collection__HashMapNodescope__Variableabstract_compiler__RuntimeVariable, /* N: HashMapNode[Variable, RuntimeVariable] */
&type_nullable_scope__Variable, /* nullable K: nullable Variable */
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
152, /* MakefileToolchain */
},
};
/* runtime type HashMap[MClass, Set[MVirtualTypeProp]] */
const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
1704,
"HashMap[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
6,
0,
&resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp,
7,
{
0, /* nullable Object */
1, /* Object */
109, /* Map[MClass, Set[PropertyLayoutElement]] */
613, /* HashMap[MClass, Set[PropertyLayoutElement]] */
639, /* Map[MClass, Set[MVirtualTypeProp]] */
1373, /* HashMap[MClass, Set[MProperty]] */
1704, /* HashMap[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapKeysmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MVirtualTypeProp]] */
&type_hash_collection__HashMapValuesmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* K: MClass */
&type_hash_collection__HashMapIteratormodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* K: MClass */
&type_abstract_collection__Setmodel__MVirtualTypeProp, /* V: Set[MVirtualTypeProp] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_model__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
&type_nullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* nullable N: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_array__NativeArraynullable_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
&type_hash_collection__HashMapNodemodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* N: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_nullable_model__MClass, /* nullable K: nullable MClass */
}
};
/* runtime type Map[MClass, Set[MVirtualTypeProp]] */
const struct type type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp = {
639,
"Map[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
4,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashSet[MVirtualTypeProp] */
const struct type type_hash_collection__HashSetmodel__MVirtualTypeProp = {
2289,
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
83, /* Collection[Object] */
-1, /* empty */
598, /* Set[Object] */
605, /* Collection[PropertyLayoutElement] */
1350, /* HashSet[Object] */
1516, /* Collection[MProperty] */
1532, /* Set[PropertyLayoutElement] */
2092, /* Set[MProperty] */
1705, /* Collection[MVirtualTypeProp] */
1918, /* HashSet[PropertyLayoutElement] */
2185, /* Set[MVirtualTypeProp] */
2215, /* HashSet[MProperty] */
2289, /* HashSet[MVirtualTypeProp] */
},
};
const struct types resolution_table_hash_collection__HashSetmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* HashSetNode[E]: HashSetNode[MVirtualTypeProp] */
&type_hash_collection__HashSetIteratormodel__MVirtualTypeProp, /* HashSetIterator[E]: HashSetIterator[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_array__Arraymodel__MVirtualTypeProp, /* Array[E]: Array[MVirtualTypeProp] */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_model__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
&type_model__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_nullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* nullable N: nullable HashSetNode[MVirtualTypeProp] */
&type_array__NativeArraynullable_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* NativeArray[E]: NativeArray[nullable HashSetNode[MVirtualTypeProp]] */
&type_hash_collection__HashSetNodemodel__MVirtualTypeProp, /* N: HashSetNode[MVirtualTypeProp] */
&type_nullable_model__MVirtualTypeProp, /* nullable K: nullable MVirtualTypeProp */
&type_abstract_collection__Collectionmodel__MVirtualTypeProp, /* Collection[E]: Collection[MVirtualTypeProp] */
}
};
/* runtime type Set[MVirtualTypeProp] */
const struct type type_abstract_collection__Setmodel__MVirtualTypeProp = {
2185,
"Set[MVirtualTypeProp]", /* class_name_string */
14,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Collection[MVirtualTypeProp] */
const struct type type_abstract_collection__Collectionmodel__MVirtualTypeProp = {
1705,
"Collection[MVirtualTypeProp]", /* class_name_string */
12,
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
640, /* POSetBucketsColorer[MClass, MVirtualTypeProp] */
},
};
const struct types resolution_table_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp = {
0, /* dummy */
{
&type_hash_collection__HashMapmodel__MVirtualTypePropkernel__Int, /* HashMap[E, Int]: HashMap[MVirtualTypeProp, Int] */
&type_poset__POSetmodel__MClass, /* POSet[H]: POSet[MClass] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MClass, /* Map[H, Set[H]]: Map[MClass, Set[MClass]] */
&type_abstract_collection__Mapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp, /* Map[H, Set[E]]: Map[MClass, Set[MVirtualTypeProp]] */
&type_abstract_collection__Collectionmodel__MClass, /* Collection[H]: Collection[MClass] */
&type_model__MClass, /* H: MClass */
}
};
/* runtime type Array[ReduceAction] */
const struct type type_array__Arrayparser_work__ReduceAction = {
-1, /*CAST DEAD*/
"Array[ReduceAction]", /* class_name_string */
-1, /*CAST DEAD*/
0,
&resolution_table_array__Arrayparser_work__ReduceAction,
17,
{
0, /* nullable Object */
1, /* Object */
-1, /* empty */
82, /* SequenceRead[nullable Object] */
83, /* Collection[Object] */
641, /* Collection[ReduceAction] */
590, /* Array[nullable Object] */
-1, /* empty */
1345, /* AbstractArrayRead[Object] */
1706, /* AbstractArrayRead[ReduceAction] */
1512, /* AbstractArray[Object] */
2100, /* AbstractArray[ReduceAction] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
1909, /* Array[Object] */
2221, /* Array[ReduceAction] */
},
};
const struct types resolution_table_array__Arrayparser_work__ReduceAction = {
0, /* dummy */
{
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[E]: NativeArray[ReduceAction] */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[E]: Collection[ReduceAction] */
&type_array__Arrayparser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[E]: Collection[ReduceAction] */
&type_abstract_collection__Collectionparser_work__ReduceAction, /* Collection[E]: Collection[ReduceAction] */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_array__Arrayparser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
&type_array__NativeArrayparser_work__ReduceAction, /* NativeArray[E]: NativeArray[ReduceAction] */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_parser_work__ReduceAction, /* E: ReduceAction */
&type_array__Arrayparser_work__ReduceAction, /* Array[E]: Array[ReduceAction] */
&type_array__AbstractArrayparser_work__ReduceAction, /* AbstractArray[E]: AbstractArray[ReduceAction] */
&type_array__ArrayIteratorparser_work__ReduceAction, /* ArrayIterator[E]: ArrayIterator[ReduceAction] */
}
};
/* runtime type Collection[ReduceAction] */
const struct type type_abstract_collection__Collectionparser_work__ReduceAction = {
641,
"Collection[ReduceAction]", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArrayRead[ReduceAction] */
const struct type type_array__AbstractArrayReadparser_work__ReduceAction = {
1706,
"AbstractArrayRead[ReduceAction]", /* class_name_string */
9,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AbstractArray[ReduceAction] */
const struct type type_array__AbstractArrayparser_work__ReduceAction = {
2100,
"AbstractArray[ReduceAction]", /* class_name_string */
11,
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
153, /* ReduceAction */
642, /* ReduceAction0 */
},
};
/* runtime type ReduceAction */
const struct type type_parser_work__ReduceAction = {
153,
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
153, /* ReduceAction */
643, /* ReduceAction1 */
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
153, /* ReduceAction */
644, /* ReduceAction2 */
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
153, /* ReduceAction */
645, /* ReduceAction3 */
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
153, /* ReduceAction */
646, /* ReduceAction4 */
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
153, /* ReduceAction */
647, /* ReduceAction5 */
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
153, /* ReduceAction */
648, /* ReduceAction6 */
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
153, /* ReduceAction */
649, /* ReduceAction7 */
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
153, /* ReduceAction */
650, /* ReduceAction8 */
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
153, /* ReduceAction */
651, /* ReduceAction9 */
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
153, /* ReduceAction */
652, /* ReduceAction10 */
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
153, /* ReduceAction */
653, /* ReduceAction11 */
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
153, /* ReduceAction */
654, /* ReduceAction12 */
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
153, /* ReduceAction */
655, /* ReduceAction13 */
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
153, /* ReduceAction */
656, /* ReduceAction14 */
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
153, /* ReduceAction */
657, /* ReduceAction15 */
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
153, /* ReduceAction */
658, /* ReduceAction16 */
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
153, /* ReduceAction */
659, /* ReduceAction17 */
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
153, /* ReduceAction */
660, /* ReduceAction18 */
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
153, /* ReduceAction */
661, /* ReduceAction19 */
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
153, /* ReduceAction */
662, /* ReduceAction20 */
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
153, /* ReduceAction */
663, /* ReduceAction21 */
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
153, /* ReduceAction */
664, /* ReduceAction22 */
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
153, /* ReduceAction */
665, /* ReduceAction23 */
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
153, /* ReduceAction */
666, /* ReduceAction24 */
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
153, /* ReduceAction */
667, /* ReduceAction26 */
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
153, /* ReduceAction */
668, /* ReduceAction27 */
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
153, /* ReduceAction */
669, /* ReduceAction28 */
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
153, /* ReduceAction */
670, /* ReduceAction29 */
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
153, /* ReduceAction */
671, /* ReduceAction30 */
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
153, /* ReduceAction */
672, /* ReduceAction31 */
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
153, /* ReduceAction */
673, /* ReduceAction32 */
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
153, /* ReduceAction */
674, /* ReduceAction33 */
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
153, /* ReduceAction */
675, /* ReduceAction34 */
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
153, /* ReduceAction */
676, /* ReduceAction35 */
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
153, /* ReduceAction */
677, /* ReduceAction36 */
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
153, /* ReduceAction */
678, /* ReduceAction37 */
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
153, /* ReduceAction */
679, /* ReduceAction38 */
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
153, /* ReduceAction */
680, /* ReduceAction39 */
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
153, /* ReduceAction */
681, /* ReduceAction40 */
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
153, /* ReduceAction */
682, /* ReduceAction41 */
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
153, /* ReduceAction */
683, /* ReduceAction43 */
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
153, /* ReduceAction */
684, /* ReduceAction44 */
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
153, /* ReduceAction */
685, /* ReduceAction45 */
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
153, /* ReduceAction */
686, /* ReduceAction46 */
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
153, /* ReduceAction */
687, /* ReduceAction47 */
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
153, /* ReduceAction */
688, /* ReduceAction48 */
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
153, /* ReduceAction */
689, /* ReduceAction49 */
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
153, /* ReduceAction */
690, /* ReduceAction50 */
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
153, /* ReduceAction */
691, /* ReduceAction51 */
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
153, /* ReduceAction */
692, /* ReduceAction52 */
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
153, /* ReduceAction */
693, /* ReduceAction53 */
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
153, /* ReduceAction */
694, /* ReduceAction54 */
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
153, /* ReduceAction */
695, /* ReduceAction55 */
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
153, /* ReduceAction */
696, /* ReduceAction56 */
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
153, /* ReduceAction */
697, /* ReduceAction57 */
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
153, /* ReduceAction */
698, /* ReduceAction58 */
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
153, /* ReduceAction */
699, /* ReduceAction59 */
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
153, /* ReduceAction */
700, /* ReduceAction60 */
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
153, /* ReduceAction */
701, /* ReduceAction61 */
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
153, /* ReduceAction */
702, /* ReduceAction62 */
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
153, /* ReduceAction */
703, /* ReduceAction63 */
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
153, /* ReduceAction */
704, /* ReduceAction64 */
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
153, /* ReduceAction */
705, /* ReduceAction65 */
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
153, /* ReduceAction */
706, /* ReduceAction66 */
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
153, /* ReduceAction */
707, /* ReduceAction67 */
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
153, /* ReduceAction */
708, /* ReduceAction68 */
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
153, /* ReduceAction */
709, /* ReduceAction69 */
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
153, /* ReduceAction */
710, /* ReduceAction70 */
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
153, /* ReduceAction */
711, /* ReduceAction71 */
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
153, /* ReduceAction */
712, /* ReduceAction72 */
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
153, /* ReduceAction */
713, /* ReduceAction73 */
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
153, /* ReduceAction */
714, /* ReduceAction74 */
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
153, /* ReduceAction */
715, /* ReduceAction75 */
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
153, /* ReduceAction */
716, /* ReduceAction76 */
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
153, /* ReduceAction */
717, /* ReduceAction77 */
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
153, /* ReduceAction */
718, /* ReduceAction78 */
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
153, /* ReduceAction */
719, /* ReduceAction79 */
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
153, /* ReduceAction */
720, /* ReduceAction80 */
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
153, /* ReduceAction */
721, /* ReduceAction81 */
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
153, /* ReduceAction */
722, /* ReduceAction82 */
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
153, /* ReduceAction */
723, /* ReduceAction83 */
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
153, /* ReduceAction */
724, /* ReduceAction84 */
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
153, /* ReduceAction */
725, /* ReduceAction87 */
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
153, /* ReduceAction */
726, /* ReduceAction88 */
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
153, /* ReduceAction */
727, /* ReduceAction89 */
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
153, /* ReduceAction */
728, /* ReduceAction90 */
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
153, /* ReduceAction */
729, /* ReduceAction91 */
},
};
/* runtime type ReduceAction92 */
const struct type type_parser__ReduceAction92 = {
-1, /*CAST DEAD*/
"ReduceAction92", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
730, /* ReduceAction92 */
},
};
/* runtime type ReduceAction93 */
const struct type type_parser__ReduceAction93 = {
-1, /*CAST DEAD*/
"ReduceAction93", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
731, /* ReduceAction93 */
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
153, /* ReduceAction */
732, /* ReduceAction94 */
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
153, /* ReduceAction */
733, /* ReduceAction95 */
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
153, /* ReduceAction */
734, /* ReduceAction96 */
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
153, /* ReduceAction */
735, /* ReduceAction97 */
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
153, /* ReduceAction */
736, /* ReduceAction98 */
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
153, /* ReduceAction */
737, /* ReduceAction99 */
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
153, /* ReduceAction */
738, /* ReduceAction100 */
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
153, /* ReduceAction */
739, /* ReduceAction101 */
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
153, /* ReduceAction */
740, /* ReduceAction102 */
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
153, /* ReduceAction */
741, /* ReduceAction103 */
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
153, /* ReduceAction */
742, /* ReduceAction104 */
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
153, /* ReduceAction */
743, /* ReduceAction105 */
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
153, /* ReduceAction */
744, /* ReduceAction106 */
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
153, /* ReduceAction */
745, /* ReduceAction107 */
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
153, /* ReduceAction */
746, /* ReduceAction108 */
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
153, /* ReduceAction */
747, /* ReduceAction109 */
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
153, /* ReduceAction */
748, /* ReduceAction110 */
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
153, /* ReduceAction */
749, /* ReduceAction111 */
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
153, /* ReduceAction */
750, /* ReduceAction112 */
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
153, /* ReduceAction */
751, /* ReduceAction113 */
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
153, /* ReduceAction */
752, /* ReduceAction114 */
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
153, /* ReduceAction */
753, /* ReduceAction115 */
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
153, /* ReduceAction */
754, /* ReduceAction116 */
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
153, /* ReduceAction */
755, /* ReduceAction117 */
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
153, /* ReduceAction */
756, /* ReduceAction119 */
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
153, /* ReduceAction */
757, /* ReduceAction120 */
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
153, /* ReduceAction */
758, /* ReduceAction121 */
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
153, /* ReduceAction */
759, /* ReduceAction122 */
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
153, /* ReduceAction */
760, /* ReduceAction123 */
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
153, /* ReduceAction */
761, /* ReduceAction124 */
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
153, /* ReduceAction */
762, /* ReduceAction125 */
},
};
/* runtime type ReduceAction126 */
const struct type type_parser__ReduceAction126 = {
-1, /*CAST DEAD*/
"ReduceAction126", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
763, /* ReduceAction126 */
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
153, /* ReduceAction */
764, /* ReduceAction128 */
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
153, /* ReduceAction */
765, /* ReduceAction129 */
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
153, /* ReduceAction */
766, /* ReduceAction131 */
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
153, /* ReduceAction */
767, /* ReduceAction132 */
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
153, /* ReduceAction */
768, /* ReduceAction133 */
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
153, /* ReduceAction */
769, /* ReduceAction134 */
},
};
/* runtime type ReduceAction135 */
const struct type type_parser__ReduceAction135 = {
-1, /*CAST DEAD*/
"ReduceAction135", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
770, /* ReduceAction135 */
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
153, /* ReduceAction */
771, /* ReduceAction136 */
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
153, /* ReduceAction */
772, /* ReduceAction137 */
},
};
/* runtime type ReduceAction138 */
const struct type type_parser__ReduceAction138 = {
-1, /*CAST DEAD*/
"ReduceAction138", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
773, /* ReduceAction138 */
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
153, /* ReduceAction */
774, /* ReduceAction139 */
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
153, /* ReduceAction */
775, /* ReduceAction140 */
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
153, /* ReduceAction */
776, /* ReduceAction142 */
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
153, /* ReduceAction */
777, /* ReduceAction143 */
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
153, /* ReduceAction */
778, /* ReduceAction144 */
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
153, /* ReduceAction */
779, /* ReduceAction145 */
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
153, /* ReduceAction */
780, /* ReduceAction146 */
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
153, /* ReduceAction */
781, /* ReduceAction148 */
},
};
/* runtime type ReduceAction149 */
const struct type type_parser__ReduceAction149 = {
-1, /*CAST DEAD*/
"ReduceAction149", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
782, /* ReduceAction149 */
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
153, /* ReduceAction */
783, /* ReduceAction150 */
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
153, /* ReduceAction */
784, /* ReduceAction151 */
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
153, /* ReduceAction */
785, /* ReduceAction152 */
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
153, /* ReduceAction */
786, /* ReduceAction153 */
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
153, /* ReduceAction */
787, /* ReduceAction154 */
},
};
/* runtime type ReduceAction155 */
const struct type type_parser__ReduceAction155 = {
-1, /*CAST DEAD*/
"ReduceAction155", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
788, /* ReduceAction155 */
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
153, /* ReduceAction */
789, /* ReduceAction159 */
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
153, /* ReduceAction */
790, /* ReduceAction160 */
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
153, /* ReduceAction */
791, /* ReduceAction161 */
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
153, /* ReduceAction */
792, /* ReduceAction162 */
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
153, /* ReduceAction */
793, /* ReduceAction163 */
},
};
/* runtime type ReduceAction164 */
const struct type type_parser__ReduceAction164 = {
-1, /*CAST DEAD*/
"ReduceAction164", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
794, /* ReduceAction164 */
},
};
/* runtime type ReduceAction165 */
const struct type type_parser__ReduceAction165 = {
-1, /*CAST DEAD*/
"ReduceAction165", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
795, /* ReduceAction165 */
},
};
/* runtime type ReduceAction166 */
const struct type type_parser__ReduceAction166 = {
-1, /*CAST DEAD*/
"ReduceAction166", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
796, /* ReduceAction166 */
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
153, /* ReduceAction */
797, /* ReduceAction167 */
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
153, /* ReduceAction */
798, /* ReduceAction168 */
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
153, /* ReduceAction */
799, /* ReduceAction172 */
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
153, /* ReduceAction */
800, /* ReduceAction173 */
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
153, /* ReduceAction */
801, /* ReduceAction174 */
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
153, /* ReduceAction */
802, /* ReduceAction175 */
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
153, /* ReduceAction */
803, /* ReduceAction176 */
},
};
/* runtime type ReduceAction177 */
const struct type type_parser__ReduceAction177 = {
-1, /*CAST DEAD*/
"ReduceAction177", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
804, /* ReduceAction177 */
},
};
/* runtime type ReduceAction178 */
const struct type type_parser__ReduceAction178 = {
-1, /*CAST DEAD*/
"ReduceAction178", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
4,
{
0, /* nullable Object */
1, /* Object */
153, /* ReduceAction */
805, /* ReduceAction178 */
},
};
