All entities, including fictive ones:
 list:
  MMethodDef: 59 (49.57%)
  MClassDef: 21 (17.64%)
  MMethod: 19 (15.96%)
  MClass: 10 (8.40%)
  MModule: 5 (4.20%)
  MGroup: 2 (1.68%)
  MPackage: 2 (1.68%)
  Model: 1 (0.84%)
All entities:
 list:
  MMethodDef: 59 (49.57%)
  MClassDef: 21 (17.64%)
  MMethod: 19 (15.96%)
  MClass: 10 (8.40%)
  MModule: 5 (4.20%)
  MGroup: 2 (1.68%)
  MPackage: 2 (1.68%)
  Model: 1 (0.84%)

All non-private entities:
 list:
  MMethodDef: 19 (33.92%)
  MMethod: 11 (19.64%)
  MClassDef: 11 (19.64%)
  MClass: 5 (8.92%)
  MModule: 5 (8.92%)
  MGroup: 2 (3.57%)
  MPackage: 2 (3.57%)
  Model: 1 (1.78%)

All documented non-private entities:
 list:

All public entities:
 list:
  MMethodDef: 19 (33.92%)
  MMethod: 11 (19.64%)
  MClassDef: 11 (19.64%)
  MClass: 5 (8.92%)
  MModule: 5 (8.92%)
  MGroup: 2 (3.57%)
  MPackage: 2 (3.57%)
  Model: 1 (1.78%)

All documented public entities:
 list:

Names:

# Classes of entities
 population: 7
 minimum value: 2
 maximum value: 59
 total value: 118
 average value: 16.85
 distribution:
  <=2: sub-population=2 (28.57%); cumulated value=4 (3.38%)
  <=8: sub-population=1 (14.28%); cumulated value=5 (4.23%)
  <=16: sub-population=1 (14.28%); cumulated value=10 (8.47%)
  <=32: sub-population=2 (28.57%); cumulated value=40 (33.89%)
  <=64: sub-population=1 (14.28%); cumulated value=59 (50.00%)
 list:
  MMethodDef: 59 (50.00%)
  MClassDef: 21 (17.79%)
  MMethod: 19 (16.10%)
  MClass: 10 (8.47%)
  MModule: 5 (4.23%)
  MGroup: 2 (1.69%)
  MPackage: 2 (1.69%)

