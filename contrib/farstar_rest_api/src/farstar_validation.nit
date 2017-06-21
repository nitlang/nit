module farstar_validation

import validator
import farstar_dto
import farstar_repository

#
# Validator for EquipmentDTO in order to create a valid Equipment object
# A valid Equipment has a mass and a volume positive integer value, a location
# null a creation (only loading/unloading allows location attr modification)
#
#	var validator = new EquipmentValidator
#
#	assert validator.supports(new PhaserDTO)
#	assert validator.supports(new TransportShipDTO)
#	assert validator.supports(new ContainerDTO)
#	assert validator.supports(new BlasterDTO)
#	assert not validator.supports(new Container(1,1))
#
#	var errors = new Array[Error]
#	var equipment_dto = new ContainerDTO
#	equipment_dto.mass = 1
#	equipment_dto.volume = 1
#	equipment_dto.location = null
#
#	validator.validate(equipment_dto, errors)
#
#	assert errors.length == 0
#
class EquipmentValidator
	super Validator

	private var minimum_mass_value = 0
	private var minimum_volume_value = 0

	redef fun supports(target: nullable Object): Bool do return target isa EquipmentDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		var equipment_dto = target.as(EquipmentDTO)

		if equipment_dto.mass <= 0 then errors.add(new Error("Mass must be positive"))
		if equipment_dto.volume <= 0 then errors.add(new Error("Volume must be positive"))
		if equipment_dto.location != null then errors.add(new Error("Location cannot be set this way"))
	end
end

#
# Validate a ContainerDTO object in order to create a valid Container object
#
class ContainerValidator
	super EquipmentValidator
end

#
# Validate a ShipDTO object in order to create a valid Ship object.
# A Ship can only load existing Equipment object (in a specified repository), identified by id in the DTO
#
#	var repository = new EquipmentRepository
#	var validator = new ShipValidator(repository)
#
#	assert validator.supports(new TransportShipDTO)
#	assert validator.supports(new WarShipDTO)
#	assert validator.supports(new LightWarShipDTO)
#	assert validator.supports(new HeavyWarShipDTO)
#	assert validator.supports(new HybridShipDTO)
#	assert not validator.supports(new BlasterDTO)
#
#
#
#	assert validator.repository == repository
#
#	var ship_dto = new TransportShipDTO
#	ship_dto.mass = 100
#	ship_dto.volume = 100
#
#	var equipment = new Container(1,1)
#
# The previous equipment must be inserted in the repository, in order to be validated
#	var errors = new Array[Error]
# bad
#	ship_dto.equipments.push(equipment.id)
#	validator.validate(ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Unknown Equipment to load."
# good
#	errors = new Array[Error]
#	repository.add(equipment)
#	ship_dto.equipments.push(equipment.id)
#	validator.validate(ship_dto, errors)
#	assert errors.length == 0
#
# Moreover, an already loaded Equipment cannot be load
#	var ship = new WarShip(1,1,2)
#	var phaser = new Phaser(1,1)
#	ship.load(phaser)
#
#	var ship_dto2 = new TransportShipDTO
#	ship_dto2.mass = 2
#	ship_dto2.volume = 2
#
#	repository.add(phaser)
#
#	ship_dto2.equipments.push(phaser.id)
#	errors = new Array[Error]
#	validator.validate(ship_dto2, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Impossible to load an equipment already loaded. Cannot determine the owner without the id."
#
# if an Equipment object is already loaded in the Ship and
# specified as id in the ShipDTO to validate, it will pass in order to simplify update
# for user (case of PUT request). But the concrete Ship id must be specified in the request body
# thus written in the DTO
#
#	var blaster = new Blaster(1,1,30)
#	repository.add(blaster)
#	ship_dto.equipments.push(blaster.id)
# 	ship.load(blaster)
#
# bad : missing id case
# 	errors = new Array[Error]
#	validator.validate(ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Impossible to load an equipment already loaded. Cannot determine the owner without the id."
#
# good: id is specified
# 	errors = new Array[Error]
#	ship_dto.id = ship.id
#	validator.validate(ship_dto, errors)
#	assert errors.length == 0
#
class ShipValidator
	super EquipmentValidator

	var repository: EquipmentRepository

	redef fun supports(target: nullable Object): Bool do return target isa ShipDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		var ship_dto = target.as(ShipDTO)

		for id in ship_dto.equipments do
			var equipment = repository.find(id, "Equipment")
			if equipment == null then
				errors.add(new Error("Unknown Equipment to load."))
			else if equipment.location isa Ship and equipment.location.id != ship_dto.id then
				errors.add(new Error("Impossible to load an equipment already loaded. Cannot determine the owner without the id."))
			end
		end

	end
