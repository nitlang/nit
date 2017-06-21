module farstar_repository

import farstar_domain

#
# Class used to mocked a database repository which will keep data in memory.
#
#	var phaser = new Phaser(1,1)
#	var blaster = new Blaster(1,1,1)
#	var container = new Container(10,10)
#	var transport_ship = new TransportShip(1,1,1,0)
#	var hybrid_ship = new HybridShip(1,1,1,0,0)
#
#	var repository = new EquipmentRepository
#
#	repository.add(phaser)
#	assert repository.findAll("Equipment").not_empty
#	assert repository.findAll("Equipment").length == 1
#	assert repository.findAll("Equipment").has(phaser)
#	assert repository.find(phaser.id, "Phaser") == phaser
#
#	repository.add(transport_ship)
#	repository.add(hybrid_ship)
#
#	assert repository.findAll("TransportShip").length == 1
#	assert repository.findAll("HybridShip").length == 1
#
class EquipmentRepository

	private var equipments = new Array[Equipment]

	fun add(equipment: Equipment)
	do
		equipments.add equipment
	end

	fun findAll(static_type: String): Array[Equipment]
	do
		if static_type == "Equipment" then
			return equipments
		end

		var equipments_by_type = new Array[Equipment]

		for equipment in equipments
		do
			if equipment.class_name == static_type then
				equipments_by_type.add(equipment)
			end
		end

		return equipments_by_type
	end

	fun find(id: Int, static_type: String): nullable Equipment
	do
		var found = null
		for equipment in equipments
		do
			if equipment.id == id then
				if static_type == "Equipment" then
					return equipment
				else if equipment.class_name == static_type then
					return equipment
				end
			end
		end

		return null
	end

	fun remove(id: Int)
	do
		var equipment = find(id, "Equipment")
		if equipment isa Ship then
			var loading = equipment.equipments.clone
			for item in loading do
				equipment.unload(item)
			end
		end
		equipments.remove_at equipments.index_of(equipment)
	end

	fun add_fixtures_data
	do
		var phaser = new Phaser(1,1)
		add(phaser)
		var phas = new Phaser(2,2)
		add(phas)
		add(new Phaser(2,2))

		var blas = new Blaster(1,1,15)
		add(blas)
		var blaster = new Blaster(2,2,100)
		add(blaster)
		add(new Blaster(2,2,100))
		add(new Blaster(1,2,0))

		var container = new Container(10, 10)
		add(container)
		var cont = new Container(10, 10)
		add(cont)
		add(new Container(100, 10))

		var ts = new TransportShip(100, 100, 200, 90)
		ts.load(phaser)
		ts.load(container)
		add(ts)

		var warship = new HeavyWarShip(10, 10, 2)
		warship.load(phas)
		warship.load(blas)
		add(warship)

		var hybridship = new HybridShip(200, 200, 250, 190, 5)
		hybridship.load(cont)
		hybridship.load(ts)
		hybridship.load(blaster)
		add(hybridship)
	end
end
