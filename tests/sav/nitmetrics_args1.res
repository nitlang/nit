*** METRICS ***
--- AST Metrics ---
## All nodes of the AST
 population: 49
 minimum value: 1
 maximum value: 37
 total value: 286
 average value: 5.83
 distribution:
  <=1: sub-population=15 (30.61%); cumulated value=15 (5.24%)
  <=2: sub-population=3 (6.12%); cumulated value=6 (2.09%)
  <=4: sub-population=12 (24.48%); cumulated value=40 (13.98%)
  <=8: sub-population=10 (20.40%); cumulated value=67 (23.42%)
  <=16: sub-population=4 (8.16%); cumulated value=48 (16.78%)
  <=32: sub-population=4 (8.16%); cumulated value=73 (25.52%)
  <=64: sub-population=1 (2.04%); cumulated value=37 (12.93%)
 list:
  TId: 37 (12.93%)
  APublicVisibility: 19 (6.64%)
  ACallExpr: 18 (6.29%)
  AQid: 18 (6.29%)
  AListExprs: 18 (6.29%)
  AQclassid: 14 (4.89%)
  TClassid: 14 (4.89%)
  TInteger: 10 (3.49%)
  AIntegerExpr: 10 (3.49%)
  ASignature: 8 (2.79%)
  ...
  TKwreturn: 1 (0.34%)
  AAnnotation: 1 (0.34%)
  AParam: 1 (0.34%)
  AMainMethPropdef: 1 (0.34%)
  AInterfaceClasskind: 1 (0.34%)
  TKwinterface: 1 (0.34%)
  ANoImport: 1 (0.34%)
  ABlockExpr: 1 (0.34%)
  AMainClassdef: 1 (0.34%)
  TKwimport: 1 (0.34%)
## All identifiers of the AST
 population: 19
 minimum value: 1
 maximum value: 11
 total value: 51
 average value: 2.68
 distribution:
  <=1: sub-population=3 (15.78%); cumulated value=3 (5.88%)
  <=2: sub-population=12 (63.15%); cumulated value=24 (47.05%)
  <=4: sub-population=2 (10.52%); cumulated value=7 (13.72%)
  <=8: sub-population=1 (5.26%); cumulated value=6 (11.76%)
  <=16: sub-population=1 (5.26%); cumulated value=11 (21.56%)
 list:
  output: 11 (21.56%)
  Int: 6 (11.76%)
  run: 4 (7.84%)
  c: 3 (5.88%)
  baz: 2 (3.92%)
  i: 2 (3.92%)
  bar: 2 (3.92%)
  val2: 2 (3.92%)
  val1: 2 (3.92%)
  C: 2 (3.92%)
  val: 2 (3.92%)
  B: 2 (3.92%)
  a: 2 (3.92%)
  A: 2 (3.92%)
  foo: 2 (3.92%)
  b: 2 (3.92%)
  intern: 1 (1.96%)
  Object: 1 (1.96%)
  Bool: 1 (1.96%)
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

Number of properties: 21
  Number of MAttribute: 3 (14.28%)
  Number of MMethod: 18 (85.71%)

