*** METRICS ***
--- AST Metrics ---
## All nodes of the AST
 population: 52
 minimum value: 1
 maximum value: 40
 total value: 304
 average value: 5.84
 distribution:
  <=1: sub-population=16 (30.76%); cumulated value=16 (5.26%)
  <=2: sub-population=5 (9.61%); cumulated value=10 (3.28%)
  <=4: sub-population=9 (17.30%); cumulated value=28 (9.21%)
  <=8: sub-population=12 (23.07%); cumulated value=76 (25.00%)
  <=16: sub-population=5 (9.61%); cumulated value=59 (19.40%)
  <=32: sub-population=4 (7.69%); cumulated value=75 (24.67%)
  <=64: sub-population=1 (1.92%); cumulated value=40 (13.15%)
 list:
  TId: 40 (13.15%)
  APublicVisibility: 19 (6.25%)
  AListExprs: 19 (6.25%)
  AQid: 19 (6.25%)
  ACallExpr: 18 (5.92%)
  TClassid: 15 (4.93%)
  AQclassid: 15 (4.93%)
  TInteger: 10 (3.28%)
  AIntegerExpr: 10 (3.28%)
  AType: 9 (2.96%)
  ...
  AAnnotation: 1 (0.32%)
  AAnnotations: 1 (0.32%)
  AReturnExpr: 1 (0.32%)
  TKwreturn: 1 (0.32%)
  AInterfaceClasskind: 1 (0.32%)
  TKwinterface: 1 (0.32%)
  ANoImport: 1 (0.32%)
  AMainMethPropdef: 1 (0.32%)
  AMainClassdef: 1 (0.32%)
  TKwimport: 1 (0.32%)
## All identifiers of the AST
 population: 20
 minimum value: 1
 maximum value: 11
 total value: 55
 average value: 2.75
 distribution:
  <=1: sub-population=3 (15.00%); cumulated value=3 (5.45%)
  <=2: sub-population=12 (60.00%); cumulated value=24 (43.63%)
  <=4: sub-population=3 (15.00%); cumulated value=10 (18.18%)
  <=8: sub-population=1 (5.00%); cumulated value=7 (12.72%)
  <=16: sub-population=1 (5.00%); cumulated value=11 (20.00%)
 list:
  output: 11 (20.00%)
  Int: 7 (12.72%)
  run: 4 (7.27%)
  c: 3 (5.45%)
  val: 3 (5.45%)
  i: 2 (3.63%)
  bar: 2 (3.63%)
  foo: 2 (3.63%)
  val2: 2 (3.63%)
  val1: 2 (3.63%)
  C: 2 (3.63%)
  v: 2 (3.63%)
  baz: 2 (3.63%)
  a: 2 (3.63%)
  A: 2 (3.63%)
  B: 2 (3.63%)
  b: 2 (3.63%)
  intern: 1 (1.81%)
  Object: 1 (1.81%)
  Bool: 1 (1.81%)
--- Detection of variance constraints on formal parameter types ---
-- Generic classes --
 list:
  non generic: 7 (100.00%)
  total classes: 7
  total formal parameters: 0
-- Including `private` properties --
  covariants: 0 (na%)
  contravariants: 0 (na%)
  bivariants: 0 (na%)
  invariants: 0 (na%)
  total: 0
-- Excluding `private` properties --
  covariants: 0 (na%)
  contravariants: 0 (na%)
  bivariants: 0 (na%)
  invariants: 0 (na%)
  total: 0
--- Poset metrics ---
## Module importation hierarchy
Number of nodes: 2
Number of edges: 3 (1.50 per node)
Number of direct edges: 1 (0.50 per node)
Distribution of greaters
 population: 2
 minimum value: 1
 maximum value: 2
 total value: 3
 average value: 1.50
 distribution:
  <=1: sub-population=1 (50.00%); cumulated value=1 (33.33%)
  <=2: sub-population=1 (50.00%); cumulated value=2 (66.66%)
Distribution of direct greaters
 population: 2
 minimum value: 0
 maximum value: 1
 total value: 1
 average value: 0.50
 distribution:
  <=0: sub-population=1 (50.00%); cumulated value=0 (0.00%)
  <=1: sub-population=1 (50.00%); cumulated value=1 (100.00%)
Distribution of smallers
 population: 2
 minimum value: 1
 maximum value: 2
 total value: 3
 average value: 1.50
 distribution:
  <=1: sub-population=1 (50.00%); cumulated value=1 (33.33%)
  <=2: sub-population=1 (50.00%); cumulated value=2 (66.66%)
