# 		  +-+      +-+
#                 |X|      |Y|
#                 +-\      /-/
#                 \  -\   / |
#                  |   \ /  /
#                  \    -\ |
#                   |  /  -X
#                   +-/   /-\
#                   |A|   |B|
#                   \-+   +-/
#                    \     |
#                     \    /
#                      \  |
#                       \-+
#                       |C|
#                       +-+

module test_module_fail
class X
end

class Y
end

class A
	super X
	super Y
end

class B
	super Y
	super X
end

class C
	super A
	super B
end

