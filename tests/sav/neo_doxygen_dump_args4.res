Reading ../contrib/neo_doxygen/tests/java-project/xml... Done.
15 files read.
Linking nodes...[s [u[J Done.
Saving 58 nodes...
---===DONE===---
Saving 85 edges...
Edge
=type=4:ROOT
=properties=JsonObject(0):
{}
----
=from=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}


Edge
=type=6:PARENT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespaceorg
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"org","location":"\/dev\/null:1,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Entity#12:namespaceorg
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"org","location":"\/dev\/null:1,1--1,1"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:1,1--1,1","name":"A"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:1,1--1,1","name":"A"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_a
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"abstract class","visibility":"public","name":"A","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1"}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:1,1--1,1","name":"A"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:1,1--1,1","name":"B"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:1,1--1,1","name":"B"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_b
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"B","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1"}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:1,1--1,1","name":"B"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:1,1--1,1","name":"C","mdoc":["An interface."]}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:1,1--1,1","name":"C","mdoc":["An interface."]}
----
=to=Entity#36:interfaceorg_1_1example_1_1foo_1_1_c
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"interface","visibility":"public","name":"C","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","mdoc":["An interface."]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:1,1--1,1","name":"C","mdoc":["An interface."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:1,1--1,1","name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:1,1--1,1","name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}
----
=to=Entity#42:classorg_1_1example_1_1foo_1_1_empty_class
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"EmptyClass","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","mdoc":["This class is empty and is only visible in this package."]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:1,1--1,1","name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","is_intro":true,"name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["int"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["EmptyClass"]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_a_1add415ae4129969055d678c7e7e048852
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:22,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["Does something..."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}


Edge
=type=9:SIGNATURE
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_a_1add415ae4129969055d678c7e7e048852
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:22,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["Does something..."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}


Edge
=type=9:PARAMETER
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}


Edge
=type=9:PARAMETER
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}


Edge
=type=10:RETURNTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["abstract boolean"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["int"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["EmptyClass"]}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#32:classorg_1_1example_1_1foo_1_1_a
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"abstract class","visibility":"public","name":"A","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"A"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"A"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_a
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"abstract class","visibility":"public","name":"A","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1"}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"A"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_a
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"abstract class","visibility":"public","name":"A","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:18,1--23,1","is_intro":true,"name":"A"}
----
=to=Entity#67:classorg_1_1example_1_1foo_1_1_a_1add415ae4129969055d678c7e7e048852
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:22,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["Does something..."],"is_intro":true}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1ac6b627949b10b9357eefc0cafcae1d87
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:19,1---1,1","visibility":"protected","name":"qux","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"protected","name":"qux"}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1ac6b627949b10b9357eefc0cafcae1d87
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:19,1---1,1","visibility":"protected","name":"qux","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["String"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["int"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["EmptyClass"]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a11e157943665cc9e3a9be1502ebeb3b5
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(7):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:21,1--23,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}


Edge
=type=9:SIGNATURE
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a11e157943665cc9e3a9be1502ebeb3b5
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(7):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:21,1--23,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}


Edge
=type=9:PARAMETER
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}


Edge
=type=9:PARAMETER
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}


Edge
=type=10:RETURNTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(1):
{"parameter_names":["x","y"]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["boolean"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":0,"name":"x"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["int"]}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
10:MParameter
=properties=JsonObject(3):
{"is_vararg":false,"rank":1,"name":"y"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["EmptyClass"]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a733f4e076f29c7d0c41ed258199ea1d9
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:28,1--28,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["Some overriden documentation."],"is_intro":false}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"baz"}


Edge
=type=9:SIGNATURE
=properties=JsonObject(0):
{}
----
=from=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a733f4e076f29c7d0c41ed258199ea1d9
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:28,1--28,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["Some overriden documentation."],"is_intro":false}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(0):
{}


Edge
=type=10:RETURNTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(0):
{}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["void"]}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#32:classorg_1_1example_1_1foo_1_1_b
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"B","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"B"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"B"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_b
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"B","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1"}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"B"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#32:classorg_1_1example_1_1foo_1_1_b
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"B","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1"}


Edge
=type=8:INHERITS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"A"}


