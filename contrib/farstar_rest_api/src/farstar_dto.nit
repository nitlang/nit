module farstar_dto

import farstar_domain
import serialization

abstract class EquipmentDTO
	serialize

	var id: nullable Int is noinit, writable
	var mass: Int is noinit, writable
	var volume: Int is noinit, writable
	var name: nullable String is noinit, writable
	var location: nullable Ship is noinit, writable
end



abstract class WeaponDTO
	serialize
	super EquipmentDTO
end

class PhaserDTO
	serialize
	super WeaponDTO
end

class BlasterDTO
	serialize
	super WeaponDTO

	var gaz_level: Int is noinit, writable
end

class ContainerDTO
	serialize
	super EquipmentDTO
end

abstract class ShipDTO
	serialize
	super EquipmentDTO

	var equipments = new Array[Int] is writable
end

class TransportShipDTO
	serialize
	super ShipDTO

	var weight_capacity: Int is noinit, writable
	var volume_capacity: Int is noinit, writable
end

class WarShipDTO
	serialize
	super ShipDTO

	var max_weapons_nb: Int is noinit, writable
end

class HeavyWarShipDTO
	serialize
	super WarShipDTO
end

class LightWarShipDTO
	serialize
	super WarShipDTO
end

class HybridShipDTO
	serialize
	super WarShipDTO
	super TransportShipDTO
end