end

#
# Validate a TransportShipDTO obj in order to create a valid TransportShip's
#
# Volume must be greater than volume_capacity
#
#	var repository = new EquipmentRepository
#	var validator = new TransportShipValidator(repository)
#
#	assert validator.supports(new TransportShipDTO)
#	assert validator.supports(new HybridShipDTO)
#	assert not validator.supports(new WarShipDTO)
#
#
#	var errors = new Array[Error]
#
#	var transport_ship_dto = new TransportShipDTO
#	transport_ship_dto.mass = 100
#	transport_ship_dto.volume = 100
#	transport_ship_dto.volume_capacity = 100
#	transport_ship_dto.weight_capacity = 100
#
#	validator.validate(transport_ship_dto, errors)
#
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Volume must be greater than volume capacity"
#
#	errors = new Array[Error]
#	transport_ship_dto.volume_capacity = 90
#	validator.validate(transport_ship_dto, errors)
#
#	assert errors.length == 0
#
# TransportShip can load any Equipment obj, while his volume_capacity and
# weight_capacity are not exceeded
#
#	var big_container = new Container(90,90)
#	var heavy_container = new Container(900,10)
#	var phaser = new Phaser(2,2)
#
#	repository.add(big_container)
#	repository.add(heavy_container)
#	repository.add(phaser)
#
#	transport_ship_dto.equipments.push(phaser.id)
#
#	errors = new Array[Error]
#	validator.validate(transport_ship_dto, errors)
#	assert errors.length == 0
#
#	transport_ship_dto.equipments.push(big_container.id)
#
#	errors = new Array[Error]
#	validator.validate(transport_ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Volume capacity exceeded"
#
#	transport_ship_dto.equipments.push(heavy_container.id)
#
#	errors = new Array[Error]
#	validator.validate(transport_ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 2
#	assert errors[0].to_s == "Volume capacity exceeded"
#	assert errors[1].to_s == "Weight capacity exceeded"
#
class TransportShipValidator
	super ShipValidator

	redef fun supports(target: nullable Object): Bool do return target isa TransportShipDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		var transport_ship_dto = target.as(TransportShipDTO)

		if transport_ship_dto.volume <= transport_ship_dto.volume_capacity then
			errors.add(new Error("Volume must be greater than volume capacity"))
		end

		var equipments_total_volume = 0
		var equipments_total_weight = 0

		for id in transport_ship_dto.equipments do
			var equipment = repository.find(id, "Equipment")

			equipments_total_volume += equipment.volume
			equipments_total_weight += equipment.mass
		end

		if equipments_total_volume > transport_ship_dto.volume_capacity then
			errors.add(new Error("Volume capacity exceeded"))
		end

		if equipments_total_weight > transport_ship_dto.weight_capacity then
			errors.add(new Error("Weight capacity exceeded"))
		end
	end
end