Edge
=type=8:INHERITS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"C"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"protected","name":"qux"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"protected","name":"qux"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#67:classorg_1_1example_1_1foo_1_1_b_1ac6b627949b10b9357eefc0cafcae1d87
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:19,1---1,1","visibility":"protected","name":"qux","is_intro":true}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a11e157943665cc9e3a9be1502ebeb3b5
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(7):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:21,1--23,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","is_intro":true}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:18,1--29,1","is_intro":true,"name":"B"}
----
=to=Entity#67:classorg_1_1example_1_1foo_1_1_b_1a733f4e076f29c7d0c41ed258199ea1d9
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/B.java:28,1--28,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["Some overriden documentation."],"is_intro":false}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#42:classorg_1_1example_1_1foo_1_1_empty_class
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"EmptyClass","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","mdoc":["This class is empty and is only visible in this package."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"EmptyClass"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"EmptyClass"}
----
=to=Entity#42:classorg_1_1example_1_1foo_1_1_empty_class
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"EmptyClass","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","mdoc":["This class is empty and is only visible in this package."]}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","is_intro":true,"name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"EmptyClass"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","is_intro":true,"name":"EmptyClass","mdoc":["This class is empty and is only visible in this package."]}
----
=to=Entity#42:classorg_1_1example_1_1foo_1_1_empty_class
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"EmptyClass","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/EmptyClass.java:21,1--21,1","mdoc":["This class is empty and is only visible in this package."]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a4e97061eb40b045e820de05b33c43d21
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(5):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:25,1---1,1","visibility":"public","name":"THE_ANSWER","mdoc":["\u000e2\u00080\u0009cAnswer to the Ultimate Question of Life, the Universe, and Everything.","\u000e2\u00080\u0009c"],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"THE_ANSWER"}


Edge
=type=4:TYPE
=properties=JsonObject(0):
{}
----
=from=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a4e97061eb40b045e820de05b33c43d21
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(5):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:25,1---1,1","visibility":"public","name":"THE_ANSWER","mdoc":["\u000e2\u00080\u0009cAnswer to the Ultimate Question of Life, the Universe, and Everything.","\u000e2\u00080\u0009c"],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["final long"]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a28ac7ce349ebb3e4a7747a8dd951582b
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:30,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["A function with implicit modifiers."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"baz"}


Edge
=type=9:SIGNATURE
=properties=JsonObject(0):
{}
----
=from=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a28ac7ce349ebb3e4a7747a8dd951582b
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:30,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["A function with implicit modifiers."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(0):
{}


Edge
=type=10:RETURNTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(0):
{}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["void"]}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#36:interfaceorg_1_1example_1_1foo_1_1_c
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"interface","visibility":"public","name":"C","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","mdoc":["An interface."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"C"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"C"}
----
=to=Entity#36:interfaceorg_1_1example_1_1foo_1_1_c
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"interface","visibility":"public","name":"C","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","mdoc":["An interface."]}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"C"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#36:interfaceorg_1_1example_1_1foo_1_1_c
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"interface","visibility":"public","name":"C","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","mdoc":["An interface."]}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"THE_ANSWER"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"THE_ANSWER"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a4e97061eb40b045e820de05b33c43d21
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(5):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:25,1---1,1","visibility":"public","name":"THE_ANSWER","mdoc":["\u000e2\u00080\u0009cAnswer to the Ultimate Question of Life, the Universe, and Everything.","\u000e2\u00080\u0009c"],"is_intro":true}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"baz"}


Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"baz"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:21,1--31,1","is_intro":true,"name":"C","mdoc":["An interface."]}
----
=to=Entity#71:interfaceorg_1_1example_1_1foo_1_1_c_1a28ac7ce349ebb3e4a7747a8dd951582b
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/C.java:30,1--1,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"baz","mdoc":["A function with implicit modifiers."],"is_intro":true}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespaceorg
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"org","location":"\/dev\/null:1,1--1,1"}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}


Edge
=type=6:PARENT
=properties=JsonObject(0):
{}
----
=from=Entity#23:namespaceorg_1_1example
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"example","location":"\/dev\/null:1,1--1,1"}
----
=to=Entity#12:namespaceorg
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"org","location":"\/dev\/null:1,1--1,1"}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespaceorg
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"org","location":"\/dev\/null:1,1--1,1"}
----
=to=Entity#23:namespaceorg_1_1example
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"example","location":"\/dev\/null:1,1--1,1"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#23:namespaceorg_1_1example
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"example","location":"\/dev\/null:1,1--1,1"}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}


Edge
=type=6:PARENT
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Entity#23:namespaceorg_1_1example
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"example","location":"\/dev\/null:1,1--1,1"}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#23:namespaceorg_1_1example
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"example","location":"\/dev\/null:1,1--1,1"}
----
=to=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#30:namespaceorg_1_1example_1_1foo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/org\/example\/foo\/A.java:16,1--1,1"}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}


---===DONE===---
