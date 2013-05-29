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
		sorter = new MClassSorter[MClass]
		sorter.sort(array)
	end

	fun getPropertiesInfo(cl: MClass, prop: MProperty): String
	do
		var str = "\33[4m{prop.to_s}\33[0m: \n\t\t\t Define in {prop.intro_mclassdef.to_s}"
		var cl_intro = prop.intro_mclassdef.mclass
		# Check if cl is the intro class of the property
		if not cl_intro is cl then
			str += "\n"
			var arrProp = prop.mpropdefs
			sorter = new MClassSorter[MProperty]
			sorter.sort(arrProp)
			for red in arrProp do
				if not red is arrProp.first then
					#var val = red.mproperty.full_name.split_with(':')[0]
					#val = val.split_with(':')[0]
					#str += " refined in {val}\n"
					var addColor = "\t\t\t Refined in "
					#str += "\t\t\t refined in {getFullPath(red)}  {red.mproperty.visibility.to_s}\n"
					if red.mproperty.visibility is public_visibility then 
						addColor += "\33[1;32m"
					else if red.mproperty.visibility is protected_visibility then
						addColor += "\33[0;31m"
					else if red.mproperty.visibility is intrude_visibility then
						addColor += "\33[1;33m"
					else
						addColor += "\33[0;33m"
					end
					addColor += " {getFullPath(red)} \33[0m \n"
					str += addColor 
				end
			end
		end
		return str
	end
	
	fun getFullPath(p: MPropDef): String 
	do
		var str = p.to_s.split_with('#')
		str.remove_at(str.length-1)
		return str.join("::")
	end

	fun process
	do
		getClassesAndProp
		var classes = main.intro_mclasses
		sortMain(classes)
			
		print "----------------------------------------------------"
		print "Module :: \33[0;32m {main.to_s} \33[0m"
		print "----------------------------------------------------\n\n"
		var i = 1
		for cl in classes do 
			print "\t{i.to_s}) \33[4m{cl.to_s}\33[0m"

			var arrProp = hmClasses[cl].to_a
			sorter = new MClassSorter[MProperty]
			sorter.sort(arrProp)
			for p in arrProp do print "\t\t- {getPropertiesInfo(cl,p)}"	
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
