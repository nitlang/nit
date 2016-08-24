# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Aymen Frikha <aymen.frikha88@gmail.com>
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

#Service to linearize modules and classes
module linearization

import modelize_class
import test_phase

#Ancetor of MClassDef and MModule to let classes and modules able to be linearized
abstract class Linearizable
	#Return class or module name
	fun element_name : String is abstract 
	
	#Return class or module parents
	fun element_parents : HashSet[Linearizable] is abstract	
	
	#Compute the class precedence list (mro) according to C3
	fun linearize(dbg: Bool):  Array[Linearizable]
	do
		var result = new Array[Array[Linearizable]]
		result.add([self])
		for parent in self.element_parents do
			result.add(parent.linearize(dbg))
		end
		var new_arr = new Array[Linearizable]
		for par in self.element_parents do
			new_arr.add(par)
		end
		result.add( new_arr)
		return merge(result, dbg)
	end
	
	#Debug the linearisation process
	fun debug(seqs: Array[Array[Linearizable]])
	do
		printn"["
		for s in seqs do
			printn "["
			for t in s do
				printn t.element_name + " "
			end
			printn "]"
		end
		print"]"
	end

	#Apply c3 algorithm on sequence list: 
	#L: linearisation
	#B1..BN are parents of C 
	#L[C(B1 ... BN)] = C + merge(L[B1] ... L[BN], B1 ... BN)
	fun merge(seqs: Array[Array[Linearizable]], dbg: Bool): Array[Linearizable]
	do
		if dbg then
			printn "\n CPL["+ seqs[0][0].element_name + "]= "
			debug(seqs)
		end
		var res = new Array[Linearizable]
		var i = 0
		var cand: nullable Linearizable = null
		var problem_cand : nullable String = null
		loop
			var nonemptyseqs = new Array[Array[Linearizable]]
			for seq in seqs do
				if seq.length > 0 then
					nonemptyseqs.add(seq)
				end
			end
			if nonemptyseqs.length == 0 then
				return res
			end
			if dbg then 
				i+=1
				print "round" + i.to_s
			end
			for seq in nonemptyseqs do
				cand = seq[0]
				if dbg then
					print " candidate... " + cand.element_name
				end
				var nothead = new Array[Linearizable]
				for s in nonemptyseqs do
					if s.length > 1 then
						for t in [1..s.length[ do
							if cand.element_name == s[t].element_name then
								nothead.append(s)
							end
						end
					end
				end
				if nothead.length > 0 then
					problem_cand = cand.element_name
					cand = null
				else
					 break
				end
			end
			if cand == null then
				print "Inconsistent hierarchy caused by parent {problem_cand}"
				break
			end
			res.add(cand)
			for seq in nonemptyseqs do
				if seq[0] == cand then
					seq.remove_at(0)
				end
			end
		end
		return res
	end
end

redef class MClassDef
	super Linearizable
	
	redef fun element_name 
	do 
		return self.mclass.name 
	end
	
	redef fun element_parents
	do
		var parents = new HashSet[Linearizable]
		for parent in self.supertypes do
			parents.add parent.mclass.intro
			parent.mclass.intro.element_parents
		end
		return parents
	end
end

redef class MModule
	super Linearizable

	redef fun element_name
	do
		return self.name
	end
	
	redef fun element_parents
	do
		var parents = new HashSet[Linearizable]
		for parent in self.in_importation.direct_greaters do
			parents.add parent
			parent.element_parents
		end
		return parents
	end
end

redef class ToolContext
	var lin_phase = new LinearizationPhase(self, null)
end

class LinearizationPhase
	super Phase
	
	#Test Linearization algorithm
	redef fun process_mainmodule(mainmodule, mm)
	do	
		var dbg: Bool = false
		var classes = mainmodule.flatten_mclass_hierarchy
		var result = new Array[Linearizable]
		if self.toolcontext.verbose_level > 0 then
			dbg = true
		end
		#Linearize modules
		result = mainmodule.linearize(dbg)
		
		print "--------------------Result--------------"
		for c in result do
			print c.element_name
		end
		print "-----------------Finish----------------"

		result = new Array[Linearizable]
		printn"Which class you want to linearize: "
		var name = gets.to_s
		for class_ in classes do
			var class_def = class_.intro
			if class_def.mclass.name == name then
				#Linearize class
				result = class_def.linearize(dbg)
				
				print "--------------------Result--------------"
				for c in result do
					print c.element_name
				end
				print "-----------------Finish----------------"
			end
		end
	end
end