Distribution of direct smallers
 population: 2
 minimum value: 0
 maximum value: 1
 total value: 1
 average value: 0.50
 distribution:
  <=0: sub-population=1 (50.00%); cumulated value=0 (0.00%)
  <=1: sub-population=1 (50.00%); cumulated value=1 (100.00%)
## Classdef hierarchy
Number of nodes: 7
Number of edges: 13 (1.85 per node)
Number of direct edges: 6 (0.85 per node)
Distribution of greaters
 population: 7
 minimum value: 1
 maximum value: 2
 total value: 13
 average value: 1.85
 distribution:
  <=1: sub-population=1 (14.28%); cumulated value=1 (7.69%)
  <=2: sub-population=6 (85.71%); cumulated value=12 (92.30%)
Distribution of direct greaters
 population: 7
 minimum value: 0
 maximum value: 1
 total value: 6
 average value: 0.85
 distribution:
  <=0: sub-population=1 (14.28%); cumulated value=0 (0.00%)
  <=1: sub-population=6 (85.71%); cumulated value=6 (100.00%)
Distribution of smallers
 population: 7
 minimum value: 1
 maximum value: 7
 total value: 13
 average value: 1.85
 distribution:
  <=1: sub-population=6 (85.71%); cumulated value=6 (46.15%)
  <=8: sub-population=1 (14.28%); cumulated value=7 (53.84%)
Distribution of direct smallers
 population: 7
 minimum value: 0
 maximum value: 6
 total value: 6
 average value: 0.85
 distribution:
  <=0: sub-population=6 (85.71%); cumulated value=0 (0.00%)
  <=8: sub-population=1 (14.28%); cumulated value=6 (100.00%)
## Class hierarchy
Number of nodes: 7
Number of edges: 13 (1.85 per node)
Number of direct edges: 6 (0.85 per node)
Distribution of greaters
 population: 7
 minimum value: 1
 maximum value: 2
 total value: 13
 average value: 1.85
 distribution:
  <=1: sub-population=1 (14.28%); cumulated value=1 (7.69%)
  <=2: sub-population=6 (85.71%); cumulated value=12 (92.30%)
Distribution of direct greaters
 population: 7
 minimum value: 0
 maximum value: 1
 total value: 6
 average value: 0.85
 distribution:
  <=0: sub-population=1 (14.28%); cumulated value=0 (0.00%)
  <=1: sub-population=6 (85.71%); cumulated value=6 (100.00%)
Distribution of smallers
 population: 7
 minimum value: 1
 maximum value: 7
 total value: 13
 average value: 1.85
 distribution:
  <=1: sub-population=6 (85.71%); cumulated value=6 (46.15%)
  <=8: sub-population=1 (14.28%); cumulated value=7 (53.84%)
Distribution of direct smallers
 population: 7
 minimum value: 0
 maximum value: 6
 total value: 6
 average value: 0.85
 distribution:
  <=0: sub-population=6 (85.71%); cumulated value=0 (0.00%)
  <=8: sub-population=1 (14.28%); cumulated value=6 (100.00%)
--- Metrics of refinement usage ---
Number of modules: 2

Number of classes: 7
  Number of interface kind: 1 (14.28%)
  Number of enum kind: 2 (28.57%)
  Number of class kind: 4 (57.14%)

Number of class definitions: 7
Number of refined classes: 0 (0.00%)
Average number of class refinments by classes: 0.00
Average number of class refinments by refined classes: na

Number of properties: 23
  Number of MAttribute: 3 (13.04%)
  Number of MMethod: 20 (86.95%)

Number of property definitions: 24
Number of redefined properties: 1 (4.34%)
Average number of property redefinitions by property: 0.04
Average number of property redefinitions by redefined property: 1.00
--- Explicit vs. Implicit Self ---
Total number of self: 5
Total number of implicit self: 4 (80.00%)
--- Construction of tables ---
Number of runtime classes: 6 (excluding interfaces and abstract classes)
Average number of composing class definition by runtime class: 2.00
Total size of tables (classes and instances): 33 (not including stuff like info for subtyping or call-next-method)
Average size of table by runtime class: 5.50
Values never redefined: 27 (81.81%)
generating package_hierarchy.dot
generating module_hierarchy.dot
--- Metrics of the explitic static types ---
Total number of explicit static types: 9
Statistics of type usage:
 population: 4
 minimum value: 1
 maximum value: 6
 total value: 9
 average value: 2.25
 distribution:
  <=1: sub-population=3 (75.00%); cumulated value=3 (33.33%)
  <=8: sub-population=1 (25.00%); cumulated value=6 (66.66%)
 list:
  Int: 6 (66.66%)
  C: 1 (11.11%)
  B: 1 (11.11%)
  A: 1 (11.11%)