Number of property definitions: 23
Number of redefined properties: 1 (4.76%)
Average number of property redefinitions by property: 0.09
Average number of property redefinitions by redefined property: 2.00
--- Explicit vs. Implicit Self ---
Total number of self: 4
Total number of implicit self: 4 (100.00%)
--- Construction of tables ---
Number of runtime classes: 6 (excluding interfaces and abstract classes)
Average number of composing class definition by runtime class: 2.00
Total size of tables (classes and instances): 31 (not including stuff like info for subtyping or call-next-method)
Average size of table by runtime class: 5.16
Values never redefined: 25 (80.64%)
generating package_hierarchy.dot
generating module_hierarchy.dot
--- Metrics of the explitic static types ---
Total number of explicit static types: 8
Statistics of type usage:
 population: 4
 minimum value: 1
 maximum value: 5
 total value: 8
 average value: 2.00
 distribution:
  <=1: sub-population=3 (75.00%); cumulated value=3 (37.50%)
  <=8: sub-population=1 (25.00%); cumulated value=5 (62.50%)
 list:
  Int: 5 (62.50%)
  C: 1 (12.50%)
  B: 1 (12.50%)
  A: 1 (12.50%)

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
	  avg: 4.0
	  max: C (9)
	  min: Object (2)
	  std: 2.591
	  sum: 33
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbi: number of accessible constructors (inherited + local)
	  avg: 2.0
	  max: A (3)
	  min: Object (2)
	  std: 0.655
	  sum: 17
	cnbm: number of accessible methods (inherited + local)
	  avg: 4.0
	  max: C (7)
	  min: Object (2)
	  std: 1.927
	  sum: 30
	cnbv: number of accessible virtual types (inherited + local)
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnbip: number of introduced properties
	  avg: 3.0
	  max: C (7)
	  min: Bool (0)
	  std: 2.268
	  sum: 21
	cnbrp: number of redefined properties
	  avg: 0.0
	  max: A (1)
	  min: Object (0)
	  std: 0.535
	  sum: 2
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
	  avg: 4.0
	  max: C (9)
	  min: Object (2)
	  std: 2.591
	  sum: 33
	cnba: number of accessible attributes (inherited + local)
	  avg: 0.0
	  max: C (2)
	  min: Object (0)
	  std: 0.845
	  sum: 3
	cnbi: number of accessible constructors (inherited + local)
	  avg: 2.0
	  max: A (3)
	  min: Object (2)
	  std: 0.655
	  sum: 17
	cnbm: number of accessible methods (inherited + local)
	  avg: 4.0
	  max: C (7)
	  min: Object (2)
	  std: 1.927
	  sum: 30
	cnbv: number of accessible virtual types (inherited + local)
	  avg: 0.0
	  max: Object (0)
	  min: Object (0)
	  std: 0.0
	  sum: 0
	cnbip: number of introduced properties
	  avg: 3.0
	  max: C (7)
	  min: Bool (0)
	  std: 2.268
	  sum: 21
	cnbrp: number of redefined properties
	  avg: 0.0
	  max: A (1)
	  min: Object (0)
	  std: 0.535
	  sum: 2
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
	large mclasses (threshold: 4.915)
	   B: 5
	   C: 5
	budding mclasses (threshold: 3.231)
	   C: 3.5
	blooming mclasses (threshold: 15.285)
	   C: 17.5
--- Detection of the usage of covariance static type conformance ---
-- Total --
- Kinds of the subtype -
 list:
  primitive type: 5 (100.00%)
  total: 5
- Variance -
 list:
  monomorph: 5 (100.00%)
  total: 5
- Classes of the subtype -
 list:
  Int: 5 (100.00%)
  total: 5
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
Total number of sends: 18
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
	  avg: 18.0
	  max: base_simple3 (18)
	  min: base_simple3 (18)
	  std: 0.0
	  sum: 18
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
* 21 live callsites
MMethodDef locally designated (by number of CallSites)
 population: 12
 minimum value: 1
 maximum value: 10
 total value: 21
 average value: 1.75
 distribution:
  <=1: sub-population=11 (91.66%); cumulated value=11 (52.38%)
  <=16: sub-population=1 (8.33%); cumulated value=10 (47.61%)
 list:
  base_simple3$Int$output: 10 (47.61%)
  base_simple3$B$val: 1 (4.76%)
  base_simple3$C$val2: 1 (4.76%)
  base_simple3$C$val1: 1 (4.76%)
  base_simple3$B$run: 1 (4.76%)
  ...
  base_simple3$A$defaultinit: 1 (4.76%)
  base_simple3$Sys$baz: 1 (4.76%)
  base_simple3$Sys$bar: 1 (4.76%)
  base_simple3$Sys$foo: 1 (4.76%)
  base_simple3$C$defaultinit: 1 (4.76%)
MMethodDef possibly invoked at runtime (by number of CallSites)
 population: 12
 minimum value: 1
 maximum value: 10
 total value: 21
 average value: 1.75
 distribution:
  <=1: sub-population=11 (91.66%); cumulated value=11 (52.38%)
  <=16: sub-population=1 (8.33%); cumulated value=10 (47.61%)
 list:
  base_simple3$Int$output: 10 (47.61%)
  base_simple3$B$val: 1 (4.76%)
  base_simple3$C$val2: 1 (4.76%)
  base_simple3$C$val1: 1 (4.76%)
  base_simple3$B$run: 1 (4.76%)
  ...
  base_simple3$A$defaultinit: 1 (4.76%)
  base_simple3$Sys$baz: 1 (4.76%)
  base_simple3$Sys$bar: 1 (4.76%)
  base_simple3$Sys$foo: 1 (4.76%)
  base_simple3$C$defaultinit: 1 (4.76%)
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
