The meta model of Nit programs

These modules define the entities of the Nit meta-model like modules, classes, types and properties
They also provide an API to build and query models.
All model classes starts with the `M` letter (`MModule`, `MClass`, etc.)

The model is used by tools that need a higher view than a AST (see `parser`).
The model represents What the programmer means.

Because of the specification of the Nit language, the model is complex and sometime difficult to understand.

## POSet

There is a lot of classes and relation in the model.
Most of there relations are based on posets (from the lib `poset`.)

Posets are *partially-ordered sets*; they are used to modelize hierarchies of things (eg. hierarchies of modules)

The poset is an expressive data structure that generalizes most services about hierarchies.
This avoid the duplication of code and the over-specialization of services.
The drawback is that a specific request on the model use an abstract vocabulary.

Example. you want the set of modules directly imported by another module.
There is no specific method in `MModule` for that, the good way is to use services on the some posets

~~~
var res = mymodule.in_importation.direct_greaters
~~~

posets are used in two dual ways :

 - by the whole hierarchy, most are in the `Model` and are named `something_somerelation_hierarchy` (eg. `Model::mmodule_importation_hierarchy`).
 - by the view on en entity in a specific hierarchy, they are in the `MEntity` subclasses and are name `in_somerelation`. (eg. `MModule::in_importation`).


## Refinement

The refinement is the cause of the biggest difficulty with the model since the relations between entities are relative to the module considered.

"How many method in this class?" -- It depends, what modules are you considering?
"What is called by `x.foo` when `x` is dynamically a `Bar`?" -- It depends, in which main module?

This relativity cause most services on model entities to have an additional parameter for the module considered.
