# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Actions for the Web interface of Benitlux
module farstar_controller

import nitcorn::restful
import data_binder
import http_service

import farstar_domain
import farstar_repository
import farstar_validation
import farstar_dto
import farstar_converter

#TODO posting name dont set in final object

#
# Handle incoming requests
#
#	var repository = new EquipmentRepository
#
#	var controller = new ContainerRestController(repository)
#
#	var request = new HttpRequest
#	request.method = "POST"
#	request.uri = "/containers"
#	request.body = """{"mass":1,"volume":1}"""
#
#	var response = controller.answer(request, "/")
#
#	assert response isa HttpResponse
#	assert response.status_code == 201
#	assert repository.findAll("Equipment").not_empty
#
#	var container = repository.findAll("Equipment")[0]
#
#	request.method = "GET"
#	request.uri = "/containers"
#	request.uri_params["id"] = "{container.id}"
#
#	response = controller.answer(request, "/")
#	assert response isa HttpResponse
#	assert response.status_code == 200
#	assert response.body == container.to_pretty_json
#
#	request.method = "GET"
#	request.uri = "/containers"
#	request.uri_params["id"] = ""
#	var containers = repository.findAll("Container")
#
#	response = controller.answer(request, "/")
#	assert response isa HttpResponse
#	assert response.status_code == 200
#	assert response.body == containers.to_pretty_json
#
#	request.method = "DELETE"
#	request.uri = "/containers"
#	request.uri_params["id"] = "{container.id}"
#
#	response = controller.answer(request, "/")
#	assert response isa HttpResponse
#	assert response.status_code == 204
#
#	request.method = "GET"
#	request.uri = "/containers"
#	request.uri_params["id"] = "{container.id}"
#
#	response = controller.answer(request, "/")
#	assert response isa HttpResponse
#	assert response.status_code == 404
#
class EquipmentRestController
	super RestfulAction

	private var repository: EquipmentRepository
	private var validator: Validator is noinit
	private var converter: EquipmentConverter is noinit
	private var static_type = "Equipment"

	init do validator = new EquipmentValidator

	fun get(id: Int): HttpResponse
	do
		var equipment = repository.find(id, static_type)

		if not equipment isa Equipment then
			return new HttpResponse.not_found("{static_type} {id} not found")
		end

		return new HttpResponse.ok(equipment)
	end

	fun getAll: HttpResponse
	do
		var equipments = repository.findAll(static_type)

		return new HttpResponse.ok(equipments)
	end

	fun create(equipment: Equipment): HttpResponse
	do
		repository.add(equipment)
		return new HttpResponse.created
	end

	fun update: HttpResponse
	do
		return new HttpResponse.no_content
	end

	fun delete(id: Int): HttpResponse
	do
		repository.remove(id)
		return new HttpResponse.no_content
	end

	redef fun answer(request, turi)
	do
		print turi
		if request.method == "GET" then
			var in_id = request.param("id")
			var out_id = deserialize_arg(in_id, "Int")

			if out_id == null then
				return getAll
			end

			return get(out_id.as(Int))
		end

		if request.method == "DELETE" then
			var in_id = request.param("id")
			var out_id = deserialize_arg(in_id, "Int")

			if out_id != null then
				return delete(out_id.as(Int))
			end
		end

		return new HttpResponse.bad_request
	end

	# TODO must intercept the request instead of proccessing it and return the error
	redef fun prepare_respond_and_close(request, truncated_uri, http_server)
	do
		if request.method == "POST" or request.method == "PUT" or request.method == "PATCH" then
			if request.header["Content-Type"] != "application/json" then
				http_server.respond new HttpResponse.bad_media_type
				http_server.close
				return
			end
		end

		if request.method == "OPTIONS" then
			http_server.respond new HttpResponse.options
			http_server.close
		end

		super(request, truncated_uri, http_server)
	end
end

abstract class ShipRestController
	super EquipmentRestController

	init do converter = new ShipConverter(repository)
end

class TransportShipRestController
	super ShipRestController

	init do validator = new TransportShipValidator(repository)

	redef private var static_type = "TransportShip"

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" or request.method == "PUT" then
			var data_binder = new DataBinder(new TransportShipDTO, "TransportShipDTO", validator)
			var transport_ship_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			transport_ship_dto = transport_ship_dto.as(TransportShipDTO)

			if request.method == "POST" and out_id == null then
				var transport_ship = converter.create_from_dto(transport_ship_dto)
				if not transport_ship == null then
					var response = create(transport_ship)
					response.header["Location"] = request.uri + "/{transport_ship.id}"
					return response
				end
			end

			if request.method == "PUT" and out_id != null then
				var transport_ship = repository.find(out_id.as(Int), static_type)
				if not transport_ship == null then
					converter.update_from_dto(transport_ship, transport_ship_dto)
				end
				return update
			end
		end

		return super(request, turi)
	end
