
module linearization
import modelize_class
import test_phase




abstract class Linearizable
	var name : String 
	var parents = new HashSet[Linearizable]	
	fun linearize: Array[Linearizable]
	do
		self.init_linearization
		return self.mro
	end
	#initialise "name" and "parents"
	fun init_linearization is abstract

	#Compute the class precedence list (mro) according to C3
	fun mro:  Array[Linearizable]
	do
		var result = new Array[Array[Linearizable]]
		result.add([self])
		for parent in self.parents do
			result.add(parent.mro)
		end
		var new_arr = new Array[Linearizable]
		for par in self.parents do
			new_arr.add(par)
		end
		result.add( new_arr)
		return merge(result)
	end

	fun debug(seqs: Array[Array[Linearizable]])
	do

	        printn"["
		for s in seqs do
			printn "["
			for t in s do
				printn t.name + " "
			end
			printn "]"
		end
		print"]"
	end
	#apply c3 algorithm on sequence list: 
	#L: linearisation
	#B1..BN are parents of C 
	#L[C(B1 ... BN)] = C + merge(L[B1] ... L[BN], B1 ... BN)


	fun merge(seqs: Array[Array[Linearizable]]): Array[Linearizable]
	do
		printn "CPL["+ seqs[0][0].name + "]= "
		debug(seqs)
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
			i+=1
			printn "round" + i.to_s
			for seq in nonemptyseqs do
				cand = seq[0]
				print " candidate... " + cand.name
				var nothead = new Array[Linearizable]
				for s in nonemptyseqs do
					if s.length > 1 then
						for t in [1..s.length[ do
							if cand.name == s[t].name then
								nothead.append(s)
							end
						end
					end
				end
				if nothead.length > 0 then
					problem_cand = cand.name
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
	redef fun init_linearization
	do
		self.name = self.mclass.name
		for parent in self.supertypes do
			self.parents.add parent.mclass.intro
			parent.mclass.intro.init_linearization
		end
	end


end

redef class MModule
	super Linearizable

	redef fun init_linearization
        do
		#FIXME I don't know if it is a bug or i misunderstood nit
		#concept of redefiniton but if delete this line, the variable name of linearizable class will no longer initialized
		self.name = self.name
		for parent in self.in_importation.direct_greaters do
			self.parents.add parent
			parent.init_linearization
		end
	end
end

redef class ToolContext
        var maphase = new MaPhase(self, null)
end

class MaPhase
	super Phase
        redef fun process_mainmodule(mainmodule, mm)
        do
                var classes = mainmodule.flatten_mclass_hierarchy
		var result = new Array[Linearizable]
		result = mainmodule.linearize
		print "--------------------Result--------------"
		for c in result do
			print c.name
		end
		print "-----------------Finish----------------"

                result = new Array[Linearizable]
                printn"Which class you want to linearise: "
                var name = gets.to_s
                for class_ in classes do
                        var class_def = class_.intro
                        if class_def.mclass.name == name then
				result = class_def.linearize
				print "--------------------Result--------------"
				for c in result do
                                        print c.name
                                end
                                print "-----------------Finish----------------"
                        end
                end
        end
end
