import ast

redef class AValue
	fun to_i: Int is abstract
end

redef class ALabelValue
	redef fun to_i do
		if not n_id.labels_to_address.has_key(n_id.text) then
			manager.fatal_error( self, "Label {n_id.text} used but not defined.")
			return 0
		else
			return n_id.labels_to_address[n_id.text]
		end
	end
end
redef class TId
	var labels_to_address: HashMap[String,Int] = (once new HashMap[String,Int])
	#redef fun to_i: Int do return label_to_address[text]
end

redef class ANumberValue
	redef fun to_i do return n_number.text.to_i
end

redef class ACharValue
	redef fun to_i do return n_char.content.first.code_point
end

redef class AStringValue
	# legal but no not recommended
	redef fun to_i do return n_string.content.first.code_point
end

redef class AHexValue
	redef fun to_i do return n_hex.text.trim.to_hex(2)
end

redef class TString # TkBlock
	fun content : String
	do
		return text.substring(1, text.length-2)
	end
end
redef class TChar # TkAscii
	fun content : String
	do
		return text.substring(1, text.length-2)
	end
end
