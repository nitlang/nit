All entities, including fictive ones:
 list:
  MMethodDef: 49 (49.49%)
  MClassDef: 21 (21.21%)
  MClass: 10 (10.10%)
  MMethod: 9 (9.09%)
  MModule: 5 (5.05%)
  MGroup: 2 (2.02%)
  MPackage: 2 (2.02%)
  Model: 1 (1.01%)
All entities:
 list:
  MMethodDef: 49 (49.49%)
  MClassDef: 21 (21.21%)
  MClass: 10 (10.10%)
  MMethod: 9 (9.09%)
  MModule: 5 (5.05%)
  MGroup: 2 (2.02%)
  MPackage: 2 (2.02%)
  Model: 1 (1.01%)

All non-private entities:
 list:
  MMethodDef: 14 (30.43%)
  MClassDef: 11 (23.91%)
  MMethod: 6 (13.04%)
  MClass: 5 (10.86%)
  MModule: 5 (10.86%)
  MGroup: 2 (4.34%)
  MPackage: 2 (4.34%)
  Model: 1 (2.17%)

All documented non-private entities:
 list:

All public entities:
 list:
  MMethodDef: 14 (30.43%)
  MClassDef: 11 (23.91%)
  MMethod: 6 (13.04%)
  MClass: 5 (10.86%)
  MModule: 5 (10.86%)
  MGroup: 2 (4.34%)
  MPackage: 2 (4.34%)
  Model: 1 (2.17%)

All documented public entities:
 list:

Names:

# Classes of entities
 population: 7
 minimum value: 2
 maximum value: 49
 total value: 98
 average value: 14.00
 distribution:
  <=2: sub-population=2 (28.57%); cumulated value=4 (4.08%)
  <=8: sub-population=1 (14.28%); cumulated value=5 (5.10%)
  <=16: sub-population=2 (28.57%); cumulated value=19 (19.38%)
  <=32: sub-population=1 (14.28%); cumulated value=21 (21.42%)
  <=64: sub-population=1 (14.28%); cumulated value=49 (50.00%)
 list:
  MMethodDef: 49 (50.00%)
  MClassDef: 21 (21.42%)
  MClass: 10 (10.20%)
  MMethod: 9 (9.18%)
  MModule: 5 (5.10%)
  MGroup: 2 (2.04%)
  MPackage: 2 (2.04%)

# Name length of entities
 population: 98
 minimum value: 5
 maximum value: 44
 total value: 1762
 average value: 17.97
 distribution:
  <=5: sub-population=1 (1.02%); cumulated value=5 (0.28%)
  <=10: sub-population=17 (17.34%); cumulated value=141 (8.00%)
  <=20: sub-population=48 (48.97%); cumulated value=706 (40.06%)
  <=40: sub-population=30 (30.61%); cumulated value=822 (46.65%)
  <=80: sub-population=2 (2.04%); cumulated value=88 (4.99%)
 list:
  names1::names1$names::n0::P0$names::n0::P::p: 44 (2.49%)
  names1::names1$names::n0::P0$names::n0::A::z: 44 (2.49%)
  names1::names1$names::A0$names::n0::A::z: 40 (2.27%)
  names1::names1$names::A0$names::n0::P::p: 40 (2.27%)
  names1::names1$names::n0::P0$names::A::a: 40 (2.27%)
  names1::names1$names::A0$names::A::a: 36 (2.04%)
  names1::names1$P1$names::n0::P::p: 33 (1.87%)
  names1::names1$P1$names::n0::A::z: 33 (1.87%)
  names::n1$::n0::P0$::n0::A::z: 29 (1.64%)
  names1::names1$P1$names::A::a: 29 (1.64%)
  ...
  names::n3: 9 (0.51%)
  names::n0: 9 (0.51%)
  names::A: 8 (0.45%)
  names$A0: 8 (0.45%)
  names$A1: 8 (0.45%)
  names$A: 7 (0.39%)
  names1>: 7 (0.39%)
  names1: 6 (0.34%)
  names>: 6 (0.34%)
  names: 5 (0.28%)

