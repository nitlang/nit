import modelbuilder
import exprbuilder
import abstract_compiler

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

	fun get_all_module 
	do 
		modules = modelBuilder.parse_and_build([prog])
		modelBuilder.full_propdef_semantic_analysis
	end

	# Get the main module in the program
	fun get_main_module 
	do
		get_all_module
		main = modules.first
	end
	# Associate classes to their properties in a HashMap
	fun getClassesAndProp
	do
		if main is null then get_main_module
		for cl in main.intro_mclasses do hmClasses[cl] =  main.properties(cl)
	end
	
	fun sortMain(array: Array[MClass])
	do
		sorter = new MClassSorter[MClass]
		sorter.sort(array)
	end

	fun get_properties_info(cl: MClass, prop: MProperty): String
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
			str += "{add_visibility_color(red)}"
		end
		return str
	end
	
	fun get_full_path(p: MPropDef): String 
	do
		var str = p.to_s.split_with("#")
		str.remove_at(str.length-1)
		return str.join("::")
	end

	fun add_visibility_color(prop: MPropDef): String
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
		str += "{get_full_path(prop)}{end_sh}"
		return str
	end

	fun process
	do
		getClassesAndProp
		var classes = main.intro_mclasses
		sortMain(classes)
			
		print "----------------------------------------------------"
		print "Module :: {public_color}{main.to_s}{end_sh}"
		print "----------------------------------------------------\n\n"
		var i = 1
		for cl in classes do 
			print "\t{i.to_s}) {under_line}{cl.to_s}{end_sh}"

			var arrProp = hmClasses[cl].to_a
			sorter = new MClassSorter[MProperty]
			sorter.sort(arrProp)
			for p in arrProp do print "\n\t\t- {get_properties_info(cl,p)}"	
			print "\n----------------------------------------------------\n"
			i+=1
		end
		print_legend
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

var read = new ReadModule
read.process
