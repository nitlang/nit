# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Building virtual function tables by coloration in closed world
module vft_computation

intrude import coloring

redef class ModelBuilder
	fun build_vft(mainmodule: MModule)
	do
		self.toolcontext.info("*** BUILDING VFT ***", 1)
		
		#for mclassdef in model.mclassdef_hierarchy do
		#	print mclassdef
		#	for p in mclassdef.mclass.methods do
		#		print "\t- {p}"
		#	end
		#end
		
		# colorize classes and properties 
		self.colorize_model(mainmodule)
		
		# fill tables
		for mclass in model.mclasses do
			if mclass.is_colorized then
				mclass.fill_vft
				mclass.fill_attrs
			end
		end

		#print "After coloration of core:"
		#for mclass in model.mclasses do
		#	print " - {mclass}"
		#	for i in [0 .. mclass.vft.length[ do
		#		var mpropdef = mclass.vft[i]
		#		if mpropdef == null then
		#			print "\t- {i}: null"
		#		else
		#			print "\t- {i}: {mpropdef.c_name}"
		#		end
		#	end
		#end
		
		self.toolcontext.info("*** END OF VFT BUILDING ***", 1)
	end
end

redef class MClass

	# The vft table
	private var vft: Array[nullable MMethodDef] = new Array[nullable MMethodDef]

	# The attributes table
	private var attrs: Array[nullable MAttributeDef] = new Array[nullable MAttributeDef]

	# Fill the vft 
	# assert is_colorized = true
	private fun fill_vft do
		# first, fill table from parents
		for parent in super_classes do
			assert parent_is_colorized: parent.is_colorized
			for mproperty in parent.methods do
				var color = mproperty.color.as(not null)
				if vft.length <= color then
					for i in [vft.length .. color[ do
						vft[i] = null
					end 
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == parent then
						vft[color] = mpropdef						
					end
				end
			end
		end
	
		# then override with local methods
		assert is_colorized: is_colorized 
		for mproperty in self.methods do
			var color = mproperty.color.as(not null)
			if vft.length <= color then
				for i in [vft.length .. color[ do
					vft[i] = null
				end 
			end
			for mpropdef in mproperty.mpropdefs do
				if mpropdef.mclassdef.mclass == self then
					vft[color] = mpropdef						
				end
			end
		end
	end
	
	# Fill the attrs table
	# assert is_colorized = true
	private fun fill_attrs do
		# first, fill table from parents
		for parent in super_classes do
			assert parent_is_colorized: parent.is_colorized
			for mproperty in parent.attributes do
				var color = mproperty.color.as(not null)
				if attrs.length <= color then
					for i in [attrs.length .. color[ do
						attrs[i] = null
					end 
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == parent then
						attrs[color] = mpropdef						
					end
				end
			end
		end
	
		# then override with local methods
		assert is_colorized: is_colorized 
		for mproperty in self.attributes do
			var color = mproperty.color.as(not null)
			if attrs.length <= color then
				for i in [attrs.length .. color[ do
					attrs[i] = null
				end 
			end
			for mpropdef in mproperty.mpropdefs do
				if mpropdef.mclassdef.mclass == self then
					attrs[color] = mpropdef						
				end
			end
		end
	end
end