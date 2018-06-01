module farstar_converter

import farstar_domain
import farstar_dto
import farstar_repository

# Convert a valid EquipmentDTO obj in Equipment obj
#
# This class does not provide validation, it must be done before using it
#
abstract class EquipmentConverter
	var errors = new Array[Error]

	fun create_from_dto(equipmentDTO: EquipmentDTO): nullable Equipment
	is abstract

	fun update_from_dto(equipment: Equipment, equipmentDTO: EquipmentDTO)
	is abstract
end

# ContainerDTO cannot be update to Container because Container obj attrs are only writable from constructor.
#
# 	var converter = new ContainerConverter
#	var container_dto = new ContainerDTO
#	container_dto.mass = 1
#	container_dto.volume = 1
#	container_dto.name = "container"
#
#	var container = converter.create_from_dto(container_dto)
#	assert container isa Container
#	assert container.mass == 1
#	assert container.volume == 1
#	assert container.location == null
#	assert container.name == "container"
#
class ContainerConverter
	super EquipmentConverter

	redef fun create_from_dto(equipment_dto: EquipmentDTO): Container
	do
		var container = new Container(equipment_dto.mass,
			equipment_dto.volume)
		if equipment_dto.name != null then container.name = equipment_dto.name

		return container
	end
end

# This converter can update Ship equipments only, from his DTO. It can convert
# any ShipDTO type to his concret type eg WarShipDTO to WarShip for example.
#
#	var repository = new EquipmentRepository
# 	var converter = new ShipConverter(repository)
#	assert converter.repository == repository
#
#	var warship_dto = new WarShipDTO
#	warship_dto.mass = 10
#	warship_dto.volume = 10
#	warship_dto.max_weapons_nb = 2
#
#	var phaser = new Phaser(1,1)
#	var blaster = new Blaster(1,1,1)
#	repository.add(phaser)
#	repository.add(blaster)
#
#	warship_dto.equipments.push(phaser.id)
#	warship_dto.equipments.push(blaster.id)
#
#	var warship = converter.create_from_dto(warship_dto)
#	assert warship isa WarShip
#	assert warship.equipments.has(phaser)
#	assert warship.equipments.has(blaster)
#	assert warship.mass == 10 + phaser.mass + blaster.mass
#	assert warship.volume == 10
#	assert warship.max_weapons_nb == 2
#
#	warship_dto.equipments.remove_at(warship_dto.equipments.index_of(phaser.id))
#	var phaser2 = new Phaser(2,2)
#	repository.add(phaser2)
#
#	warship_dto.equipments.push(phaser2.id)
#
#	converter.update_from_dto(warship, warship_dto)
#	assert not warship.equipments.has(phaser)
#	assert warship.equipments.has(phaser2)
#	assert warship.equipments.has(blaster)
#
#	warship_dto.equipments = new Array[Int]
#	converter.update_from_dto(warship, warship_dto)
#	assert warship.equipments.length == 0
#
class ShipConverter
	super EquipmentConverter

	var repository: EquipmentRepository

	redef fun create_from_dto(equipmentDTO: EquipmentDTO): nullable Ship
	do
		if equipmentDTO isa ShipDTO then
			var ship: Ship

			var equipments_from_dto = new Array[Equipment]

			for id in equipmentDTO.equipments do

				var item = self.repository.find(id, "Equipment")

				if item != null then
					equipments_from_dto.push(item)
				end
			end

			if equipmentDTO isa TransportShipDTO then

				if equipmentDTO isa HybridShipDTO then
					ship = new HybridShip(
						equipmentDTO.mass,
						equipmentDTO.volume,
						equipmentDTO.weight_capacity,
						equipmentDTO.volume_capacity,
						equipmentDTO.max_weapons_nb)

					for equipment in equipments_from_dto do
						ship.load(equipment)
					end

					return ship
				end

				ship = new TransportShip(equipmentDTO.mass,
					equipmentDTO.volume,
					equipmentDTO.weight_capacity,
					equipmentDTO.volume_capacity)

				if equipmentDTO.name != null then
					ship.name = equipmentDTO.name
				end

				for equipment in equipments_from_dto do
					ship.load(equipment)
				end

				return ship
			end

			if equipmentDTO isa WarShipDTO then

				if equipmentDTO isa HeavyWarShipDTO then
					ship = new HeavyWarShip(
						equipmentDTO.mass,
						equipmentDTO.volume,
						equipmentDTO.max_weapons_nb)

					for equipment in equipments_from_dto do
						ship.load(equipment)
					end

					if equipmentDTO.name != null then
						ship.name = equipmentDTO.name
					end

					return ship
				end

				if equipmentDTO isa LightWarShipDTO then
					ship = new LightWarShip(
						equipmentDTO.mass,
						equipmentDTO.volume,
						equipmentDTO.max_weapons_nb)

					for equipment in equipments_from_dto do
						ship.load(equipment)
					end

					if equipmentDTO.name != null then
						ship.name = equipmentDTO.name
					end

					return ship
				end

				ship = new WarShip(equipmentDTO.mass,
					equipmentDTO.volume,
					equipmentDTO.max_weapons_nb)

				for equipment in equipments_from_dto do
					ship.load(equipment)
				end

				if equipmentDTO.name != null then
					ship.name  = equipmentDTO.name
				end

				return ship
			end
		end

		return null
	end

	redef fun update_from_dto(equipment: Equipment, equipment_dto: EquipmentDTO)
	do
		if equipment_dto isa ShipDTO and equipment isa Ship then
			var load = equipment.equipments.clone
			for item in load
			do
				equipment.unload(item)
			end
			print equipment.equipments
			print equipment_dto.equipments
			for id in equipment_dto.equipments do
				var equipment_from_id = self.repository.find(id, "Equipment")
				if equipment_from_id != null and equipment.equipments.index_of(equipment_from_id) == -1 then
					equipment.load(equipment_from_id)
				end
			end
		end
	end
end

#
# This converter only create Weapon obj from a valid WeaponDTO obj
#
#	var converter = new WeaponConverter
#
#	var phaser_dto = new PhaserDTO
#	phaser_dto.mass = 1
#	phaser_dto.volume = 1
#
#	var phaser = converter.create_from_dto(phaser_dto)
#	assert phaser isa Phaser
#	assert phaser.mass == 1
#	assert phaser.volume == 1
#	assert not phaser.equipped
#
#	var blaster_dto = new BlasterDTO
#	blaster_dto.mass = 1
#	blaster_dto.volume = 1
#	blaster_dto.gaz_level = 100
#
#	var blaster = converter.create_from_dto(blaster_dto)
#	assert blaster isa Blaster
#	assert blaster.mass == 1
#	assert blaster.volume == 1
#	assert blaster.gaz_level == 100
#	assert not blaster.equipped
#
class WeaponConverter
	super EquipmentConverter

	redef fun create_from_dto(equipmentDTO: EquipmentDTO): Weapon
	do
		if equipmentDTO isa BlasterDTO then

			return new Blaster(equipmentDTO.mass,
				equipmentDTO.volume,
				equipmentDTO.gaz_level)
		end

		return new Phaser(equipmentDTO.mass, equipmentDTO.volume)
	end
end
