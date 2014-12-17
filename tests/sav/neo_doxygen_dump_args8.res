Reading ../contrib/neo_doxygen/tests/python-def/xml... Done.
3 files read.
Linking nodes...[s [u[J Done.
Saving 11 nodes...
---===DONE===---
Saving 18 edges...
Edge
=type=4:ROOT
=properties=JsonObject(0):
{}
----
=from=Node
=labels=Array(3):
10:python-def
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"python-def"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"python-def"}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"python-def"}
----
=to=Node
=labels=Array(3):
10:python-def
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"python-def"}


Edge
=type=6:PARENT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"python-def"}


Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"python-def"}
----
=to=Entity#12:namespacefoo
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","name":"foo"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","name":"foo"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"(self)","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
7:MModule
=properties=JsonObject(2):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","name":"foo"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}


Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#47:namespacefoo_1aab1e88a2212b202c20f3c9bd799a1ad4
=labels=Array(4):
10:python-def
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/foo.py:16,1--20,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["A bar function in the foo namespace.","By default, Doxygen recognizes anything in the docstrings as verbatim\ndetailed description."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
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
=from=Entity#47:namespacefoo_1aab1e88a2212b202c20f3c9bd799a1ad4
=labels=Array(4):
10:python-def
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/foo.py:16,1--20,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["A bar function in the foo namespace.","By default, Doxygen recognizes anything in the docstrings as verbatim\ndetailed description."],"is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
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
10:python-def
7:MEntity
5:MType
10:MSignature
=properties=JsonObject(0):
{}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
7:MEntity
5:MType
8:MRawType
=properties=JsonObject(1):
{"text":["def"]}


Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
10:python-def
7:MEntity
6:MGroup
=properties=JsonObject(4):
{"kind":"namespace","visibility":"","name":"foo","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}
----
=to=Node
=labels=Array(3):
10:python-def
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"python-def"}


Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"(self)","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}


Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
10:python-def
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"(self)","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}


Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}


Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
6:MClass
=properties=JsonObject(4):
{"kind":"class","visibility":"public","name":"(self)","location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1"}


Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}
----
=to=Entity#0:
=labels=Array(4):
10:python-def
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
10:python-def
7:MEntity
9:MProperty
7:MMethod
=properties=JsonObject(3):
{"visibility":"public","is_init":false,"name":"bar"}
----
=to=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}


Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
10:python-def
7:MEntity
9:MClassDef
=properties=JsonObject(3):
{"location":"%SOURCE_DIRECTORY%\/foo.py:1,1--1,1","is_intro":true,"name":"(self)"}
----
=to=Entity#47:namespacefoo_1aab1e88a2212b202c20f3c9bd799a1ad4
=labels=Array(4):
10:python-def
7:MEntity
8:MPropDef
10:MMethodDef
=properties=JsonObject(8):
{"location":"%SOURCE_DIRECTORY%\/foo.py:16,1--20,1","is_intern":false,"is_extern":false,"is_abstract":false,"visibility":"public","name":"bar","mdoc":["A bar function in the foo namespace.","By default, Doxygen recognizes anything in the docstrings as verbatim\ndetailed description."],"is_intro":true}


---===DONE===---
