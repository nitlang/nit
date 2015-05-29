# Abstract serialization services

The serialization services are centered around the `serialize` annotation,
the `Serializable` interface and the implementations of `Serializer` and `Deserializer`.

## The `serialize` annotation

A class annotated with `serialize` identifies it as a subclass of Serializable and
triggers the generation of customized serialization and deserialization services.

~~~
import serialization

# Simple serializable class identifying a human
class Person
	serialize

	# First and last name
	var name: String

	# Year of birth (`null` if unknown)
	var birth: nullable Int

	redef fun ==(o) do return o isa SELF and name == o.name and birth == o.birth
	redef fun hash do return name.hash
end
~~~

The `Person` class also defines `==` and `hash`, this is optional but we will use it to make an important point.
By definition of a serializable class, an instance can be serialized to a stream, then deserialized.
The deserialized instance will not be the same instance, but they should be equal.
So, in this case, we can compare both instances with `==` to test their equality.

Some conditions applies to the classes that can be annotated as `serialize`.
All attributes of the class must be serializable, runtime errors will be
raised when trying to serialize non-serializable attributes.

In the class `Person`, all attributes are typed with classes the standards library.
These common types are defined defined as serializable by this project.
The attributes could also be typed with user-defined `serialize`
classes or any other subclass of `Serializable`.

~~~
# This `serialize` class is composed of two `serialize` attributes
class Partnership
	serialize

	var partner_a: Person
	var partner_b: Person

	redef fun ==(o) do return o isa SELF and partner_a == o.partner_a and partner_b == o.partner_b
	redef fun hash do return partner_a.hash + 1024*partner_b.hash
end
~~~

The `serialize` applies only to the class definition,
only attributes declared locally will be serialized.
However, each definition of a class (a refinement or specialization)
can declare `serialize`.

## Custom serializable classes

The annotation `serialize` should be enough for most cases,
but in some cases you need more control over the serialization process.

For more control, create a subclass to `Serializable` and redefine `core_serialize_to`.
This method should use `Serializer::serialize_attribute` to serialize its components.
`serialize_attribute` works as a dictionary and organize attributes with a key.

You will also need to redefine `Deserializer::deserialize_class` to support this specific class.
The method should only act on known class names, and call super otherwise.

### Example: the User class

The following example cannot use the `serialize` annotations
because some of the arguments to the `User` class need special treatment:

* The `name` attribute is perfectly normal, it can be serialized and deserialized
  directly.

* The `password` attribute must be encrypted before being serialized,
  and unencrypted on deserialization.

* The `avatar` attributes is kept as ASCII art in memory.
  It could be serialized as such but it is cleaner to only
  serialize the path to its source on the file system.
  The data is reloaded on deserialization.

For this customization, the following code snippet implements
two serialization services: `User::core_serialize_to` and
`Deserializer::deserialize_class`.

~~~
module user_credentials

# User credentials for a website
class User
	super Serializable

	# User name
	var name: String

	# Clear text password
	var password: String

	# User's avatar image as data blob
	var avatar: Image

	redef fun core_serialize_to(serializer: Serializer)
	do
		# This is the normal serialization process
		serializer.serialize_attribute("name", name)

		# Serialized an encrypted version of the password
		#
		# Obviously, `rot(13)` is not a good encrption
		serializer.serialize_attribute("pass", password.rot(13))

		# Do not serialize the image, only its path
		serializer.serialize_attribute("avatar_path", avatar.path)
	end
end

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "User" then
			# Deserialize normally
			var user = deserialize_attribute("name")

			# Decrypt password
			var pass = deserialize_attribute("pass").rot(-13)

			# Deserialize the path and load the avatar from the file system
			var avatar_path = deserialize_attribute("avatar_path")
			var avatar = new Image(avatar_path)

			return new User(user, pass, avatar)
		end

		return super
	end
end

# An image loaded in memory as ASCII art
#
# Not really useful for this example, provided for consistency only.
class Image
	# Path on the filesystem for `self`
	var path: String

	# ASCII art composing this image
	var ascii_art: String = path.read_all is lazy
end

~~~

See the documentation of the module `serialization::serialization` for more
information on the services to redefine.

## Serialization services

The `serialize` annotation and the `Serializable` class are used on
classes specific to the business domain.
To write (and read) instances of these classes to a persistent format
you must use implementations of `Serializer` and `Deserializer`.

The main implementations of these services are `JsonSerializer` and `JsonDeserializer`,
from the `json_serialization` module.

~~~
import json_serialization
import user_credentials

# Data to be serialized and deserialized
var couple = new Partnership(
	new Person("Alice", 1985, new Image("alice.png")),
	new Person("Bob", null, new Image("bob.png")))

var path = "serialized_data.json"
var writer = new FileWriter(path)
var serializer = new JsonSerializer(writer)
serializer.serialize couple
writer.close

var reader = new FileReader(path)
var deserializer = new JsonDeserializer(reader.to_s)
var deserialized_couple = deserializer.deserialize
reader.close

assert couple == deserialize_couple
~~~

## Limitations and TODO

The serialization has some limitations:

* Not enough classes from the standard library are supported.
  This only requires someone to actually code the support.
  It should not be especially hard for most classes, some can
  simply declare the `serialize` annotation.

* A limitation of the Json parser prevents deserializing from files
  with more than one object.
  This could be improved in the future, but for now you should
  serialize a single object to each filesand use different instances of
  serializer and deserializer each time.

* The `serialize` annotation does not handle very well
  complex constructors. This could be improved in the compiler.
  For now, you may prefer to use `serialize` on simple classes,
  of by using custom `Serializable`.

* The serialization uses only the short name of a class, not its qualified name.
  This will cause problem when different classes using the same name.
  This could be solved partially in the compiler and the library.
  A special attention must be given to the consistency of the name across
  the different programs sharing the serialized data.

* The serialization support in the compiler need some help to
  deal with generic types. The solution is to use `nitserial`,
  the next section explores this subject.

## Dealing with generic types

One limitation of the serialization support in the compiler is with generic types.
For example, the `Array` class is generic and serializable.
However, the runtime types of Array instances are parameterized and are unknown to the compiler.
So the compiler won't support serializing instances of `Array[MySerializable]`.

The tool `nitserial` solves this problem at the level of user modules.
It does so by parsing a Nit module, group or project to find all known
parameterized types of generic classes.
It will then generating a Nit module to handle deserialization of these types.

Usage steps to serialize parameterized types:

* Write your program, let's call it `my_prog.nit`,
  it must use some parameterized serializable types.
  Let's say that you use `Array[MySerializable]`.

* Run nitserial using `nitserial my_prog.nit` to
  generate the file `my_prog_serial.nit`.

* Compile your program by mixing in the generated module with:
  `nitc my_prog.nit -m my_prog_serial.nit`

This was a simple example, in practical cases you may need
to use more than one generated file.
For example, on a client/server system, an instance can be created
server-side, serialized and the used client-side.
In this case, two files will be generated by nitserial,
one for the server and one for the client.
Both the files should be compiled with both the client and the server.