end

class HeavyWarShipRestController
	super ShipRestController

	redef private var static_type = "HeavyWarShip"

	init do validator = new HeavyWarShipValidator(repository)

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" or request.method == "PUT" then
			var data_binder = new DataBinder(new HeavyWarShipDTO, "HeavyWarShipDTO", validator)
			var heavy_war_ship_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			if request.method == "POST" and out_id == null then
				var heavy_war_ship = converter.create_from_dto(heavy_war_ship_dto.as(HeavyWarShipDTO))
				var response = create(heavy_war_ship.as(HeavyWarShip))
				response.header["Location"] = request.uri + "/{heavy_war_ship.id}"
				return response
			end

			if request.method == "PUT" and out_id != null then
				var heavy_war_ship = repository.find(out_id.as(Int), static_type)
				if heavy_war_ship != null then
					converter.update_from_dto(heavy_war_ship, heavy_war_ship_dto.as(HeavyWarShipDTO))
				end
				return update
			end
		end

		return super(request, turi)
	end
end

class LightWarShipRestController
	super ShipRestController

	redef private var static_type = "LightWarShip"

	init do validator = new LightWarShipValidator(repository)

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" or request.method == "PUT" then
			var data_binder = new DataBinder(new LightWarShipDTO, "LightWarShipDTO", validator)
			var light_war_ship_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			if request.method == "POST" and out_id == null then
				var light_war_ship = converter.create_from_dto(light_war_ship_dto.as(LightWarShipDTO))
				var response = create(light_war_ship.as(LightWarShip))
				response.header["Location"] = request.uri + "/{light_war_ship.id}"
				return response
			end

			if request.method == "PUT" and out_id != null then
				var light_war_ship = repository.find(out_id.as(Int), static_type)
				if light_war_ship != null then
					converter.update_from_dto(light_war_ship, light_war_ship_dto.as(HeavyWarShipDTO))
				end
				return update
			end
		end

		return super(request, turi)
	end
end

class HybridShipRestController
	super ShipRestController

	redef private var static_type = "HybridShip"

	init do validator = new HybridShipValidator(repository)

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" or request.method == "PUT" then
			var data_binder = new DataBinder(new HybridShipDTO, "HybridShipDTO", validator)
			var hybrid_ship_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			if request.method == "POST" and out_id == null then
				var hybrid_ship = converter.create_from_dto(hybrid_ship_dto.as(HybridShipDTO))
				var response = create(hybrid_ship.as(HybridShip))
				response.header["Location"] = request.uri + "/{hybrid_ship.id}"
				return response
			end

			if request.method == "PUT" and out_id != null then
				var hybrid_ship = repository.find(out_id.as(Int), static_type)
				if hybrid_ship != null then
					converter.update_from_dto(hybrid_ship, hybrid_ship_dto.as(HybridShipDTO))
				end
				return update
			end
		end

		return super(request, turi)
	end
end

abstract class WeaponRestController
	super EquipmentRestController

	init do converter = new WeaponConverter
end

class PhaserRestController
	super WeaponRestController

	redef private var static_type = "Phaser"

	init do validator = new WeaponValidator

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" and out_id == null then

			var data_binder = new DataBinder(new PhaserDTO, "PhaserDTO", validator)
			var phaser_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			var phaser = converter.create_from_dto(phaser_dto.as(PhaserDTO))

			var response = create(phaser.as(Phaser))
			response.header["Location"] = request.uri + "/{phaser.id}"
			return response
		end

		return super(request, turi)
	end
end

class ContainerRestController
	super EquipmentRestController

	redef private var static_type = "Container"

	init
	do
		validator = new ContainerValidator
		converter = new ContainerConverter
	end

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" and out_id == null then

			var data_binder = new DataBinder(new ContainerDTO, "ContainerDTO", validator)
			var container_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			var container = converter.create_from_dto(container_dto.as(ContainerDTO))

			var response = create(container.as(Container))
			response.header["Location"] = request.uri + "/{container.id}"
			return response
		end

		return super(request, turi)
	end
end

class BlasterRestController
	super WeaponRestController

	redef private var static_type = "Blaster"

	init do validator = new WeaponValidator

	redef fun answer(request, turi)
	do
		var in_id = request.param("id")
		var out_id = deserialize_arg(in_id, "Int")

		if request.method == "POST" and out_id == null then

			var data_binder = new DataBinder(new BlasterDTO, "BlasterDTO", validator)
			var blaster_dto = data_binder.bind(request.body)

			data_binder.validate

			if data_binder.errors.not_empty then
				return new HttpResponse.bad_request(data_binder.errors.to_s)
			end

			var blaster = converter.create_from_dto(blaster_dto.as(BlasterDTO))

			var response = create(blaster.as(Blaster))

			response.header["Location"] = request.uri + "/{blaster.id}"

			return response
		end

		return super(request, turi)
	end
end