#
# Validate a WarShipDTO obj in order to create a valid WarShip's
#
# WarShip max number weapons must be positive
#
# 	var repository = new EquipmentRepository
#	var validator = new WarShipValidator(repository)
#
#	assert validator.supports(new HybridShipDTO)
#	assert validator.supports(new WarShipDTO)
#	assert not validator.supports(new TransportShipDTO)
#
#	var errors = new Array[Error]
#
#	var warship_dto = new WarShipDTO
#	warship_dto.mass = 10
#	warship_dto.volume = 10
#	warship_dto.max_weapons_nb = -1
#
#	validator.validate(warship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Max weapons number must be positive"
#
#	warship_dto.max_weapons_nb = 2
#	errors = new Array[Error]
#	validator.validate(warship_dto, errors)
#	assert errors.length == 0
#
# Can only load weapons
#	var phaser = new Phaser(1,1)
#	var container = new Container(1,1)
#
#	repository.add(phaser)
#	repository.add(container)
#
#	warship_dto.equipments.push(phaser.id)
#	warship_dto.equipments.push(container.id)
#
#	errors = new Array[Error]
#	validator.validate(warship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "WarShip can only load weapons"
#
#	warship_dto.equipments.remove_at(warship_dto.equipments.index_of(container.id))
#
# But not more than his max weapon nb
#	var phaser2 = new Phaser(1,1)
#	var blaster = new Blaster(1,1,20)
#
#	repository.add(phaser2)
#	repository.add(blaster)
#
#	warship_dto.equipments.push(blaster.id)
#	warship_dto.equipments.push(phaser.id)
#
#	errors = new Array[Error]
#	validator.validate(warship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "Max weapons number exceeded"
#
#	warship_dto.equipments.remove_at(warship_dto.equipments.index_of(phaser.id))
#
#	errors = new Array[Error]
#	validator.validate(warship_dto, errors)
#	assert errors.length == 0
#
class WarShipValidator
	super ShipValidator

	redef fun supports(target: nullable Object): Bool do return target isa WarShipDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		var war_ship = target.as(WarShipDTO)

		if war_ship.max_weapons_nb < 0 then
			errors.add(new Error("Max weapons number must be positive"))
		end

		var weapons_nb = 0
		for id in war_ship.equipments do
			var equipment = repository.find(id, "Equipment")

			if not equipment isa Weapon and not target isa HybridShipDTO then
				errors.add(new Error("WarShip can only load weapons"))
			end
			weapons_nb += 1
		end

		if war_ship.max_weapons_nb > 0 and weapons_nb > war_ship.max_weapons_nb and not target isa HybridShipDTO then
			errors.add(new Error("Max weapons number exceeded"))
		end
	end
end

#
# Validate an HybridShipDTO obj in order to create a valid HybridShip's
#
#	var repository = new EquipmentRepository
#	var validator = new HybridShipValidator(repository)
#
#	assert validator.supports(new HybridShipDTO)
#	assert not validator.supports(new TransportShipDTO)
#	assert not validator.supports(new WarShipDTO)
#
#	var errors = new Array[Error]
#
# Can load Weapons', if max_weapons_nb exceeded weapons will be load as TransportShip loading
#
#	var phaser = new Phaser(1,1)
#	repository.add(phaser)
#
#	var blaster = new Blaster(1,1,1)
#	repository.add(blaster)
#
#	var hybrid_ship_dto = new HybridShipDTO
#	hybrid_ship_dto.mass = 100
#	hybrid_ship_dto.volume = 100
#	hybrid_ship_dto.volume_capacity = 10
#	hybrid_ship_dto.weight_capacity = 10
#	hybrid_ship_dto.max_weapons_nb = 1
#
#	hybrid_ship_dto.equipments.push(phaser.id)
#	hybrid_ship_dto.equipments.push(blaster.id)
#
#	validator.validate(hybrid_ship_dto, errors)
#	print errors
#	assert errors.length == 0
#
# And Equipments', while volume and weight capacity are not exceeded
#
#	var container = new Container(2,2)
#	repository.add(container)
#
#	hybrid_ship_dto.equipments.push(container.id)
#	errors = new Array[Error]
#	validator.validate(hybrid_ship_dto, errors)
#	assert errors.length == 0
#
#  	var big_container = new Container(7,7)
#	repository.add(big_container)
#
#	hybrid_ship_dto.equipments.push(big_container.id)
#	errors = new Array[Error]
#	validator.validate(hybrid_ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 2
#	assert errors[0].to_s == "Volume capacity exceeded"
#	assert errors[1].to_s == "Weight capacity exceeded"
#
class HybridShipValidator
	super WarShipValidator
	super TransportShipValidator

	redef fun supports(target: nullable Object): Bool do return target isa HybridShipDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return
	end
