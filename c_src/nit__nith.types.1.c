#include "nit__nith.types.0.h"
/* runtime type Sys */
const struct type type_standard__Sys = {
-1, /*CAST DEAD*/
"Sys", /* class_name_string */
-1, /*CAST DEAD*/
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
665, /* Sys */
},
};
/* runtime type FStream */
const struct type type_standard__FStream = {
0,
"FStream", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Char */
const struct type type_standard__Char = {
1116,
"Char", /* class_name_string */
7,
0,
&resolution_table_standard__Char,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1116, /* Char */
},
};
const struct types resolution_table_standard__Char = {
0, /* dummy */
{
&type_standard__Char, /* OTHER: Char */
}
};
/* runtime type Array[nullable Object] */
const struct type type_standard__Array__nullable__standard__Object = {
1,
"Array[nullable Object]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatString */
const struct type type_standard__FlatString = {
2289,
"FlatString", /* class_name_string */
7,
0,
&resolution_table_standard__FlatString,
8,
{
3, /* Text */
6, /* FlatText */
130, /* String */
137, /* nullable String */
139, /* Object */
149, /* Streamable */
532, /* Comparable */
2289, /* FlatString */
},
};
const struct types resolution_table_standard__FlatString = {
0, /* dummy */
{
&type_standard__Text, /* OTHER: Text */
&type_standard__String, /* SELFTYPE: String */
&type_standard__Array__standard__String, /* Array[SELFTYPE]: Array[String] */
}
};
/* runtime type SequenceRead[nullable Object] */
const struct type type_standard__SequenceRead__nullable__standard__Object = {
2,
"SequenceRead[nullable Object]", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Text */
const struct type type_standard__Text = {
3,
"Text", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Set[Object] */
const struct type type_standard__Set__standard__Object = {
4,
"Set[Object]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatBuffer */
const struct type type_standard__FlatBuffer = {
2228,
"FlatBuffer", /* class_name_string */
7,
0,
&resolution_table_standard__FlatBuffer,
8,
{
3, /* Text */
6, /* FlatText */
152, /* Buffer */
-1, /* empty */
139, /* Object */
149, /* Streamable */
532, /* Comparable */
2228, /* FlatBuffer */
},
};
const struct types resolution_table_standard__FlatBuffer = {
0, /* dummy */
{
&type_standard__Text, /* OTHER: Text */
&type_standard__Buffer, /* SELFTYPE: Buffer */
&type_standard__Array__standard__Buffer, /* Array[SELFTYPE]: Array[Buffer] */
}
};
/* runtime type Collection[Char] */
const struct type type_standard__Collection__standard__Char = {
5,
"Collection[Char]", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type FlatText */
const struct type type_standard__FlatText = {
6,
"FlatText", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AStdImport */
const struct type type_nit__AStdImport = {
1872,
"AStdImport", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
153, /* AImport */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1872, /* AStdImport */
},
};
/* runtime type AError */
const struct type type_nit__AError = {
7,
"AError", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AModuledecl */
const struct type type_nit__AModuledecl = {
1873,
"AModuledecl", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
14, /* nullable AModuledecl */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1873, /* AModuledecl */
},
};
/* runtime type AModule */
const struct type type_nit__AModule = {
1755,
"AModule", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1755, /* AModule */
},
};
/* runtime type Concat */
const struct type type_standard__ropes__Concat = {
2290,
"Concat", /* class_name_string */
7,
0,
&resolution_table_standard__ropes__Concat,
8,
{
3, /* Text */
131, /* RopeString */
130, /* String */
137, /* nullable String */
139, /* Object */
149, /* Streamable */
532, /* Comparable */
2290, /* Concat */
},
};
const struct types resolution_table_standard__ropes__Concat = {
0, /* dummy */
{
&type_standard__Text, /* OTHER: Text */
&type_standard__String, /* SELFTYPE: String */
&type_standard__Array__standard__String, /* Array[SELFTYPE]: Array[String] */
}
};
/* runtime type MMethod */
const struct type type_nit__MMethod = {
2229,
"MMethod", /* class_name_string */
6,
0,
&resolution_table_nit__MMethod,
7,
{
118, /* nullable MMethod */
117, /* MEntity */
142, /* MProperty */
155, /* PropertyLayoutElement */
139, /* Object */
170, /* nullable MProperty */
2229, /* MMethod */
},
};
const struct types resolution_table_nit__MMethod = {
0, /* dummy */
{
&type_standard__Array__nit__MMethodDef, /* Array[MPROPDEF]: Array[MMethodDef] */
&type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MMethodDef, /* HashMap2[MModule, MType, Array[MPROPDEF]]: HashMap2[MModule, MType, Array[MMethodDef]] */
&type_nit__MMethodDef, /* MPROPDEF: MMethodDef */
}
};
/* runtime type EOF */
const struct type type_nit__EOF = {
1756,
"EOF", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1756, /* EOF */
},
};
/* runtime type AAnnotation */
const struct type type_nit__AAnnotation = {
1874,
"AAnnotation", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
113, /* nullable AAnnotation */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1874, /* AAnnotation */
},
};
/* runtime type AStdClassdef */
const struct type type_nit__AStdClassdef = {
2061,
"AStdClassdef", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
9, /* AClassdef */
11, /* Prod */
13, /* nullable AClassdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2061, /* AStdClassdef */
},
};
/* runtime type MClassType */
const struct type type_nit__MClassType = {
1875,
"MClassType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1875, /* MClassType */
},
};
/* runtime type AMethPropdef */
const struct type type_nit__AMethPropdef = {
2062,
"AMethPropdef", /* class_name_string */
6,
0,
&resolution_table_nit__AMethPropdef,
7,
{
23, /* nullable APropdef */
11, /* Prod */
123, /* APropdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2062, /* AMethPropdef */
},
};
const struct types resolution_table_nit__AMethPropdef = {
0, /* dummy */
{
&type_nullable__nit__MMethodDef, /* nullable MPROPDEF: nullable MMethodDef */
}
};
/* runtime type AStringFormExpr */
const struct type type_nit__AStringFormExpr = {
8,
"AStringFormExpr", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Location */
const struct type type_nit__Location = {
1117,
"Location", /* class_name_string */
7,
0,
&resolution_table_nit__Location,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1117, /* Location */
},
};
const struct types resolution_table_nit__Location = {
0, /* dummy */
{
&type_nit__Location, /* OTHER: Location */
}
};
/* runtime type AClassdef */
const struct type type_nit__AClassdef = {
9,
"AClassdef", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MVirtualTypeProp */
const struct type type_nit__MVirtualTypeProp = {
2230,
"MVirtualTypeProp", /* class_name_string */
6,
0,
&resolution_table_nit__MVirtualTypeProp,
7,
{
116, /* nullable MVirtualTypeProp */
117, /* MEntity */
142, /* MProperty */
155, /* PropertyLayoutElement */
139, /* Object */
170, /* nullable MProperty */
2230, /* MVirtualTypeProp */
},
};
const struct types resolution_table_nit__MVirtualTypeProp = {
0, /* dummy */
{
&type_standard__Array__nit__MVirtualTypeDef, /* Array[MPROPDEF]: Array[MVirtualTypeDef] */
&type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMap2[MModule, MType, Array[MPROPDEF]]: HashMap2[MModule, MType, Array[MVirtualTypeDef]] */
&type_nit__MVirtualTypeDef, /* MPROPDEF: MVirtualTypeDef */
}
};
/* runtime type Token */
const struct type type_nit__Token = {
10,
"Token", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Prod */
const struct type type_nit__Prod = {
11,
"Prod", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ATopClassdef */
const struct type type_nit__ATopClassdef = {
2063,
"ATopClassdef", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
9, /* AClassdef */
11, /* Prod */
13, /* nullable AClassdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2063, /* ATopClassdef */
},
};
/* runtime type AMainClassdef */
const struct type type_nit__AMainClassdef = {
2064,
"AMainClassdef", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
9, /* AClassdef */
11, /* Prod */
13, /* nullable AClassdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2064, /* AMainClassdef */
},
};
/* runtime type MGenericType */
const struct type type_nit__MGenericType = {
2065,
"MGenericType", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1875, /* MClassType */
2065, /* MGenericType */
},
};
/* runtime type MMethodDef */
const struct type type_nit__MMethodDef = {
2231,
"MMethodDef", /* class_name_string */
6,
0,
&resolution_table_nit__MMethodDef,
7,
{
143, /* MPropDef */
117, /* MEntity */
148, /* nullable MPropDef */
155, /* PropertyLayoutElement */
139, /* Object */
551, /* nullable MMethodDef */
2231, /* MMethodDef */
},
};
const struct types resolution_table_nit__MMethodDef = {
0, /* dummy */
{
&type_nit__AbstractCompilerVisitor, /* VISITOR: AbstractCompilerVisitor */
&type_nit__MMethod, /* MPROPERTY: MMethod */
&type_nit__MMethodDef, /* MPROPDEF: MMethodDef */
}
};
/* runtime type AAttrPropdef */
const struct type type_nit__AAttrPropdef = {
2066,
"AAttrPropdef", /* class_name_string */
6,
0,
&resolution_table_nit__AAttrPropdef,
7,
{
23, /* nullable APropdef */
11, /* Prod */
123, /* APropdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2066, /* AAttrPropdef */
},
};
const struct types resolution_table_nit__AAttrPropdef = {
0, /* dummy */
{
&type_nullable__nit__MAttributeDef, /* nullable MPROPDEF: nullable MAttributeDef */
}
};
/* runtime type AAnnotations */
const struct type type_nit__AAnnotations = {
1876,
"AAnnotations", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
20, /* nullable AAnnotations */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1876, /* AAnnotations */
},
};
/* runtime type MNullableType */
const struct type type_nit__MNullableType = {
1877,
"MNullableType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1877, /* MNullableType */
},
};
/* runtime type MParameterType */
const struct type type_nit__MParameterType = {
1878,
"MParameterType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1878, /* MParameterType */
},
};
/* runtime type AExpr */
const struct type type_nit__AExpr = {
12,
"AExpr", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MAttribute */
const struct type type_nit__MAttribute = {
2067,
"MAttribute", /* class_name_string */
6,
0,
&resolution_table_nit__MAttribute,
7,
{
-1, /* empty */
117, /* MEntity */
142, /* MProperty */
155, /* PropertyLayoutElement */
139, /* Object */
170, /* nullable MProperty */
2067, /* MAttribute */
},
};
const struct types resolution_table_nit__MAttribute = {
0, /* dummy */
{
&type_standard__Array__nit__MAttributeDef, /* Array[MPROPDEF]: Array[MAttributeDef] */
&type_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__MAttributeDef, /* HashMap2[MModule, MType, Array[MPROPDEF]]: HashMap2[MModule, MType, Array[MAttributeDef]] */
&type_nit__MAttributeDef, /* MPROPDEF: MAttributeDef */
}
};
/* runtime type nullable AClassdef */
const struct type type_nullable__nit__AClassdef = {
13,
"nullable AClassdef", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AModuledecl */
const struct type type_nullable__nit__AModuledecl = {
14,
"nullable AModuledecl", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[Object] */
const struct type type_standard__Array__standard__Object = {
2232,
"Array[Object]", /* class_name_string */
19,
0,
&resolution_table_standard__Array__standard__Object,
20,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
179, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
},
};
const struct types resolution_table_standard__Array__standard__Object = {
0, /* dummy */
{
&type_standard__Object, /* E: Object */
&type_standard__Collection__standard__Object, /* Collection[E]: Collection[Object] */
&type_standard__Array__standard__Object, /* Array[E]: Array[Object] */
&type_standard__NativeArray__standard__Object, /* NativeArray[E]: NativeArray[Object] */
&type_standard__Object, /* E: Object */
&type_standard__Collection__standard__Object, /* Collection[E]: Collection[Object] */
&type_standard__Object, /* E: Object */
&type_standard__Collection__standard__Object, /* Collection[E]: Collection[Object] */
&type_standard__Collection__standard__Object, /* Collection[E]: Collection[Object] */
&type_standard__Object, /* E: Object */
&type_standard__Object, /* E: Object */
&type_standard__Collection__standard__Object, /* Collection[E]: Collection[Object] */
&type_standard__Array__standard__Object, /* Array[E]: Array[Object] */
&type_standard__Object, /* E: Object */
&type_standard__Object, /* E: Object */
&type_standard__Array__standard__Object, /* Array[E]: Array[Object] */
&type_standard__AbstractArray__standard__Object, /* AbstractArray[E]: AbstractArray[Object] */
&type_standard__array__ArrayIterator__standard__Object, /* ArrayIterator[E]: ArrayIterator[Object] */
}
};
/* runtime type nullable ADoc */
const struct type type_nullable__nit__ADoc = {
15,
"nullable ADoc", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwredef */
const struct type type_nullable__nit__TKwredef = {
16,
"nullable TKwredef", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AVisibility */
const struct type type_nullable__nit__AVisibility = {
17,
"nullable AVisibility", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwmodule */
const struct type type_nullable__nit__TKwmodule = {
18,
"nullable TKwmodule", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AModuleName */
const struct type type_nullable__nit__AModuleName = {
19,
"nullable AModuleName", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AAnnotations */
const struct type type_nullable__nit__AAnnotations = {
20,
"nullable AAnnotations", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwimport */
const struct type type_nullable__nit__TKwimport = {
21,
"nullable TKwimport", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwend */
const struct type type_nullable__nit__TKwend = {
22,
"nullable TKwend", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable APropdef */
const struct type type_nullable__nit__APropdef = {
23,
"nullable APropdef", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AExpr */
const struct type type_nullable__nit__AExpr = {
24,
"nullable AExpr", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AClasskind */
const struct type type_nullable__nit__AClasskind = {
25,
"nullable AClasskind", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TClassid */
const struct type type_nullable__nit__TClassid = {
26,
"nullable TClassid", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AExternCodeBlock */
const struct type type_nullable__nit__AExternCodeBlock = {
27,
"nullable AExternCodeBlock", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwclass */
const struct type type_nullable__nit__TKwclass = {
28,
"nullable TKwclass", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwabstract */
const struct type type_nullable__nit__TKwabstract = {
29,
"nullable TKwabstract", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwinterface */
const struct type type_nullable__nit__TKwinterface = {
30,
"nullable TKwinterface", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwenum */
const struct type type_nullable__nit__TKwenum = {
31,
"nullable TKwenum", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwextern */
const struct type type_nullable__nit__TKwextern = {
32,
"nullable TKwextern", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AType */
const struct type type_nullable__nit__AType = {
33,
"nullable AType", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwsuper */
const struct type type_nullable__nit__TKwsuper = {
34,
"nullable TKwsuper", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwmeth */
const struct type type_nullable__nit__TKwmeth = {
35,
"nullable TKwmeth", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AMethid */
const struct type type_nullable__nit__AMethid = {
36,
"nullable AMethid", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable ASignature */
const struct type type_nullable__nit__ASignature = {
37,
"nullable ASignature", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwnew */
const struct type type_nullable__nit__TKwnew = {
38,
"nullable TKwnew", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AExternCalls */
const struct type type_nullable__nit__AExternCalls = {
39,
"nullable AExternCalls", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwvar */
const struct type type_nullable__nit__TKwvar = {
40,
"nullable TKwvar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TId */
const struct type type_nullable__nit__TId = {
41,
"nullable TId", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwinit */
const struct type type_nullable__nit__TKwinit = {
42,
"nullable TKwinit", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwtype */
const struct type type_nullable__nit__TKwtype = {
43,
"nullable TKwtype", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwpublic */
const struct type type_nullable__nit__TKwpublic = {
44,
"nullable TKwpublic", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwprivate */
const struct type type_nullable__nit__TKwprivate = {
45,
"nullable TKwprivate", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwprotected */
const struct type type_nullable__nit__TKwprotected = {
46,
"nullable TKwprotected", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwintrude */
const struct type type_nullable__nit__TKwintrude = {
47,
"nullable TKwintrude", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TPlus */
const struct type type_nullable__nit__TPlus = {
48,
"nullable TPlus", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TMinus */
const struct type type_nullable__nit__TMinus = {
49,
"nullable TMinus", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TStar */
const struct type type_nullable__nit__TStar = {
50,
"nullable TStar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TStarstar */
const struct type type_nullable__nit__TStarstar = {
51,
"nullable TStarstar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TSlash */
const struct type type_nullable__nit__TSlash = {
52,
"nullable TSlash", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TPercent */
const struct type type_nullable__nit__TPercent = {
53,
"nullable TPercent", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TEq */
const struct type type_nullable__nit__TEq = {
54,
"nullable TEq", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TNe */
const struct type type_nullable__nit__TNe = {
55,
"nullable TNe", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TLe */
const struct type type_nullable__nit__TLe = {
56,
"nullable TLe", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TGe */
const struct type type_nullable__nit__TGe = {
57,
"nullable TGe", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TLt */
const struct type type_nullable__nit__TLt = {
58,
"nullable TLt", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TGt */
const struct type type_nullable__nit__TGt = {
59,
"nullable TGt", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TLl */
const struct type type_nullable__nit__TLl = {
60,
"nullable TLl", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TGg */
const struct type type_nullable__nit__TGg = {
61,
"nullable TGg", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TObra */
const struct type type_nullable__nit__TObra = {
62,
"nullable TObra", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TCbra */
const struct type type_nullable__nit__TCbra = {
63,
"nullable TCbra", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TStarship */
const struct type type_nullable__nit__TStarship = {
64,
"nullable TStarship", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TAssign */
const struct type type_nullable__nit__TAssign = {
65,
"nullable TAssign", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TOpar */
const struct type type_nullable__nit__TOpar = {
66,
"nullable TOpar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TCpar */
const struct type type_nullable__nit__TCpar = {
67,
"nullable TCpar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TDotdotdot */
const struct type type_nullable__nit__TDotdotdot = {
68,
"nullable TDotdotdot", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AExternCall */
const struct type type_nullable__nit__AExternCall = {
69,
"nullable AExternCall", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TDot */
const struct type type_nullable__nit__TDot = {
70,
"nullable TDot", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwas */
const struct type type_nullable__nit__TKwas = {
71,
"nullable TKwas", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwnullable */
const struct type type_nullable__nit__TKwnullable = {
72,
"nullable TKwnullable", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwnot */
const struct type type_nullable__nit__TKwnot = {
73,
"nullable TKwnot", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwin */
const struct type type_nullable__nit__TKwin = {
74,
"nullable TKwin", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TString */
const struct type type_nullable__nit__TString = {
75,
"nullable TString", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TExternCodeSegment */
const struct type type_nullable__nit__TExternCodeSegment = {
76,
"nullable TExternCodeSegment", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AInLanguage */
const struct type type_nullable__nit__AInLanguage = {
77,
"nullable AInLanguage", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwreturn */
const struct type type_nullable__nit__TKwreturn = {
78,
"nullable TKwreturn", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwbreak */
const struct type type_nullable__nit__TKwbreak = {
79,
"nullable TKwbreak", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable ALabel */
const struct type type_nullable__nit__ALabel = {
80,
"nullable ALabel", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwabort */
const struct type type_nullable__nit__TKwabort = {
81,
"nullable TKwabort", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwcontinue */
const struct type type_nullable__nit__TKwcontinue = {
82,
"nullable TKwcontinue", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AExprs */
const struct type type_nullable__nit__AExprs = {
83,
"nullable AExprs", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AQualified */
const struct type type_nullable__nit__AQualified = {
84,
"nullable AQualified", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwdebug */
const struct type type_nullable__nit__TKwdebug = {
85,
"nullable TKwdebug", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwlabel */
const struct type type_nullable__nit__TKwlabel = {
86,
"nullable TKwlabel", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TAttrid */
const struct type type_nullable__nit__TAttrid = {
87,
"nullable TAttrid", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AAssignOp */
const struct type type_nullable__nit__AAssignOp = {
88,
"nullable AAssignOp", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TPluseq */
const struct type type_nullable__nit__TPluseq = {
89,
"nullable TPluseq", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TMinuseq */
const struct type type_nullable__nit__TMinuseq = {
90,
"nullable TMinuseq", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwdo */
const struct type type_nullable__nit__TKwdo = {
91,
"nullable TKwdo", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwif */
const struct type type_nullable__nit__TKwif = {
92,
"nullable TKwif", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwloop */
const struct type type_nullable__nit__TKwloop = {
93,
"nullable TKwloop", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwwhile */
const struct type type_nullable__nit__TKwwhile = {
94,
"nullable TKwwhile", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwfor */
const struct type type_nullable__nit__TKwfor = {
95,
"nullable TKwfor", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwassert */
const struct type type_nullable__nit__TKwassert = {
96,
"nullable TKwassert", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwthen */
const struct type type_nullable__nit__TKwthen = {
97,
"nullable TKwthen", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwelse */
const struct type type_nullable__nit__TKwelse = {
98,
"nullable TKwelse", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwonce */
const struct type type_nullable__nit__TKwonce = {
99,
"nullable TKwonce", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwisset */
const struct type type_nullable__nit__TKwisset = {
100,
"nullable TKwisset", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwnull */
const struct type type_nullable__nit__TKwnull = {
101,
"nullable TKwnull", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwself */
const struct type type_nullable__nit__TKwself = {
102,
"nullable TKwself", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwtrue */
const struct type type_nullable__nit__TKwtrue = {
103,
"nullable TKwtrue", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TKwfalse */
const struct type type_nullable__nit__TKwfalse = {
104,
"nullable TKwfalse", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TNumber */
const struct type type_nullable__nit__TNumber = {
105,
"nullable TNumber", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable THexNumber */
const struct type type_nullable__nit__THexNumber = {
106,
"nullable THexNumber", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TFloat */
const struct type type_nullable__nit__TFloat = {
107,
"nullable TFloat", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TChar */
const struct type type_nullable__nit__TChar = {
108,
"nullable TChar", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TStartString */
const struct type type_nullable__nit__TStartString = {
109,
"nullable TStartString", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TMidString */
const struct type type_nullable__nit__TMidString = {
110,
"nullable TMidString", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TEndString */
const struct type type_nullable__nit__TEndString = {
111,
"nullable TEndString", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TAt */
const struct type type_nullable__nit__TAt = {
112,
"nullable TAt", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AAnnotation */
const struct type type_nullable__nit__AAnnotation = {
113,
"nullable AAnnotation", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable AAtid */
const struct type type_nullable__nit__AAtid = {
114,
"nullable AAtid", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable TQuad */
const struct type type_nullable__nit__TQuad = {
115,
"nullable TQuad", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MVirtualTypeProp */
const struct type type_nullable__nit__MVirtualTypeProp = {
116,
"nullable MVirtualTypeProp", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MNullType */
const struct type type_nit__MNullType = {
1879,
"MNullType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1879, /* MNullType */
},
};
/* runtime type MVirtualType */
const struct type type_nit__MVirtualType = {
1880,
"MVirtualType", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1880, /* MVirtualType */
},
};
/* runtime type MEntity */
const struct type type_nit__MEntity = {
117,
"MEntity", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MVirtualTypeDef */
const struct type type_nit__MVirtualTypeDef = {
2233,
"MVirtualTypeDef", /* class_name_string */
6,
0,
&resolution_table_nit__MVirtualTypeDef,
7,
{
143, /* MPropDef */
117, /* MEntity */
148, /* nullable MPropDef */
155, /* PropertyLayoutElement */
139, /* Object */
553, /* nullable MVirtualTypeDef */
2233, /* MVirtualTypeDef */
},
};
const struct types resolution_table_nit__MVirtualTypeDef = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MVirtualTypeProp, /* MPROPERTY: MVirtualTypeProp */
&type_nit__MVirtualTypeDef, /* MPROPDEF: MVirtualTypeDef */
}
};
/* runtime type AIdMethid */
const struct type type_nit__AIdMethid = {
2068,
"AIdMethid", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
36, /* nullable AMethid */
11, /* Prod */
126, /* AMethid */
-1, /* empty */
139, /* Object */
154, /* ANode */
2068, /* AIdMethid */
},
};
/* runtime type nullable MMethod */
const struct type type_nullable__nit__MMethod = {
118,
"nullable MMethod", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ABlockExpr */
const struct type type_nit__ABlockExpr = {
2069,
"ABlockExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2069, /* ABlockExpr */
},
};
/* runtime type AMainMethPropdef */
const struct type type_nit__AMainMethPropdef = {
2234,
"AMainMethPropdef", /* class_name_string */
7,
0,
&resolution_table_nit__AMainMethPropdef,
8,
{
23, /* nullable APropdef */
11, /* Prod */
123, /* APropdef */
-1, /* empty */
139, /* Object */
154, /* ANode */
2062, /* AMethPropdef */
2234, /* AMainMethPropdef */
},
};
const struct types resolution_table_nit__AMainMethPropdef = {
0, /* dummy */
{
&type_nullable__nit__MMethodDef, /* nullable MPROPDEF: nullable MMethodDef */
}
};
/* runtime type ANewExpr */
const struct type type_nit__ANewExpr = {
2070,
"ANewExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2070, /* ANewExpr */
},
};
/* runtime type AIntExpr */
const struct type type_nit__AIntExpr = {
119,
"AIntExpr", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AFloatExpr */
const struct type type_nit__AFloatExpr = {
2071,
"AFloatExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2071, /* AFloatExpr */
},
};
/* runtime type ACharExpr */
const struct type type_nit__ACharExpr = {
2072,
"ACharExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2072, /* ACharExpr */
},
};
/* runtime type ABoolExpr */
const struct type type_nit__ABoolExpr = {
120,
"ABoolExpr", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ASuperstringExpr */
const struct type type_nit__ASuperstringExpr = {
2073,
"ASuperstringExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2073, /* ASuperstringExpr */
},
};
/* runtime type AImplicitSelfExpr */
const struct type type_nit__AImplicitSelfExpr = {
2235,
"AImplicitSelfExpr", /* class_name_string */
7,
0,
NULL, /*NO RESOLUTIONS*/
8,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2077, /* ASelfExpr */
2235, /* AImplicitSelfExpr */
},
};
/* runtime type AParExprs */
const struct type type_nit__AParExprs = {
2074,
"AParExprs", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
83, /* nullable AExprs */
11, /* Prod */
127, /* AExprs */
-1, /* empty */
139, /* Object */
154, /* ANode */
2074, /* AParExprs */
},
};
/* runtime type ARangeExpr */
const struct type type_nit__ARangeExpr = {
121,
"ARangeExpr", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AForExpr */
const struct type type_nit__AForExpr = {
2075,
"AForExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2075, /* AForExpr */
},
};
/* runtime type OptionParameter */
const struct type type_opts__OptionParameter = {
122,
"OptionParameter", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type APublicVisibility */
const struct type type_nit__APublicVisibility = {
2076,
"APublicVisibility", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
17, /* nullable AVisibility */
11, /* Prod */
124, /* AVisibility */
-1, /* empty */
139, /* Object */
154, /* ANode */
2076, /* APublicVisibility */
},
};
/* runtime type AType */
const struct type type_nit__AType = {
1881,
"AType", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
33, /* nullable AType */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1881, /* AType */
},
};
/* runtime type APropdef */
const struct type type_nit__APropdef = {
123,
"APropdef", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ExternCFile */
const struct type type_nit__ExternCFile = {
1118,
"ExternCFile", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
144, /* ExternFile */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1118, /* ExternCFile */
},
};
/* runtime type MAttributeDef */
const struct type type_nit__MAttributeDef = {
2236,
"MAttributeDef", /* class_name_string */
6,
0,
&resolution_table_nit__MAttributeDef,
7,
{
143, /* MPropDef */
117, /* MEntity */
148, /* nullable MPropDef */
155, /* PropertyLayoutElement */
139, /* Object */
552, /* nullable MAttributeDef */
2236, /* MAttributeDef */
},
};
const struct types resolution_table_nit__MAttributeDef = {
0, /* dummy */
{
NULL, /* empty */
&type_nit__MAttribute, /* MPROPERTY: MAttribute */
&type_nit__MAttributeDef, /* MPROPDEF: MAttributeDef */
}
};
/* runtime type ASelfExpr */
const struct type type_nit__ASelfExpr = {
2077,
"ASelfExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2077, /* ASelfExpr */
},
};
/* runtime type MSignature */
const struct type type_nit__MSignature = {
1882,
"MSignature", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
145, /* MType */
117, /* MEntity */
150, /* nullable MType */
-1, /* empty */
139, /* Object */
1882, /* MSignature */
},
};
/* runtime type ACrangeExpr */
const struct type type_nit__ACrangeExpr = {
2237,
"ACrangeExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
121, /* ARangeExpr */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2237, /* ACrangeExpr */
},
};
/* runtime type AOrangeExpr */
const struct type type_nit__AOrangeExpr = {
2238,
"AOrangeExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
121, /* ARangeExpr */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2238, /* AOrangeExpr */
},
};
/* runtime type AMethidExpr */
const struct type type_nit__AMethidExpr = {
2078,
"AMethidExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2078, /* AMethidExpr */
},
};
/* runtime type ACallExpr */
const struct type type_nit__ACallExpr = {
2079,
"ACallExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2079, /* ACallExpr */
},
};
/* runtime type AVisibility */
const struct type type_nit__AVisibility = {
124,
"AVisibility", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TKwmodule */
const struct type type_nit__TKwmodule = {
1883,
"TKwmodule", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
18, /* nullable TKwmodule */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1883, /* TKwmodule */
},
};
/* runtime type AModuleName */
const struct type type_nit__AModuleName = {
1884,
"AModuleName", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
19, /* nullable AModuleName */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1884, /* AModuleName */
},
};
/* runtime type TKwimport */
const struct type type_nit__TKwimport = {
1885,
"TKwimport", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
21, /* nullable TKwimport */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1885, /* TKwimport */
},
};
/* runtime type TKwend */
const struct type type_nit__TKwend = {
1886,
"TKwend", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
22, /* nullable TKwend */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1886, /* TKwend */
},
};
/* runtime type AClasskind */
const struct type type_nit__AClasskind = {
125,
"AClasskind", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TKwclass */
const struct type type_nit__TKwclass = {
1887,
"TKwclass", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
28, /* nullable TKwclass */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1887, /* TKwclass */
},
};
/* runtime type TKwabstract */
const struct type type_nit__TKwabstract = {
1888,
"TKwabstract", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
29, /* nullable TKwabstract */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1888, /* TKwabstract */
},
};
/* runtime type TKwinterface */
const struct type type_nit__TKwinterface = {
1889,
"TKwinterface", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
30, /* nullable TKwinterface */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1889, /* TKwinterface */
},
};
/* runtime type TKwenum */
const struct type type_nit__TKwenum = {
1890,
"TKwenum", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
31, /* nullable TKwenum */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1890, /* TKwenum */
},
};
/* runtime type TKwextern */
const struct type type_nit__TKwextern = {
1891,
"TKwextern", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
32, /* nullable TKwextern */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1891, /* TKwextern */
},
};
/* runtime type TClassid */
const struct type type_nit__TClassid = {
1892,
"TClassid", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
26, /* nullable TClassid */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1892, /* TClassid */
},
};
/* runtime type TKwsuper */
const struct type type_nit__TKwsuper = {
1893,
"TKwsuper", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
34, /* nullable TKwsuper */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1893, /* TKwsuper */
},
};
/* runtime type ASignature */
const struct type type_nit__ASignature = {
1894,
"ASignature", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
37, /* nullable ASignature */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1894, /* ASignature */
},
};
/* runtime type TKwvar */
const struct type type_nit__TKwvar = {
1895,
"TKwvar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
40, /* nullable TKwvar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1895, /* TKwvar */
},
};
/* runtime type TId */
const struct type type_nit__TId = {
1896,
"TId", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
41, /* nullable TId */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1896, /* TId */
},
};
/* runtime type TKwtype */
const struct type type_nit__TKwtype = {
1897,
"TKwtype", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
43, /* nullable TKwtype */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1897, /* TKwtype */
},
};
/* runtime type TKwprivate */
const struct type type_nit__TKwprivate = {
1898,
"TKwprivate", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
45, /* nullable TKwprivate */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1898, /* TKwprivate */
},
};
/* runtime type TKwprotected */
const struct type type_nit__TKwprotected = {
1899,
"TKwprotected", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
46, /* nullable TKwprotected */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1899, /* TKwprotected */
},
};
/* runtime type TKwintrude */
const struct type type_nit__TKwintrude = {
1900,
"TKwintrude", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
47, /* nullable TKwintrude */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1900, /* TKwintrude */
},
};
/* runtime type TPlus */
const struct type type_nit__TPlus = {
1901,
"TPlus", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
48, /* nullable TPlus */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1901, /* TPlus */
},
};
/* runtime type TMinus */
const struct type type_nit__TMinus = {
1902,
"TMinus", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
49, /* nullable TMinus */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1902, /* TMinus */
},
};
/* runtime type TStar */
const struct type type_nit__TStar = {
1903,
"TStar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
50, /* nullable TStar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1903, /* TStar */
},
};
/* runtime type TStarstar */
const struct type type_nit__TStarstar = {
1904,
"TStarstar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
51, /* nullable TStarstar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1904, /* TStarstar */
},
};
/* runtime type TSlash */
const struct type type_nit__TSlash = {
1905,
"TSlash", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
52, /* nullable TSlash */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1905, /* TSlash */
},
};
/* runtime type TPercent */
const struct type type_nit__TPercent = {
1906,
"TPercent", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
53, /* nullable TPercent */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1906, /* TPercent */
},
};
/* runtime type TEq */
const struct type type_nit__TEq = {
1907,
"TEq", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
54, /* nullable TEq */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1907, /* TEq */
},
};
/* runtime type TNe */
const struct type type_nit__TNe = {
1908,
"TNe", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
55, /* nullable TNe */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1908, /* TNe */
},
};
/* runtime type TLe */
const struct type type_nit__TLe = {
1909,
"TLe", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
56, /* nullable TLe */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1909, /* TLe */
},
};
/* runtime type TGe */
const struct type type_nit__TGe = {
1910,
"TGe", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
57, /* nullable TGe */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1910, /* TGe */
},
};
/* runtime type TLt */
const struct type type_nit__TLt = {
1911,
"TLt", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
58, /* nullable TLt */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1911, /* TLt */
},
};
/* runtime type TGt */
const struct type type_nit__TGt = {
1912,
"TGt", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
59, /* nullable TGt */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1912, /* TGt */
},
};
/* runtime type TLl */
const struct type type_nit__TLl = {
1913,
"TLl", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
60, /* nullable TLl */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1913, /* TLl */
},
};
/* runtime type TGg */
const struct type type_nit__TGg = {
1914,
"TGg", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
61, /* nullable TGg */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1914, /* TGg */
},
};
/* runtime type TObra */
const struct type type_nit__TObra = {
1915,
"TObra", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
62, /* nullable TObra */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1915, /* TObra */
},
};
/* runtime type TCbra */
const struct type type_nit__TCbra = {
1916,
"TCbra", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
63, /* nullable TCbra */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1916, /* TCbra */
},
};
/* runtime type TStarship */
const struct type type_nit__TStarship = {
1917,
"TStarship", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
64, /* nullable TStarship */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1917, /* TStarship */
},
};
/* runtime type TAssign */
const struct type type_nit__TAssign = {
1918,
"TAssign", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
65, /* nullable TAssign */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1918, /* TAssign */
},
};
/* runtime type AMethid */
const struct type type_nit__AMethid = {
126,
"AMethid", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TKwas */
const struct type type_nit__TKwas = {
1919,
"TKwas", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
71, /* nullable TKwas */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1919, /* TKwas */
},
};
/* runtime type TKwnullable */
const struct type type_nit__TKwnullable = {
1920,
"TKwnullable", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
72, /* nullable TKwnullable */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1920, /* TKwnullable */
},
};
/* runtime type TKwnot */
const struct type type_nit__TKwnot = {
1921,
"TKwnot", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
73, /* nullable TKwnot */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1921, /* TKwnot */
},
};
/* runtime type TKwin */
const struct type type_nit__TKwin = {
1922,
"TKwin", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
74, /* nullable TKwin */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1922, /* TKwin */
},
};
/* runtime type TString */
const struct type type_nit__TString = {
1923,
"TString", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
75, /* nullable TString */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1923, /* TString */
},
};
/* runtime type TExternCodeSegment */
const struct type type_nit__TExternCodeSegment = {
1924,
"TExternCodeSegment", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
76, /* nullable TExternCodeSegment */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1924, /* TExternCodeSegment */
},
};
/* runtime type TKwbreak */
const struct type type_nit__TKwbreak = {
1925,
"TKwbreak", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
79, /* nullable TKwbreak */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1925, /* TKwbreak */
},
};
/* runtime type TKwabort */
const struct type type_nit__TKwabort = {
1926,
"TKwabort", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
81, /* nullable TKwabort */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1926, /* TKwabort */
},
};
/* runtime type AExprs */
const struct type type_nit__AExprs = {
127,
"AExprs", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TKwinit */
const struct type type_nit__TKwinit = {
1927,
"TKwinit", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
42, /* nullable TKwinit */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1927, /* TKwinit */
},
};
/* runtime type TKwdebug */
const struct type type_nit__TKwdebug = {
1928,
"TKwdebug", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
85, /* nullable TKwdebug */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1928, /* TKwdebug */
},
};
/* runtime type TKwlabel */
const struct type type_nit__TKwlabel = {
1929,
"TKwlabel", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
86, /* nullable TKwlabel */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1929, /* TKwlabel */
},
};
/* runtime type TAttrid */
const struct type type_nit__TAttrid = {
1930,
"TAttrid", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
87, /* nullable TAttrid */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1930, /* TAttrid */
},
};
/* runtime type AAssignOp */
const struct type type_nit__AAssignOp = {
128,
"AAssignOp", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TPluseq */
const struct type type_nit__TPluseq = {
1931,
"TPluseq", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
89, /* nullable TPluseq */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1931, /* TPluseq */
},
};
/* runtime type TMinuseq */
const struct type type_nit__TMinuseq = {
1932,
"TMinuseq", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
90, /* nullable TMinuseq */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1932, /* TMinuseq */
},
};
/* runtime type TKwdo */
const struct type type_nit__TKwdo = {
1933,
"TKwdo", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
91, /* nullable TKwdo */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1933, /* TKwdo */
},
};
/* runtime type TKwif */
const struct type type_nit__TKwif = {
1934,
"TKwif", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
92, /* nullable TKwif */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1934, /* TKwif */
},
};
/* runtime type TKwloop */
const struct type type_nit__TKwloop = {
1935,
"TKwloop", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
93, /* nullable TKwloop */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1935, /* TKwloop */
},
};
/* runtime type TKwwhile */
const struct type type_nit__TKwwhile = {
1936,
"TKwwhile", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
94, /* nullable TKwwhile */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1936, /* TKwwhile */
},
};
/* runtime type TKwfor */
const struct type type_nit__TKwfor = {
1937,
"TKwfor", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
95, /* nullable TKwfor */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1937, /* TKwfor */
},
};
/* runtime type TKwassert */
const struct type type_nit__TKwassert = {
1938,
"TKwassert", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
96, /* nullable TKwassert */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1938, /* TKwassert */
},
};
/* runtime type TKwthen */
const struct type type_nit__TKwthen = {
1939,
"TKwthen", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
97, /* nullable TKwthen */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1939, /* TKwthen */
},
};
/* runtime type TKwelse */
const struct type type_nit__TKwelse = {
1940,
"TKwelse", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
98, /* nullable TKwelse */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1940, /* TKwelse */
},
};
/* runtime type TKwonce */
const struct type type_nit__TKwonce = {
1941,
"TKwonce", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
99, /* nullable TKwonce */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1941, /* TKwonce */
},
};
/* runtime type TKwnew */
const struct type type_nit__TKwnew = {
1942,
"TKwnew", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
38, /* nullable TKwnew */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1942, /* TKwnew */
},
};
/* runtime type TKwisset */
const struct type type_nit__TKwisset = {
1943,
"TKwisset", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
100, /* nullable TKwisset */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1943, /* TKwisset */
},
};
/* runtime type TKwnull */
const struct type type_nit__TKwnull = {
1944,
"TKwnull", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
101, /* nullable TKwnull */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1944, /* TKwnull */
},
};
/* runtime type TDotdotdot */
const struct type type_nit__TDotdotdot = {
1945,
"TDotdotdot", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
68, /* nullable TDotdotdot */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1945, /* TDotdotdot */
},
};
/* runtime type TKwself */
const struct type type_nit__TKwself = {
1946,
"TKwself", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
102, /* nullable TKwself */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1946, /* TKwself */
},
};
/* runtime type TKwtrue */
const struct type type_nit__TKwtrue = {
1947,
"TKwtrue", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
103, /* nullable TKwtrue */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1947, /* TKwtrue */
},
};
/* runtime type TKwfalse */
const struct type type_nit__TKwfalse = {
1948,
"TKwfalse", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
104, /* nullable TKwfalse */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1948, /* TKwfalse */
},
};
/* runtime type TNumber */
const struct type type_nit__TNumber = {
1949,
"TNumber", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
105, /* nullable TNumber */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1949, /* TNumber */
},
};
/* runtime type THexNumber */
const struct type type_nit__THexNumber = {
1950,
"THexNumber", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
106, /* nullable THexNumber */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1950, /* THexNumber */
},
};
/* runtime type TFloat */
const struct type type_nit__TFloat = {
1951,
"TFloat", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
107, /* nullable TFloat */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1951, /* TFloat */
},
};
/* runtime type TChar */
const struct type type_nit__TChar = {
1952,
"TChar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
108, /* nullable TChar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1952, /* TChar */
},
};
/* runtime type TOpar */
const struct type type_nit__TOpar = {
1953,
"TOpar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
66, /* nullable TOpar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1953, /* TOpar */
},
};
/* runtime type TCpar */
const struct type type_nit__TCpar = {
1954,
"TCpar", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
67, /* nullable TCpar */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1954, /* TCpar */
},
};
/* runtime type TStartString */
const struct type type_nit__TStartString = {
1955,
"TStartString", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
109, /* nullable TStartString */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1955, /* TStartString */
},
};
/* runtime type TMidString */
const struct type type_nit__TMidString = {
1956,
"TMidString", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
110, /* nullable TMidString */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1956, /* TMidString */
},
};
/* runtime type TEndString */
const struct type type_nit__TEndString = {
1957,
"TEndString", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
111, /* nullable TEndString */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1957, /* TEndString */
},
};
/* runtime type AAtid */
const struct type type_nit__AAtid = {
129,
"AAtid", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Int */
const struct type type_standard__Int = {
1119,
"Int", /* class_name_string */
7,
0,
&resolution_table_standard__Int,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1119, /* Int */
},
};
const struct types resolution_table_standard__Int = {
0, /* dummy */
{
&type_standard__Int, /* OTHER: Int */
}
};
/* runtime type Bool */
const struct type type_standard__Bool = {
666,
"Bool", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
666, /* Bool */
},
};
/* runtime type String */
const struct type type_standard__String = {
130,
"String", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AVarargExpr */
const struct type type_nit__AVarargExpr = {
2080,
"AVarargExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2080, /* AVarargExpr */
},
};
/* runtime type APlusAssignOp */
const struct type type_nit__APlusAssignOp = {
2081,
"APlusAssignOp", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
88, /* nullable AAssignOp */
11, /* Prod */
128, /* AAssignOp */
-1, /* empty */
139, /* Object */
154, /* ANode */
2081, /* APlusAssignOp */
},
};
/* runtime type AMinusAssignOp */
const struct type type_nit__AMinusAssignOp = {
2082,
"AMinusAssignOp", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
88, /* nullable AAssignOp */
11, /* Prod */
128, /* AAssignOp */
-1, /* empty */
139, /* Object */
154, /* ANode */
2082, /* AMinusAssignOp */
},
};
/* runtime type AEqExpr */
const struct type type_nit__AEqExpr = {
2083,
"AEqExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2083, /* AEqExpr */
},
};
/* runtime type ANeExpr */
const struct type type_nit__ANeExpr = {
2084,
"ANeExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2084, /* ANeExpr */
},
};
/* runtime type AIfExpr */
const struct type type_nit__AIfExpr = {
2085,
"AIfExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2085, /* AIfExpr */
},
};
/* runtime type SeparateErasureCompiler */
const struct type type_nit__SeparateErasureCompiler = {
1757,
"SeparateErasureCompiler", /* class_name_string */
6,
0,
&resolution_table_nit__SeparateErasureCompiler,
7,
{
554, /* AbstractCompiler */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1258, /* SeparateCompiler */
1757, /* SeparateErasureCompiler */
},
};
const struct types resolution_table_nit__SeparateErasureCompiler = {
0, /* dummy */
{
&type_nit__SeparateCompilerVisitor, /* VISITOR: SeparateCompilerVisitor */
}
};
/* runtime type Path */
const struct type type_standard__Path = {
667,
"Path", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
667, /* Path */
},
};
/* runtime type Float */
const struct type type_standard__Float = {
1120,
"Float", /* class_name_string */
7,
0,
&resolution_table_standard__Float,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1120, /* Float */
},
};
const struct types resolution_table_standard__Float = {
0, /* dummy */
{
&type_standard__Float, /* OTHER: Float */
}
};
/* runtime type Message */
const struct type type_nit__Message = {
1121,
"Message", /* class_name_string */
7,
0,
&resolution_table_nit__Message,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1121, /* Message */
},
};
const struct types resolution_table_nit__Message = {
0, /* dummy */
{
&type_nit__Message, /* OTHER: Message */
}
};
/* runtime type MVisibility */
const struct type type_nit__MVisibility = {
1122,
"MVisibility", /* class_name_string */
7,
0,
&resolution_table_nit__MVisibility,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
532, /* Comparable */
1122, /* MVisibility */
},
};
const struct types resolution_table_nit__MVisibility = {
0, /* dummy */
{
&type_nit__MVisibility, /* OTHER: MVisibility */
}
};
/* runtime type NativeArray[Object] */
const struct type type_standard__NativeArray__standard__Object = {
668,
"NativeArray[Object]", /* class_name_string */
5,
0,
&resolution_table_standard__NativeArray__standard__Object,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Object = {
0, /* dummy */
{
&type_standard__Object, /* E: Object */
&type_standard__NativeArray__standard__Object, /* NativeArray[E]: NativeArray[Object] */
}
};
/* runtime type NativeArray[Message] */
const struct type type_standard__NativeArray__nit__Message = {
1123,
"NativeArray[Message]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__Message,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1123, /* NativeArray[Message] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Message = {
0, /* dummy */
{
&type_nit__Message, /* E: Message */
&type_standard__NativeArray__nit__Message, /* NativeArray[E]: NativeArray[Message] */
}
};
/* runtime type NativeArray[Option] */
const struct type type_standard__NativeArray__opts__Option = {
1124,
"NativeArray[Option]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__opts__Option,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1124, /* NativeArray[Option] */
},
};
const struct types resolution_table_standard__NativeArray__opts__Option = {
0, /* dummy */
{
&type_opts__Option, /* E: Option */
&type_standard__NativeArray__opts__Option, /* NativeArray[E]: NativeArray[Option] */
}
};
/* runtime type NativeArray[String] */
const struct type type_standard__NativeArray__standard__String = {
1958,
"NativeArray[String]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__String,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1139, /* NativeArray[Streamable] */
1760, /* NativeArray[Text] */
1958, /* NativeArray[String] */
},
};
const struct types resolution_table_standard__NativeArray__standard__String = {
0, /* dummy */
{
&type_standard__String, /* E: String */
&type_standard__NativeArray__standard__String, /* NativeArray[E]: NativeArray[String] */
}
};
/* runtime type NativeArray[Phase] */
const struct type type_standard__NativeArray__nit__Phase = {
1125,
"NativeArray[Phase]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__Phase,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1125, /* NativeArray[Phase] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Phase = {
0, /* dummy */
{
&type_nit__Phase, /* E: Phase */
&type_standard__NativeArray__nit__Phase, /* NativeArray[E]: NativeArray[Phase] */
}
};
/* runtime type NativeArray[MProject] */
const struct type type_standard__NativeArray__nit__MProject = {
1126,
"NativeArray[MProject]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__MProject,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1126, /* NativeArray[MProject] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MProject = {
0, /* dummy */
{
&type_nit__MProject, /* E: MProject */
&type_standard__NativeArray__nit__MProject, /* NativeArray[E]: NativeArray[MProject] */
}
};
/* runtime type NativeArray[MModule] */
const struct type type_standard__NativeArray__nit__MModule = {
1127,
"NativeArray[MModule]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__MModule,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1127, /* NativeArray[MModule] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MModule = {
0, /* dummy */
{
&type_nit__MModule, /* E: MModule */
&type_standard__NativeArray__nit__MModule, /* NativeArray[E]: NativeArray[MModule] */
}
};
/* runtime type NativeArray[MClass] */
const struct type type_standard__NativeArray__nit__MClass = {
1758,
"NativeArray[MClass]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__MClass,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
669, /* NativeArray[nullable MClass] */
1758, /* NativeArray[MClass] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MClass = {
0, /* dummy */
{
&type_nit__MClass, /* E: MClass */
&type_standard__NativeArray__nit__MClass, /* NativeArray[E]: NativeArray[MClass] */
}
};
/* runtime type NativeArray[MProperty] */
const struct type type_standard__NativeArray__nit__MProperty = {
1959,
"NativeArray[MProperty]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__MProperty,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
675, /* NativeArray[nullable MProperty] */
1146, /* NativeArray[PropertyLayoutElement] */
1959, /* NativeArray[MProperty] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MProperty = {
0, /* dummy */
{
&type_nit__MProperty, /* E: MProperty */
&type_standard__NativeArray__nit__MProperty, /* NativeArray[E]: NativeArray[MProperty] */
}
};
/* runtime type NativeArray[ModulePath] */
const struct type type_standard__NativeArray__nit__ModulePath = {
1759,
"NativeArray[ModulePath]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__ModulePath,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
672, /* NativeArray[nullable ModulePath] */
1759, /* NativeArray[ModulePath] */
},
};
const struct types resolution_table_standard__NativeArray__nit__ModulePath = {
0, /* dummy */
{
&type_nit__ModulePath, /* E: ModulePath */
&type_standard__NativeArray__nit__ModulePath, /* NativeArray[E]: NativeArray[ModulePath] */
}
};
/* runtime type NativeArray[AModule] */
const struct type type_standard__NativeArray__nit__AModule = {
1960,
"NativeArray[AModule]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AModule,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1960, /* NativeArray[AModule] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AModule = {
0, /* dummy */
{
&type_nit__AModule, /* E: AModule */
&type_standard__NativeArray__nit__AModule, /* NativeArray[E]: NativeArray[AModule] */
}
};
/* runtime type NativeArray[AAnnotation] */
const struct type type_standard__NativeArray__nit__AAnnotation = {
1961,
"NativeArray[AAnnotation]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AAnnotation,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1961, /* NativeArray[AAnnotation] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AAnnotation = {
0, /* dummy */
{
&type_nit__AAnnotation, /* E: AAnnotation */
&type_standard__NativeArray__nit__AAnnotation, /* NativeArray[E]: NativeArray[AAnnotation] */
}
};
/* runtime type NativeArray[MClassDef] */
const struct type type_standard__NativeArray__nit__MClassDef = {
1128,
"NativeArray[MClassDef]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__MClassDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1128, /* NativeArray[MClassDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MClassDef = {
0, /* dummy */
{
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__NativeArray__nit__MClassDef, /* NativeArray[E]: NativeArray[MClassDef] */
}
};
/* runtime type NativeArray[MClassType] */
const struct type type_standard__NativeArray__nit__MClassType = {
1962,
"NativeArray[MClassType]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__MClassType,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
671, /* NativeArray[nullable MType] */
1762, /* NativeArray[MType] */
1962, /* NativeArray[MClassType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MClassType = {
0, /* dummy */
{
&type_nit__MClassType, /* E: MClassType */
&type_standard__NativeArray__nit__MClassType, /* NativeArray[E]: NativeArray[MClassType] */
}
};
/* runtime type NativeArray[MPropDef] */
const struct type type_standard__NativeArray__nit__MPropDef = {
1963,
"NativeArray[MPropDef]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__MPropDef,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
670, /* NativeArray[nullable MPropDef] */
1146, /* NativeArray[PropertyLayoutElement] */
1963, /* NativeArray[MPropDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MPropDef = {
0, /* dummy */
{
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__NativeArray__nit__MPropDef, /* NativeArray[E]: NativeArray[MPropDef] */
}
};
/* runtime type NativeArray[Int] */
const struct type type_standard__NativeArray__standard__Int = {
1129,
"NativeArray[Int]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Int,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1129, /* NativeArray[Int] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Int = {
0, /* dummy */
{
&type_standard__Int, /* E: Int */
&type_standard__NativeArray__standard__Int, /* NativeArray[E]: NativeArray[Int] */
}
};
/* runtime type NativeArray[State] */
const struct type type_standard__NativeArray__nit__parser_work__State = {
1130,
"NativeArray[State]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__parser_work__State,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1130, /* NativeArray[State] */
},
};
const struct types resolution_table_standard__NativeArray__nit__parser_work__State = {
0, /* dummy */
{
&type_nit__parser_work__State, /* E: State */
&type_standard__NativeArray__nit__parser_work__State, /* NativeArray[E]: NativeArray[State] */
}
};
/* runtime type NativeArray[MParameterType] */
const struct type type_standard__NativeArray__nit__MParameterType = {
1964,
"NativeArray[MParameterType]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__MParameterType,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
671, /* NativeArray[nullable MType] */
1762, /* NativeArray[MType] */
1964, /* NativeArray[MParameterType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MParameterType = {
0, /* dummy */
{
&type_nit__MParameterType, /* E: MParameterType */
&type_standard__NativeArray__nit__MParameterType, /* NativeArray[E]: NativeArray[MParameterType] */
}
};
/* runtime type NativeArray[Text] */
const struct type type_standard__NativeArray__standard__Text = {
1760,
"NativeArray[Text]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Text,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1139, /* NativeArray[Streamable] */
1760, /* NativeArray[Text] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Text = {
0, /* dummy */
{
&type_standard__Text, /* E: Text */
&type_standard__NativeArray__standard__Text, /* NativeArray[E]: NativeArray[Text] */
}
};
/* runtime type NativeArray[MMethod] */
const struct type type_standard__NativeArray__nit__MMethod = {
2086,
"NativeArray[MMethod]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MMethod,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
675, /* NativeArray[nullable MProperty] */
1146, /* NativeArray[PropertyLayoutElement] */
1959, /* NativeArray[MProperty] */
2086, /* NativeArray[MMethod] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MMethod = {
0, /* dummy */
{
&type_nit__MMethod, /* E: MMethod */
&type_standard__NativeArray__nit__MMethod, /* NativeArray[E]: NativeArray[MMethod] */
}
};
/* runtime type NativeArray[ExternFile] */
const struct type type_standard__NativeArray__nit__ExternFile = {
1131,
"NativeArray[ExternFile]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__ExternFile,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1131, /* NativeArray[ExternFile] */
},
};
const struct types resolution_table_standard__NativeArray__nit__ExternFile = {
0, /* dummy */
{
&type_nit__ExternFile, /* E: ExternFile */
&type_standard__NativeArray__nit__ExternFile, /* NativeArray[E]: NativeArray[ExternFile] */
}
};
/* runtime type NativeArray[Match] */
const struct type type_standard__NativeArray__standard__Match = {
1132,
"NativeArray[Match]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Match,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1132, /* NativeArray[Match] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Match = {
0, /* dummy */
{
&type_standard__Match, /* E: Match */
&type_standard__NativeArray__standard__Match, /* NativeArray[E]: NativeArray[Match] */
}
};
/* runtime type NativeArray[Prod] */
const struct type type_standard__NativeArray__nit__Prod = {
1761,
"NativeArray[Prod]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__Prod,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Prod = {
0, /* dummy */
{
&type_nit__Prod, /* E: Prod */
&type_standard__NativeArray__nit__Prod, /* NativeArray[E]: NativeArray[Prod] */
}
};
/* runtime type NativeArray[MType] */
const struct type type_standard__NativeArray__nit__MType = {
1762,
"NativeArray[MType]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__MType,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
671, /* NativeArray[nullable MType] */
1762, /* NativeArray[MType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MType = {
0, /* dummy */
{
&type_nit__MType, /* E: MType */
&type_standard__NativeArray__nit__MType, /* NativeArray[E]: NativeArray[MType] */
}
};
/* runtime type NativeArray[ReduceAction] */
const struct type type_standard__NativeArray__nit__parser_work__ReduceAction = {
1133,
"NativeArray[ReduceAction]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__parser_work__ReduceAction,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1133, /* NativeArray[ReduceAction] */
},
};
const struct types resolution_table_standard__NativeArray__nit__parser_work__ReduceAction = {
0, /* dummy */
{
&type_nit__parser_work__ReduceAction, /* E: ReduceAction */
&type_standard__NativeArray__nit__parser_work__ReduceAction, /* NativeArray[E]: NativeArray[ReduceAction] */
}
};
/* runtime type NativeArray[AClassdef] */
const struct type type_standard__NativeArray__nit__AClassdef = {
1965,
"NativeArray[AClassdef]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AClassdef,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1965, /* NativeArray[AClassdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AClassdef = {
0, /* dummy */
{
&type_nit__AClassdef, /* E: AClassdef */
&type_standard__NativeArray__nit__AClassdef, /* NativeArray[E]: NativeArray[AClassdef] */
}
};
/* runtime type NativeArray[MParameter] */
const struct type type_standard__NativeArray__nit__MParameter = {
1134,
"NativeArray[MParameter]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__MParameter,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1134, /* NativeArray[MParameter] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MParameter = {
0, /* dummy */
{
&type_nit__MParameter, /* E: MParameter */
&type_standard__NativeArray__nit__MParameter, /* NativeArray[E]: NativeArray[MParameter] */
}
};
/* runtime type NativeArray[FlowContext] */
const struct type type_standard__NativeArray__nit__FlowContext = {
1135,
"NativeArray[FlowContext]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__FlowContext,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1135, /* NativeArray[FlowContext] */
},
};
const struct types resolution_table_standard__NativeArray__nit__FlowContext = {
0, /* dummy */
{
&type_nit__FlowContext, /* E: FlowContext */
&type_standard__NativeArray__nit__FlowContext, /* NativeArray[E]: NativeArray[FlowContext] */
}
};
/* runtime type NativeArray[CallSite] */
const struct type type_standard__NativeArray__nit__CallSite = {
1136,
"NativeArray[CallSite]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__CallSite,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1136, /* NativeArray[CallSite] */
},
};
const struct types resolution_table_standard__NativeArray__nit__CallSite = {
0, /* dummy */
{
&type_nit__CallSite, /* E: CallSite */
&type_standard__NativeArray__nit__CallSite, /* NativeArray[E]: NativeArray[CallSite] */
}
};
/* runtime type NativeArray[CodeWriter] */
const struct type type_standard__NativeArray__nit__CodeWriter = {
1137,
"NativeArray[CodeWriter]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__CodeWriter,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1137, /* NativeArray[CodeWriter] */
},
};
const struct types resolution_table_standard__NativeArray__nit__CodeWriter = {
0, /* dummy */
{
&type_nit__CodeWriter, /* E: CodeWriter */
&type_standard__NativeArray__nit__CodeWriter, /* NativeArray[E]: NativeArray[CodeWriter] */
}
};
/* runtime type NativeArray[RuntimeVariable] */
const struct type type_standard__NativeArray__nit__RuntimeVariable = {
1138,
"NativeArray[RuntimeVariable]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__RuntimeVariable,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1138, /* NativeArray[RuntimeVariable] */
},
};
const struct types resolution_table_standard__NativeArray__nit__RuntimeVariable = {
0, /* dummy */
{
&type_nit__RuntimeVariable, /* E: RuntimeVariable */
&type_standard__NativeArray__nit__RuntimeVariable, /* NativeArray[E]: NativeArray[RuntimeVariable] */
}
};
/* runtime type NativeArray[nullable MClass] */
const struct type type_standard__NativeArray__nullable__nit__MClass = {
669,
"NativeArray[nullable MClass]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__MClass,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
669, /* NativeArray[nullable MClass] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MClass = {
0, /* dummy */
{
&type_nullable__nit__MClass, /* E: nullable MClass */
&type_standard__NativeArray__nullable__nit__MClass, /* NativeArray[E]: NativeArray[nullable MClass] */
}
};
/* runtime type NativeArray[nullable MPropDef] */
const struct type type_standard__NativeArray__nullable__nit__MPropDef = {
670,
"NativeArray[nullable MPropDef]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__MPropDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
670, /* NativeArray[nullable MPropDef] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MPropDef = {
0, /* dummy */
{
&type_nullable__nit__MPropDef, /* E: nullable MPropDef */
&type_standard__NativeArray__nullable__nit__MPropDef, /* NativeArray[E]: NativeArray[nullable MPropDef] */
}
};
/* runtime type NativeArray[Streamable] */
const struct type type_standard__NativeArray__standard__Streamable = {
1139,
"NativeArray[Streamable]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Streamable,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1139, /* NativeArray[Streamable] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Streamable = {
0, /* dummy */
{
&type_standard__Streamable, /* E: Streamable */
&type_standard__NativeArray__standard__Streamable, /* NativeArray[E]: NativeArray[Streamable] */
}
};
/* runtime type NativeArray[AAttrPropdef] */
const struct type type_standard__NativeArray__nit__AAttrPropdef = {
2087,
"NativeArray[AAttrPropdef]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__AAttrPropdef,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1971, /* NativeArray[APropdef] */
2087, /* NativeArray[AAttrPropdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AAttrPropdef = {
0, /* dummy */
{
&type_nit__AAttrPropdef, /* E: AAttrPropdef */
&type_standard__NativeArray__nit__AAttrPropdef, /* NativeArray[E]: NativeArray[AAttrPropdef] */
}
};
/* runtime type NativeArray[MVirtualType] */
const struct type type_standard__NativeArray__nit__MVirtualType = {
1966,
"NativeArray[MVirtualType]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__MVirtualType,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
671, /* NativeArray[nullable MType] */
1762, /* NativeArray[MType] */
1966, /* NativeArray[MVirtualType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MVirtualType = {
0, /* dummy */
{
&type_nit__MVirtualType, /* E: MVirtualType */
&type_standard__NativeArray__nit__MVirtualType, /* NativeArray[E]: NativeArray[MVirtualType] */
}
};
/* runtime type NativeArray[AExpr] */
const struct type type_standard__NativeArray__nit__AExpr = {
1967,
"NativeArray[AExpr]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AExpr,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1967, /* NativeArray[AExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExpr = {
0, /* dummy */
{
&type_nit__AExpr, /* E: AExpr */
&type_standard__NativeArray__nit__AExpr, /* NativeArray[E]: NativeArray[AExpr] */
}
};
/* runtime type NativeArray[AIntExpr] */
const struct type type_standard__NativeArray__nit__AIntExpr = {
2088,
"NativeArray[AIntExpr]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__AIntExpr,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1967, /* NativeArray[AExpr] */
2088, /* NativeArray[AIntExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AIntExpr = {
0, /* dummy */
{
&type_nit__AIntExpr, /* E: AIntExpr */
&type_standard__NativeArray__nit__AIntExpr, /* NativeArray[E]: NativeArray[AIntExpr] */
}
};
/* runtime type NativeArray[Variable] */
const struct type type_standard__NativeArray__nit__Variable = {
1140,
"NativeArray[Variable]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__Variable,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1140, /* NativeArray[Variable] */
},
};
const struct types resolution_table_standard__NativeArray__nit__Variable = {
0, /* dummy */
{
&type_nit__Variable, /* E: Variable */
&type_standard__NativeArray__nit__Variable, /* NativeArray[E]: NativeArray[Variable] */
}
};
/* runtime type NativeArray[AVarExpr] */
const struct type type_standard__NativeArray__nit__AVarExpr = {
2089,
"NativeArray[AVarExpr]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__AVarExpr,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1967, /* NativeArray[AExpr] */
2089, /* NativeArray[AVarExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AVarExpr = {
0, /* dummy */
{
&type_nit__AVarExpr, /* E: AVarExpr */
&type_standard__NativeArray__nit__AVarExpr, /* NativeArray[E]: NativeArray[AVarExpr] */
}
};
/* runtime type NativeArray[nullable MType] */
const struct type type_standard__NativeArray__nullable__nit__MType = {
671,
"NativeArray[nullable MType]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__MType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
671, /* NativeArray[nullable MType] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__nit__MType, /* E: nullable MType */
&type_standard__NativeArray__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable MType] */
}
};
/* runtime type NativeArray[AEscapeExpr] */
const struct type type_standard__NativeArray__nit__AEscapeExpr = {
2090,
"NativeArray[AEscapeExpr]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__AEscapeExpr,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1967, /* NativeArray[AExpr] */
2090, /* NativeArray[AEscapeExpr] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AEscapeExpr = {
0, /* dummy */
{
&type_nit__AEscapeExpr, /* E: AEscapeExpr */
&type_standard__NativeArray__nit__AEscapeExpr, /* NativeArray[E]: NativeArray[AEscapeExpr] */
}
};
/* runtime type NativeArray[Char] */
const struct type type_standard__NativeArray__standard__Char = {
1141,
"NativeArray[Char]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Char,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1141, /* NativeArray[Char] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Char = {
0, /* dummy */
{
&type_standard__Char, /* E: Char */
&type_standard__NativeArray__standard__Char, /* NativeArray[E]: NativeArray[Char] */
}
};
/* runtime type NativeArray[Buffer] */
const struct type type_standard__NativeArray__standard__Buffer = {
1968,
"NativeArray[Buffer]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__Buffer,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1139, /* NativeArray[Streamable] */
1760, /* NativeArray[Text] */
1968, /* NativeArray[Buffer] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Buffer = {
0, /* dummy */
{
&type_standard__Buffer, /* E: Buffer */
&type_standard__NativeArray__standard__Buffer, /* NativeArray[E]: NativeArray[Buffer] */
}
};
/* runtime type NativeArray[FlatText] */
const struct type type_standard__NativeArray__standard__FlatText = {
1969,
"NativeArray[FlatText]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__FlatText,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1139, /* NativeArray[Streamable] */
1760, /* NativeArray[Text] */
1969, /* NativeArray[FlatText] */
},
};
const struct types resolution_table_standard__NativeArray__standard__FlatText = {
0, /* dummy */
{
&type_standard__FlatText, /* E: FlatText */
&type_standard__NativeArray__standard__FlatText, /* NativeArray[E]: NativeArray[FlatText] */
}
};
/* runtime type NativeArray[MGroup] */
const struct type type_standard__NativeArray__nit__MGroup = {
1763,
"NativeArray[MGroup]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__MGroup,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
673, /* NativeArray[nullable MGroup] */
1763, /* NativeArray[MGroup] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MGroup = {
0, /* dummy */
{
&type_nit__MGroup, /* E: MGroup */
&type_standard__NativeArray__nit__MGroup, /* NativeArray[E]: NativeArray[MGroup] */
}
};
/* runtime type NativeArray[AImport] */
const struct type type_standard__NativeArray__nit__AImport = {
1970,
"NativeArray[AImport]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AImport,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1970, /* NativeArray[AImport] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AImport = {
0, /* dummy */
{
&type_nit__AImport, /* E: AImport */
&type_standard__NativeArray__nit__AImport, /* NativeArray[E]: NativeArray[AImport] */
}
};
/* runtime type NativeArray[TId] */
const struct type type_standard__NativeArray__nit__TId = {
1764,
"NativeArray[TId]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__TId,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1764, /* NativeArray[TId] */
},
};
const struct types resolution_table_standard__NativeArray__nit__TId = {
0, /* dummy */
{
&type_nit__TId, /* E: TId */
&type_standard__NativeArray__nit__TId, /* NativeArray[E]: NativeArray[TId] */
}
};
/* runtime type NativeArray[APropdef] */
const struct type type_standard__NativeArray__nit__APropdef = {
1971,
"NativeArray[APropdef]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__APropdef,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1971, /* NativeArray[APropdef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__APropdef = {
0, /* dummy */
{
&type_nit__APropdef, /* E: APropdef */
&type_standard__NativeArray__nit__APropdef, /* NativeArray[E]: NativeArray[APropdef] */
}
};
/* runtime type NativeArray[MMethodDef] */
const struct type type_standard__NativeArray__nit__MMethodDef = {
2091,
"NativeArray[MMethodDef]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MMethodDef,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
670, /* NativeArray[nullable MPropDef] */
1146, /* NativeArray[PropertyLayoutElement] */
1963, /* NativeArray[MPropDef] */
2091, /* NativeArray[MMethodDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MMethodDef = {
0, /* dummy */
{
&type_nit__MMethodDef, /* E: MMethodDef */
&type_standard__NativeArray__nit__MMethodDef, /* NativeArray[E]: NativeArray[MMethodDef] */
}
};
/* runtime type NativeArray[CodeFile] */
const struct type type_standard__NativeArray__nit__CodeFile = {
1142,
"NativeArray[CodeFile]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__CodeFile,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1142, /* NativeArray[CodeFile] */
},
};
const struct types resolution_table_standard__NativeArray__nit__CodeFile = {
0, /* dummy */
{
&type_nit__CodeFile, /* E: CodeFile */
&type_standard__NativeArray__nit__CodeFile, /* NativeArray[E]: NativeArray[CodeFile] */
}
};
/* runtime type NativeArray[Couple[MClass, AType]] */
const struct type type_standard__NativeArray__standard__Couple__nit__MClass__nit__AType = {
1143,
"NativeArray[Couple[MClass, AType]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Couple__nit__MClass__nit__AType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1143, /* NativeArray[Couple[MClass, AType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_standard__Couple__nit__MClass__nit__AType, /* E: Couple[MClass, AType] */
&type_standard__NativeArray__standard__Couple__nit__MClass__nit__AType, /* NativeArray[E]: NativeArray[Couple[MClass, AType]] */
}
};
/* runtime type NativeArray[ANode] */
const struct type type_standard__NativeArray__nit__ANode = {
1144,
"NativeArray[ANode]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__ANode,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
},
};
const struct types resolution_table_standard__NativeArray__nit__ANode = {
0, /* dummy */
{
&type_nit__ANode, /* E: ANode */
&type_standard__NativeArray__nit__ANode, /* NativeArray[E]: NativeArray[ANode] */
}
};
/* runtime type NativeArray[MVirtualTypeProp] */
const struct type type_standard__NativeArray__nit__MVirtualTypeProp = {
2092,
"NativeArray[MVirtualTypeProp]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MVirtualTypeProp,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
675, /* NativeArray[nullable MProperty] */
1146, /* NativeArray[PropertyLayoutElement] */
1959, /* NativeArray[MProperty] */
2092, /* NativeArray[MVirtualTypeProp] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MVirtualTypeProp = {
0, /* dummy */
{
&type_nit__MVirtualTypeProp, /* E: MVirtualTypeProp */
&type_standard__NativeArray__nit__MVirtualTypeProp, /* NativeArray[E]: NativeArray[MVirtualTypeProp] */
}
};
/* runtime type NativeArray[TComment] */
const struct type type_standard__NativeArray__nit__TComment = {
1765,
"NativeArray[TComment]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__TComment,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1765, /* NativeArray[TComment] */
},
};
const struct types resolution_table_standard__NativeArray__nit__TComment = {
0, /* dummy */
{
&type_nit__TComment, /* E: TComment */
&type_standard__NativeArray__nit__TComment, /* NativeArray[E]: NativeArray[TComment] */
}
};
/* runtime type NativeArray[AFormaldef] */
const struct type type_standard__NativeArray__nit__AFormaldef = {
1972,
"NativeArray[AFormaldef]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AFormaldef,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1972, /* NativeArray[AFormaldef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AFormaldef = {
0, /* dummy */
{
&type_nit__AFormaldef, /* E: AFormaldef */
&type_standard__NativeArray__nit__AFormaldef, /* NativeArray[E]: NativeArray[AFormaldef] */
}
};
/* runtime type NativeArray[ASuperclass] */
const struct type type_standard__NativeArray__nit__ASuperclass = {
1973,
"NativeArray[ASuperclass]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__ASuperclass,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1973, /* NativeArray[ASuperclass] */
},
};
const struct types resolution_table_standard__NativeArray__nit__ASuperclass = {
0, /* dummy */
{
&type_nit__ASuperclass, /* E: ASuperclass */
&type_standard__NativeArray__nit__ASuperclass, /* NativeArray[E]: NativeArray[ASuperclass] */
}
};
/* runtime type NativeArray[Scope] */
const struct type type_standard__NativeArray__nit__scope__Scope = {
1145,
"NativeArray[Scope]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__scope__Scope,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1145, /* NativeArray[Scope] */
},
};
const struct types resolution_table_standard__NativeArray__nit__scope__Scope = {
0, /* dummy */
{
&type_nit__scope__Scope, /* E: Scope */
&type_standard__NativeArray__nit__scope__Scope, /* NativeArray[E]: NativeArray[Scope] */
}
};
/* runtime type NativeArray[PropertyLayoutElement] */
const struct type type_standard__NativeArray__nit__PropertyLayoutElement = {
1146,
"NativeArray[PropertyLayoutElement]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__nit__PropertyLayoutElement,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
-1, /* empty */
1146, /* NativeArray[PropertyLayoutElement] */
},
};
const struct types resolution_table_standard__NativeArray__nit__PropertyLayoutElement = {
0, /* dummy */
{
&type_nit__PropertyLayoutElement, /* E: PropertyLayoutElement */
&type_standard__NativeArray__nit__PropertyLayoutElement, /* NativeArray[E]: NativeArray[PropertyLayoutElement] */
}
};
/* runtime type NativeArray[MAttribute] */
const struct type type_standard__NativeArray__nit__MAttribute = {
2093,
"NativeArray[MAttribute]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MAttribute,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
675, /* NativeArray[nullable MProperty] */
1146, /* NativeArray[PropertyLayoutElement] */
1959, /* NativeArray[MProperty] */
2093, /* NativeArray[MAttribute] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MAttribute = {
0, /* dummy */
{
&type_nit__MAttribute, /* E: MAttribute */
&type_standard__NativeArray__nit__MAttribute, /* NativeArray[E]: NativeArray[MAttribute] */
}
};
/* runtime type NativeArray[AExternCodeBlock] */
const struct type type_standard__NativeArray__nit__AExternCodeBlock = {
1974,
"NativeArray[AExternCodeBlock]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AExternCodeBlock,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1974, /* NativeArray[AExternCodeBlock] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExternCodeBlock = {
0, /* dummy */
{
&type_nit__AExternCodeBlock, /* E: AExternCodeBlock */
&type_standard__NativeArray__nit__AExternCodeBlock, /* NativeArray[E]: NativeArray[AExternCodeBlock] */
}
};
/* runtime type NativeArray[AParam] */
const struct type type_standard__NativeArray__nit__AParam = {
1975,
"NativeArray[AParam]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AParam,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1975, /* NativeArray[AParam] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AParam = {
0, /* dummy */
{
&type_nit__AParam, /* E: AParam */
&type_standard__NativeArray__nit__AParam, /* NativeArray[E]: NativeArray[AParam] */
}
};
/* runtime type NativeArray[AExternCall] */
const struct type type_standard__NativeArray__nit__AExternCall = {
1976,
"NativeArray[AExternCall]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AExternCall,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1976, /* NativeArray[AExternCall] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AExternCall = {
0, /* dummy */
{
&type_nit__AExternCall, /* E: AExternCall */
&type_standard__NativeArray__nit__AExternCall, /* NativeArray[E]: NativeArray[AExternCall] */
}
};
/* runtime type NativeArray[AType] */
const struct type type_standard__NativeArray__nit__AType = {
1977,
"NativeArray[AType]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__nit__AType,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1144, /* NativeArray[ANode] */
1761, /* NativeArray[Prod] */
1977, /* NativeArray[AType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__AType = {
0, /* dummy */
{
&type_nit__AType, /* E: AType */
&type_standard__NativeArray__nit__AType, /* NativeArray[E]: NativeArray[AType] */
}
};
/* runtime type NativeArray[MAttributeDef] */
const struct type type_standard__NativeArray__nit__MAttributeDef = {
2094,
"NativeArray[MAttributeDef]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MAttributeDef,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
670, /* NativeArray[nullable MPropDef] */
1146, /* NativeArray[PropertyLayoutElement] */
1963, /* NativeArray[MPropDef] */
2094, /* NativeArray[MAttributeDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MAttributeDef = {
0, /* dummy */
{
&type_nit__MAttributeDef, /* E: MAttributeDef */
&type_standard__NativeArray__nit__MAttributeDef, /* NativeArray[E]: NativeArray[MAttributeDef] */
}
};
/* runtime type NativeArray[MVirtualTypeDef] */
const struct type type_standard__NativeArray__nit__MVirtualTypeDef = {
2095,
"NativeArray[MVirtualTypeDef]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MVirtualTypeDef,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
670, /* NativeArray[nullable MPropDef] */
1146, /* NativeArray[PropertyLayoutElement] */
1963, /* NativeArray[MPropDef] */
2095, /* NativeArray[MVirtualTypeDef] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_nit__MVirtualTypeDef, /* E: MVirtualTypeDef */
&type_standard__NativeArray__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[MVirtualTypeDef] */
}
};
/* runtime type NativeArray[SourceFile] */
const struct type type_standard__NativeArray__nit__SourceFile = {
1147,
"NativeArray[SourceFile]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__SourceFile,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1147, /* NativeArray[SourceFile] */
},
};
const struct types resolution_table_standard__NativeArray__nit__SourceFile = {
0, /* dummy */
{
&type_nit__SourceFile, /* E: SourceFile */
&type_standard__NativeArray__nit__SourceFile, /* NativeArray[E]: NativeArray[SourceFile] */
}
};
/* runtime type NativeArray[Array[String]] */
const struct type type_standard__NativeArray__standard__Array__standard__String = {
1148,
"NativeArray[Array[String]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__standard__String,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1148, /* NativeArray[Array[String]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__Array__standard__String, /* E: Array[String] */
&type_standard__NativeArray__standard__Array__standard__String, /* NativeArray[E]: NativeArray[Array[String]] */
}
};
/* runtime type NativeArray[Array[MProject]] */
const struct type type_standard__NativeArray__standard__Array__nit__MProject = {
1149,
"NativeArray[Array[MProject]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MProject,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1149, /* NativeArray[Array[MProject]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MProject = {
0, /* dummy */
{
&type_standard__Array__nit__MProject, /* E: Array[MProject] */
&type_standard__NativeArray__standard__Array__nit__MProject, /* NativeArray[E]: NativeArray[Array[MProject]] */
}
};
/* runtime type NativeArray[Array[MModule]] */
const struct type type_standard__NativeArray__standard__Array__nit__MModule = {
1150,
"NativeArray[Array[MModule]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MModule,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1150, /* NativeArray[Array[MModule]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MModule = {
0, /* dummy */
{
&type_standard__Array__nit__MModule, /* E: Array[MModule] */
&type_standard__NativeArray__standard__Array__nit__MModule, /* NativeArray[E]: NativeArray[Array[MModule]] */
}
};
/* runtime type NativeArray[Array[MClass]] */
const struct type type_standard__NativeArray__standard__Array__nit__MClass = {
1766,
"NativeArray[Array[MClass]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MClass,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1157, /* NativeArray[Array[nullable MClass]] */
1766, /* NativeArray[Array[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nit__MClass, /* E: Array[MClass] */
&type_standard__NativeArray__standard__Array__nit__MClass, /* NativeArray[E]: NativeArray[Array[MClass]] */
}
};
/* runtime type NativeArray[Array[MProperty]] */
const struct type type_standard__NativeArray__standard__Array__nit__MProperty = {
1151,
"NativeArray[Array[MProperty]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MProperty,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1151, /* NativeArray[Array[MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MProperty = {
0, /* dummy */
{
&type_standard__Array__nit__MProperty, /* E: Array[MProperty] */
&type_standard__NativeArray__standard__Array__nit__MProperty, /* NativeArray[E]: NativeArray[Array[MProperty]] */
}
};
/* runtime type NativeArray[nullable ModulePath] */
const struct type type_standard__NativeArray__nullable__nit__ModulePath = {
672,
"NativeArray[nullable ModulePath]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__ModulePath,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
672, /* NativeArray[nullable ModulePath] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__ModulePath = {
0, /* dummy */
{
&type_nullable__nit__ModulePath, /* E: nullable ModulePath */
&type_standard__NativeArray__nullable__nit__ModulePath, /* NativeArray[E]: NativeArray[nullable ModulePath] */
}
};
/* runtime type NativeArray[nullable MGroup] */
const struct type type_standard__NativeArray__nullable__nit__MGroup = {
673,
"NativeArray[nullable MGroup]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__MGroup,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
673, /* NativeArray[nullable MGroup] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MGroup = {
0, /* dummy */
{
&type_nullable__nit__MGroup, /* E: nullable MGroup */
&type_standard__NativeArray__nullable__nit__MGroup, /* NativeArray[E]: NativeArray[nullable MGroup] */
}
};
/* runtime type NativeArray[MModuleData[AAnnotation]] */
const struct type type_standard__NativeArray__nit__MModuleData__nit__AAnnotation = {
1152,
"NativeArray[MModuleData[AAnnotation]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__MModuleData__nit__AAnnotation,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1152, /* NativeArray[MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
&type_nit__MModuleData__nit__AAnnotation, /* E: MModuleData[AAnnotation] */
&type_standard__NativeArray__nit__MModuleData__nit__AAnnotation, /* NativeArray[E]: NativeArray[MModuleData[AAnnotation]] */
}
};
/* runtime type NativeArray[Set[MProperty]] */
const struct type type_standard__NativeArray__standard__Set__nit__MProperty = {
1767,
"NativeArray[Set[MProperty]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MProperty,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1156, /* NativeArray[Set[PropertyLayoutElement]] */
1767, /* NativeArray[Set[MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MProperty = {
0, /* dummy */
{
&type_standard__Set__nit__MProperty, /* E: Set[MProperty] */
&type_standard__NativeArray__standard__Set__nit__MProperty, /* NativeArray[E]: NativeArray[Set[MProperty]] */
}
};
/* runtime type NativeArray[Array[MType]] */
const struct type type_standard__NativeArray__standard__Array__nit__MType = {
1978,
"NativeArray[Array[MType]]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MType,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
674, /* NativeArray[nullable Array[nullable MType]] */
1769, /* NativeArray[Array[nullable MType]] */
1978, /* NativeArray[Array[MType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nit__MType, /* E: Array[MType] */
&type_standard__NativeArray__standard__Array__nit__MType, /* NativeArray[E]: NativeArray[Array[MType]] */
}
};
/* runtime type NativeArray[MGenericType] */
const struct type type_standard__NativeArray__nit__MGenericType = {
2096,
"NativeArray[MGenericType]", /* class_name_string */
9,
0,
&resolution_table_standard__NativeArray__nit__MGenericType,
10,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
671, /* NativeArray[nullable MType] */
1762, /* NativeArray[MType] */
1962, /* NativeArray[MClassType] */
2096, /* NativeArray[MGenericType] */
},
};
const struct types resolution_table_standard__NativeArray__nit__MGenericType = {
0, /* dummy */
{
&type_nit__MGenericType, /* E: MGenericType */
&type_standard__NativeArray__nit__MGenericType, /* NativeArray[E]: NativeArray[MGenericType] */
}
};
/* runtime type NativeArray[HashSet[MType]] */
const struct type type_standard__NativeArray__standard__HashSet__nit__MType = {
1768,
"NativeArray[HashSet[MType]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__HashSet__nit__MType,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1159, /* NativeArray[Set[MType]] */
1768, /* NativeArray[HashSet[MType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashSet__nit__MType = {
0, /* dummy */
{
&type_standard__HashSet__nit__MType, /* E: HashSet[MType] */
&type_standard__NativeArray__standard__HashSet__nit__MType, /* NativeArray[E]: NativeArray[HashSet[MType]] */
}
};
/* runtime type NativeArray[Array[nullable MType]] */
const struct type type_standard__NativeArray__standard__Array__nullable__nit__MType = {
1769,
"NativeArray[Array[nullable MType]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Array__nullable__nit__MType,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
674, /* NativeArray[nullable Array[nullable MType]] */
1769, /* NativeArray[Array[nullable MType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MType, /* E: Array[nullable MType] */
&type_standard__NativeArray__standard__Array__nullable__nit__MType, /* NativeArray[E]: NativeArray[Array[nullable MType]] */
}
};
/* runtime type NativeArray[Array[nullable MPropDef]] */
const struct type type_standard__NativeArray__standard__Array__nullable__nit__MPropDef = {
1153,
"NativeArray[Array[nullable MPropDef]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__nullable__nit__MPropDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1153, /* NativeArray[Array[nullable MPropDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nullable__nit__MPropDef = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MPropDef, /* E: Array[nullable MPropDef] */
&type_standard__NativeArray__standard__Array__nullable__nit__MPropDef, /* NativeArray[E]: NativeArray[Array[nullable MPropDef]] */
}
};
/* runtime type NativeArray[Set[MClassDef]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClassDef = {
1154,
"NativeArray[Set[MClassDef]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClassDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1154, /* NativeArray[Set[MClassDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClassDef = {
0, /* dummy */
{
&type_standard__Set__nit__MClassDef, /* E: Set[MClassDef] */
&type_standard__NativeArray__standard__Set__nit__MClassDef, /* NativeArray[E]: NativeArray[Set[MClassDef]] */
}
};
/* runtime type NativeArray[Set[MClass]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClass = {
1155,
"NativeArray[Set[MClass]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClass,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1155, /* NativeArray[Set[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClass = {
0, /* dummy */
{
&type_standard__Set__nit__MClass, /* E: Set[MClass] */
&type_standard__NativeArray__standard__Set__nit__MClass, /* NativeArray[E]: NativeArray[Set[MClass]] */
}
};
/* runtime type NativeArray[Set[MClassType]] */
const struct type type_standard__NativeArray__standard__Set__nit__MClassType = {
1770,
"NativeArray[Set[MClassType]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MClassType,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1159, /* NativeArray[Set[MType]] */
1770, /* NativeArray[Set[MClassType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MClassType = {
0, /* dummy */
{
&type_standard__Set__nit__MClassType, /* E: Set[MClassType] */
&type_standard__NativeArray__standard__Set__nit__MClassType, /* NativeArray[E]: NativeArray[Set[MClassType]] */
}
};
/* runtime type NativeArray[Set[MVirtualTypeProp]] */
const struct type type_standard__NativeArray__standard__Set__nit__MVirtualTypeProp = {
1979,
"NativeArray[Set[MVirtualTypeProp]]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MVirtualTypeProp,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1156, /* NativeArray[Set[PropertyLayoutElement]] */
1767, /* NativeArray[Set[MProperty]] */
1979, /* NativeArray[Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MVirtualTypeProp = {
0, /* dummy */
{
&type_standard__Set__nit__MVirtualTypeProp, /* E: Set[MVirtualTypeProp] */
&type_standard__NativeArray__standard__Set__nit__MVirtualTypeProp, /* NativeArray[E]: NativeArray[Set[MVirtualTypeProp]] */
}
};
/* runtime type NativeArray[nullable Array[nullable MType]] */
const struct type type_standard__NativeArray__nullable__standard__Array__nullable__nit__MType = {
674,
"NativeArray[nullable Array[nullable MType]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__standard__Array__nullable__nit__MType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
674, /* NativeArray[nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
&type_nullable__standard__Array__nullable__nit__MType, /* E: nullable Array[nullable MType] */
&type_standard__NativeArray__nullable__standard__Array__nullable__nit__MType, /* NativeArray[E]: NativeArray[nullable Array[nullable MType]] */
}
};
/* runtime type NativeArray[Set[PropertyLayoutElement]] */
const struct type type_standard__NativeArray__standard__Set__nit__PropertyLayoutElement = {
1156,
"NativeArray[Set[PropertyLayoutElement]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__PropertyLayoutElement,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1156, /* NativeArray[Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__PropertyLayoutElement = {
0, /* dummy */
{
&type_standard__Set__nit__PropertyLayoutElement, /* E: Set[PropertyLayoutElement] */
&type_standard__NativeArray__standard__Set__nit__PropertyLayoutElement, /* NativeArray[E]: NativeArray[Set[PropertyLayoutElement]] */
}
};
/* runtime type NativeArray[Set[MAttribute]] */
const struct type type_standard__NativeArray__standard__Set__nit__MAttribute = {
1980,
"NativeArray[Set[MAttribute]]", /* class_name_string */
8,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MAttribute,
9,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1156, /* NativeArray[Set[PropertyLayoutElement]] */
1767, /* NativeArray[Set[MProperty]] */
1980, /* NativeArray[Set[MAttribute]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MAttribute = {
0, /* dummy */
{
&type_standard__Set__nit__MAttribute, /* E: Set[MAttribute] */
&type_standard__NativeArray__standard__Set__nit__MAttribute, /* NativeArray[E]: NativeArray[Set[MAttribute]] */
}
};
/* runtime type NativeArray[Array[nullable MClass]] */
const struct type type_standard__NativeArray__standard__Array__nullable__nit__MClass = {
1157,
"NativeArray[Array[nullable MClass]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Array__nullable__nit__MClass,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1157, /* NativeArray[Array[nullable MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nullable__nit__MClass = {
0, /* dummy */
{
&type_standard__Array__nullable__nit__MClass, /* E: Array[nullable MClass] */
&type_standard__NativeArray__standard__Array__nullable__nit__MClass, /* NativeArray[E]: NativeArray[Array[nullable MClass]] */
}
};
/* runtime type NativeArray[EscapeMark] */
const struct type type_standard__NativeArray__nit__EscapeMark = {
1158,
"NativeArray[EscapeMark]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nit__EscapeMark,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1158, /* NativeArray[EscapeMark] */
},
};
const struct types resolution_table_standard__NativeArray__nit__EscapeMark = {
0, /* dummy */
{
&type_nit__EscapeMark, /* E: EscapeMark */
&type_standard__NativeArray__nit__EscapeMark, /* NativeArray[E]: NativeArray[EscapeMark] */
}
};
/* runtime type NativeArray[Set[MType]] */
const struct type type_standard__NativeArray__standard__Set__nit__MType = {
1159,
"NativeArray[Set[MType]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1159, /* NativeArray[Set[MType]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MType = {
0, /* dummy */
{
&type_standard__Set__nit__MType, /* E: Set[MType] */
&type_standard__NativeArray__standard__Set__nit__MType, /* NativeArray[E]: NativeArray[Set[MType]] */
}
};
/* runtime type NativeArray[POSetElement[Phase]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__Phase = {
1160,
"NativeArray[POSetElement[Phase]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__Phase,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1160, /* NativeArray[POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
&type_poset__POSetElement__nit__Phase, /* E: POSetElement[Phase] */
&type_standard__NativeArray__poset__POSetElement__nit__Phase, /* NativeArray[E]: NativeArray[POSetElement[Phase]] */
}
};
/* runtime type NativeArray[POSetElement[MModule]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MModule = {
1161,
"NativeArray[POSetElement[MModule]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MModule,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1161, /* NativeArray[POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MModule, /* E: POSetElement[MModule] */
&type_standard__NativeArray__poset__POSetElement__nit__MModule, /* NativeArray[E]: NativeArray[POSetElement[MModule]] */
}
};
/* runtime type NativeArray[POSetElement[MClassDef]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MClassDef = {
1162,
"NativeArray[POSetElement[MClassDef]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MClassDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1162, /* NativeArray[POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassDef, /* E: POSetElement[MClassDef] */
&type_standard__NativeArray__poset__POSetElement__nit__MClassDef, /* NativeArray[E]: NativeArray[POSetElement[MClassDef]] */
}
};
/* runtime type NativeArray[POSetElement[MClassType]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MClassType = {
1771,
"NativeArray[POSetElement[MClassType]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MClassType,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1167, /* NativeArray[POSetElement[MType]] */
1771, /* NativeArray[POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClassType, /* E: POSetElement[MClassType] */
&type_standard__NativeArray__poset__POSetElement__nit__MClassType, /* NativeArray[E]: NativeArray[POSetElement[MClassType]] */
}
};
/* runtime type NativeArray[HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__NativeArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
1163,
"NativeArray[HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1163, /* NativeArray[HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* E: HashMap2[MType, String, nullable MProperty] */
&type_standard__NativeArray__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[HashMap2[MType, String, nullable MProperty]] */
}
};
/* runtime type NativeArray[POSetElement[MGroup]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MGroup = {
1164,
"NativeArray[POSetElement[MGroup]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MGroup,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1164, /* NativeArray[POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MGroup, /* E: POSetElement[MGroup] */
&type_standard__NativeArray__poset__POSetElement__nit__MGroup, /* NativeArray[E]: NativeArray[POSetElement[MGroup]] */
}
};
/* runtime type NativeArray[HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_standard__NativeArray__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
1165,
"NativeArray[HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1165, /* NativeArray[HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* E: HashMap[MProperty, Set[MMethodDef]] */
&type_standard__NativeArray__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* NativeArray[E]: NativeArray[HashMap[MProperty, Set[MMethodDef]]] */
}
};
/* runtime type NativeArray[Set[MMethodDef]] */
const struct type type_standard__NativeArray__standard__Set__nit__MMethodDef = {
1772,
"NativeArray[Set[MMethodDef]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Set__nit__MMethodDef,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1156, /* NativeArray[Set[PropertyLayoutElement]] */
1772, /* NativeArray[Set[MMethodDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Set__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__Set__nit__MMethodDef, /* E: Set[MMethodDef] */
&type_standard__NativeArray__standard__Set__nit__MMethodDef, /* NativeArray[E]: NativeArray[Set[MMethodDef]] */
}
};
/* runtime type NativeArray[POSetElement[MClass]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MClass = {
1166,
"NativeArray[POSetElement[MClass]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MClass,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1166, /* NativeArray[POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MClass, /* E: POSetElement[MClass] */
&type_standard__NativeArray__poset__POSetElement__nit__MClass, /* NativeArray[E]: NativeArray[POSetElement[MClass]] */
}
};
/* runtime type NativeArray[POSetElement[MType]] */
const struct type type_standard__NativeArray__poset__POSetElement__nit__MType = {
1167,
"NativeArray[POSetElement[MType]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__poset__POSetElement__nit__MType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1167, /* NativeArray[POSetElement[MType]] */
},
};
const struct types resolution_table_standard__NativeArray__poset__POSetElement__nit__MType = {
0, /* dummy */
{
&type_poset__POSetElement__nit__MType, /* E: POSetElement[MType] */
&type_standard__NativeArray__poset__POSetElement__nit__MType, /* NativeArray[E]: NativeArray[POSetElement[MType]] */
}
};
/* runtime type NativeArray[HashMap[String, nullable MProperty]] */
const struct type type_standard__NativeArray__standard__HashMap__standard__String__nullable__nit__MProperty = {
1168,
"NativeArray[HashMap[String, nullable MProperty]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__HashMap__standard__String__nullable__nit__MProperty,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1168, /* NativeArray[HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* E: HashMap[String, nullable MProperty] */
&type_standard__NativeArray__standard__HashMap__standard__String__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[HashMap[String, nullable MProperty]] */
}
};
/* runtime type NativeArray[nullable MProperty] */
const struct type type_standard__NativeArray__nullable__nit__MProperty = {
675,
"NativeArray[nullable MProperty]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__nullable__nit__MProperty,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
-1, /* empty */
675, /* NativeArray[nullable MProperty] */
},
};
const struct types resolution_table_standard__NativeArray__nullable__nit__MProperty = {
0, /* dummy */
{
&type_nullable__nit__MProperty, /* E: nullable MProperty */
&type_standard__NativeArray__nullable__nit__MProperty, /* NativeArray[E]: NativeArray[nullable MProperty] */
}
};
/* runtime type NativeArray[HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
1169,
"NativeArray[HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1169, /* NativeArray[HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* E: HashMap[MType, Array[MMethodDef]] */
&type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[E]: NativeArray[HashMap[MType, Array[MMethodDef]]] */
}
};
/* runtime type NativeArray[Array[MMethodDef]] */
const struct type type_standard__NativeArray__standard__Array__nit__MMethodDef = {
1773,
"NativeArray[Array[MMethodDef]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MMethodDef,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1153, /* NativeArray[Array[nullable MPropDef]] */
1773, /* NativeArray[Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
&type_standard__Array__nit__MMethodDef, /* E: Array[MMethodDef] */
&type_standard__NativeArray__standard__Array__nit__MMethodDef, /* NativeArray[E]: NativeArray[Array[MMethodDef]] */
}
};
/* runtime type NativeArray[HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
1170,
"NativeArray[HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1170, /* NativeArray[HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* E: HashMap[MType, Array[MAttributeDef]] */
&type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[E]: NativeArray[HashMap[MType, Array[MAttributeDef]]] */
}
};
/* runtime type NativeArray[Array[MAttributeDef]] */
const struct type type_standard__NativeArray__standard__Array__nit__MAttributeDef = {
1774,
"NativeArray[Array[MAttributeDef]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MAttributeDef,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1153, /* NativeArray[Array[nullable MPropDef]] */
1774, /* NativeArray[Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
&type_standard__Array__nit__MAttributeDef, /* E: Array[MAttributeDef] */
&type_standard__NativeArray__standard__Array__nit__MAttributeDef, /* NativeArray[E]: NativeArray[Array[MAttributeDef]] */
}
};
/* runtime type NativeArray[HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
1171,
"NativeArray[HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
6,
0,
&resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1171, /* NativeArray[HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* E: HashMap[MType, Array[MVirtualTypeDef]] */
&type_standard__NativeArray__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[HashMap[MType, Array[MVirtualTypeDef]]] */
}
};
/* runtime type NativeArray[Array[MVirtualTypeDef]] */
const struct type type_standard__NativeArray__standard__Array__nit__MVirtualTypeDef = {
1775,
"NativeArray[Array[MVirtualTypeDef]]", /* class_name_string */
7,
0,
&resolution_table_standard__NativeArray__standard__Array__nit__MVirtualTypeDef,
8,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
668, /* NativeArray[Object] */
1153, /* NativeArray[Array[nullable MPropDef]] */
1775, /* NativeArray[Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_standard__NativeArray__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
&type_standard__Array__nit__MVirtualTypeDef, /* E: Array[MVirtualTypeDef] */
&type_standard__NativeArray__standard__Array__nit__MVirtualTypeDef, /* NativeArray[E]: NativeArray[Array[MVirtualTypeDef]] */
}
};
/* runtime type RopeString */
const struct type type_standard__ropes__RopeString = {
131,
"RopeString", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[SourceFile, Array[String]] */
const struct type type_standard__HashMap__nit__SourceFile__standard__Array__standard__String = {
132,
"HashMap[SourceFile, Array[String]]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Option] */
const struct type type_standard__HashMap__standard__String__opts__Option = {
676,
"HashMap[String, Option]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__opts__Option,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
676, /* HashMap[String, Option] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__opts__Option = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__opts__Option, /* HashMapKeys[K, V]: HashMapKeys[String, Option] */
&type_standard__hash_collection__HashMapValues__standard__String__opts__Option, /* HashMapValues[K, V]: HashMapValues[String, Option] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__opts__Option, /* HashMapIterator[K, V]: HashMapIterator[String, Option] */
&type_opts__Option, /* V: Option */
&type_standard__hash_collection__HashMapNode__standard__String__opts__Option, /* HashMapNode[K, V]: HashMapNode[String, Option] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__opts__Option, /* nullable N: nullable HashMapNode[String, Option] */
&type_standard__hash_collection__HashMapNode__standard__String__opts__Option, /* N: HashMapNode[String, Option] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__opts__Option, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, Option]] */
}
};
/* runtime type HashMap[String, Array[MProject]] */
const struct type type_standard__HashMap__standard__String__standard__Array__nit__MProject = {
133,
"HashMap[String, Array[MProject]]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Array[MModule]] */
const struct type type_standard__HashMap__standard__String__standard__Array__nit__MModule = {
134,
"HashMap[String, Array[MModule]]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Array[MClass]] */
const struct type type_standard__HashMap__standard__String__standard__Array__nit__MClass = {
135,
"HashMap[String, Array[MClass]]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, Array[MProperty]] */
const struct type type_standard__HashMap__standard__String__standard__Array__nit__MProperty = {
136,
"HashMap[String, Array[MProperty]]", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type HashMap[String, nullable ModulePath] */
const struct type type_standard__HashMap__standard__String__nullable__nit__ModulePath = {
677,
"HashMap[String, nullable ModulePath]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nullable__nit__ModulePath,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
677, /* HashMap[String, nullable ModulePath] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nullable__nit__ModulePath = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__ModulePath, /* HashMapKeys[K, V]: HashMapKeys[String, nullable ModulePath] */
&type_standard__hash_collection__HashMapValues__standard__String__nullable__nit__ModulePath, /* HashMapValues[K, V]: HashMapValues[String, nullable ModulePath] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nullable__nit__ModulePath, /* HashMapIterator[K, V]: HashMapIterator[String, nullable ModulePath] */
&type_nullable__nit__ModulePath, /* V: nullable ModulePath */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__ModulePath, /* HashMapNode[K, V]: HashMapNode[String, nullable ModulePath] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__ModulePath, /* nullable N: nullable HashMapNode[String, nullable ModulePath] */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__ModulePath, /* N: HashMapNode[String, nullable ModulePath] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__ModulePath, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, nullable ModulePath]] */
}
};
/* runtime type HashMap[String, nullable MGroup] */
const struct type type_standard__HashMap__standard__String__nullable__nit__MGroup = {
678,
"HashMap[String, nullable MGroup]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nullable__nit__MGroup,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
678, /* HashMap[String, nullable MGroup] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nullable__nit__MGroup = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MGroup, /* HashMapKeys[K, V]: HashMapKeys[String, nullable MGroup] */
&type_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MGroup, /* HashMapValues[K, V]: HashMapValues[String, nullable MGroup] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nullable__nit__MGroup, /* HashMapIterator[K, V]: HashMapIterator[String, nullable MGroup] */
&type_nullable__nit__MGroup, /* V: nullable MGroup */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MGroup, /* HashMapNode[K, V]: HashMapNode[String, nullable MGroup] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MGroup, /* nullable N: nullable HashMapNode[String, nullable MGroup] */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MGroup, /* N: HashMapNode[String, nullable MGroup] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MGroup, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, nullable MGroup]] */
}
};
/* runtime type HashMap[MModule, AModule] */
const struct type type_standard__HashMap__nit__MModule__nit__AModule = {
679,
"HashMap[MModule, AModule]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__nit__AModule,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
679, /* HashMap[MModule, AModule] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__nit__AModule = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__nit__AModule, /* HashMapKeys[K, V]: HashMapKeys[MModule, AModule] */
&type_standard__hash_collection__HashMapValues__nit__MModule__nit__AModule, /* HashMapValues[K, V]: HashMapValues[MModule, AModule] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__nit__AModule, /* HashMapIterator[K, V]: HashMapIterator[MModule, AModule] */
&type_nit__AModule, /* V: AModule */
&type_standard__hash_collection__HashMapNode__nit__MModule__nit__AModule, /* HashMapNode[K, V]: HashMapNode[MModule, AModule] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__nit__AModule, /* nullable N: nullable HashMapNode[MModule, AModule] */
&type_standard__hash_collection__HashMapNode__nit__MModule__nit__AModule, /* N: HashMapNode[MModule, AModule] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__nit__AModule, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, AModule]] */
}
};
/* runtime type HashMap[MClassDef, AClassdef] */
const struct type type_standard__HashMap__nit__MClassDef__nit__AClassdef = {
680,
"HashMap[MClassDef, AClassdef]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClassDef__nit__AClassdef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
680, /* HashMap[MClassDef, AClassdef] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassDef__nit__AClassdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassDef__nit__AClassdef, /* HashMapKeys[K, V]: HashMapKeys[MClassDef, AClassdef] */
&type_standard__hash_collection__HashMapValues__nit__MClassDef__nit__AClassdef, /* HashMapValues[K, V]: HashMapValues[MClassDef, AClassdef] */
&type_nit__MClassDef, /* K: MClassDef */
&type_standard__HashMapIterator__nit__MClassDef__nit__AClassdef, /* HashMapIterator[K, V]: HashMapIterator[MClassDef, AClassdef] */
&type_nit__AClassdef, /* V: AClassdef */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__nit__AClassdef, /* HashMapNode[K, V]: HashMapNode[MClassDef, AClassdef] */
&type_nit__MClassDef, /* K: MClassDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassDef, /* K: MClassDef */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__nit__AClassdef, /* nullable N: nullable HashMapNode[MClassDef, AClassdef] */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__nit__AClassdef, /* N: HashMapNode[MClassDef, AClassdef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__nit__AClassdef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassDef, AClassdef]] */
}
};
/* runtime type HashMap[String, MModuleData[AAnnotation]] */
const struct type type_standard__HashMap__standard__String__nit__MModuleData__nit__AAnnotation = {
681,
"HashMap[String, MModuleData[AAnnotation]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nit__MModuleData__nit__AAnnotation,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
681, /* HashMap[String, MModuleData[AAnnotation]] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nit__MModuleData__nit__AAnnotation = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nit__MModuleData__nit__AAnnotation, /* HashMapKeys[K, V]: HashMapKeys[String, MModuleData[AAnnotation]] */
&type_standard__hash_collection__HashMapValues__standard__String__nit__MModuleData__nit__AAnnotation, /* HashMapValues[K, V]: HashMapValues[String, MModuleData[AAnnotation]] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nit__MModuleData__nit__AAnnotation, /* HashMapIterator[K, V]: HashMapIterator[String, MModuleData[AAnnotation]] */
&type_nit__MModuleData__nit__AAnnotation, /* V: MModuleData[AAnnotation] */
&type_standard__hash_collection__HashMapNode__standard__String__nit__MModuleData__nit__AAnnotation, /* HashMapNode[K, V]: HashMapNode[String, MModuleData[AAnnotation]] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__MModuleData__nit__AAnnotation, /* nullable N: nullable HashMapNode[String, MModuleData[AAnnotation]] */
&type_standard__hash_collection__HashMapNode__standard__String__nit__MModuleData__nit__AAnnotation, /* N: HashMapNode[String, MModuleData[AAnnotation]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__MModuleData__nit__AAnnotation, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, MModuleData[AAnnotation]]] */
}
};
/* runtime type HashMap[MPropDef, APropdef] */
const struct type type_standard__HashMap__nit__MPropDef__nit__APropdef = {
682,
"HashMap[MPropDef, APropdef]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MPropDef__nit__APropdef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
682, /* HashMap[MPropDef, APropdef] */
},
};
const struct types resolution_table_standard__HashMap__nit__MPropDef__nit__APropdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MPropDef__nit__APropdef, /* HashMapKeys[K, V]: HashMapKeys[MPropDef, APropdef] */
&type_standard__hash_collection__HashMapValues__nit__MPropDef__nit__APropdef, /* HashMapValues[K, V]: HashMapValues[MPropDef, APropdef] */
&type_nit__MPropDef, /* K: MPropDef */
&type_standard__HashMapIterator__nit__MPropDef__nit__APropdef, /* HashMapIterator[K, V]: HashMapIterator[MPropDef, APropdef] */
&type_nit__APropdef, /* V: APropdef */
&type_standard__hash_collection__HashMapNode__nit__MPropDef__nit__APropdef, /* HashMapNode[K, V]: HashMapNode[MPropDef, APropdef] */
&type_nit__MPropDef, /* K: MPropDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MPropDef, /* K: MPropDef */
&type_nullable__standard__hash_collection__HashMapNode__nit__MPropDef__nit__APropdef, /* nullable N: nullable HashMapNode[MPropDef, APropdef] */
&type_standard__hash_collection__HashMapNode__nit__MPropDef__nit__APropdef, /* N: HashMapNode[MPropDef, APropdef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MPropDef__nit__APropdef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MPropDef, APropdef]] */
}
};
/* runtime type HashMap[MClass, Set[MProperty]] */
const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MProperty = {
1776,
"HashMap[MClass, Set[MProperty]]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MProperty,
7,
{
-1, /* empty */
541, /* Map[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
-1, /* empty */
139, /* Object */
1173, /* HashMap[MClass, Set[PropertyLayoutElement]] */
1776, /* HashMap[MClass, Set[MProperty]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Set__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MProperty]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Set__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MProperty]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Set__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MProperty]] */
&type_standard__Set__nit__MProperty, /* V: Set[MProperty] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MProperty]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MProperty, /* nullable N: nullable HashMapNode[MClass, Set[MProperty]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MProperty, /* N: HashMapNode[MClass, Set[MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Set[MProperty]]] */
}
};
/* runtime type HashMap[MProperty, APropdef] */
const struct type type_standard__HashMap__nit__MProperty__nit__APropdef = {
683,
"HashMap[MProperty, APropdef]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MProperty__nit__APropdef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
683, /* HashMap[MProperty, APropdef] */
},
};
const struct types resolution_table_standard__HashMap__nit__MProperty__nit__APropdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MProperty__nit__APropdef, /* HashMapKeys[K, V]: HashMapKeys[MProperty, APropdef] */
&type_standard__hash_collection__HashMapValues__nit__MProperty__nit__APropdef, /* HashMapValues[K, V]: HashMapValues[MProperty, APropdef] */
&type_nit__MProperty, /* K: MProperty */
&type_standard__HashMapIterator__nit__MProperty__nit__APropdef, /* HashMapIterator[K, V]: HashMapIterator[MProperty, APropdef] */
&type_nit__APropdef, /* V: APropdef */
&type_standard__hash_collection__HashMapNode__nit__MProperty__nit__APropdef, /* HashMapNode[K, V]: HashMapNode[MProperty, APropdef] */
&type_nit__MProperty, /* K: MProperty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MProperty, /* K: MProperty */
&type_nullable__standard__hash_collection__HashMapNode__nit__MProperty__nit__APropdef, /* nullable N: nullable HashMapNode[MProperty, APropdef] */
&type_standard__hash_collection__HashMapNode__nit__MProperty__nit__APropdef, /* N: HashMapNode[MProperty, APropdef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MProperty__nit__APropdef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MProperty, APropdef]] */
}
};
/* runtime type HashMap[Array[MType], MGenericType] */
const struct type type_standard__HashMap__standard__Array__nit__MType__nit__MGenericType = {
684,
"HashMap[Array[MType], MGenericType]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__Array__nit__MType__nit__MGenericType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
684, /* HashMap[Array[MType], MGenericType] */
},
};
const struct types resolution_table_standard__HashMap__standard__Array__nit__MType__nit__MGenericType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__Array__nit__MType__nit__MGenericType, /* HashMapKeys[K, V]: HashMapKeys[Array[MType], MGenericType] */
&type_standard__hash_collection__HashMapValues__standard__Array__nit__MType__nit__MGenericType, /* HashMapValues[K, V]: HashMapValues[Array[MType], MGenericType] */
&type_standard__Array__nit__MType, /* K: Array[MType] */
&type_standard__HashMapIterator__standard__Array__nit__MType__nit__MGenericType, /* HashMapIterator[K, V]: HashMapIterator[Array[MType], MGenericType] */
&type_nit__MGenericType, /* V: MGenericType */
&type_standard__hash_collection__HashMapNode__standard__Array__nit__MType__nit__MGenericType, /* HashMapNode[K, V]: HashMapNode[Array[MType], MGenericType] */
&type_standard__Array__nit__MType, /* K: Array[MType] */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__Array__nit__MType, /* K: Array[MType] */
&type_nullable__standard__hash_collection__HashMapNode__standard__Array__nit__MType__nit__MGenericType, /* nullable N: nullable HashMapNode[Array[MType], MGenericType] */
&type_standard__hash_collection__HashMapNode__standard__Array__nit__MType__nit__MGenericType, /* N: HashMapNode[Array[MType], MGenericType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__Array__nit__MType__nit__MGenericType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[Array[MType], MGenericType]] */
}
};
/* runtime type HashMap[MClassDef, HashSet[MType]] */
const struct type type_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType = {
685,
"HashMap[MClassDef, HashSet[MType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
685, /* HashMap[MClassDef, HashSet[MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassDef__standard__HashSet__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MClassDef, HashSet[MType]] */
&type_standard__hash_collection__HashMapValues__nit__MClassDef__standard__HashSet__nit__MType, /* HashMapValues[K, V]: HashMapValues[MClassDef, HashSet[MType]] */
&type_nit__MClassDef, /* K: MClassDef */
&type_standard__HashMapIterator__nit__MClassDef__standard__HashSet__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MClassDef, HashSet[MType]] */
&type_standard__HashSet__nit__MType, /* V: HashSet[MType] */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__standard__HashSet__nit__MType, /* HashMapNode[K, V]: HashMapNode[MClassDef, HashSet[MType]] */
&type_nit__MClassDef, /* K: MClassDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassDef, /* K: MClassDef */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__standard__HashSet__nit__MType, /* nullable N: nullable HashMapNode[MClassDef, HashSet[MType]] */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__standard__HashSet__nit__MType, /* N: HashMapNode[MClassDef, HashSet[MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__standard__HashSet__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassDef, HashSet[MType]]] */
}
};
/* runtime type HashMap[MClass, Int] */
const struct type type_standard__HashMap__nit__MClass__standard__Int = {
686,
"HashMap[MClass, Int]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Int,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
686, /* HashMap[MClass, Int] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[MClass, Int] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Int, /* HashMapValues[K, V]: HashMapValues[MClass, Int] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[MClass, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Int, /* HashMapNode[K, V]: HashMapNode[MClass, Int] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Int, /* nullable N: nullable HashMapNode[MClass, Int] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Int, /* N: HashMapNode[MClass, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Int]] */
}
};
/* runtime type HashMap[MType, Array[nullable MType]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType = {
687,
"HashMap[MType, Array[nullable MType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
687, /* HashMap[MType, Array[nullable MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nullable__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[nullable MType]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nullable__nit__MType, /* HashMapValues[K, V]: HashMapValues[MType, Array[nullable MType]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nullable__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[nullable MType]] */
&type_standard__Array__nullable__nit__MType, /* V: Array[nullable MType] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nullable__nit__MType, /* HashMapNode[K, V]: HashMapNode[MType, Array[nullable MType]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nullable__nit__MType, /* nullable N: nullable HashMapNode[MType, Array[nullable MType]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nullable__nit__MType, /* N: HashMapNode[MType, Array[nullable MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nullable__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[nullable MType]]] */
}
};
/* runtime type HashMap[MClassType, Array[nullable MType]] */
const struct type type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType = {
1172,
"HashMap[MClassType, Array[nullable MType]]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
687, /* HashMap[MType, Array[nullable MType]] */
1172, /* HashMap[MClassType, Array[nullable MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassType__standard__Array__nullable__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MClassType, Array[nullable MType]] */
&type_standard__hash_collection__HashMapValues__nit__MClassType__standard__Array__nullable__nit__MType, /* HashMapValues[K, V]: HashMapValues[MClassType, Array[nullable MType]] */
&type_nit__MClassType, /* K: MClassType */
&type_standard__HashMapIterator__nit__MClassType__standard__Array__nullable__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MClassType, Array[nullable MType]] */
&type_standard__Array__nullable__nit__MType, /* V: Array[nullable MType] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__standard__Array__nullable__nit__MType, /* HashMapNode[K, V]: HashMapNode[MClassType, Array[nullable MType]] */
&type_nit__MClassType, /* K: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassType, /* K: MClassType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__standard__Array__nullable__nit__MType, /* nullable N: nullable HashMapNode[MClassType, Array[nullable MType]] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__standard__Array__nullable__nit__MType, /* N: HashMapNode[MClassType, Array[nullable MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__standard__Array__nullable__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassType, Array[nullable MType]]] */
}
};
/* runtime type HashMap[MClass, Array[nullable MPropDef]] */
const struct type type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef = {
688,
"HashMap[MClass, Array[nullable MPropDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
688, /* HashMap[MClass, Array[nullable MPropDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Array__nullable__nit__MPropDef, /* HashMapKeys[K, V]: HashMapKeys[MClass, Array[nullable MPropDef]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Array__nullable__nit__MPropDef, /* HashMapValues[K, V]: HashMapValues[MClass, Array[nullable MPropDef]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Array__nullable__nit__MPropDef, /* HashMapIterator[K, V]: HashMapIterator[MClass, Array[nullable MPropDef]] */
&type_standard__Array__nullable__nit__MPropDef, /* V: Array[nullable MPropDef] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MPropDef, /* HashMapNode[K, V]: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MPropDef, /* nullable N: nullable HashMapNode[MClass, Array[nullable MPropDef]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MPropDef, /* N: HashMapNode[MClass, Array[nullable MPropDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MPropDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Array[nullable MPropDef]]] */
}
};
/* runtime type HashMap[String, String] */
const struct type type_standard__HashMap__standard__String__standard__String = {
689,
"HashMap[String, String]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__standard__String,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
689, /* HashMap[String, String] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__standard__String = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__standard__String, /* HashMapKeys[K, V]: HashMapKeys[String, String] */
&type_standard__hash_collection__HashMapValues__standard__String__standard__String, /* HashMapValues[K, V]: HashMapValues[String, String] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__standard__String, /* HashMapIterator[K, V]: HashMapIterator[String, String] */
&type_standard__String, /* V: String */
&type_standard__hash_collection__HashMapNode__standard__String__standard__String, /* HashMapNode[K, V]: HashMapNode[String, String] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__standard__String, /* nullable N: nullable HashMapNode[String, String] */
&type_standard__hash_collection__HashMapNode__standard__String__standard__String, /* N: HashMapNode[String, String] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__standard__String, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, String]] */
}
};
/* runtime type HashMap[String, ANode] */
const struct type type_standard__HashMap__standard__String__nit__ANode = {
690,
"HashMap[String, ANode]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nit__ANode,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
690, /* HashMap[String, ANode] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nit__ANode = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nit__ANode, /* HashMapKeys[K, V]: HashMapKeys[String, ANode] */
&type_standard__hash_collection__HashMapValues__standard__String__nit__ANode, /* HashMapValues[K, V]: HashMapValues[String, ANode] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nit__ANode, /* HashMapIterator[K, V]: HashMapIterator[String, ANode] */
&type_nit__ANode, /* V: ANode */
&type_standard__hash_collection__HashMapNode__standard__String__nit__ANode, /* HashMapNode[K, V]: HashMapNode[String, ANode] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__ANode, /* nullable N: nullable HashMapNode[String, ANode] */
&type_standard__hash_collection__HashMapNode__standard__String__nit__ANode, /* N: HashMapNode[String, ANode] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__ANode, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, ANode]] */
}
};
/* runtime type HashMap[MClass, MClassType] */
const struct type type_standard__HashMap__nit__MClass__nit__MClassType = {
691,
"HashMap[MClass, MClassType]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__nit__MClassType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
691, /* HashMap[MClass, MClassType] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__nit__MClassType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__nit__MClassType, /* HashMapKeys[K, V]: HashMapKeys[MClass, MClassType] */
&type_standard__hash_collection__HashMapValues__nit__MClass__nit__MClassType, /* HashMapValues[K, V]: HashMapValues[MClass, MClassType] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__nit__MClassType, /* HashMapIterator[K, V]: HashMapIterator[MClass, MClassType] */
&type_nit__MClassType, /* V: MClassType */
&type_standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* HashMapNode[K, V]: HashMapNode[MClass, MClassType] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* nullable N: nullable HashMapNode[MClass, MClassType] */
&type_standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* N: HashMapNode[MClass, MClassType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__MClassType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, MClassType]] */
}
};
/* runtime type HashMap[MModule, Set[MClassDef]] */
const struct type type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef = {
692,
"HashMap[MModule, Set[MClassDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
692, /* HashMap[MModule, Set[MClassDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClassDef]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassDef, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClassDef]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClassDef]] */
&type_standard__Set__nit__MClassDef, /* V: Set[MClassDef] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClassDef]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* nullable N: nullable HashMapNode[MModule, Set[MClassDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* N: HashMapNode[MModule, Set[MClassDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, Set[MClassDef]]] */
}
};
/* runtime type HashMap[MModule, Set[MClass]] */
const struct type type_standard__HashMap__nit__MModule__standard__Set__nit__MClass = {
693,
"HashMap[MModule, Set[MClass]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClass,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
693, /* HashMap[MModule, Set[MClass]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClass, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClass]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClass, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClass]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClass, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClass]] */
&type_standard__Set__nit__MClass, /* V: Set[MClass] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClass]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* nullable N: nullable HashMapNode[MModule, Set[MClass]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* N: HashMapNode[MModule, Set[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClass, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, Set[MClass]]] */
}
};
/* runtime type HashMap[MModule, Set[MClassType]] */
const struct type type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType = {
694,
"HashMap[MModule, Set[MClassType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClassType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
694, /* HashMap[MModule, Set[MClassType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__Set__nit__MClassType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__Set__nit__MClassType, /* HashMapKeys[K, V]: HashMapKeys[MModule, Set[MClassType]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__Set__nit__MClassType, /* HashMapValues[K, V]: HashMapValues[MModule, Set[MClassType]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__Set__nit__MClassType, /* HashMapIterator[K, V]: HashMapIterator[MModule, Set[MClassType]] */
&type_standard__Set__nit__MClassType, /* V: Set[MClassType] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* HashMapNode[K, V]: HashMapNode[MModule, Set[MClassType]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* nullable N: nullable HashMapNode[MModule, Set[MClassType]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* N: HashMapNode[MModule, Set[MClassType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__Set__nit__MClassType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, Set[MClassType]]] */
}
};
/* runtime type HashMap[String, Int] */
const struct type type_standard__HashMap__standard__String__standard__Int = {
695,
"HashMap[String, Int]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__standard__Int,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
695, /* HashMap[String, Int] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[String, Int] */
&type_standard__hash_collection__HashMapValues__standard__String__standard__Int, /* HashMapValues[K, V]: HashMapValues[String, Int] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[String, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__standard__String__standard__Int, /* HashMapNode[K, V]: HashMapNode[String, Int] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__standard__Int, /* nullable N: nullable HashMapNode[String, Int] */
&type_standard__hash_collection__HashMapNode__standard__String__standard__Int, /* N: HashMapNode[String, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, Int]] */
}
};
/* runtime type HashMap[MClass, Set[MVirtualTypeProp]] */
const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MVirtualTypeProp = {
2097,
"HashMap[MClass, Set[MVirtualTypeProp]]", /* class_name_string */
7,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MVirtualTypeProp,
8,
{
540, /* Map[MClass, Set[MVirtualTypeProp]] */
541, /* Map[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
-1, /* empty */
139, /* Object */
1173, /* HashMap[MClass, Set[PropertyLayoutElement]] */
1776, /* HashMap[MClass, Set[MProperty]] */
2097, /* HashMap[MClass, Set[MVirtualTypeProp]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MVirtualTypeProp = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MVirtualTypeProp]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MVirtualTypeProp]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MVirtualTypeProp]] */
&type_standard__Set__nit__MVirtualTypeProp, /* V: Set[MVirtualTypeProp] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* nullable N: nullable HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* N: HashMapNode[MClass, Set[MVirtualTypeProp]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MVirtualTypeProp, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Set[MVirtualTypeProp]]] */
}
};
/* runtime type HashMap[Variable, nullable MType] */
const struct type type_standard__HashMap__nit__Variable__nullable__nit__MType = {
696,
"HashMap[Variable, nullable MType]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__Variable__nullable__nit__MType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
696, /* HashMap[Variable, nullable MType] */
},
};
const struct types resolution_table_standard__HashMap__nit__Variable__nullable__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__Variable__nullable__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[Variable, nullable MType] */
&type_standard__hash_collection__HashMapValues__nit__Variable__nullable__nit__MType, /* HashMapValues[K, V]: HashMapValues[Variable, nullable MType] */
&type_nit__Variable, /* K: Variable */
&type_standard__HashMapIterator__nit__Variable__nullable__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[Variable, nullable MType] */
&type_nullable__nit__MType, /* V: nullable MType */
&type_standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* HashMapNode[K, V]: HashMapNode[Variable, nullable MType] */
&type_nit__Variable, /* K: Variable */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* nullable N: nullable HashMapNode[Variable, nullable MType] */
&type_standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* N: HashMapNode[Variable, nullable MType] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[Variable, nullable MType]] */
}
};
/* runtime type HashMap[Variable, nullable Array[nullable MType]] */
const struct type type_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
697,
"HashMap[Variable, nullable Array[nullable MType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
697, /* HashMap[Variable, nullable Array[nullable MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[Variable, nullable Array[nullable MType]] */
&type_standard__hash_collection__HashMapValues__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMapValues[K, V]: HashMapValues[Variable, nullable Array[nullable MType]] */
&type_nit__Variable, /* K: Variable */
&type_standard__HashMapIterator__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[Variable, nullable Array[nullable MType]] */
&type_nullable__standard__Array__nullable__nit__MType, /* V: nullable Array[nullable MType] */
&type_standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* HashMapNode[K, V]: HashMapNode[Variable, nullable Array[nullable MType]] */
&type_nit__Variable, /* K: Variable */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* nullable N: nullable HashMapNode[Variable, nullable Array[nullable MType]] */
&type_standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* N: HashMapNode[Variable, nullable Array[nullable MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nullable__standard__Array__nullable__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[Variable, nullable Array[nullable MType]]] */
}
};
/* runtime type HashMap[MClass, Set[PropertyLayoutElement]] */
const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__PropertyLayoutElement = {
1173,
"HashMap[MClass, Set[PropertyLayoutElement]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__PropertyLayoutElement,
6,
{
-1, /* empty */
541, /* Map[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
-1, /* empty */
139, /* Object */
1173, /* HashMap[MClass, Set[PropertyLayoutElement]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__PropertyLayoutElement = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[PropertyLayoutElement]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* HashMapValues[K, V]: HashMapValues[MClass, Set[PropertyLayoutElement]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[PropertyLayoutElement]] */
&type_standard__Set__nit__PropertyLayoutElement, /* V: Set[PropertyLayoutElement] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* HashMapNode[K, V]: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* nullable N: nullable HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* N: HashMapNode[MClass, Set[PropertyLayoutElement]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__PropertyLayoutElement, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Set[PropertyLayoutElement]]] */
}
};
/* runtime type HashMap[MClass, Set[MAttribute]] */
const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MAttribute = {
2098,
"HashMap[MClass, Set[MAttribute]]", /* class_name_string */
7,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MAttribute,
8,
{
542, /* Map[MClass, Set[MAttribute]] */
541, /* Map[MClass, Set[PropertyLayoutElement]] */
-1, /* empty */
-1, /* empty */
139, /* Object */
1173, /* HashMap[MClass, Set[PropertyLayoutElement]] */
1776, /* HashMap[MClass, Set[MProperty]] */
2098, /* HashMap[MClass, Set[MAttribute]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MAttribute = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Set__nit__MAttribute, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MAttribute]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Set__nit__MAttribute, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MAttribute]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Set__nit__MAttribute, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MAttribute]] */
&type_standard__Set__nit__MAttribute, /* V: Set[MAttribute] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MAttribute, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MAttribute]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MAttribute, /* nullable N: nullable HashMapNode[MClass, Set[MAttribute]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MAttribute, /* N: HashMapNode[MClass, Set[MAttribute]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MAttribute, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Set[MAttribute]]] */
}
};
/* runtime type HashMap[MClass, Array[nullable MClass]] */
const struct type type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MClass = {
698,
"HashMap[MClass, Array[nullable MClass]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MClass,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
698, /* HashMap[MClass, Array[nullable MClass]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Array__nullable__nit__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, Array[nullable MClass]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Array__nullable__nit__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, Array[nullable MClass]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Array__nullable__nit__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, Array[nullable MClass]] */
&type_standard__Array__nullable__nit__MClass, /* V: Array[nullable MClass] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, Array[nullable MClass]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MClass, /* nullable N: nullable HashMapNode[MClass, Array[nullable MClass]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MClass, /* N: HashMapNode[MClass, Array[nullable MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Array__nullable__nit__MClass, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Array[nullable MClass]]] */
}
};
/* runtime type HashMap[MClass, AClassdef] */
const struct type type_standard__HashMap__nit__MClass__nit__AClassdef = {
699,
"HashMap[MClass, AClassdef]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__nit__AClassdef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
699, /* HashMap[MClass, AClassdef] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__nit__AClassdef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__nit__AClassdef, /* HashMapKeys[K, V]: HashMapKeys[MClass, AClassdef] */
&type_standard__hash_collection__HashMapValues__nit__MClass__nit__AClassdef, /* HashMapValues[K, V]: HashMapValues[MClass, AClassdef] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__nit__AClassdef, /* HashMapIterator[K, V]: HashMapIterator[MClass, AClassdef] */
&type_nit__AClassdef, /* V: AClassdef */
&type_standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* HashMapNode[K, V]: HashMapNode[MClass, AClassdef] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* nullable N: nullable HashMapNode[MClass, AClassdef] */
&type_standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* N: HashMapNode[MClass, AClassdef] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__nit__AClassdef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, AClassdef]] */
}
};
/* runtime type HashMap[String, Variable] */
const struct type type_standard__HashMap__standard__String__nit__Variable = {
700,
"HashMap[String, Variable]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nit__Variable,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
700, /* HashMap[String, Variable] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nit__Variable = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nit__Variable, /* HashMapKeys[K, V]: HashMapKeys[String, Variable] */
&type_standard__hash_collection__HashMapValues__standard__String__nit__Variable, /* HashMapValues[K, V]: HashMapValues[String, Variable] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nit__Variable, /* HashMapIterator[K, V]: HashMapIterator[String, Variable] */
&type_nit__Variable, /* V: Variable */
&type_standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* HashMapNode[K, V]: HashMapNode[String, Variable] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* nullable N: nullable HashMapNode[String, Variable] */
&type_standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* N: HashMapNode[String, Variable] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nit__Variable, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, Variable]] */
}
};
/* runtime type HashMap[Variable, RuntimeVariable] */
const struct type type_standard__HashMap__nit__Variable__nit__RuntimeVariable = {
701,
"HashMap[Variable, RuntimeVariable]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__Variable__nit__RuntimeVariable,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
701, /* HashMap[Variable, RuntimeVariable] */
},
};
const struct types resolution_table_standard__HashMap__nit__Variable__nit__RuntimeVariable = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__Variable__nit__RuntimeVariable, /* HashMapKeys[K, V]: HashMapKeys[Variable, RuntimeVariable] */
&type_standard__hash_collection__HashMapValues__nit__Variable__nit__RuntimeVariable, /* HashMapValues[K, V]: HashMapValues[Variable, RuntimeVariable] */
&type_nit__Variable, /* K: Variable */
&type_standard__HashMapIterator__nit__Variable__nit__RuntimeVariable, /* HashMapIterator[K, V]: HashMapIterator[Variable, RuntimeVariable] */
&type_nit__RuntimeVariable, /* V: RuntimeVariable */
&type_standard__hash_collection__HashMapNode__nit__Variable__nit__RuntimeVariable, /* HashMapNode[K, V]: HashMapNode[Variable, RuntimeVariable] */
&type_nit__Variable, /* K: Variable */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Variable, /* K: Variable */
&type_nullable__standard__hash_collection__HashMapNode__nit__Variable__nit__RuntimeVariable, /* nullable N: nullable HashMapNode[Variable, RuntimeVariable] */
&type_standard__hash_collection__HashMapNode__nit__Variable__nit__RuntimeVariable, /* N: HashMapNode[Variable, RuntimeVariable] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Variable__nit__RuntimeVariable, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[Variable, RuntimeVariable]] */
}
};
/* runtime type HashMap[EscapeMark, String] */
const struct type type_standard__HashMap__nit__EscapeMark__standard__String = {
702,
"HashMap[EscapeMark, String]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__EscapeMark__standard__String,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
702, /* HashMap[EscapeMark, String] */
},
};
const struct types resolution_table_standard__HashMap__nit__EscapeMark__standard__String = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__EscapeMark__standard__String, /* HashMapKeys[K, V]: HashMapKeys[EscapeMark, String] */
&type_standard__hash_collection__HashMapValues__nit__EscapeMark__standard__String, /* HashMapValues[K, V]: HashMapValues[EscapeMark, String] */
&type_nit__EscapeMark, /* K: EscapeMark */
&type_standard__HashMapIterator__nit__EscapeMark__standard__String, /* HashMapIterator[K, V]: HashMapIterator[EscapeMark, String] */
&type_standard__String, /* V: String */
&type_standard__hash_collection__HashMapNode__nit__EscapeMark__standard__String, /* HashMapNode[K, V]: HashMapNode[EscapeMark, String] */
&type_nit__EscapeMark, /* K: EscapeMark */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__EscapeMark, /* K: EscapeMark */
&type_nullable__standard__hash_collection__HashMapNode__nit__EscapeMark__standard__String, /* nullable N: nullable HashMapNode[EscapeMark, String] */
&type_standard__hash_collection__HashMapNode__nit__EscapeMark__standard__String, /* N: HashMapNode[EscapeMark, String] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__EscapeMark__standard__String, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[EscapeMark, String]] */
}
};
/* runtime type HashMap[MClassType, Set[MType]] */
const struct type type_standard__HashMap__nit__MClassType__standard__Set__nit__MType = {
1777,
"HashMap[MClassType, Set[MType]]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MClassType__standard__Set__nit__MType,
7,
{
550, /* Map[MType, Set[MType]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1177, /* HashMap[MType, Set[MType]] */
1777, /* HashMap[MClassType, Set[MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassType__standard__Set__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassType__standard__Set__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MClassType, Set[MType]] */
&type_standard__hash_collection__HashMapValues__nit__MClassType__standard__Set__nit__MType, /* HashMapValues[K, V]: HashMapValues[MClassType, Set[MType]] */
&type_nit__MClassType, /* K: MClassType */
&type_standard__HashMapIterator__nit__MClassType__standard__Set__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MClassType, Set[MType]] */
&type_standard__Set__nit__MType, /* V: Set[MType] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__standard__Set__nit__MType, /* HashMapNode[K, V]: HashMapNode[MClassType, Set[MType]] */
&type_nit__MClassType, /* K: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassType, /* K: MClassType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__standard__Set__nit__MType, /* nullable N: nullable HashMapNode[MClassType, Set[MType]] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__standard__Set__nit__MType, /* N: HashMapNode[MClassType, Set[MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__standard__Set__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassType, Set[MType]]] */
}
};
/* runtime type HashMap[MType, Int] */
const struct type type_standard__HashMap__nit__MType__standard__Int = {
703,
"HashMap[MType, Int]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Int,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
703, /* HashMap[MType, Int] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[MType, Int] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Int, /* HashMapValues[K, V]: HashMapValues[MType, Int] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[MType, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Int, /* HashMapNode[K, V]: HashMapNode[MType, Int] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Int, /* nullable N: nullable HashMapNode[MType, Int] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Int, /* N: HashMapNode[MType, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Int]] */
}
};
/* runtime type HashMap[Phase, POSetElement[Phase]] */
const struct type type_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase = {
704,
"HashMap[Phase, POSetElement[Phase]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
704, /* HashMap[Phase, POSetElement[Phase]] */
},
};
const struct types resolution_table_standard__HashMap__nit__Phase__poset__POSetElement__nit__Phase = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__Phase__poset__POSetElement__nit__Phase, /* HashMapKeys[K, V]: HashMapKeys[Phase, POSetElement[Phase]] */
&type_standard__hash_collection__HashMapValues__nit__Phase__poset__POSetElement__nit__Phase, /* HashMapValues[K, V]: HashMapValues[Phase, POSetElement[Phase]] */
&type_nit__Phase, /* K: Phase */
&type_standard__HashMapIterator__nit__Phase__poset__POSetElement__nit__Phase, /* HashMapIterator[K, V]: HashMapIterator[Phase, POSetElement[Phase]] */
&type_poset__POSetElement__nit__Phase, /* V: POSetElement[Phase] */
&type_standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* HashMapNode[K, V]: HashMapNode[Phase, POSetElement[Phase]] */
&type_nit__Phase, /* K: Phase */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__Phase, /* K: Phase */
&type_nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* nullable N: nullable HashMapNode[Phase, POSetElement[Phase]] */
&type_standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* N: HashMapNode[Phase, POSetElement[Phase]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__Phase__poset__POSetElement__nit__Phase, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[Phase, POSetElement[Phase]]] */
}
};
/* runtime type HashMap[MModule, POSetElement[MModule]] */
const struct type type_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule = {
705,
"HashMap[MModule, POSetElement[MModule]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
705, /* HashMap[MModule, POSetElement[MModule]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__poset__POSetElement__nit__MModule = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__poset__POSetElement__nit__MModule, /* HashMapKeys[K, V]: HashMapKeys[MModule, POSetElement[MModule]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__poset__POSetElement__nit__MModule, /* HashMapValues[K, V]: HashMapValues[MModule, POSetElement[MModule]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__poset__POSetElement__nit__MModule, /* HashMapIterator[K, V]: HashMapIterator[MModule, POSetElement[MModule]] */
&type_poset__POSetElement__nit__MModule, /* V: POSetElement[MModule] */
&type_standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* HashMapNode[K, V]: HashMapNode[MModule, POSetElement[MModule]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* nullable N: nullable HashMapNode[MModule, POSetElement[MModule]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* N: HashMapNode[MModule, POSetElement[MModule]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__poset__POSetElement__nit__MModule, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, POSetElement[MModule]]] */
}
};
/* runtime type HashMap[MClassDef, POSetElement[MClassDef]] */
const struct type type_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
706,
"HashMap[MClassDef, POSetElement[MClassDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
706, /* HashMap[MClassDef, POSetElement[MClassDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassDef__poset__POSetElement__nit__MClassDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMapKeys[K, V]: HashMapKeys[MClassDef, POSetElement[MClassDef]] */
&type_standard__hash_collection__HashMapValues__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMapValues[K, V]: HashMapValues[MClassDef, POSetElement[MClassDef]] */
&type_nit__MClassDef, /* K: MClassDef */
&type_standard__HashMapIterator__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMapIterator[K, V]: HashMapIterator[MClassDef, POSetElement[MClassDef]] */
&type_poset__POSetElement__nit__MClassDef, /* V: POSetElement[MClassDef] */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* HashMapNode[K, V]: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_nit__MClassDef, /* K: MClassDef */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassDef, /* K: MClassDef */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* nullable N: nullable HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* N: HashMapNode[MClassDef, POSetElement[MClassDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassDef__poset__POSetElement__nit__MClassDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassDef, POSetElement[MClassDef]]] */
}
};
/* runtime type HashMap[MClassType, POSetElement[MClassType]] */
const struct type type_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType = {
1174,
"HashMap[MClassType, POSetElement[MClassType]]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
713, /* HashMap[MType, POSetElement[MType]] */
1174, /* HashMap[MClassType, POSetElement[MClassType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClassType__poset__POSetElement__nit__MClassType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMapKeys[K, V]: HashMapKeys[MClassType, POSetElement[MClassType]] */
&type_standard__hash_collection__HashMapValues__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMapValues[K, V]: HashMapValues[MClassType, POSetElement[MClassType]] */
&type_nit__MClassType, /* K: MClassType */
&type_standard__HashMapIterator__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMapIterator[K, V]: HashMapIterator[MClassType, POSetElement[MClassType]] */
&type_poset__POSetElement__nit__MClassType, /* V: POSetElement[MClassType] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* HashMapNode[K, V]: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_nit__MClassType, /* K: MClassType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClassType, /* K: MClassType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* nullable N: nullable HashMapNode[MClassType, POSetElement[MClassType]] */
&type_standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* N: HashMapNode[MClassType, POSetElement[MClassType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClassType__poset__POSetElement__nit__MClassType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClassType, POSetElement[MClassType]]] */
}
};
/* runtime type HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
const struct type type_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
707,
"HashMap[MModule, HashMap2[MType, String, nullable MProperty]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
707, /* HashMap[MModule, HashMap2[MType, String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* V: HashMap2[MType, String, nullable MProperty] */
&type_standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* N: HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__more_collections__HashMap2__nit__MType__standard__String__nullable__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap2[MType, String, nullable MProperty]]] */
}
};
/* runtime type HashMap[MGroup, POSetElement[MGroup]] */
const struct type type_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup = {
708,
"HashMap[MGroup, POSetElement[MGroup]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
708, /* HashMap[MGroup, POSetElement[MGroup]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MGroup__poset__POSetElement__nit__MGroup = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMapKeys[K, V]: HashMapKeys[MGroup, POSetElement[MGroup]] */
&type_standard__hash_collection__HashMapValues__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMapValues[K, V]: HashMapValues[MGroup, POSetElement[MGroup]] */
&type_nit__MGroup, /* K: MGroup */
&type_standard__HashMapIterator__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMapIterator[K, V]: HashMapIterator[MGroup, POSetElement[MGroup]] */
&type_poset__POSetElement__nit__MGroup, /* V: POSetElement[MGroup] */
&type_standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* HashMapNode[K, V]: HashMapNode[MGroup, POSetElement[MGroup]] */
&type_nit__MGroup, /* K: MGroup */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MGroup, /* K: MGroup */
&type_nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* nullable N: nullable HashMapNode[MGroup, POSetElement[MGroup]] */
&type_standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* N: HashMapNode[MGroup, POSetElement[MGroup]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MGroup__poset__POSetElement__nit__MGroup, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MGroup, POSetElement[MGroup]]] */
}
};
/* runtime type HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
const struct type type_standard__HashMap__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
709,
"HashMap[MType, HashMap[MProperty, Set[MMethodDef]]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
709, /* HashMap[MType, HashMap[MProperty, Set[MMethodDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* V: HashMap[MProperty, Set[MMethodDef]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* nullable N: nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* N: HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, HashMap[MProperty, Set[MMethodDef]]]] */
}
};
/* runtime type HashMap[MProperty, Set[MMethodDef]] */
const struct type type_standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
710,
"HashMap[MProperty, Set[MMethodDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
710, /* HashMap[MProperty, Set[MMethodDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MProperty__standard__Set__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MProperty, Set[MMethodDef]] */
&type_standard__hash_collection__HashMapValues__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MProperty, Set[MMethodDef]] */
&type_nit__MProperty, /* K: MProperty */
&type_standard__HashMapIterator__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MProperty, Set[MMethodDef]] */
&type_standard__Set__nit__MMethodDef, /* V: Set[MMethodDef] */
&type_standard__hash_collection__HashMapNode__nit__MProperty__standard__Set__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MProperty, Set[MMethodDef]] */
&type_nit__MProperty, /* K: MProperty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MProperty, /* K: MProperty */
&type_nullable__standard__hash_collection__HashMapNode__nit__MProperty__standard__Set__nit__MMethodDef, /* nullable N: nullable HashMapNode[MProperty, Set[MMethodDef]] */
&type_standard__hash_collection__HashMapNode__nit__MProperty__standard__Set__nit__MMethodDef, /* N: HashMapNode[MProperty, Set[MMethodDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MProperty__standard__Set__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MProperty, Set[MMethodDef]]] */
}
};
/* runtime type HashMap[MVirtualTypeProp, Int] */
const struct type type_standard__HashMap__nit__MVirtualTypeProp__standard__Int = {
1175,
"HashMap[MVirtualTypeProp, Int]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MVirtualTypeProp__standard__Int,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
711, /* HashMap[PropertyLayoutElement, Int] */
1175, /* HashMap[MVirtualTypeProp, Int] */
},
};
const struct types resolution_table_standard__HashMap__nit__MVirtualTypeProp__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MVirtualTypeProp__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[MVirtualTypeProp, Int] */
&type_standard__hash_collection__HashMapValues__nit__MVirtualTypeProp__standard__Int, /* HashMapValues[K, V]: HashMapValues[MVirtualTypeProp, Int] */
&type_nit__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_standard__HashMapIterator__nit__MVirtualTypeProp__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[MVirtualTypeProp, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__nit__MVirtualTypeProp__standard__Int, /* HashMapNode[K, V]: HashMapNode[MVirtualTypeProp, Int] */
&type_nit__MVirtualTypeProp, /* K: MVirtualTypeProp */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MVirtualTypeProp, /* K: MVirtualTypeProp */
&type_nullable__standard__hash_collection__HashMapNode__nit__MVirtualTypeProp__standard__Int, /* nullable N: nullable HashMapNode[MVirtualTypeProp, Int] */
&type_standard__hash_collection__HashMapNode__nit__MVirtualTypeProp__standard__Int, /* N: HashMapNode[MVirtualTypeProp, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MVirtualTypeProp__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MVirtualTypeProp, Int]] */
}
};
/* runtime type HashMap[PropertyLayoutElement, Int] */
const struct type type_standard__HashMap__nit__PropertyLayoutElement__standard__Int = {
711,
"HashMap[PropertyLayoutElement, Int]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__PropertyLayoutElement__standard__Int,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
711, /* HashMap[PropertyLayoutElement, Int] */
},
};
const struct types resolution_table_standard__HashMap__nit__PropertyLayoutElement__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__PropertyLayoutElement__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[PropertyLayoutElement, Int] */
&type_standard__hash_collection__HashMapValues__nit__PropertyLayoutElement__standard__Int, /* HashMapValues[K, V]: HashMapValues[PropertyLayoutElement, Int] */
&type_nit__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_standard__HashMapIterator__nit__PropertyLayoutElement__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[PropertyLayoutElement, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__nit__PropertyLayoutElement__standard__Int, /* HashMapNode[K, V]: HashMapNode[PropertyLayoutElement, Int] */
&type_nit__PropertyLayoutElement, /* K: PropertyLayoutElement */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__PropertyLayoutElement, /* K: PropertyLayoutElement */
&type_nullable__standard__hash_collection__HashMapNode__nit__PropertyLayoutElement__standard__Int, /* nullable N: nullable HashMapNode[PropertyLayoutElement, Int] */
&type_standard__hash_collection__HashMapNode__nit__PropertyLayoutElement__standard__Int, /* N: HashMapNode[PropertyLayoutElement, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__PropertyLayoutElement__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[PropertyLayoutElement, Int]] */
}
};
/* runtime type HashMap[MAttribute, Int] */
const struct type type_standard__HashMap__nit__MAttribute__standard__Int = {
1176,
"HashMap[MAttribute, Int]", /* class_name_string */
6,
0,
&resolution_table_standard__HashMap__nit__MAttribute__standard__Int,
7,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
711, /* HashMap[PropertyLayoutElement, Int] */
1176, /* HashMap[MAttribute, Int] */
},
};
const struct types resolution_table_standard__HashMap__nit__MAttribute__standard__Int = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MAttribute__standard__Int, /* HashMapKeys[K, V]: HashMapKeys[MAttribute, Int] */
&type_standard__hash_collection__HashMapValues__nit__MAttribute__standard__Int, /* HashMapValues[K, V]: HashMapValues[MAttribute, Int] */
&type_nit__MAttribute, /* K: MAttribute */
&type_standard__HashMapIterator__nit__MAttribute__standard__Int, /* HashMapIterator[K, V]: HashMapIterator[MAttribute, Int] */
&type_standard__Int, /* V: Int */
&type_standard__hash_collection__HashMapNode__nit__MAttribute__standard__Int, /* HashMapNode[K, V]: HashMapNode[MAttribute, Int] */
&type_nit__MAttribute, /* K: MAttribute */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MAttribute, /* K: MAttribute */
&type_nullable__standard__hash_collection__HashMapNode__nit__MAttribute__standard__Int, /* nullable N: nullable HashMapNode[MAttribute, Int] */
&type_standard__hash_collection__HashMapNode__nit__MAttribute__standard__Int, /* N: HashMapNode[MAttribute, Int] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MAttribute__standard__Int, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MAttribute, Int]] */
}
};
/* runtime type HashMap[MClass, POSetElement[MClass]] */
const struct type type_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass = {
712,
"HashMap[MClass, POSetElement[MClass]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
712, /* HashMap[MClass, POSetElement[MClass]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__poset__POSetElement__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, POSetElement[MClass]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, POSetElement[MClass]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, POSetElement[MClass]] */
&type_poset__POSetElement__nit__MClass, /* V: POSetElement[MClass] */
&type_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, POSetElement[MClass]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* nullable N: nullable HashMapNode[MClass, POSetElement[MClass]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* N: HashMapNode[MClass, POSetElement[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__poset__POSetElement__nit__MClass, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, POSetElement[MClass]]] */
}
};
/* runtime type HashMap[MType, POSetElement[MType]] */
const struct type type_standard__HashMap__nit__MType__poset__POSetElement__nit__MType = {
713,
"HashMap[MType, POSetElement[MType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__poset__POSetElement__nit__MType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
713, /* HashMap[MType, POSetElement[MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__poset__POSetElement__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__poset__POSetElement__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MType, POSetElement[MType]] */
&type_standard__hash_collection__HashMapValues__nit__MType__poset__POSetElement__nit__MType, /* HashMapValues[K, V]: HashMapValues[MType, POSetElement[MType]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__poset__POSetElement__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MType, POSetElement[MType]] */
&type_poset__POSetElement__nit__MType, /* V: POSetElement[MType] */
&type_standard__hash_collection__HashMapNode__nit__MType__poset__POSetElement__nit__MType, /* HashMapNode[K, V]: HashMapNode[MType, POSetElement[MType]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__poset__POSetElement__nit__MType, /* nullable N: nullable HashMapNode[MType, POSetElement[MType]] */
&type_standard__hash_collection__HashMapNode__nit__MType__poset__POSetElement__nit__MType, /* N: HashMapNode[MType, POSetElement[MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__poset__POSetElement__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, POSetElement[MType]]] */
}
};
/* runtime type HashMap[MType, Set[MType]] */
const struct type type_standard__HashMap__nit__MType__standard__Set__nit__MType = {
1177,
"HashMap[MType, Set[MType]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Set__nit__MType,
6,
{
550, /* Map[MType, Set[MType]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1177, /* HashMap[MType, Set[MType]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Set__nit__MType = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Set__nit__MType, /* HashMapKeys[K, V]: HashMapKeys[MType, Set[MType]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Set__nit__MType, /* HashMapValues[K, V]: HashMapValues[MType, Set[MType]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Set__nit__MType, /* HashMapIterator[K, V]: HashMapIterator[MType, Set[MType]] */
&type_standard__Set__nit__MType, /* V: Set[MType] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Set__nit__MType, /* HashMapNode[K, V]: HashMapNode[MType, Set[MType]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Set__nit__MType, /* nullable N: nullable HashMapNode[MType, Set[MType]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Set__nit__MType, /* N: HashMapNode[MType, Set[MType]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Set__nit__MType, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Set[MType]]] */
}
};
/* runtime type HashMap[MType, HashMap[String, nullable MProperty]] */
const struct type type_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
714,
"HashMap[MType, HashMap[String, nullable MProperty]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
714, /* HashMap[MType, HashMap[String, nullable MProperty]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[MType, HashMap[String, nullable MProperty]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[MType, HashMap[String, nullable MProperty]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[MType, HashMap[String, nullable MProperty]] */
&type_standard__HashMap__standard__String__nullable__nit__MProperty, /* V: HashMap[String, nullable MProperty] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* N: HashMapNode[MType, HashMap[String, nullable MProperty]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__HashMap__standard__String__nullable__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, HashMap[String, nullable MProperty]]] */
}
};
/* runtime type HashMap[String, nullable MProperty] */
const struct type type_standard__HashMap__standard__String__nullable__nit__MProperty = {
715,
"HashMap[String, nullable MProperty]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__standard__String__nullable__nit__MProperty,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
715, /* HashMap[String, nullable MProperty] */
},
};
const struct types resolution_table_standard__HashMap__standard__String__nullable__nit__MProperty = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__standard__String__nullable__nit__MProperty, /* HashMapKeys[K, V]: HashMapKeys[String, nullable MProperty] */
&type_standard__hash_collection__HashMapValues__standard__String__nullable__nit__MProperty, /* HashMapValues[K, V]: HashMapValues[String, nullable MProperty] */
&type_standard__String, /* K: String */
&type_standard__HashMapIterator__standard__String__nullable__nit__MProperty, /* HashMapIterator[K, V]: HashMapIterator[String, nullable MProperty] */
&type_nullable__nit__MProperty, /* V: nullable MProperty */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* HashMapNode[K, V]: HashMapNode[String, nullable MProperty] */
&type_standard__String, /* K: String */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__String, /* K: String */
&type_nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* nullable N: nullable HashMapNode[String, nullable MProperty] */
&type_standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* N: HashMapNode[String, nullable MProperty] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__standard__String__nullable__nit__MProperty, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[String, nullable MProperty]] */
}
};
/* runtime type HashMap[MClass, Set[MClass]] */
const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MClass = {
1178,
"HashMap[MClass, Set[MClass]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MClass,
6,
{
539, /* Map[MClass, Set[MClass]] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1178, /* HashMap[MClass, Set[MClass]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MClass__standard__Set__nit__MClass = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MClass__standard__Set__nit__MClass, /* HashMapKeys[K, V]: HashMapKeys[MClass, Set[MClass]] */
&type_standard__hash_collection__HashMapValues__nit__MClass__standard__Set__nit__MClass, /* HashMapValues[K, V]: HashMapValues[MClass, Set[MClass]] */
&type_nit__MClass, /* K: MClass */
&type_standard__HashMapIterator__nit__MClass__standard__Set__nit__MClass, /* HashMapIterator[K, V]: HashMapIterator[MClass, Set[MClass]] */
&type_standard__Set__nit__MClass, /* V: Set[MClass] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MClass, /* HashMapNode[K, V]: HashMapNode[MClass, Set[MClass]] */
&type_nit__MClass, /* K: MClass */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MClass, /* K: MClass */
&type_nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MClass, /* nullable N: nullable HashMapNode[MClass, Set[MClass]] */
&type_standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MClass, /* N: HashMapNode[MClass, Set[MClass]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MClass__standard__Set__nit__MClass, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MClass, Set[MClass]]] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
716,
"HashMap[MModule, HashMap[MType, Array[MMethodDef]]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
716, /* HashMap[MModule, HashMap[MType, Array[MMethodDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* V: HashMap[MType, Array[MMethodDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MMethodDef]]]] */
}
};
/* runtime type HashMap[MType, Array[MMethodDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
717,
"HashMap[MType, Array[MMethodDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
717, /* HashMap[MType, Array[MMethodDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MMethodDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MMethodDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MMethodDef]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MMethodDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MMethodDef]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MMethodDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MMethodDef]] */
&type_standard__Array__nit__MMethodDef, /* V: Array[MMethodDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MMethodDef]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* nullable N: nullable HashMapNode[MType, Array[MMethodDef]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* N: HashMapNode[MType, Array[MMethodDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MMethodDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MMethodDef]]] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
718,
"HashMap[MModule, HashMap[MType, Array[MAttributeDef]]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
718, /* HashMap[MModule, HashMap[MType, Array[MAttributeDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* V: HashMap[MType, Array[MAttributeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MAttributeDef]]]] */
}
};
/* runtime type HashMap[MType, Array[MAttributeDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
719,
"HashMap[MType, Array[MAttributeDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
719, /* HashMap[MType, Array[MAttributeDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MAttributeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MAttributeDef]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MAttributeDef]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MAttributeDef]] */
&type_standard__Array__nit__MAttributeDef, /* V: Array[MAttributeDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MAttributeDef]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* nullable N: nullable HashMapNode[MType, Array[MAttributeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* N: HashMapNode[MType, Array[MAttributeDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MAttributeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MAttributeDef]]] */
}
};
/* runtime type HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
const struct type type_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
720,
"HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
720, /* HashMap[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapKeys[K, V]: HashMapKeys[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__hash_collection__HashMapValues__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapValues[K, V]: HashMapValues[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_nit__MModule, /* K: MModule */
&type_standard__HashMapIterator__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapIterator[K, V]: HashMapIterator[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* V: HashMap[MType, Array[MVirtualTypeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapNode[K, V]: HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_nit__MModule, /* K: MModule */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MModule, /* K: MModule */
&type_nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* nullable N: nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* N: HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MModule__standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MModule, HashMap[MType, Array[MVirtualTypeDef]]]] */
}
};
/* runtime type HashMap[MType, Array[MVirtualTypeDef]] */
const struct type type_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
721,
"HashMap[MType, Array[MVirtualTypeDef]]", /* class_name_string */
5,
0,
&resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
721, /* HashMap[MType, Array[MVirtualTypeDef]] */
},
};
const struct types resolution_table_standard__HashMap__nit__MType__standard__Array__nit__MVirtualTypeDef = {
0, /* dummy */
{
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_standard__hash_collection__HashMapKeys__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapKeys[K, V]: HashMapKeys[MType, Array[MVirtualTypeDef]] */
&type_standard__hash_collection__HashMapValues__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapValues[K, V]: HashMapValues[MType, Array[MVirtualTypeDef]] */
&type_nit__MType, /* K: MType */
&type_standard__HashMapIterator__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapIterator[K, V]: HashMapIterator[MType, Array[MVirtualTypeDef]] */
&type_standard__Array__nit__MVirtualTypeDef, /* V: Array[MVirtualTypeDef] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* HashMapNode[K, V]: HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_nit__MType, /* K: MType */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
&type_nit__MType, /* K: MType */
&type_nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* nullable N: nullable HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* N: HashMapNode[MType, Array[MVirtualTypeDef]] */
&type_standard__NativeArray__nullable__standard__hash_collection__HashMapNode__nit__MType__standard__Array__nit__MVirtualTypeDef, /* NativeArray[nullable N]: NativeArray[nullable HashMapNode[MType, Array[MVirtualTypeDef]]] */
}
};
/* runtime type Array[String] */
const struct type type_standard__Array__standard__String = {
2394,
"Array[String]", /* class_name_string */
22,
0,
&resolution_table_standard__Array__standard__String,
23,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
180, /* Collection[String] */
138, /* Array[Comparable] */
139, /* Object */
280, /* Collection[Text] */
179, /* Collection[Object] */
292, /* Collection[Streamable] */
363, /* AbstractArrayRead[String] */
378, /* AbstractArrayRead[Text] */
360, /* AbstractArrayRead[Object] */
393, /* AbstractArrayRead[Streamable] */
558, /* AbstractArray[String] */
573, /* AbstractArray[Text] */
555, /* AbstractArray[Object] */
588, /* AbstractArray[Streamable] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2318, /* Array[Streamable] */
2376, /* Array[Text] */
2394, /* Array[String] */
},
};
const struct types resolution_table_standard__Array__standard__String = {
0, /* dummy */
{
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__NativeArray__standard__String, /* NativeArray[E]: NativeArray[String] */
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__String, /* E: String */
&type_standard__String, /* E: String */
&type_standard__Collection__standard__String, /* Collection[E]: Collection[String] */
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__String, /* E: String */
&type_standard__String, /* E: String */
&type_standard__Array__standard__String, /* Array[E]: Array[String] */
&type_standard__AbstractArray__standard__String, /* AbstractArray[E]: AbstractArray[String] */
&type_standard__array__ArrayIterator__standard__String, /* ArrayIterator[E]: ArrayIterator[String] */
}
};
/* runtime type nullable String */
const struct type type_nullable__standard__String = {
137,
"nullable String", /* class_name_string */
3,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[Phase] */
const struct type type_standard__Array__nit__Phase = {
2304,
"Array[Phase]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__Phase,
21,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
188, /* Collection[Phase] */
364, /* AbstractArrayRead[Phase] */
139, /* Object */
559, /* AbstractArray[Phase] */
179, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2304, /* Array[Phase] */
},
};
const struct types resolution_table_standard__Array__nit__Phase = {
0, /* dummy */
{
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__NativeArray__nit__Phase, /* NativeArray[E]: NativeArray[Phase] */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_nit__Phase, /* E: Phase */
&type_nit__Phase, /* E: Phase */
&type_standard__Collection__nit__Phase, /* Collection[E]: Collection[Phase] */
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_nit__Phase, /* E: Phase */
&type_nit__Phase, /* E: Phase */
&type_standard__Array__nit__Phase, /* Array[E]: Array[Phase] */
&type_standard__AbstractArray__nit__Phase, /* AbstractArray[E]: AbstractArray[Phase] */
&type_standard__array__ArrayIterator__nit__Phase, /* ArrayIterator[E]: ArrayIterator[Phase] */
}
};
/* runtime type Array[MModule] */
const struct type type_standard__Array__nit__MModule = {
2305,
"Array[MModule]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__MModule,
21,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
172, /* Collection[MModule] */
366, /* AbstractArrayRead[MModule] */
139, /* Object */
561, /* AbstractArray[MModule] */
179, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2305, /* Array[MModule] */
},
};
const struct types resolution_table_standard__Array__nit__MModule = {
0, /* dummy */
{
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__NativeArray__nit__MModule, /* NativeArray[E]: NativeArray[MModule] */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_nit__MModule, /* E: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Collection__nit__MModule, /* Collection[E]: Collection[MModule] */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_nit__MModule, /* E: MModule */
&type_nit__MModule, /* E: MModule */
&type_standard__Array__nit__MModule, /* Array[E]: Array[MModule] */
&type_standard__AbstractArray__nit__MModule, /* AbstractArray[E]: AbstractArray[MModule] */
&type_standard__array__ArrayIterator__nit__MModule, /* ArrayIterator[E]: ArrayIterator[MModule] */
}
};
/* runtime type Array[MClassDef] */
const struct type type_standard__Array__nit__MClassDef = {
2306,
"Array[MClassDef]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__MClassDef,
21,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
182, /* Collection[MClassDef] */
372, /* AbstractArrayRead[MClassDef] */
139, /* Object */
567, /* AbstractArray[MClassDef] */
179, /* Collection[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2306, /* Array[MClassDef] */
},
};
const struct types resolution_table_standard__Array__nit__MClassDef = {
0, /* dummy */
{
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__NativeArray__nit__MClassDef, /* NativeArray[E]: NativeArray[MClassDef] */
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_nit__MClassDef, /* E: MClassDef */
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Collection__nit__MClassDef, /* Collection[E]: Collection[MClassDef] */
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_nit__MClassDef, /* E: MClassDef */
&type_nit__MClassDef, /* E: MClassDef */
&type_standard__Array__nit__MClassDef, /* Array[E]: Array[MClassDef] */
&type_standard__AbstractArray__nit__MClassDef, /* AbstractArray[E]: AbstractArray[MClassDef] */
&type_standard__array__ArrayIterator__nit__MClassDef, /* ArrayIterator[E]: ArrayIterator[MClassDef] */
}
};
/* runtime type Array[MClassType] */
const struct type type_standard__Array__nit__MClassType = {
2395,
"Array[MClassType]", /* class_name_string */
22,
0,
&resolution_table_standard__Array__nit__MClassType,
23,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
165, /* nullable Array[nullable MType] */
173, /* Collection[MClassType] */
139, /* Object */
175, /* Collection[MType] */
179, /* Collection[Object] */
298, /* Collection[nullable MType] */
-1, /* empty */
373, /* AbstractArrayRead[MClassType] */
360, /* AbstractArrayRead[Object] */
383, /* AbstractArrayRead[MType] */
400, /* AbstractArrayRead[nullable MType] */
-1, /* empty */
555, /* AbstractArray[Object] */
568, /* AbstractArray[MClassType] */
578, /* AbstractArray[MType] */
595, /* AbstractArray[nullable MType] */
-1, /* empty */
2232, /* Array[Object] */
2292, /* Array[nullable MType] */
2375, /* Array[MType] */
2395, /* Array[MClassType] */
},
};
const struct types resolution_table_standard__Array__nit__MClassType = {
0, /* dummy */
{
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__NativeArray__nit__MClassType, /* NativeArray[E]: NativeArray[MClassType] */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_nit__MClassType, /* E: MClassType */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Collection__nit__MClassType, /* Collection[E]: Collection[MClassType] */
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_nit__MClassType, /* E: MClassType */
&type_nit__MClassType, /* E: MClassType */
&type_standard__Array__nit__MClassType, /* Array[E]: Array[MClassType] */
&type_standard__AbstractArray__nit__MClassType, /* AbstractArray[E]: AbstractArray[MClassType] */
&type_standard__array__ArrayIterator__nit__MClassType, /* ArrayIterator[E]: ArrayIterator[MClassType] */
}
};
/* runtime type Array[Comparable] */
const struct type type_standard__Array__standard__Comparable = {
138,
"Array[Comparable]", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Array[MGroup] */
const struct type type_standard__Array__nit__MGroup = {
2359,
"Array[MGroup]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__MGroup,
21,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
189, /* Collection[MGroup] */
324, /* Collection[nullable MGroup] */
139, /* Object */
405, /* AbstractArrayRead[MGroup] */
179, /* Collection[Object] */
433, /* AbstractArrayRead[nullable MGroup] */
600, /* AbstractArray[MGroup] */
628, /* AbstractArray[nullable MGroup] */
360, /* AbstractArrayRead[Object] */
2242, /* Array[nullable MGroup] */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2359, /* Array[MGroup] */
},
};
const struct types resolution_table_standard__Array__nit__MGroup = {
0, /* dummy */
{
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__NativeArray__nit__MGroup, /* NativeArray[E]: NativeArray[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Collection__nit__MGroup, /* Collection[E]: Collection[MGroup] */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_nit__MGroup, /* E: MGroup */
&type_nit__MGroup, /* E: MGroup */
&type_standard__Array__nit__MGroup, /* Array[E]: Array[MGroup] */
&type_standard__AbstractArray__nit__MGroup, /* AbstractArray[E]: AbstractArray[MGroup] */
&type_standard__array__ArrayIterator__nit__MGroup, /* ArrayIterator[E]: ArrayIterator[MGroup] */
}
};
/* runtime type Array[MClass] */
const struct type type_standard__Array__nit__MClass = {
2360,
"Array[MClass]", /* class_name_string */
20,
0,
&resolution_table_standard__Array__nit__MClass,
21,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
174, /* Collection[MClass] */
290, /* Collection[nullable MClass] */
139, /* Object */
367, /* AbstractArrayRead[MClass] */
179, /* Collection[Object] */
391, /* AbstractArrayRead[nullable MClass] */
562, /* AbstractArray[MClass] */
586, /* AbstractArray[nullable MClass] */
360, /* AbstractArrayRead[Object] */
2240, /* Array[nullable MClass] */
-1, /* empty */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
2232, /* Array[Object] */
2360, /* Array[MClass] */
},
};
const struct types resolution_table_standard__Array__nit__MClass = {
0, /* dummy */
{
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__NativeArray__nit__MClass, /* NativeArray[E]: NativeArray[MClass] */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_nit__MClass, /* E: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Collection__nit__MClass, /* Collection[E]: Collection[MClass] */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_nit__MClass, /* E: MClass */
&type_nit__MClass, /* E: MClass */
&type_standard__Array__nit__MClass, /* Array[E]: Array[MClass] */
&type_standard__AbstractArray__nit__MClass, /* AbstractArray[E]: AbstractArray[MClass] */
&type_standard__array__ArrayIterator__nit__MClass, /* ArrayIterator[E]: ArrayIterator[MClass] */
}
};
/* runtime type Array[MType] */
const struct type type_standard__Array__nit__MType = {
2375,
"Array[MType]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MType,
22,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
165, /* nullable Array[nullable MType] */
-1, /* empty */
139, /* Object */
175, /* Collection[MType] */
179, /* Collection[Object] */
298, /* Collection[nullable MType] */
-1, /* empty */
-1, /* empty */
360, /* AbstractArrayRead[Object] */
383, /* AbstractArrayRead[MType] */
400, /* AbstractArrayRead[nullable MType] */
-1, /* empty */
555, /* AbstractArray[Object] */
-1, /* empty */
578, /* AbstractArray[MType] */
595, /* AbstractArray[nullable MType] */
-1, /* empty */
2232, /* Array[Object] */
2292, /* Array[nullable MType] */
2375, /* Array[MType] */
},
};
const struct types resolution_table_standard__Array__nit__MType = {
0, /* dummy */
{
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__NativeArray__nit__MType, /* NativeArray[E]: NativeArray[MType] */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_nit__MType, /* E: MType */
&type_nit__MType, /* E: MType */
&type_standard__Collection__nit__MType, /* Collection[E]: Collection[MType] */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_nit__MType, /* E: MType */
&type_nit__MType, /* E: MType */
&type_standard__Array__nit__MType, /* Array[E]: Array[MType] */
&type_standard__AbstractArray__nit__MType, /* AbstractArray[E]: AbstractArray[MType] */
&type_standard__array__ArrayIterator__nit__MType, /* ArrayIterator[E]: ArrayIterator[MType] */
}
};
/* runtime type Array[MPropDef] */
const struct type type_standard__Array__nit__MPropDef = {
2377,
"Array[MPropDef]", /* class_name_string */
21,
0,
&resolution_table_standard__Array__nit__MPropDef,
22,
{
1, /* Array[nullable Object] */
2, /* SequenceRead[nullable Object] */
-1, /* empty */
374, /* AbstractArrayRead[MPropDef] */
139, /* Object */
276, /* Collection[MPropDef] */
179, /* Collection[Object] */
185, /* Collection[PropertyLayoutElement] */
291, /* Collection[nullable MPropDef] */
392, /* AbstractArrayRead[nullable MPropDef] */
360, /* AbstractArrayRead[Object] */
-1, /* empty */
418, /* AbstractArrayRead[PropertyLayoutElement] */
569, /* AbstractArray[MPropDef] */
555, /* AbstractArray[Object] */
587, /* AbstractArray[nullable MPropDef] */
-1, /* empty */
613, /* AbstractArray[PropertyLayoutElement] */
2239, /* Array[nullable MPropDef] */
2232, /* Array[Object] */
2324, /* Array[PropertyLayoutElement] */
2377, /* Array[MPropDef] */
},
};
const struct types resolution_table_standard__Array__nit__MPropDef = {
0, /* dummy */
{
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__Collection__nit__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_standard__Array__nit__MPropDef, /* Array[E]: Array[MPropDef] */
&type_standard__NativeArray__nit__MPropDef, /* NativeArray[E]: NativeArray[MPropDef] */
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__Collection__nit__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__Collection__nit__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_standard__Collection__nit__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_nit__MPropDef, /* E: MPropDef */
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__Collection__nit__MPropDef, /* Collection[E]: Collection[MPropDef] */
&type_standard__Array__nit__MPropDef, /* Array[E]: Array[MPropDef] */
&type_nit__MPropDef, /* E: MPropDef */
&type_nit__MPropDef, /* E: MPropDef */
&type_standard__Array__nit__MPropDef, /* Array[E]: Array[MPropDef] */
&type_standard__AbstractArray__nit__MPropDef, /* AbstractArray[E]: AbstractArray[MPropDef] */
&type_standard__array__ArrayIterator__nit__MPropDef, /* ArrayIterator[E]: ArrayIterator[MPropDef] */
}
};
/* runtime type Object */
const struct type type_standard__Object = {
139,
"Object", /* class_name_string */
4,
0,
NULL, /*NO RESOLUTIONS*/
5,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
},
};
/* runtime type Option */
const struct type type_opts__Option = {
140,
"Option", /* class_name_string */
1,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Phase */
const struct type type_nit__Phase = {
141,
"Phase", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MProject */
const struct type type_nit__MProject = {
1179,
"MProject", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1179, /* MProject */
},
};
/* runtime type MModule */
const struct type type_nit__MModule = {
1180,
"MModule", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1180, /* MModule */
},
};
/* runtime type MClass */
const struct type type_nit__MClass = {
1778,
"MClass", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
147, /* nullable MClass */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1778, /* MClass */
},
};
/* runtime type MProperty */
const struct type type_nit__MProperty = {
142,
"MProperty", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ModulePath */
const struct type type_nit__ModulePath = {
1181,
"ModulePath", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
157, /* nullable ModulePath */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
1181, /* ModulePath */
},
};
/* runtime type MClassDef */
const struct type type_nit__MClassDef = {
1182,
"MClassDef", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1182, /* MClassDef */
},
};
/* runtime type MPropDef */
const struct type type_nit__MPropDef = {
143,
"MPropDef", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type State */
const struct type type_nit__parser_work__State = {
722,
"State", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
722, /* State */
},
};
/* runtime type ExternFile */
const struct type type_nit__ExternFile = {
144,
"ExternFile", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Match */
const struct type type_standard__Match = {
723,
"Match", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
723, /* Match */
},
};
/* runtime type MType */
const struct type type_nit__MType = {
145,
"MType", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type ReduceAction */
const struct type type_nit__parser_work__ReduceAction = {
146,
"ReduceAction", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MParameter */
const struct type type_nit__MParameter = {
1183,
"MParameter", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1183, /* MParameter */
},
};
/* runtime type FlowContext */
const struct type type_nit__FlowContext = {
724,
"FlowContext", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
724, /* FlowContext */
},
};
/* runtime type CallSite */
const struct type type_nit__CallSite = {
725,
"CallSite", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
725, /* CallSite */
},
};
/* runtime type CodeWriter */
const struct type type_nit__CodeWriter = {
726,
"CodeWriter", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
726, /* CodeWriter */
},
};
/* runtime type RuntimeVariable */
const struct type type_nit__RuntimeVariable = {
727,
"RuntimeVariable", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
727, /* RuntimeVariable */
},
};
/* runtime type nullable MClass */
const struct type type_nullable__nit__MClass = {
147,
"nullable MClass", /* class_name_string */
0,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type nullable MPropDef */
const struct type type_nullable__nit__MPropDef = {
148,
"nullable MPropDef", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Streamable */
const struct type type_standard__Streamable = {
149,
"Streamable", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Variable */
const struct type type_nit__Variable = {
728,
"Variable", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
728, /* Variable */
},
};
/* runtime type AVarExpr */
const struct type type_nit__AVarExpr = {
2099,
"AVarExpr", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
12, /* AExpr */
24, /* nullable AExpr */
139, /* Object */
154, /* ANode */
2099, /* AVarExpr */
},
};
/* runtime type nullable MType */
const struct type type_nullable__nit__MType = {
150,
"nullable MType", /* class_name_string */
2,
1,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AEscapeExpr */
const struct type type_nit__AEscapeExpr = {
151,
"AEscapeExpr", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type Buffer */
const struct type type_standard__Buffer = {
152,
"Buffer", /* class_name_string */
2,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type MGroup */
const struct type type_nit__MGroup = {
1779,
"MGroup", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
158, /* nullable MGroup */
117, /* MEntity */
-1, /* empty */
-1, /* empty */
139, /* Object */
1779, /* MGroup */
},
};
/* runtime type AImport */
const struct type type_nit__AImport = {
153,
"AImport", /* class_name_string */
0,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type CodeFile */
const struct type type_nit__CodeFile = {
729,
"CodeFile", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
729, /* CodeFile */
},
};
/* runtime type Couple[MClass, AType] */
const struct type type_standard__Couple__nit__MClass__nit__AType = {
730,
"Couple[MClass, AType]", /* class_name_string */
5,
0,
&resolution_table_standard__Couple__nit__MClass__nit__AType,
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
730, /* Couple[MClass, AType] */
},
};
const struct types resolution_table_standard__Couple__nit__MClass__nit__AType = {
0, /* dummy */
{
&type_nit__MClass, /* F: MClass */
&type_nit__AType, /* S: AType */
}
};
/* runtime type ANode */
const struct type type_nit__ANode = {
154,
"ANode", /* class_name_string */
5,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type TComment */
const struct type type_nit__TComment = {
1780,
"TComment", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
10, /* Token */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1780, /* TComment */
},
};
/* runtime type AFormaldef */
const struct type type_nit__AFormaldef = {
1781,
"AFormaldef", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1781, /* AFormaldef */
},
};
/* runtime type ASuperclass */
const struct type type_nit__ASuperclass = {
1782,
"ASuperclass", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
-1, /* empty */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1782, /* ASuperclass */
},
};
/* runtime type Scope */
const struct type type_nit__scope__Scope = {
731,
"Scope", /* class_name_string */
5,
0,
NULL, /*NO RESOLUTIONS*/
6,
{
-1, /* empty */
-1, /* empty */
-1, /* empty */
-1, /* empty */
139, /* Object */
731, /* Scope */
},
};
/* runtime type PropertyLayoutElement */
const struct type type_nit__PropertyLayoutElement = {
155,
"PropertyLayoutElement", /* class_name_string */
3,
0,
NULL, /*DEAD*/
0, {}, /*DEAD TYPE*/
};
/* runtime type AExternCodeBlock */
const struct type type_nit__AExternCodeBlock = {
1981,
"AExternCodeBlock", /* class_name_string */
6,
0,
NULL, /*NO RESOLUTIONS*/
7,
{
27, /* nullable AExternCodeBlock */
11, /* Prod */
-1, /* empty */
-1, /* empty */
139, /* Object */
154, /* ANode */
1981, /* AExternCodeBlock */
},
};