# MClasses metrics

 ## package base_simple3
  `- group base_simple3>
	cnoa: number of ancestor classes
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnop: number of parent classes
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnoc: number of child classes
	  avg: 0.0
	  max: Object (6)
	  min: Bool (0)
	  std: 2.268
	  sum: 6
	cnod: number of descendant classes
	  avg: 0.0
	  max: Object (6)
	  min: Bool (0)
	  std: 2.268
	  sum: 6
	cdit: depth in class tree
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnbp: number of accessible properties (inherited + local)
	  avg: 5.0
	  max: C (9)
	  min: Object (2)
	  std: 2.268
	  sum: 35
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbi: number of accessible constructors (inherited + local)
	  avg: 1.0
	  max: B (2)
	  min: Object (1)
	  std: 0.378
	  sum: 8
	cnbm: number of accessible methods (inherited + local)
	  avg: 3.0
	  max: B (5)
	  min: Object (1)
	  std: 1.773
	  sum: 21
	cnbv: number of accessible virtual types (inherited + local)
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnbip: number of introduced properties
	  avg: 3.0
	  max: C (7)
	  min: Bool (1)
	  std: 2.0
	  sum: 23
	cnbrp: number of redefined properties
	  avg: 0.0
	  max: A (1)
	  min: Object (0)
	  std: 0.378
	  sum: 1
	cnbhp: number of inherited properties
	  avg: 1.0
	  max: Bool (2)
	  min: Object (0)
	  std: 1.0
	  sum: 12

 ## global metrics
	cnoa: number of ancestor classes
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnop: number of parent classes
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnoc: number of child classes
	  avg: 0.0
	  max: Object (6)
	  min: Bool (0)
	  std: 2.268
	  sum: 6
	cnod: number of descendant classes
	  avg: 0.0
	  max: Object (6)
	  min: Bool (0)
	  std: 2.268
	  sum: 6
	cdit: depth in class tree
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnbp: number of accessible properties (inherited + local)
	  avg: 5.0
	  max: C (9)
	  min: Object (2)
	  std: 2.268
	  sum: 35
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbi: number of accessible constructors (inherited + local)
	  avg: 1.0
	  max: B (2)
	  min: Object (1)
	  std: 0.378
	  sum: 8
	cnbm: number of accessible methods (inherited + local)
	  avg: 3.0
	  max: B (5)
	  min: Object (1)
	  std: 1.773
	  sum: 21
	cnbv: number of accessible virtual types (inherited + local)
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnbip: number of introduced properties
	  avg: 3.0
	  max: C (7)
	  min: Bool (1)
	  std: 2.0
	  sum: 23
	cnbrp: number of redefined properties
	  avg: 0.0
	  max: A (1)
	  min: Object (0)
	  std: 0.378
	  sum: 1
	cnbhp: number of inherited properties
	  avg: 1.0
	  max: Bool (2)
	  min: Object (0)
	  std: 1.0
	  sum: 12

# MModules metrics

 ## package base_simple3
  `- group base_simple3>
	mnoa: number of ancestor modules
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnop: number of parent modules
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnoc: number of child modules
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1
	mnod: number of descendant modules
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1
	mdit: depth in module tree
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbi: number of introduction in module
	  avg: 7.0
	  max: base_simple3 (7)
	  min: base_simple3 (7)
	  std: 0.0
	  sum: 7
	mnbr: number of refinement in module
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbcc: number of concrete class in module (intro + redef)
	  avg: 4.0
	  max: base_simple3 (4)
	  min: base_simple3 (4)
	  std: 0.0
	  sum: 4
	mnbac: number of abstract class in module (intro + redef)
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbic: number of interface in module (intro + redef)
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1

 ## global metrics
	mnoa: number of ancestor modules
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnop: number of parent modules
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnoc: number of child modules
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1
	mnod: number of descendant modules
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1
	mdit: depth in module tree
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbi: number of introduction in module
	  avg: 7.0
	  max: base_simple3 (7)
	  min: base_simple3 (7)
	  std: 0.0
	  sum: 7
	mnbr: number of refinement in module
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbcc: number of concrete class in module (intro + redef)
	  avg: 4.0
	  max: base_simple3 (4)
	  min: base_simple3 (4)
	  std: 0.0
	  sum: 4
	mnbac: number of abstract class in module (intro + redef)
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnbic: number of interface in module (intro + redef)
	  avg: 1.0
	  max: base_simple3 (1)
	  min: base_simple3 (1)
	  std: 0.0
	  sum: 1

