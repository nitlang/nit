# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# A simple quick-and-dirty poor man's object inspector.
#
# Since Nit does not have introspection facilities, this module uses the serialization framework
# to inspect objects.
#
# A plain webserver is used to present the inspection interface.
#
# Feature:
#
# To launch the object inspector, just call `Serializable::http_inspect`.
#
# ~~~
# import serialization
# class A
#   serialize
#   var name: String
# end
# class B
#   serialize
#   var data: Int
#   var a: A
# end
# var a = new A("my_a")
# var b = new B(42, a)
# b.http_inspect
# ~~~
#
# Anti-features:
#
# * only serialized things from Serializable objects are exposed.
# * crappy UI (plain HTML 2.0)
# * crappy UI invocation (web server on localhost:8080 then `xdg-open http://localhost:8080`)
# * no clean terminaison (just Ctrl-C)
module http_inspector

import serialization
private import nitcorn
import template

redef class Serializable
	# Invoke an object-inspector on `self` in a web browser.
	fun http_inspect
	do
		var i = new InspectSerial
		i.serialize(self)

		system("sleep 1; xdg-open http://localhost:8080 &")

		var vh = new VirtualHost("localhost:8080")
		vh.routes.add new Route("", new InspectAction(i))
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add vh
		factory.run
	end

	fun serid: String do return "{class_name}:{object_id.to_hex}"
end

# A special serializer that generate web pages.
class InspectSerial
	super Serializer

	# The currently rendered object
	var current: nullable Inspected = null

	# The current rendered web page
	var doc = new Template

	# All known objects
	var map = new HashMap[String, Inspected]

	# Returns an
	fun get_by_o(object: Serializable): nullable Inspected
	do
		var id = object.serid
		var i = map.get_or_null(id)
		return i
	end

	# Render the page of the given object `i`
	fun render(i: Inspected)
	do
		doc = new Template
		var value = i.value
		current = i

		var nav = new Array[Inspected]
		nav.unshift i
		do
			var n = i.parent
			while n != null do
				nav.unshift n
				n = n.parent
			end
		end
		doc.add "<p>\n"
		for n in nav do
			doc.add n.navlink
			doc.add " / "
		end
		doc.add "</p>\n"

		doc.add "<p>class {value.class_name}</p>\n"
		doc.add "<p>instance {value.object_id}</p>\n"
		doc.add "<p>inspect: {value.inspect.html_escape}</p>\n"
		doc.add "<p>to_s: {value.to_s.html_escape}</p>\n"

		if value isa Map[nullable Object, nullable Object] then
			doc.add "<p>length: {value.length}</p>\n"
			doc.add "<ul>\n"
			var x = 0
			for k, v in value do
				serialize_attribute("key[{x}]:", k)
				serialize_attribute("val[{x}]:", v)
				x += 1
			end
			doc.add "</ul>\n"
		end
		if false then
		else
			doc.add "<ul>\n"
			value.core_serialize_to(self)
			doc.add "</ul>\n"
		end

		doc.add "<hr>\n<p>"
		for k,v in map do
			doc.add v.navlink
			doc.add " - "
		end
		doc.add "</p>\n"
	end

	redef fun serialize(object)
	do
		if object == null then
			doc.add "<p>null</p>\n"
			return
		end

		var i = get_by_o(object)
		if i == null then
			i = new Inspected(object, "<root>")
			map[i.serid] = i
		end
		render(i)
	end

	redef fun serialize_attribute(name, value)
	do
		doc.add "<li>{name.html_escape}:\n"
		if value isa Serializable then
			var i = get_by_o(value)
			if i == null then
				i = new Inspected(value, name, current)
			end
			var id = value.serid
			doc.add i.link
			map[id] = i
		else if value == null then
			doc.add "null"
		else
			doc.add value.to_s.html_escape
		end
		doc.add "</li>\n"
	end

	redef fun serialize_reference(value)
	do
		serialize(value)
	end
end

# Information on an inspected object
class Inspected
	# The inspected object
	var value: Serializable

	# The attribute name
	var name: String

	# The direct parent
	var parent: nullable Inspected

	# The identifier
	fun serid: String do return "{value.class_name}:{value.object_id.to_hex}"

	# A full link
	fun link: String do
		var id = serid
		return "<a href=\"/?id={id}\">{value.inspect.html_escape} {value.to_s.html_escape}</a>"
	end

	# A navbar link
	fun navlink: String do
		var id = serid
		return "<a href=\"/?id={id}\">{name.html_escape}</a>"
	end
end

# The NitCorn applet
class InspectAction
	super Action

	var i: InspectSerial

	redef fun answer(http_request, turi)
	do
		var id = http_request.get_args.get_or_null("id")
		if id != null then
			var v = i.map.get_or_null(id)
			if v != null then
				i.render(v)
			else
				var response = new HttpResponse(404)
				response.body = "<p>{id.html_escape} not found :(</p><a href=\"/\">Return</a>"
				return response
			end
		end

		var response = new HttpResponse(200)
		response.body = i.doc.write_to_string
		return response
	end
end
