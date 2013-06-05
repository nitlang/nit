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
	
	init do
		toolContext.process_options
		modelBuilder = new ModelBuilder(model, toolContext)
		arguments = toolContext.option_context.rest
		prog = arguments.first
		hmClasses = new HashMap[MClass, Set[MProperty]]
		modules = new Array[MModule]
	end

	fun getallmodule do 
		modules = modelBuilder.parse_and_build([prog])
		modelBuilder.full_propdef_semantic_analysis
	end

	# Get the main module in the program
	fun getmainmodule do
		getallmodule
		main = modules.first
	end
	# Associate classes to their properties in a HashMap
	fun getclassesandprop do
		if main is null then getmainmodule
		for cl in main.mclassdefs do hmClasses[cl.mclass] =  main.properties(cl.mclass)
	end
	
	fun sortMain(array: Array[MClassDef]) do
		sorter = new MClassSorter[MClassDef]
		sorter.sort(array)
	end

	fun getpropertiesinfo(cl: MClass, prop: MProperty): String do
		var str = "{prop.to_s}:".under_line
		var cl_intro = prop.intro_mclassdef.mclass
		var properties = new Array[MPropDef]
		for red in prop.mpropdefs do
			str += "\n\t\t\t"
			if red.is_intro then
				str += "Defined by "
			else
				str += "Refined in "
			end	
			str += red.add_visibility_color
		end
		return str
	end
	
	fun process do
		getclassesandprop
		var classes = main.mclassdefs
		sortMain(classes)
			
		print "----------------------------------------------------"
		print "Module :: {main.to_s.green}"
		print "----------------------------------------------------\n\n"
		var i = 1
		for cl in classes do 
			var curclass = cl.mclass
			print "\t{i.to_s}) {curclass.to_s.under_line}"
			curclass.print_defined_by
			curclass.print_parent
			curclass.print_refined(main.as(not null))
			curclass.print_sub_class

			var arrProp = hmClasses[curclass].to_a
			sorter = new MClassSorter[MProperty]
			sorter.sort(arrProp)
			for p in arrProp do print "\n\t\t- {getpropertiesinfo(curclass,p)}"	
			print "\n----------------------------------------------------\n"
			i+=1
		end
		print_legend
	end
	
	fun print_legend do	
		print "\nLEGEND".under_line
		print "\tpublic".green
		print "\tprotected".yellow
		print "\tprivate".red
		print "\tnone".red
	end
end

# Redef String class to add a function to color the string
redef class String
	
	private fun add_escape_char(escapechar: String): String do
		var s = escapechar
		s += "{self}\33[0m"
		return s
	end

	fun red: String do return add_escape_char("\33[1;31m")
	fun yellow: String do return add_escape_char("\33[1;33m")
	fun green: String do return add_escape_char("\33[1;32m")
	fun blue: String do return add_escape_char("\33[1;34m")
	fun cyan: String do return add_escape_char("\33[1;36m")
	fun bold: String do return add_escape_char("\33[1m")
	fun under_line: String do return add_escape_char("\33[4m")
end

class MClassSorter[E: Object]
	super AbstractSorter[E]
	redef fun compare(a, b) do
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

redef class MPropDef
	# Attribuate a color in terms of the visibility of the property
	fun add_visibility_color: String do
		var str = ""
		if self.mproperty.visibility is public_visibility then
			str = self.full_path.green
		else if self.mproperty.visibility is protected_visibility then
			str = self.full_path.yellow
		else
			str = self.full_path.red
		end
		return str
	end

	# Get the full of a property
	fun full_path: String do
		var str = self.to_s.split_with("#")
		str.remove_at(str.length-1)
		return str.join("::")
	end
end

redef class MClass
	
	# Print in which MModule is define this MClass
	fun print_defined_by do
		print "\tDefined by the module {intro_mmodule.to_s.green}\n"
	end

	# Print all parents of itself
	fun print_parent do
		var lst = new HashSet[MClass]
		print "\t\tPARENTS:".under_line
		for mclassdef in self.mclassdefs do
			for parent in mclassdef.in_hierarchy.greaters do
				if parent is mclassdef or lst.has(parent.mclass )then continue
				lst.add(parent.mclass)
				print "\t\t\t{parent.mclass.to_s}"
			end
		end
	end
	
	# Print all sub-classes
	fun print_sub_class do
		print "\t\tSUBCLASSES:".under_line
		var lst = new HashSet[MClass]
		for mclassdef in self.mclassdefs do
			for sub in mclassdef.in_hierarchy.smallers do
				if sub is mclassdef or lst.has(sub.mclass) then continue
				lst.add(sub.mclass)
				print "\t\t\t{sub.mclass.to_s}"
			end
		end
	end
	
	# Print in which MModule this MClass is redefines
	fun print_refined(mmodule: MModule) do
		print "\t\tREDEF:".under_line
		mmodule.linearize_mclassdefs(self.mclassdefs)
		for red in mclassdefs do
			if red is self.mclassdefs.first then continue
			print "\t\t\tRefined in the module {red.mmodule}"
		end
	end
end


class Html
	var file: OFStream
	init(filename: String) do
		self.file = new OFStream.open(filename)
	end

end

var read = new ReadModule
read.process
