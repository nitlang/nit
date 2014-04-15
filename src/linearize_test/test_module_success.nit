#         +-+        +-+        +-+      +-+        +-+
#         |A|        |B|        |C|      |D|        |E|
#         +-+\       +\+        +/+      +++        +/+
#          \  --\     |\        /         X         /
#           \    -\   | \      /         | |      /-
#            \     --\|  \    |          / \     /
#             \       +-\ \   /         |   |   /
#              \      |  -\\ /          /   | /-
#               |     |    --\         |    \/
#               \     |    / ---\      /    /|
#                \    |   /    \ -\   |   /- |
#                 \   |  |      \  --\/  /   \
#                  \  |  /       \   |--X     |
#                   \ | /         \  //- -\   \
#                    \|/           \|/     --\ |
#                    +/-+         +-X+       +-++
#                    |K1|         |K2|       |K3|
#                    +--\         ++-+       +-/+
#                        -\        /       /---
#                          --\    |     /--
#                             -\  | /---
#                               -+++
#                                |Z|
#                                +-+

module test_module_success

class A
end

class B
end

class C
end

class D
end

class E
end

class K1
	super A
	super B
	super C
end

class K2
	super D
	super B
	super E
end

class K3
	super D
	super A
end

class Z
	super K1
	super K2
	super K3
end