# Name length of entities
 population: 118
 minimum value: 5
 maximum value: 44
 total value: 2229
 average value: 18.88
 distribution:
  <=5: sub-population=1 (0.84%); cumulated value=5 (0.22%)
  <=10: sub-population=17 (14.40%); cumulated value=141 (6.32%)
  <=20: sub-population=51 (43.22%); cumulated value=765 (34.32%)
  <=40: sub-population=47 (39.83%); cumulated value=1230 (55.18%)
  <=80: sub-population=2 (1.69%); cumulated value=88 (3.94%)
 list:
  names1::names1$names::n0::P0$names::n0::P::p: 44 (1.97%)
  names1::names1$names::n0::P0$names::n0::A::z: 44 (1.97%)
  names1::names1$names::A0$names::n0::A::z: 40 (1.79%)
  names1::names1$names::A0$names::n0::P::p: 40 (1.79%)
  names1::names1$names::n0::P0$names::A::a: 40 (1.79%)
  names::P::defaultinit!CONFLICT!MMethod: 38 (1.70%)
  names1::names1$names::A0$names::A::a: 36 (1.61%)
  names1::names1$P1$names::n0::P::p: 33 (1.48%)
  names1::names1$P1$names::n0::A::z: 33 (1.48%)
  names1::names1$P1$names::A::a: 29 (1.30%)
  ...
  names::n3: 9 (0.40%)
  names::n0: 9 (0.40%)
  names::A: 8 (0.35%)
  names$A0: 8 (0.35%)
  names$A1: 8 (0.35%)
  names$A: 7 (0.31%)
  names1>: 7 (0.31%)
  names1: 6 (0.26%)
  names>: 6 (0.26%)
  names: 5 (0.22%)

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
names::Object::defaultinit	MMethod	names/n0.nit:20,1--22,3	
names$Object$defaultinit	MMethodDef	names/n0.nit:20,1--22,3	
names::A	MClass	names/n0.nit:24,1--31,3	A public class
names$A	MClassDef	names/n0.nit:24,1--31,3	A public class
names::A::a	MMethod	names/n0.nit:26,2--27,13	A public method in a public class
names$A$a	MMethodDef	names/n0.nit:26,2--27,13	A public method in a public class
names::n0::A::z	MMethod	names/n0.nit:29,2--30,21	A private method in a public class
names$A$z	MMethodDef	names/n0.nit:29,2--30,21	A private method in a public class
names::A::defaultinit	MMethod	names/n0.nit:24,1--31,3	
names$A$defaultinit	MMethodDef	names/n0.nit:24,1--31,3	
names::A0	MClass	names/n0.nit:33,1--46,3	A public subclass in the same module
names$A0	MClassDef	names/n0.nit:33,1--46,3	A public subclass in the same module
names$A0$A::a	MMethodDef	names/n0.nit:38,2--39,19	Redefinition it the same module of a public method
names$A0$::n0::A::z	MMethodDef	names/n0.nit:41,2--42,19	Redefinition it the same module of a private method
names$A0$::n0::P::p	MMethodDef	names/n0.nit:44,2--45,19	Redefinition it the same module of a private method
names::A0::defaultinit	MMethod	names/n0.nit:33,1--46,3	
names$A0$defaultinit	MMethodDef	names/n0.nit:33,1--46,3	
names::n0::P	MClass	names/n0.nit:48,1--52,3	A private class
names::n0$P	MClassDef	names/n0.nit:48,1--52,3	A private class
names::n0::P::p	MMethod	names/n0.nit:50,2--51,13	A private method in a private class
names::n0$P$p	MMethodDef	names/n0.nit:50,2--51,13	A private method in a private class
names::P::defaultinit	MMethod	names/n0.nit:48,1--52,3	
names::n0$P$defaultinit	MMethodDef	names/n0.nit:48,1--52,3	
names::n0::P0	MClass	names/n0.nit:54,1--67,3	A private subclass introduced in the same module
names::n0$P0	MClassDef	names/n0.nit:54,1--67,3	A private subclass introduced in the same module
names::n0$P0$A::a	MMethodDef	names/n0.nit:59,2--60,19	Redefinition it the same module of a public method
names::n0$P0$::n0::A::z	MMethodDef	names/n0.nit:62,2--63,19	Redefinition it the same module of a private method
names::n0$P0$::n0::P::p	MMethodDef	names/n0.nit:65,2--66,19	Redefinition it the same module of a private method
names::P0::defaultinit	MMethod	names/n0.nit:54,1--67,3	
names::n0$P0$defaultinit	MMethodDef	names/n0.nit:54,1--67,3	
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
names::A1::defaultinit	MMethod	names/n1.nit:44,1--57,3	
names$A1$defaultinit	MMethodDef	names/n1.nit:44,1--57,3	
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
names::P1::defaultinit	MMethod	names/n1.nit:77,1--90,3	
names::n1$P1$defaultinit	MMethodDef	names/n1.nit:77,1--90,3	
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
names::P::defaultinit!CONFLICT!MMethod	MMethod	names/n2.nit:29,1--33,3	
names::n2$P$defaultinit	MMethodDef	names/n2.nit:29,1--33,3	
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
names1::A1::defaultinit	MMethod	names1.nit:44,1--57,3	
names1$A1$defaultinit	MMethodDef	names1.nit:44,1--57,3	
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
names1::P1::defaultinit	MMethod	names1.nit:77,1--90,3	
names1::names1$P1$defaultinit	MMethodDef	names1.nit:77,1--90,3	
