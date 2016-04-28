All entities, including fictive ones:
 list:
  MMethodDef: 33 (46.47%)
  MClassDef: 15 (21.12%)
  MMethod: 8 (11.26%)
  MClass: 8 (11.26%)
  MModule: 4 (5.63%)
  MGroup: 1 (1.40%)
  MPackage: 1 (1.40%)
  Model: 1 (1.40%)
All entities:
 list:
  MMethodDef: 33 (46.47%)
  MClassDef: 15 (21.12%)
  MMethod: 8 (11.26%)
  MClass: 8 (11.26%)
  MModule: 4 (5.63%)
  MGroup: 1 (1.40%)
  MPackage: 1 (1.40%)
  Model: 1 (1.40%)

All non-private entities:
 list:
  MMethodDef: 10 (29.41%)
  MClassDef: 8 (23.52%)
  MMethod: 5 (14.70%)
  MClass: 4 (11.76%)
  MModule: 4 (11.76%)
  MGroup: 1 (2.94%)
  MPackage: 1 (2.94%)
  Model: 1 (2.94%)

All documented non-private entities:
 list:

All public entities:
 list:
  MMethodDef: 10 (29.41%)
  MClassDef: 8 (23.52%)
  MMethod: 5 (14.70%)
  MClass: 4 (11.76%)
  MModule: 4 (11.76%)
  MGroup: 1 (2.94%)
  MPackage: 1 (2.94%)
  Model: 1 (2.94%)

All documented public entities:
 list:

Names:

# Classes of entities
 population: 7
 minimum value: 1
 maximum value: 33
 total value: 70
 average value: 10.00
 distribution:
  <=1: sub-population=2 (28.57%); cumulated value=2 (2.85%)
  <=4: sub-population=1 (14.28%); cumulated value=4 (5.71%)
  <=8: sub-population=2 (28.57%); cumulated value=16 (22.85%)
  <=16: sub-population=1 (14.28%); cumulated value=15 (21.42%)
  <=64: sub-population=1 (14.28%); cumulated value=33 (47.14%)
 list:
  MMethodDef: 33 (47.14%)
  MClassDef: 15 (21.42%)
  MMethod: 8 (11.42%)
  MClass: 8 (11.42%)
  MModule: 4 (5.71%)
  MGroup: 1 (1.42%)
  MPackage: 1 (1.42%)

# Name length of entities
 population: 70
 minimum value: 5
 maximum value: 29
 total value: 1045
 average value: 14.92
 distribution:
  <=5: sub-population=1 (1.42%); cumulated value=5 (0.47%)
  <=10: sub-population=13 (18.57%); cumulated value=109 (10.43%)
  <=20: sub-population=44 (62.85%); cumulated value=637 (60.95%)
  <=40: sub-population=12 (17.14%); cumulated value=294 (28.13%)
 list:
  names::n3$::n1::P1$::n0::P::p: 29 (2.77%)
  names::n1$::n0::P0$::n0::A::z: 29 (2.77%)
  names::n1$::n0::P0$::n0::P::p: 29 (2.77%)
  names::n3$::n1::P1$A::a: 23 (2.20%)
  names::n1$A0$::n0::A::z: 23 (2.20%)
  names::n1$A0$::n0::P::p: 23 (2.20%)
  names::n0$P0$::n0::A::z: 23 (2.20%)
  names::n0$P0$::n0::P::p: 23 (2.20%)
  names::n3$A1$::n0::P::p: 23 (2.20%)
  names::n1$::n0::P0$A::a: 23 (2.20%)
  ...
  names::n0: 9 (0.86%)
  names$A$z: 9 (0.86%)
  names::A0: 9 (0.86%)
  names::n3: 9 (0.86%)
  names::A: 8 (0.76%)
  names$A0: 8 (0.76%)
  names$A1: 8 (0.76%)
  names$A: 7 (0.66%)
  names>: 6 (0.57%)
  names: 5 (0.47%)

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
