# Graph
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


