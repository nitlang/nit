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
names	MPackage	Group of modules used to test various full_name configurations and conflicts.
names>	MGroup	Group of modules used to test various full_name configurations and conflicts.
names::n3	MModule	The bottom module
names::n3$A1	MClassDef	a refinement of a subclass in a submodule
names::n3$A1$A::a	MMethodDef	a refinement (3 distinct modules)
names::n3$A1$::n0::P::p	MMethodDef	a refinement (3 distinct modules)
names::n3$::n1::P1	MClassDef	a refinement of a subclass in a submodule
names::n3$::n1::P1$A::a	MMethodDef	a refinement (3 distinct modules)
names::n3$::n1::P1$::n0::P::p	MMethodDef	a refinement (3 distinct modules)
names::n0	MModule	Root module
names::Object	MClass	
names$Object	MClassDef	Root interface
names::Object::init	MMethod	
names$Object$init	MMethodDef	
names::A	MClass	
names$A	MClassDef	A public class
names::A::a	MMethod	
names$A$a	MMethodDef	A public method in a public class
names::n0::A::z	MMethod	
names$A$z	MMethodDef	A private method in a public class
names::A0	MClass	
names$A0	MClassDef	A public subclass in the same module
names$A0$A::a	MMethodDef	Redefinition it the same module of a public method
names$A0$::n0::A::z	MMethodDef	Redefinition it the same module of a private method
names$A0$::n0::P::p	MMethodDef	Redefinition it the same module of a private method
names::n0::P	MClass	
names::n0$P	MClassDef	A private class
names::n0::P::p	MMethod	
names::n0$P$p	MMethodDef	A private method in a private class
names::n0::P0	MClass	
names::n0$P0	MClassDef	A private subclass introduced in the same module
names::n0$P0$A::a	MMethodDef	Redefinition it the same module of a public method
names::n0$P0$::n0::A::z	MMethodDef	Redefinition it the same module of a private method
names::n0$P0$::n0::P::p	MMethodDef	Redefinition it the same module of a private method
names::n1	MModule	Second module
names::n1$A	MClassDef	A refinement of a class
names::n1$A$a	MMethodDef	A refinement in the same class
names::n1$A$z	MMethodDef	A refinement in the same class
names::n1::A::b	MMethod	
names::n1$A$b	MMethodDef	A public method introduced in a refinement
names::n1$A0	MClassDef	A refinement of a subclass
names::n1$A0$A::a	MMethodDef	A refinement+redefinition
names::n1$A0$::n0::A::z	MMethodDef	A refinement+redefinition
names::n1$A0$::n0::P::p	MMethodDef	A refinement+redefinition
names::A1	MClass	
names$A1	MClassDef	A subclass introduced in a submodule
names$A1$A::a	MMethodDef	A redefinition in a subclass from a different module
names$A1$::n0::A::z	MMethodDef	A redefinition in a subclass from a different module
names$A1$::n0::P::p	MMethodDef	A redefinition in a subclass from a different module
names::n1$::n0::P	MClassDef	A refinement of a class
names::n1$::n0::P$p	MMethodDef	A refinement in the same class
names::n1$::n0::P0	MClassDef	A refinement of a subclass
names::n1$::n0::P0$A::a	MMethodDef	A refinement+redefinition
names::n1$::n0::P0$::n0::A::z	MMethodDef	A refinement+redefinition
names::n1$::n0::P0$::n0::P::p	MMethodDef	A refinement+redefinition
names::n1::P1	MClass	
names::n1$P1	MClassDef	A private subclass introduced in a different module
names::n1$P1$A::a	MMethodDef	A redefinition in a subclass from a different module
names::n1$P1$::n0::A::z	MMethodDef	A redefinition in a subclass from a different module
names::n1$P1$::n0::P::p	MMethodDef	A redefinition in a subclass from a different module
names::n2	MModule	A alternative second module, used to make name conflicts
names::n2$A	MClassDef	A refinement of a class
names::n2::A::b	MMethod	
names::n2$A$b	MMethodDef	Name conflict? A second public method
names::n2::A::z	MMethod	
names::n2$A$z	MMethodDef	Name conflict? A second private method
names::n2::P	MClass	
names::n2$P	MClassDef	Name conflict? A second private class
names::n2::P::p	MMethod	
names::n2$P$p	MMethodDef	Name conflict? A private method in an homonym class.
names1	MPackage	An alternative second module in a distinct package
names1>	MGroup	An alternative second module in a distinct package
names1::names1	MModule	An alternative second module in a distinct package
names1::names1$names::A	MClassDef	A refinement of a class
names1::names1$names::A$a	MMethodDef	A refinement in the same class
names1::names1$names::A$z	MMethodDef	A refinement in the same class
names1::names1::A::b	MMethod	
names1::names1$names::A$b	MMethodDef	A public method introduced in a refinement
names1::names1$names::A0	MClassDef	A refinement of a subclass
names1::names1$names::A0$names::A::a	MMethodDef	A refinement+redefinition
names1::names1$names::A0$names::n0::A::z	MMethodDef	A refinement+redefinition
names1::names1$names::A0$names::n0::P::p	MMethodDef	A refinement+redefinition
names1::A1	MClass	
names1$A1	MClassDef	A subclass introduced in a submodule
names1$A1$names::A::a	MMethodDef	A redefinition in a subclass from a different module
names1$A1$names::n0::A::z	MMethodDef	A redefinition in a subclass from a different module
names1$A1$names::n0::P::p	MMethodDef	A redefinition in a subclass from a different module
names1::names1$names::n0::P	MClassDef	A refinement of a class
names1::names1$names::n0::P$p	MMethodDef	A refinement in the same class
names1::names1$names::n0::P0	MClassDef	A refinement of a subclass
names1::names1$names::n0::P0$names::A::a	MMethodDef	A refinement+redefinition
names1::names1$names::n0::P0$names::n0::A::z	MMethodDef	A refinement+redefinition
names1::names1$names::n0::P0$names::n0::P::p	MMethodDef	A refinement+redefinition
names1::names1::P1	MClass	
names1::names1$P1	MClassDef	A private subclass introduced in a different module
names1::names1$P1$names::A::a	MMethodDef	A redefinition in a subclass from a different module
names1::names1$P1$names::n0::A::z	MMethodDef	A redefinition in a subclass from a different module
names1::names1$P1$names::n0::P::p	MMethodDef	A redefinition in a subclass from a different module
