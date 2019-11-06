# `ini` - Read and write INI configuration files

[INI files](https://en.wikipedia.org/wiki/INI_file) are simple text files with
a basic structure composed of sections, properties and values used to store
configuration parameters.

Here's an example from the `package.ini` of this package:

~~~
import ini

var package_ini = """
[package]
name=ini
desc=Read and write INI configuration files.
[upstream]
git=https://github.com/nitlang/nit.git
git.directory=lib/ini/
"""
~~~

## Basic usage

`IniFile` is used to parse INI strings and access their content:

~~~
var ini = new IniFile.from_string(package_ini)
assert ini["package.name"] == "ini"
assert ini["upstream.git.directory"] == "lib/ini/"
assert ini["unknown.unknown"] == null
~~~

`IniFile` can also load INI configuration from a file:

~~~
package_ini.write_to_file("my_package.ini")

ini = new IniFile.from_file("my_package.ini")
assert ini["package.name"] == "ini"
assert ini["upstream.git.directory"] == "lib/ini/"

"my_package.ini".to_path.delete
~~~

INI content can be added or edited through the `IniFile` API then written to
a stream or a file.

~~~
ini["package.name"] = "new name"
ini["upstream.git.directory"] = "/dev/null"
ini["section.key"] = "value"

var stream = new StringWriter
ini.write_to(stream)

assert stream.to_s == """
[package]
name=new name
desc=Read and write INI configuration files.
[upstream]
git=https://github.com/nitlang/nit.git
git.directory=/dev/null
[section]
key=value
"""
~~~

## INI content

### Properties

Properties are the basic element of the INI format.
Every property correspond to a *key* associated to a *value* thanks to the equal (`=`) sign.

~~~
ini = new IniFile.from_string("""
key1=value1
key2=value2
""")
assert ini["key1"] == "value1"
assert ini["key2"] == "value2"
assert ini.length == 2
~~~

Accessing an unknown property returns `null`:

~~~
assert ini["unknown"] == null
~~~

Properties can be iterated over:

~~~
var i = 1
for key, value in ini do
	assert key == "key{i}"
	assert value == "value{i}"
	i += 1
end
~~~

Property keys cannot contain the character `=`.
Values can contain any character.
Spaces are trimmed.

~~~
ini = new IniFile.from_string("""
prop=erty1=value1
 property2 =  value2
property3=value3 ; with semicolon
""")
assert ini[";property1"] == null
assert ini["prop=erty1"] == null
assert ini["prop"] == "erty1=value1"
assert ini["property2"] == "value2"
assert ini[" property2 "] == "value2"
assert ini["property3"] == "value3 ; with semicolon"
~~~

Both keys and values are case sensitive.

~~~
ini = new IniFile.from_string("""
Property1=value1
property2=Value2
""")
assert ini["property1"] == null
assert ini["Property1"] == "value1"
assert ini["property2"] != "value2"
assert ini["property2"] == "Value2"
~~~

### Sections

Properties may be grouped into arbitrary sections.
The section name appears on a line by itself between square brackets (`[` and `]`).

All keys after the section declaration are associated with that section.
The is no explicit "end of section" delimiter; sections end at the next section
declaration or the end of the file.
Sections cannot be nested.

~~~
var content = """
key1=value1
key2=value2
[section1]
key1=value3
key2=value4
[section2]
key1=value5
"""

ini = new IniFile.from_string(content)
assert ini["key1"] == "value1"
assert ini["unknown"] == null
assert ini["section1.key1"] == "value3"
assert ini["section1.unknown"] == null
assert ini["section2.key1"] == "value5"
~~~

Sections can be iterated over:

~~~
i = 1
for section in ini.sections do
	assert section.name == "section{i}"
	assert section["key1"].has_prefix("value")
	i += 1
end
~~~

When iterating over a file properties, only properties at root are returned.
`flatten` can be used to iterate over all properties including the one from
sections.

~~~
assert ini.join(", ", ": ") == "key1: value1, key2: value2"
assert ini.flatten.join(", ", ": ") ==
	"key1: value1, key2: value2, section1.key1: value3, section1.key2: value4, section2.key1: value5"

i = 0
for key, value in ini do
	i += 1
	assert key == "key{i}" and value == "value{i}"
end
assert i == 2

~~~

Sections name may contain any character including brackets (`[` and `]`).
Spaces are trimmed.

~~~
ini = new IniFile.from_string("""
[[section1]]
key=value1
[ section 2 ]
key=value2
[section1.section3]
key=value3
""")
assert ini.sections.length == 3
assert ini["[section1].key"] == "value1"
assert ini["section 2.key"] == "value2"
assert ini["section1.section3.key"] == "value3"
assert ini.sections.last.name == "section1.section3"
~~~

The dot `.` notation is used to create new sections with `[]=`.
Unknown sections will be created on the fly.

~~~
ini = new IniFile
ini["key"] = "value1"
ini["section1.key"] = "value2"
ini["section2.key"] = "value3"

stream = new StringWriter
ini.write_to(stream)
assert stream.to_s == """
key=value1
[section1]
key=value2
[section2]
key=value3
"""
~~~

Sections can also be created manually:

~~~
ini = new IniFile
ini["key"] = "value1"

var section = new IniSection("section1")
section["key"] = "value2"
ini.sections.add section

stream = new StringWriter
ini.write_to(stream)
assert stream.to_s == """
key=value1
[section1]
key=value2
"""
~~~

### Comments

Comments are indicated by semicolon (`;`) or a number sign (`#`) at the begining
of the line. Commented lines are ignored as well as empty lines.

~~~
ini = new IniFile.from_string("""
; This is a comment.
; property1=value1

# This is another comment.
# property2=value2
""")
assert ini.is_empty
~~~

### Unicode support

INI files support Unicode:

~~~
ini = new IniFile.from_string("""
property❤=héhé
""")
assert ini["property❤"] == "héhé"
~~~

## Error handling

By default `IniFile` does not stop when it cannot parse a line in a string (loaded
by `from_string` or `load_string`) or a file (loaded by `from_file` or `load_file`).

~~~
ini = new IniFile.from_string("""
key1=value1
key2
key3=value3
""")

assert ini.length == 2
assert ini["key1"] == "value1"
assert ini["key2"] == null
assert ini["key3"] == "value3"
~~~


This behaviour can be modified by setting `stop_on_first_error` to `true`.

~~~
ini = new IniFile.from_string("""
key1=value1
key2
key3=value3
""", stop_on_first_error = true)

assert ini.length == 1
assert ini["key1"] == "value1"
assert ini["key2"] == null
assert ini["key3"] == null
~~~

Wathever the value set for `stop_on_first_error`, errors can be checked thanks
to the `errors` array:

~~~
assert ini.errors.length == 1
assert ini.errors.first.message == "Unexpected string `key2` at line 2."
~~~
