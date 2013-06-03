import modelbuilder
import exprbuilder
import abstract_compiler
#import metrics

class ReadModule
	var toolContext = new ToolContext
	var model = new Model
	var modelBuilder: ModelBuilder
	var arguments: Array[String]
	var prog: String
	var main: nullable MModule
	var hmClasses: HashMap[MClass, Set[MProperty]]
	var modules: Array[MModule]
	var sorter: nullable MClassSorter[Object]
	
	fun public_color: String do return "\33[1;32m"
	fun protected_color: String do return "\33[1;33m"
	fun private_color: String do return "\33[1;31m"
	fun none_color: String do return "\33[1;31m"
	fun end_sh: String do return "\33[0m"
	fun under_line: String do return "\33[4m"

	init 
	do
		toolContext.process_options
		modelBuilder = new ModelBuilder(model, toolContext)
		arguments = toolContext.option_context.rest
		prog = arguments.first
		hmClasses = new HashMap[MClass, Set[MProperty]]
		modules = new Array[MModule]
	end

	fun getallmodule 
	do 
		modules = modelBuilder.parse_and_build([prog])
		modelBuilder.full_propdef_semantic_analysis
	end

	# Get the main module in the program
	fun getmainmodule 
	do
		getallmodule
		main = modules.first
	end
	# Associate classes to their properties in a HashMap
	fun getclassesandprop
	do
		if main is null then getmainmodule
		for cl in main.mclassdefs do hmClasses[cl.mclass] =  main.properties(cl.mclass)
	end
	
	fun sortMain(array: Array[MClassDef])
	do
		sorter = new MClassSorter[MClassDef]
		sorter.sort(array)
	end

	fun getpropertiesinfo(cl: MClass, prop: MProperty): String
	do
		var str = "{under_line}{prop.to_s}{end_sh}:"
		var cl_intro = prop.intro_mclassdef.mclass
		var properties = new Array[MPropDef]
		for red in prop.mpropdefs do
			str += "\n\t\t\t"
			if red.is_intro then
				str += "Defined by "
			else
				str += "Refined in "
			end	
			str += "{addvisibilitycolor(red)}"
		end
		return str
	end
	
	fun getfullpath(p: Object): String 
	do
		#if not p isa MPropDef or not p isa MClassDef then return "" 
		var str = p.to_s.split_with("#")
		str.remove_at(str.length-1)
		return str.join("::")
	end

	fun addvisibilitycolor(prop: MPropDef): String
	do
		var str = ""
		if prop.mproperty.visibility is public_visibility then 
			str += public_color
		else if prop.mproperty.visibility is protected_visibility then
			str += protected_color
		else if prop.mproperty.visibility is intrude_visibility then
			str += private_color
		else
			str += none_color
		end
		str += "{getfullpath(prop)}{end_sh}"
		return str
	end

	fun printsub_class(cl: MClass)
	do
		print "\t\t{under_line}SUBCLASSES:{end_sh}"
		#for sub in cl.children(model) do print "{sub.to_s}"
		for sub in cl.descendants do print "\t\t\t{sub.name}" 
	end

	fun printparent(cl: MClass)
	do
		print "\t\t{under_line}PARENTS:{end_sh}"
		for parent in cl.ancestors do print "\t\t\t{parent.to_s}"
	end

	fun printrefined(cl: MClass)
	do
		print "\t\t{under_line}REDEF:{end_sh}"
		for red in mredef(cl) do print "\t\t\tRefined in the module {getfullpath(red)}" 
	end
	
	fun printdefinedby(cl: MClass) do
		print "\tDefined by the module {public_color}{cl.intro_mmodule.to_s}{end_sh}\n"
	end

	fun process
	do
		getclassesandprop
		#var classes = main.intro_mclasses
		var classes = main.mclassdefs
		sortMain(classes)
			
		print "----------------------------------------------------"
		print "Module :: {public_color}{main.to_s}{end_sh}"
		print "----------------------------------------------------\n\n"
		var i = 1
		for cl in classes do 
			var curclass = cl.mclass
			print "\t{i.to_s}) {under_line}{curclass.to_s}{end_sh}"
			printdefinedby(curclass)
			printparent(curclass)
			printrefined(curclass)
			printsub_class(curclass)

			var arrProp = hmClasses[curclass].to_a
			sorter = new MClassSorter[MProperty]
			sorter.sort(arrProp)
			for p in arrProp do print "\n\t\t- {getpropertiesinfo(curclass,p)}"	
			print "\n----------------------------------------------------\n"
			i+=1
		end
		print_legend
	end
	
	fun mredef(cl: MClass): Set[String] do
		var lst = new HashSet[String]
		for mclassdef in cl.mclassdefs do
			if mclassdef.is_intro then continue
			lst.add(mclassdef.to_s)
		end
		return lst
	end


	fun print_legend
	do	
		print "\n{under_line}LEGEND{end_sh}"
		print "\t{public_color}public{end_sh}"
		print "\t{protected_color}protected{end_sh}"
		print "\t{private_color}private{end_sh}"
		print "\t{none_color}none{end_sh}"
	end
end

class MClassSorter[E: Object]
	super AbstractSorter[E]
	redef fun compare(a, b)
	do
		var sa: String
		var sb: String
		var d = _dico
		if d.has_key(a) then
			sa = d[a]
		else
			sa = a.to_s
			d[a]= sa
		end
		if d.has_key(b) then
			sb = d[b]
		else
			sb = b.to_s
			d[b] = sb
		end
		return sa <=> sb
	end

	var _dico: HashMap[Object, String] = new HashMap[Object, String]
	init do end
end

redef class MClass
	# Get parents of the class (direct super classes only)
	fun parents: Set[MClass] do
		var lst = new HashSet[MClass]
		# explore all definitions of the class (refinement)
		for mclassdef in self.mclassdefs do
			for parent in mclassdef.supertypes do
				lst.add(parent.mclass)
			end
		end
		return lst
	end

	# Get ancestors of the class (all super classes)
	fun ancestors: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for super_mclassdefs in mclassdef.in_hierarchy.greaters do
				if super_mclassdefs is mclassdef then continue
				lst.add(super_mclassdefs.mclass)
			end
		end
		return lst
	end

	# Get childrens of the class (direct sublasses only)
	fun children(model: Model): Set[MClass] do
		var lst = new HashSet[MClass]
		for other in model.mclasses do
			if other == self then continue
			if other.parents.has(self) then lst.add(other)
		end
		return lst
	end

	# Get descendant of the class
	fun descendants: Set[MClass] do
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub_mclassdef in mclassdef.in_hierarchy.smallers do
				if sub_mclassdef is mclassdef then continue
				lst.add(sub_mclassdef.mclass)
			end
		end
		return lst
	end
end

var read = new ReadModule
read.process