# ReadMe metrics
Warning: no source file for `base_simple3`

# Inheritance metrics

 ## package base_simple3
  `- group base_simple3>
	cnoac: number of class_kind ancestor
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnopc: number of class_kind parent
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnocc: number of class_kind children
	  avg: 0.0
	  max: Object (4)
	  min: Bool (0)
	  std: 1.512
	  sum: 4
	cnodc: number of class_kind descendants
	  avg: 0.0
	  max: Object (4)
	  min: Bool (0)
	  std: 1.512
	  sum: 4
	cnopi: number of interface_kind parent
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnoci: number of interface_kind children
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnodi: number of interface_kind descendants
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cditc: depth in class tree following only class, abstract, extern kind
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cditi: depth in class tree following only interface_kind
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	mdui: proportion of mclass defined using inheritance (has other parent than Object)
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mduic: proportion of class_kind defined using inheritance
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mduii: proportion of interface_kind defined using inheritance
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mif: proportion of mclass inherited from
	  avg: 0.143
	  max: base_simple3 (0.143)
	  min: base_simple3 (0.143)
	  std: 0.0
	  sum: 0.143
	mifc: proportion of class_kind inherited from
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mifi: proportion of interface_kind inherited from
	  avg: 0.143
	  max: base_simple3 (0.143)
	  min: base_simple3 (0.143)
	  std: 0.0
	  sum: 0.143

 ## global metrics
	cnoac: number of class_kind ancestor
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnopc: number of class_kind parent
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnocc: number of class_kind children
	  avg: 0.0
	  max: Object (4)
	  min: Bool (0)
	  std: 1.512
	  sum: 4
	cnodc: number of class_kind descendants
	  avg: 0.0
	  max: Object (4)
	  min: Bool (0)
	  std: 1.512
	  sum: 4
	cnopi: number of interface_kind parent
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	cnoci: number of interface_kind children
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnodi: number of interface_kind descendants
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cditc: depth in class tree following only class, abstract, extern kind
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cditi: depth in class tree following only interface_kind
	  avg: 0.0
	  max: Bool (1)
	  min: Object (0)
	  std: 0.926
	  sum: 6
	mdui: proportion of mclass defined using inheritance (has other parent than Object)
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mduic: proportion of class_kind defined using inheritance
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mduii: proportion of interface_kind defined using inheritance
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mif: proportion of mclass inherited from
	  avg: 0.143
	  max: base_simple3 (0.143)
	  min: base_simple3 (0.143)
	  std: 0.0
	  sum: 0.143
	mifc: proportion of class_kind inherited from
	  avg: 0.0
	  max: base_simple3 (0.0)
	  min: base_simple3 (0.0)
	  std: 0.0
	  sum: 0.0
	mifi: proportion of interface_kind inherited from
	  avg: 0.143
	  max: base_simple3 (0.143)
	  min: base_simple3 (0.143)
	  std: 0.0
	  sum: 0.143

# Mendel metrics
	large mclasses (threshold: 4.354)
	   C: 5
	budding mclasses (threshold: 3.207)
	   C: 3.5
	blooming mclasses (threshold: 14.316)
	   C: 17.5
--- Detection of the usage of covariance static type conformance ---
-- Total --
- Kinds of the subtype -
 list:
  primitive type: 6 (100.00%)
  total: 6
- Variance -
 list:
  monomorph: 6 (100.00%)
  total: 6
- Classes of the subtype -
 list:
  Int: 6 (100.00%)
  total: 6
-- On covariance only --
- Specific covariance case explanations -
 list:
  total: 0
- Classes of the subtype, when covariance -
 list:
  total: 0
- Patterns of the covariant cases -
 list:
  total: 0
- Nodes of the covariance cases -
 list:
  total: 0
- Modules of the covariance cases -
 list:
  total: 0
- Kind of the expression node (when it make sense) -
 list:
  total: 0
-- Casts --
- Kind of cast target -
 list:
  total: 0
- Classes of the cast -
 list:
  total: 0
- Cast pattern -
 list:
  total: 0
- Autocasts -
 list:
  total: 0

# Nullable metrics

 ## package base_simple3
  `- group base_simple3>
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbna: number of accessible nullable attributes (inherited + local) -- nothing
	  sum: 0

 ## global metrics
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbna: number of accessible nullable attributes (inherited + local) -- nothing
	  sum: 0
