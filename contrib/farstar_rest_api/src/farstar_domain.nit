module farstar_domain

import serialization

# Test base class Equipment with subtypes
#
# 	var warship = new WarShip(1000,200,2)
# 	assert warship.mass == 1000
# 	assert warship.volume == 200
#	assert warship.location == null
# 	assert warship.id == warship.object_id
#
# 	var phaser = new Phaser(1,2)
# 	assert phaser.mass == 1
# 	assert phaser.volume == 2
# 	assert phaser.location == null
# 	assert phaser.id == phaser.object_id
#
# 	var container = new Container(1,2)
# 	assert container.mass == 1
# 	assert container.volume == 2
# 	assert container.location == null
# 	assert container.id == container.object_id
abstract class Equipment
	serialize

	var id = 0
	var mass: Int
	var volume: Int
	var name: nullable String is noinit, writable
	var location: nullable Ship is noinit

	init do id = self.hash end

	fun getDetailledLocation: List[Ship]
	do
		var list = new List[Ship]
		var location = self.location

		while location isa Ship do
			list.add(location)
			location = location.location
		end

		return list
	end

	redef fun to_s
	do
		# var string = "not set"

		var string = if self.location != null then
			if self.location.name != null then
				self.location.name
			else
				self.id.to_s
		else "not set"

		return """
			mass: {{{self.mass}}}, \n\t
			volume: {{{self.volume}}}, \n\t
			location: {{{string.as(String)}}}
		"""
	end
end

class Container
	serialize
	super Equipment
end

#
# Test on ship type objects
# Ship objects can load and unload Equipment objects,
# their mass is the sum of his own and each loaded objects.
# Thus, loading and unloading affect his mass.
# Moreover, an Equipment object already loaded cannot be loaded elsewhere.
# Finally, load and unload set Equipment object location to self or null
# respectively.
#
# 	var warship = new WarShip(10, 10, 2)
# 	var phaser = new Phaser(1,1)
#
# 	warship.load(phaser)
#	assert warship.equipments.has(phaser)
# 	assert warship.mass == 11
#	assert phaser.location == warship
#
#	warship.unload(phaser)
#	assert not warship.equipments.has(phaser)
# 	assert warship.mass == 10
#	assert phaser.location == null
#
#
abstract class Ship
	serialize
	super Equipment

	var equipments = new Array[Equipment]

	redef fun mass: Int
	do
		var baseMass = super

		for equipment in self.equipments
		do
			baseMass += equipment.mass
		end

		return baseMass
	end

	fun load(equipment: Equipment)
	do
		if equipment.location == null then
			self.equipments.push(equipment)
			equipment.location = self
		end
	end

	fun unload(equipment: Equipment)
	do
		self.equipments.remove(equipment)
		equipment.location = null
	end

	redef fun to_s
	do
		var string = super + "\n\t"

		for equipment in self.equipments
		do
			string += equipment.to_s + "\n\t"
		end

		return string
	end
end

#
# WarShip is a subtype of Ship.
# WarShip typed objects can only load and thus unload weapons.
# WarShip objects can only load "max_weapons_nb" weapons.
# On loading Weapon objects attribute equipped will be set to true.
# On unloading Weapon objects attribute equipped will be set to false.
# On loading and unloading Equipement objects attribute location will be update
# according to their Ship type.
#
#	var warship = new WarShip(10,10,2)
#	assert warship.max_weapons_nb == 2
#
#	var phaser = new Phaser(1,1)
#	assert phaser.location == null
#
#	warship.load(phaser)
#	assert warship.equipments.has(phaser)
#	assert phaser.equipped
#
#	var container = new Container(1,1)
#
# This case won't happen due to upper validation layer which will handle it
#	warship.load(container)
#	assert not warship.equipments.has(container)
#	assert container.location == null
#
#	var blaster2 = new Blaster(1,1,20)
#	warship.load(blaster2)
#	assert warship.equipments.has(blaster2)
#	assert blaster2.equipped
#	assert blaster2.location == warship
#
#	var ship = new TransportShip(100, 100, 100, 90)
#	ship.load(blaster2)
#	assert not blaster2.location == ship
#	assert blaster2.location == warship
#	assert not ship.equipments.has(blaster2)
#
#
#	var overloadedweapon = new Phaser(1,1)
#	warship.load(overloadedweapon)
#	assert not warship.equipments.has(overloadedweapon)
#	assert not overloadedweapon.equipped
#	assert overloadedweapon.location == null
#
#	warship.unload(blaster2)
#	assert not warship.equipments.has(blaster2)
#	assert not blaster2.equipped
#	assert blaster2.location == null
#
class WarShip
	serialize
	super Ship

	var max_weapons_nb: Int

	redef fun load(equipment: Equipment) do
		if equipment isa Weapon and self.equipments.length < max_weapons_nb then
			super(equipment)
			equipment.equipped = true
		else if self isa HybridShip then
			super(equipment)
		end
	end

	redef fun unload(equipment: Equipment) do
		if equipment isa Weapon then
			super(equipment)
			equipment.equipped = false
		else if self isa HybridShip then
			super(equipment)
		end
	end
end

