Reading ../contrib/neo_doxygen/tests/inner-class/xml... Done.
4 files read.
Linking nodes...[s [u[J Done.
Saving 11 nodes...
---===DONE===---
Saving 21 edges...
Edge
=type=4:ROOT
=properties=JsonObject(0):
{}
----
=from=Node
=labels=Array(3):
11:inner-class
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"inner-class"}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"inner-class"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"inner-class"}
----
=to=Node
=labels=Array(3):
11:inner-class
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"inner-class"}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#17:class_outer_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","mdoc":["A class with an inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass"}
----
=to=Entity#17:class_outer_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","mdoc":["A class with an inner class."]}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}
----
=to=Entity#17:class_outer_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","mdoc":["A class with an inner class."]}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
9:MProperty
11:MInnerClass
=properties=JsonObject(2):
{"visibility":"public","name":"InnerClass"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
9:MProperty
11:MInnerClass
=properties=JsonObject(2):
{"visibility":"public","name":"InnerClass"}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
8:MPropDef
14:MInnerClassDef
=properties=JsonObject(4):
{"location":"\/dev\/null:1,1--1,1","name":"InnerClass","visibility":"public","is_intro":true}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
8:MPropDef
14:MInnerClassDef
=properties=JsonObject(4):
{"location":"\/dev\/null:1,1--1,1","name":"InnerClass","visibility":"public","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
9:MProperty
11:MInnerClass
=properties=JsonObject(2):
{"visibility":"public","name":"InnerClass"}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
8:MPropDef
14:MInnerClassDef
=properties=JsonObject(4):
{"location":"\/dev\/null:1,1--1,1","name":"InnerClass","visibility":"public","is_intro":true}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","is_intro":true,"name":"OuterClass::InnerClass","mdoc":["An instance (non-static) inner class."]}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
9:MProperty
11:MInnerClass
=properties=JsonObject(2):
{"visibility":"public","name":"InnerClass"}
----
=to=Entity#33:class_outer_class_1_1_inner_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass::InnerClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","mdoc":["An instance (non-static) inner class."]}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#33:class_outer_class_1_1_inner_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass::InnerClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","mdoc":["An instance (non-static) inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass::InnerClass"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass::InnerClass"}
----
=to=Entity#33:class_outer_class_1_1_inner_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass::InnerClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","mdoc":["An instance (non-static) inner class."]}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","is_intro":true,"name":"OuterClass::InnerClass","mdoc":["An instance (non-static) inner class."]}
----
=to=Entity#0:
=labels=Array(4):
11:inner-class
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"OuterClass::InnerClass"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","is_intro":true,"name":"OuterClass::InnerClass","mdoc":["An instance (non-static) inner class."]}
----
=to=Entity#33:class_outer_class_1_1_inner_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass::InnerClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","mdoc":["An instance (non-static) inner class."]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"inner-class"}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:1,1--1,1","name":"OuterClass"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:1,1--1,1","name":"OuterClass"}
----
=to=Entity#17:class_outer_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","mdoc":["A class with an inner class."]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:1,1--1,1","name":"OuterClass"}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:19,1--24,1","is_intro":true,"name":"OuterClass","mdoc":["A class with an inner class."]}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:1,1--1,1","name":"OuterClass"}
----
=to=Entity#33:class_outer_class_1_1_inner_class
=labels=Array(3):
11:inner-class
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"OuterClass::InnerClass","location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","mdoc":["An instance (non-static) inner class."]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:1,1--1,1","name":"OuterClass"}
----
=to=Entity#0:
=labels=Array(3):
11:inner-class
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/OuterClass.java:23,1--23,1","is_intro":true,"name":"OuterClass::InnerClass","mdoc":["An instance (non-static) inner class."]}


---===DONE===---