--- Sends on Nullable Receiver ---
Total number of sends: 19
Number of sends on a unsafe nullable receiver: 0 (0.00%)
Number of sends on a safe nullable receiver: 0 (0.00%)
Number of buggy sends (cannot determine the type of the receiver): 0 (0.00%)

# RTA metrics

 ## Live instances by mainmodules
	mnlc: number of live mclasses in a mmodule
	  avg: 6.0
	  max: base_simple3 (6)
	  min: base_simple3 (6)
	  std: 0.0
	  sum: 6
	mnlt: number of live mtypes in a mmodule
	  avg: 6.0
	  max: base_simple3 (6)
	  min: base_simple3 (6)
	  std: 0.0
	  sum: 6
	mnct: number of live cast mtypes in a mmodule
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0
	mnli: number of live instances in a mmodule
	  avg: 17.0
	  max: base_simple3 (17)
	  min: base_simple3 (17)
	  std: 0.0
	  sum: 17
	mnlm: number of live methods in a mmodule
	  avg: 16.0
	  max: base_simple3 (16)
	  min: base_simple3 (16)
	  std: 0.0
	  sum: 16
	mnlmd: number of live method definitions in a mmodule
	  avg: 17.0
	  max: base_simple3 (17)
	  min: base_simple3 (17)
	  std: 0.0
	  sum: 17
	mnldd: number of dead method definitions in a mmodule
	  avg: 0.0
	  max: base_simple3 (0)
	  min: base_simple3 (0)
	  std: 0.0
	  sum: 0

 ## Total live instances by mclasses
	cnli: number of live instances for a mclass
	  avg: 2.0
	  max: Int (12)
	  min: Sys (1)
	  std: 4.183
	  sum: 17
	cnlc: number of live cast for a mclass type -- nothing
	  sum: 0

 ## Total live instances by mtypes
	tnli: number of live instances for a mtype
	  avg: 2.0
	  max: Int (12)
	  min: Sys (1)
	  std: 4.183
	  sum: 17
	tnlc: number of live casts to a mtype -- nothing
	  sum: 0

 ## MType complexity
	tags: arity of generic signature
	  avg: 0.0
	  max: Sys (0)
	  min: Sys (0)
	  std: 0.0
	  sum: 0
	tdos: depth of generic signature
	  avg: 0.0
	  max: Sys (0)
	  min: Sys (0)
	  std: 0.0
	  sum: 0

 ## Callsites
* 23 live callsites
MMethodDef locally designated (by number of CallSites)
 population: 14
 minimum value: 1
 maximum value: 10
 total value: 23
 average value: 1.64
 distribution:
  <=1: sub-population=13 (92.85%); cumulated value=13 (56.52%)
  <=16: sub-population=1 (7.14%); cumulated value=10 (43.47%)
 list:
  base_simple3$Int$output: 10 (43.47%)
  base_simple3$B$val: 1 (4.34%)
  base_simple3$B$val=: 1 (4.34%)
  base_simple3$Object$init: 1 (4.34%)
  base_simple3$C$val2: 1 (4.34%)
  ...
  base_simple3$A$autoinit: 1 (4.34%)
  base_simple3$Sys$baz: 1 (4.34%)
  base_simple3$Sys$bar: 1 (4.34%)
  base_simple3$Sys$foo: 1 (4.34%)
  base_simple3$C$autoinit: 1 (4.34%)
MMethodDef possibly invoked at runtime (by number of CallSites)
 population: 14
 minimum value: 1
 maximum value: 10
 total value: 23
 average value: 1.64
 distribution:
  <=1: sub-population=13 (92.85%); cumulated value=13 (56.52%)
  <=16: sub-population=1 (7.14%); cumulated value=10 (43.47%)
 list:
  base_simple3$Int$output: 10 (43.47%)
  base_simple3$B$val: 1 (4.34%)
  base_simple3$B$val=: 1 (4.34%)
  base_simple3$Object$init: 1 (4.34%)
  base_simple3$C$val2: 1 (4.34%)
  ...
  base_simple3$A$autoinit: 1 (4.34%)
  base_simple3$Sys$baz: 1 (4.34%)
  base_simple3$Sys$bar: 1 (4.34%)
  base_simple3$Sys$foo: 1 (4.34%)
  base_simple3$C$autoinit: 1 (4.34%)
class_hierarchy.dot
classdef_hierarchy.dot
inheritance/
mclasses/
mendel/
mmodules/
model.html
module_hierarchy.dot
nullables/
package_hierarchy.dot
readme.csv
rta/
