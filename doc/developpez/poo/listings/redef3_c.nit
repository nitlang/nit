redef class String
	redef fun to_s 
	do
		return self.to_upper
	end
end

var chaine = "Hello World !"

print chaine #HELLO WORLD !