end

#
# Validates HeavyWarShipDTO in order to create a valid HeavyWarShip
#
class HeavyWarShipValidator
	super WarShipValidator
end

#
# Validates LightWarShipDTO in order to create a valid LightWarShip
#
# 	var repository = new EquipmentRepository
#	var validator = new LightWarShipValidator(repository)
#	var errors = new Array[Error]
#
# LightWarShip can only load Phasers'
#
#	var phaser = new Phaser(1,1)
#	repository.add(phaser)
#
#	var light_war_ship_dto = new LightWarShipDTO
#	light_war_ship_dto.mass = 1
#	light_war_ship_dto.volume = 1
#	light_war_ship_dto.max_weapons_nb = 2
#
#	light_war_ship_dto.equipments.push(phaser.id)
#	validator.validate(light_war_ship_dto, errors)
#	assert errors.length == 0
#
#	var blaster = new Blaster(1,1,1)
#	repository.add(blaster)
#
#	light_war_ship_dto.equipments.push(blaster.id)
#	errors = new Array[Error]
#	validator.validate(light_war_ship_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "LightWarShip can only load Phasers"
#
#
#
class LightWarShipValidator
	super WarShipValidator

	redef fun supports(target: nullable Object): Bool do return target isa LightWarShipDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		var light_war_ship = target.as(LightWarShipDTO)

		for id in light_war_ship.equipments do
			var phaser = repository.find(id, "Equipment")
			if not phaser isa Phaser then
				errors.add(new Error("LightWarShip can only load Phasers"))
			end
		end
	end
end

#
# Validates WeaponsDTO eg PhaserDTO and BlasterDTO in order to create valid instances of concrete objects
#
# Weapons have an equipped attr which is handled by the program not by the user.
#
# Blaster must have a gaz_level specified. His value must be a positive integer
#	var validator = new WeaponValidator
#
#	assert validator.supports(new PhaserDTO)
#	assert validator.supports(new BlasterDTO)
#	assert not validator.supports(new ContainerDTO)
#
#
#
#	var errors = new Array[Error]
#	var phaser_dto = new PhaserDTO
#	phaser_dto.mass = 1
#	phaser_dto.volume = 1
#
#	validator.validate(phaser_dto, errors)
#	assert errors.length == 0
#
#	var blaster_dto = new BlasterDTO
#	blaster_dto.mass = 1
#	blaster_dto.volume = 1
#	blaster_dto.gaz_level = -1
#
#	validator.validate(blaster_dto, errors)
#	assert errors.not_empty
#	assert errors.length == 1
#	assert errors[0].to_s == "GazLevel must be positive and lower than 100"
#
#	blaster_dto.gaz_level = 50
#
#	errors = new Array[Error]
#	validator.validate(blaster_dto, errors)
#	assert errors.length == 0
#
class WeaponValidator
	super EquipmentValidator

	redef fun supports(target: nullable Object): Bool do return target isa WeaponDTO

	redef fun validate(target: nullable Object, errors: Array[Error])
	do
		super(target, errors)
		if errors.length > 0 then return

		if target isa BlasterDTO then
			if target.gaz_level < 0 or target.gaz_level > 100 then
				errors.add(new Error("GazLevel must be positive and lower than 100"))
			end
		end
	end
end
