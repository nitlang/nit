Reading ../contrib/neo_doxygen/tests/root-namespace/xml... Done.
3 files read.
Linking nodes...[s [u[J Done.
Saving 6 nodes...
---===DONE===---
Saving 9 edges...
Edge
=type=4:ROOT
=properties=JsonObject(0):
{}
----
=from=Node
=labels=Array(3):
14:root-namespace
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"root-namespace"}
----
=to=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"root-namespace"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"root-namespace"}
----
=to=Node
=labels=Array(3):
14:root-namespace
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"root-namespace"}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#9:class_foo
=labels=Array(3):
14:root-namespace
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"Foo","location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","mdoc":["A class in the root namespace"]}
----
=to=Entity#0:
=labels=Array(4):
14:root-namespace
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"Foo"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
14:root-namespace
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"Foo"}
----
=to=Entity#9:class_foo
=labels=Array(3):
14:root-namespace
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"Foo","location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","mdoc":["A class in the root namespace"]}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","is_intro":true,"name":"Foo","mdoc":["A class in the root namespace"]}
----
=to=Entity#0:
=labels=Array(4):
14:root-namespace
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"Foo"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","is_intro":true,"name":"Foo","mdoc":["A class in the root namespace"]}
----
=to=Entity#9:class_foo
=labels=Array(3):
14:root-namespace
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"Foo","location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","mdoc":["A class in the root namespace"]}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"root-namespace"}
----
=to=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:1,1--1,1","name":"Foo"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:1,1--1,1","name":"Foo"}
----
=to=Entity#9:class_foo
=labels=Array(3):
14:root-namespace
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"package","name":"Foo","location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","mdoc":["A class in the root namespace"]}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:1,1--1,1","name":"Foo"}
----
=to=Entity#0:
=labels=Array(3):
14:root-namespace
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"%SOURCE_DIRECTORY%\/Foo.java:19,1--19,1","is_intro":true,"name":"Foo","mdoc":["A class in the root namespace"]}


---===DONE===---