# All entities
names	MPackage	names	Group of modules used to test various full_name configurations and conflicts.
names>	MGroup	names	Group of modules used to test various full_name configurations and conflicts.
names::n3	MModule	names/n3.nit:15,1--35,3	The bottom module
names::n3$A1	MClassDef	names/n3.nit:21,1--27,3	a refinement of a subclass in a submodule
names::n3$A1$A::a	MMethodDef	names/n3.nit:23,2--24,19	a refinement (3 distinct modules)
names::n3$A1$::n0::P::p	MMethodDef	names/n3.nit:25,2--26,19	a refinement (3 distinct modules)
names::n3$::n1::P1	MClassDef	names/n3.nit:29,1--35,3	a refinement of a subclass in a submodule
names::n3$::n1::P1$A::a	MMethodDef	names/n3.nit:31,2--32,19	a refinement (3 distinct modules)
names::n3$::n1::P1$::n0::P::p	MMethodDef	names/n3.nit:33,2--34,19	a refinement (3 distinct modules)
names::n0	MModule	names/n0.nit:15,1--67,3	Root module
names::Object	MClass	names/n0.nit:20,1--22,3	Root interface
names$Object	MClassDef	names/n0.nit:20,1--22,3	Root interface
names::Object::init	MMethod	names/n0.nit:20,1--22,3	
names$Object$init	MMethodDef	names/n0.nit:20,1--22,3	
names::A	MClass	names/n0.nit:24,1--31,3	A public class
names$A	MClassDef	names/n0.nit:24,1--31,3	A public class
names::A::a	MMethod	names/n0.nit:26,2--27,13	A public method in a public class
names$A$a	MMethodDef	names/n0.nit:26,2--27,13	A public method in a public class
names::n0::A::z	MMethod	names/n0.nit:29,2--30,21	A private method in a public class
names$A$z	MMethodDef	names/n0.nit:29,2--30,21	A private method in a public class
names::A0	MClass	names/n0.nit:33,1--46,3	A public subclass in the same module
names$A0	MClassDef	names/n0.nit:33,1--46,3	A public subclass in the same module
names$A0$A::a	MMethodDef	names/n0.nit:38,2--39,19	Redefinition it the same module of a public method
names$A0$::n0::A::z	MMethodDef	names/n0.nit:41,2--42,19	Redefinition it the same module of a private method
names$A0$::n0::P::p	MMethodDef	names/n0.nit:44,2--45,19	Redefinition it the same module of a private method
names::n0::P	MClass	names/n0.nit:48,1--52,3	A private class
names::n0$P	MClassDef	names/n0.nit:48,1--52,3	A private class
names::n0::P::p	MMethod	names/n0.nit:50,2--51,13	A private method in a private class
names::n0$P$p	MMethodDef	names/n0.nit:50,2--51,13	A private method in a private class
names::n0::P0	MClass	names/n0.nit:54,1--67,3	A private subclass introduced in the same module
names::n0$P0	MClassDef	names/n0.nit:54,1--67,3	A private subclass introduced in the same module
names::n0$P0$A::a	MMethodDef	names/n0.nit:59,2--60,19	Redefinition it the same module of a public method
names::n0$P0$::n0::A::z	MMethodDef	names/n0.nit:62,2--63,19	Redefinition it the same module of a private method
names::n0$P0$::n0::P::p	MMethodDef	names/n0.nit:65,2--66,19	Redefinition it the same module of a private method
names::n1	MModule	names/n1.nit:15,1--90,3	Second module
names::n1$A	MClassDef	names/n1.nit:20,1--30,3	A refinement of a class
names::n1$A$a	MMethodDef	names/n1.nit:22,2--23,19	A refinement in the same class
names::n1$A$z	MMethodDef	names/n1.nit:25,2--26,19	A refinement in the same class
names::n1::A::b	MMethod	names/n1.nit:28,2--29,13	A public method introduced in a refinement
names::n1$A$b	MMethodDef	names/n1.nit:28,2--29,13	A public method introduced in a refinement
names::n1$A0	MClassDef	names/n1.nit:32,1--42,3	A refinement of a subclass
names::n1$A0$A::a	MMethodDef	names/n1.nit:34,2--35,19	A refinement+redefinition
names::n1$A0$::n0::A::z	MMethodDef	names/n1.nit:37,2--38,19	A refinement+redefinition
names::n1$A0$::n0::P::p	MMethodDef	names/n1.nit:40,2--41,19	A refinement+redefinition
names::A1	MClass	names/n1.nit:44,1--57,3	A subclass introduced in a submodule
names$A1	MClassDef	names/n1.nit:44,1--57,3	A subclass introduced in a submodule
names$A1$A::a	MMethodDef	names/n1.nit:49,2--50,19	A redefinition in a subclass from a different module
names$A1$::n0::A::z	MMethodDef	names/n1.nit:52,2--53,19	A redefinition in a subclass from a different module
names$A1$::n0::P::p	MMethodDef	names/n1.nit:55,2--56,19	A redefinition in a subclass from a different module
names::n1$::n0::P	MClassDef	names/n1.nit:59,1--63,3	A refinement of a class
names::n1$::n0::P$p	MMethodDef	names/n1.nit:61,2--62,19	A refinement in the same class
names::n1$::n0::P0	MClassDef	names/n1.nit:65,1--75,3	A refinement of a subclass
names::n1$::n0::P0$A::a	MMethodDef	names/n1.nit:67,2--68,19	A refinement+redefinition
names::n1$::n0::P0$::n0::A::z	MMethodDef	names/n1.nit:70,2--71,19	A refinement+redefinition
names::n1$::n0::P0$::n0::P::p	MMethodDef	names/n1.nit:73,2--74,19	A refinement+redefinition
names::n1::P1	MClass	names/n1.nit:77,1--90,3	A private subclass introduced in a different module
names::n1$P1	MClassDef	names/n1.nit:77,1--90,3	A private subclass introduced in a different module
names::n1$P1$A::a	MMethodDef	names/n1.nit:82,2--83,19	A redefinition in a subclass from a different module
names::n1$P1$::n0::A::z	MMethodDef	names/n1.nit:85,2--86,19	A redefinition in a subclass from a different module
names::n1$P1$::n0::P::p	MMethodDef	names/n1.nit:88,2--89,19	A redefinition in a subclass from a different module
names::n2	MModule	names/n2.nit:15,1--33,3	A alternative second module, used to make name conflicts
names::n2$A	MClassDef	names/n2.nit:20,1--27,3	A refinement of a class
names::n2::A::b	MMethod	names/n2.nit:22,2--23,13	Name conflict? A second public method
names::n2$A$b	MMethodDef	names/n2.nit:22,2--23,13	Name conflict? A second public method
names::n2::A::z	MMethod	names/n2.nit:25,2--26,13	Name conflict? A second private method
names::n2$A$z	MMethodDef	names/n2.nit:25,2--26,13	Name conflict? A second private method
names::n2::P	MClass	names/n2.nit:29,1--33,3	Name conflict? A second private class
names::n2$P	MClassDef	names/n2.nit:29,1--33,3	Name conflict? A second private class
names::n2::P::p	MMethod	names/n2.nit:31,2--32,13	Name conflict? A private method in an homonym class.
names::n2$P$p	MMethodDef	names/n2.nit:31,2--32,13	Name conflict? A private method in an homonym class.
names1	MPackage	names1.nit	An alternative second module in a distinct package
names1>	MGroup	names1.nit	An alternative second module in a distinct package
names1::names1	MModule	names1.nit:15,1--90,3	An alternative second module in a distinct package
names1::names1$names::A	MClassDef	names1.nit:20,1--30,3	A refinement of a class
names1::names1$names::A$a	MMethodDef	names1.nit:22,2--23,19	A refinement in the same class
names1::names1$names::A$z	MMethodDef	names1.nit:25,2--26,19	A refinement in the same class
names1::names1::A::b	MMethod	names1.nit:28,2--29,13	A public method introduced in a refinement
names1::names1$names::A$b	MMethodDef	names1.nit:28,2--29,13	A public method introduced in a refinement
names1::names1$names::A0	MClassDef	names1.nit:32,1--42,3	A refinement of a subclass
names1::names1$names::A0$names::A::a	MMethodDef	names1.nit:34,2--35,19	A refinement+redefinition
names1::names1$names::A0$names::n0::A::z	MMethodDef	names1.nit:37,2--38,19	A refinement+redefinition
names1::names1$names::A0$names::n0::P::p	MMethodDef	names1.nit:40,2--41,19	A refinement+redefinition
names1::A1	MClass	names1.nit:44,1--57,3	A subclass introduced in a submodule
names1$A1	MClassDef	names1.nit:44,1--57,3	A subclass introduced in a submodule
names1$A1$names::A::a	MMethodDef	names1.nit:49,2--50,19	A redefinition in a subclass from a different module
names1$A1$names::n0::A::z	MMethodDef	names1.nit:52,2--53,19	A redefinition in a subclass from a different module
names1$A1$names::n0::P::p	MMethodDef	names1.nit:55,2--56,19	A redefinition in a subclass from a different module
names1::names1$names::n0::P	MClassDef	names1.nit:59,1--63,3	A refinement of a class
names1::names1$names::n0::P$p	MMethodDef	names1.nit:61,2--62,19	A refinement in the same class
names1::names1$names::n0::P0	MClassDef	names1.nit:65,1--75,3	A refinement of a subclass
names1::names1$names::n0::P0$names::A::a	MMethodDef	names1.nit:67,2--68,19	A refinement+redefinition
names1::names1$names::n0::P0$names::n0::A::z	MMethodDef	names1.nit:70,2--71,19	A refinement+redefinition
names1::names1$names::n0::P0$names::n0::P::p	MMethodDef	names1.nit:73,2--74,19	A refinement+redefinition
names1::names1::P1	MClass	names1.nit:77,1--90,3	A private subclass introduced in a different module
names1::names1$P1	MClassDef	names1.nit:77,1--90,3	A private subclass introduced in a different module
names1::names1$P1$names::A::a	MMethodDef	names1.nit:82,2--83,19	A redefinition in a subclass from a different module
names1::names1$P1$names::n0::A::z	MMethodDef	names1.nit:85,2--86,19	A redefinition in a subclass from a different module
names1::names1$P1$names::n0::P::p	MMethodDef	names1.nit:88,2--89,19	A redefinition in a subclass from a different module
