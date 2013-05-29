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
	
	init 
	do
		toolContext.process_options
		modelBuilder = new ModelBuilder(model, toolContext)
		arguments = toolContext.option_context.rest
		prog = arguments.first
		hmClasses = new HashMap[MClass, Set[MProperty]]
		modules = new Array[MModule]
	end

	fun getAllModule 
	do 
		modules = modelBuilder.parse_and_build([prog])
		modelBuilder.full_propdef_semantic_analysis
	end

	# Get the main module in the program
	fun getMainModule 
	do
		getAllModule
		main = modules.first
	end
	# Associate classes to their properties in a HashMap
	fun getClassesAndProp
	do
		if main is null then getMainModule
		for cl in main.intro_mclasses 
		do
			hmClasses[cl] =  main.properties(cl)
		end

		#for k, v in hmClasses do
			#print "p: {k.to_s} :"
			#for val in v do print "\t{val.full_name}"
		#end
	end
	
	fun sortMain(array: Array[MClass])
	do
		var sorter = new MClassSorter[MClass]
		sorter.sort(array)
	end

	fun getPropertiesInfo(cl: MClass, prop: MProperty): String
	do
		var str = "{prop.to_s} : "
		var cl_intro = prop.intro_mclassdef.mclass
		# Check if cl is the intro class of the property
		if not cl_intro is cl then
			str += "\n"
			for red in prop.mpropdefs do
				if not red is prop.mpropdefs.first then
					#var val = red.mproperty.full_name.split_with(':')[0]
					#val = val.split_with(':')[0]
					#str += " refined in {val}\n"
					str += "\t\t\t refined in {red.to_s}\n"
				end
			end
		end
		return str
	end

	fun process
	do
		getClassesAndProp
		var classes = main.intro_mclasses
		sortMain(classes)
			
		print "----------------------------------------------------"
		print "Module :: {main.to_s}"
		print "----------------------------------------------------\n\n"
		var i = 1
		for cl in classes do 
			print "\t{i.to_s}) {cl.to_s}"
			for p in hmClasses[cl] do print "\t\t- {getPropertiesInfo(cl,p)}"	
			print "\n----------------------------------------------------\n"
			i+=1
		end

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