#
# TransportShip is also a subtype of Ship.
# A TransportShip objects must have a volume greater than his volume_capacity.
# TransportShip typed objects can load and thus unload any type of Equipment objects.
# On the other hand, TransportShip objects can only load equipments if their
# volume and weight capacity are not exceeded.
# The obvious error coming from above is handle in the upper validation layer.
# On loading and unloading Equipement objects attribute location will be update
# according to their Ship type.
#	var transportship = new TransportShip(100, 100, 120, 90)
#	assert transportship.volume > transportship.volume_capacity
#
#	var container = new Container(1,1)
#	transportship.load(container)
#	assert transportship.equipments.has(container)
#	assert container.location == transportship
#	assert transportship.weight_capacity_remaining == 120 - container.mass
#	assert transportship.volume_capacity_remaining == 90 - container.volume
#
#	var warship = new WarShip(10, 10, 2)
#	transportship.load(warship)
#	assert transportship.equipments.has(warship)
#	assert warship.location == transportship
#	assert transportship.weight_capacity_remaining == 119 - warship.mass
#	assert transportship.volume_capacity_remaining == 89 - warship.volume
#
#	var blaster = new Blaster(1,1,100)
#	transportship.load(blaster)
#	assert blaster.location == transportship
#	assert transportship.weight_capacity_remaining == 109 - blaster.mass
#	assert transportship.volume_capacity_remaining == 79 - blaster.volume
#
#	transportship.unload(blaster)
#	assert blaster.location == null
#	assert not transportship.equipments.has(blaster)
#	assert transportship.weight_capacity_remaining == 108 + blaster.mass
#	assert transportship.volume_capacity_remaining == 78 + blaster.volume
#
# weapons can only be equipped on WarShip objects
#	assert not blaster.equipped
#
#	var toobigequipment = new TransportShip(100, 100, 100, 90)
#	transportship.load(toobigequipment)
#	assert not transportship.equipments.has(toobigequipment)
#
class TransportShip
	serialize
	super Ship

	var weight_capacity: Int
	var volume_capacity: Int
	var weight_capacity_remaining: Int is noinit
	var volume_capacity_remaining: Int is noinit

	init
	do
		assert volume > volume_capacity

		self.weight_capacity_remaining = weight_capacity
		self.volume_capacity_remaining = volume_capacity
	end

	redef fun load(equipment: Equipment)
	do
		if self.weight_capacity_remaining - equipment.mass >= 0  and
		self.volume_capacity_remaining - equipment.volume >= 0 then
			super(equipment)

			self.weight_capacity_remaining -= equipment.mass
			self.volume_capacity_remaining -= equipment.volume
		end
	end

	redef fun unload(equipment: Equipment)
	do
		if self.equipments.has(equipment) then
			super(equipment)
			self.weight_capacity_remaining += equipment.mass
			self.volume_capacity_remaining += equipment.volume
		end
	end
end

#
# HeavyWarShip is a subtype of WarShip
#
class HeavyWarShip
	serialize
	super WarShip
end

#
# LightWarShip objects are WarShip which can load only Phaser Weapon objects
#
#	var light = new LightWarShip(1,1,1)
#	var phaser = new Phaser(1,1)
#	light.load(phaser)
#	assert light.equipments.has(phaser)
#	assert phaser.equipped
#	assert phaser.location == light
#
#	var blaster = new Blaster(1,1,40)
#	light.load(blaster)
#	assert not blaster.equipped
#	assert blaster.location == null
#	assert not light.equipments.has(blaster)
#
class LightWarShip
	serialize
	super WarShip

	redef fun load(equipment: Equipment) do
		if equipment isa Phaser then super(equipment)
	end
end

#
# HybridShip is a Transport and War Ship. But it can load any Equipments according to
# TransportShip restrictions and equip any weapons according to WarShip restrictions.
#
#	var hybridship = new HybridShip(100, 100, 200, 90, 1)
#	var phaser = new Phaser(1,1)
#	hybridship.load(phaser)
#	assert phaser.location == hybridship
#	assert phaser.equipped
#	assert hybridship.equipments.has(phaser)
#
# max_weapons_nb reached so Equipment object not equipped but just loaded
#	var phaser2 = new Phaser(1,1)
#	hybridship.load(phaser2)
#	assert hybridship.equipments.has(phaser2)
#	assert not phaser2.equipped
#	assert phaser2.location == hybridship
#
#	var container = new Container(1,1)
#	hybridship.load(container)
#	assert hybridship.equipments.has(container)
#	assert container.location == hybridship
#
#	var toobigequipment = new Container(1000,1000)
#	hybridship.load(toobigequipment)
#	assert toobigequipment.location == null
#	assert not hybridship.equipments.has(toobigequipment)
#
class HybridShip
	serialize

	super WarShip
	super TransportShip

	autoinit mass, volume, weight_capacity, volume_capacity, max_weapons_nb

	redef fun load(equipment: Equipment) do
		super(equipment)
	end

	redef fun unload(equipment: Equipment) do
		super(equipment)
	end
end

#
# WEAPONs MODEL
#
class Weapon
	serialize

	super Equipment

	var equipped = false
end

class Phaser
	serialize

	super Weapon
end

#
# 	var blaster = new Blaster(1,1,3)
#	assert blaster.gaz_level == 3
#
class Blaster
	serialize

	super Weapon

	var gaz_level: Int
	private var max_gaz_level = 100 is noserialize

	init do assert gaz_level >= 0

	fun reload do self.gaz_level = max_gaz_level
end
