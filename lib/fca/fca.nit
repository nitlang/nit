# This file is part of NIT (https://nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Formal Concept Analysis
#
# Formal concept analysis (FCA) is a principled way of deriving a concept hierarchy
# or formal ontology from a collection of objects and their properties.
# This means deriving implicit relationships between objects regarding their
# attributes.
#
# Each concept in the hierarchy represents the set of objects sharing the same
# values for a certain set of properties; and each sub-concept in the hierarchy
# contains a subset of the objects in the concepts above it.
#
# Formal concept analysis finds practical application in fields including data
# mining, text mining, machine learning or semantic web.
#
# ## Building a FormalContext
#
# We use the example from https://en.wikipedia.org/wiki/Formal_concept_analysis:
#
# ~~~
# var fc = new FormalContext[Int, String]
# fc.set_object_attributes(1, ["odd", "square"])
# fc.set_object_attributes(2, ["even", "prime"])
# fc.set_object_attributes(3, ["odd", "prime"])
# fc.set_object_attributes(4, ["even", "composite", "square"])
# fc.set_object_attributes(5, ["odd", "prime"])
# fc.set_object_attributes(6, ["even", "composite"])
# fc.set_object_attributes(7, ["odd", "prime"])
# fc.set_object_attributes(8, ["even", "composite"])
# fc.set_object_attributes(9, ["odd", "square", "composite"])
# fc.set_object_attributes(10, ["even", "composite"])
# ~~~
#
# ## Computing the set of FormalConcept
#
# ~~~
# var concepts = fc.formal_concepts
# for concept in concepts do
#	print concept
# end
# ~~~
#
# ## Visualizing formal concept with ConceptLattice
#
# ~~~nitish
# var cl = new ConceptLattice[Int, String].from_concepts(concepts)
# cl.show_dot
# ~~~
module fca

import poset

# Formal Context
#
# A formal context is a triple *K = (G, M, I)*, where *G* is a set of `objects`,
# *M* is a set of `attributes`, and *I ⊆ G × M* is a binary relation called incidence
# that expresses which objects have which attributes (`objects_attributes`).
#
# Predicate *gIm* designates object *g*'s having attribute *m*.
# For a subset *A ⊆ G* of objects and a subset *B ⊆ M* of attributes, one defines
# two derivation operators as follows:
#
# * *A' = {m ∈ M | ∀ g ∈ A, gIm}*, and dually
# * *B' = {g ∈ G | ∀ m ∈ B, gIm}*.
class FormalContext[O: Object, A: Object]

	# Objects in the context
	var objects = new HashSet[O]

	# Attributes considered to build concepts
	var attributes = new HashSet[A]

	# Association between objects and attributes
	var objects_attributes = new HashMap[O, Set[A]]

	# Associate a set of `attributes` to `object`
	fun set_object_attributes(object: O, attributes: Collection[A]) do
		for attribute in attributes do
			set_object_attribute(object, attribute)
		end
	end

	# Associate an `attribute` to `object`
	fun set_object_attribute(object: O, attribute: A) do
		attributes.add attribute
		objects.add object
		if not objects_attributes.has_key(object) then
			objects_attributes[object] = new HashSet[A]
		end
		objects_attributes[object].add attribute
	end

	# Derive the set of formal concepts from the objects and attributes
	fun formal_concepts: Set[FormalConcept[O, A]] do
		# black magic!

		var concepts = new HashSet[FormalConcept[O, A]]

		var extentsByAttr = new HashMap[Set[A], Set[O]]
		for attribute in attributes do
			var ka = new HashSet[A].from([attribute])
			extentsByAttr[ka] = new HashSet[O]
			for object in objects do
				if not objects_attributes[object].has(attribute) then continue
				extentsByAttr[ka].add(object)
			end
		end

		var nextents = new HashMap[Set[A], Set[O]]
		for k1, v1 in extentsByAttr do
			for k2, v2 in extentsByAttr do
				if k1 == k2 then continue
				var n = v1.intersection(v2)
				if extentsByAttr.values.has(n) then continue
				var ka = k1.union(k2)
				nextents[ka] = n
			end
		end
		extentsByAttr.add_all nextents

		var contained = true
		for k1, v1 in extentsByAttr do
			if not contained then break
			for k2, v2 in extentsByAttr do
				if k1 == k2 then continue
				var n = v1.intersection(v2)
				if extentsByAttr.values.has(n) then continue
				contained = false
				break
			end
		end

		if contained then
			extentsByAttr[new HashSet[A]] = new HashSet[O].from(objects)
		end

		var extents = new HashSet[Set[O]]
		for objects in extentsByAttr.values do
			extents.add objects
		end

		for extent in extents do
			var intents: Set[A] = new HashSet[A]
			var count = 0
			var cl = new FormalConcept[O, A]
			if extent.is_empty then
				intents.add_all(attributes)
			else
				for object in objects do
					if not extent.has(object) then continue
					var prev = objects_attributes[object]
					if count > 0 then
						intents = prev.intersection(intents)
					else
						intents = prev
					end
					count += 1
					cl.objects.add(object)
				end
			end
			cl.attributes.add_all intents
			concepts.add cl
		end

		return concepts
	end
end

# Formal Concept
#
# A pair *(A,B)* is a formal concept of a FormalContext *(G, M, I)* provided that:
#
# * *A ⊆ G*,
# * *B ⊆ M*,
# * *A′ = B*, and
# * *B′ = A*.
#
# Equivalently and more intuitively, *(A,B)* is a formal concept precisely when:
#
# * every object in *A* has every attribute in *B*,
# * for every object in *G* that is not in *A*, there is some attribute in *B* that
#   the object does not have,
# * for every attribute in *M* that is not in *B*, there is some object in *A*
#   that does not have that attribute.
class FormalConcept[O: Object, A: Object]

	# Concept attributes
	var attributes = new HashSet[A]

	# Concept objects
	var objects = new HashSet[O]

	# Is `self` a subconcept of `super_concept`?
	#
	# A concept C1 is a subconcept of C2 if C2 has all the objects of C1.
	fun is_subconcept(super_concept: FormalConcept[O, A]): Bool do
		if self == super_concept then return false
		if objects.length > super_concept.objects.length then return false
		return super_concept.objects.has_all(objects)
	end

	redef fun to_s do return "{attributes}\n{objects}"
end

# Concept Lattice
#
# Formal concepts are partially ordered with regard to inclusion of their extents
# or (which is equivalent) inverse inclusion of their intent.
class ConceptLattice[O: Object, A: Object]
	super POSet[FormalConcept[O, A]]

	# Build `self` from a set of formal `concepts`.
	init from_concepts(concepts: Set[FormalConcept[O, A]]) do
		for c in concepts do
			add_node c
		end
		for c1 in concepts do
			for c2 in concepts do
				if c1 == c2 then continue
				if not is_lower_neighbour(c1, c2, concepts) then continue
				add_edge(c2, c1)
			end
		end
	end

	# Is `sub` the greatest lower bound of `sup` considering all `concepts`?
	fun is_lower_neighbour(sub, sup: FormalConcept[O, A], concepts: Set[FormalConcept[O, A]]): Bool
	do
		if sub == sup then return false
		if not sub.is_subconcept(sup) then return false
		for concept in concepts do
			if sub == concept then continue
			if sup == concept then continue
			if not sub.is_subconcept(concept) then continue
			if not concept.is_subconcept(sup) then continue
			return false
		end
		return true
	end
end
