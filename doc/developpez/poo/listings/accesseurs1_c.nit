class MaClasse
	var minutes: Int

	fun heures: Int 
	do
		return minutes / 60
	end

	fun heures=(val: Int)
	do
		minutes = val * 60
	end
end
