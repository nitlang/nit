# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2014 Romain Chanoir <romain.chanoir@courrier.uqam.ca>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# No alt works
# alt1 sets a wrong classpath and should fail on class loading
# alt2 looks for a non existant class
# alt3-4 looks for non existant methods

import jvm

redef extern class JniEnv
	fun print_error(msg: String)
	do
		print "Error: {msg}"
		if "NIT_TESTING".environ != "true" then exception_describe
		exit 1
	end
end

print "Compilation des classes Java ..."
assert sys.system("javac test_jvm/Queue.java") == 0
assert sys.system("javac test_jvm/Test2.java") == 0
assert sys.system("javac test_jvm/TestJvm.java") == 0

print "Initialisation de la JVM ..."

var builder = new JavaVMBuilder
builder.options.add "-Djava.class.path=."
#alt1#builder.options.clear
#alt1#builder.options.add "-Djava.class.path=/tmp/"
var jvm = builder.create_jvm
assert jvm != null

var env = jvm.env
assert not env.address_is_null

print "---------------------Test 1----------------------"
# get the class
var queue_c = env.find_class("test_jvm/Queue")
#alt2#queue_c = env.find_class("test_jvm/Queue_error_in_name")
if queue_c.address_is_null then env.print_error("Queue class not found")

# get the methods of the class
var f_init = env.get_method_id(queue_c, "<init>", "()V")
if f_init.address_is_null then env.print_error("fInit not found")

var f_push = env.get_method_id(queue_c, "push", "(Ljava/lang/String;)V")
#alt3#f_push = env.get_method_id(queue_c, "push_error", "(Ljava/lang/String;)V")
#alt4#f_push = env.get_method_id(queue_c, "push", "(Ljava/lang/String;ZZZ)V")
if f_push.address_is_null then env.print_error("fPush not found")

var f_pop = env.get_method_id(queue_c, "pop", "()Ljava/lang/String;")
if f_pop.address_is_null then env.print_error("fPop not found")

var element1 = "premier"
var element2 = "deuxième"
var element3 = "troisième"

# instanciate class
var queue = env.new_object(queue_c, f_init)
if queue.address_is_null then env.print_error("object not initialized")

var arg_tab = new Array[Object].with_items(element1)

# first call to push method
env.call_void_method(queue, f_push, arg_tab)
arg_tab = new Array[Object].with_items(element2)
env.call_void_method(queue, f_push, arg_tab)
arg_tab = new Array[Object].with_items(element3)
env.call_void_method(queue, f_push, arg_tab)

var el = env.call_string_method(queue, f_pop, null)
print el.to_s
el = env.call_string_method(queue, f_pop, null)
print el.to_s
el = env.call_string_method(queue, f_pop, null)
print el.to_s

print "--------------------Test 2---------------------"

var test_c = env.find_class("test_jvm/TestJvm")
if test_c.address_is_null then env.print_error("TestJvm class not found")

f_init = env.get_method_id(test_c, "<init>", "()V")
if f_init.address_is_null then env.print_error("finit not found")

# Get the different methods ids
var m_bool = env.get_method_id(test_c, "isBool", "()Z") 
if m_bool.address_is_null then env.print_error("mbool not found")
var m_char = env.get_method_id(test_c, "getC", "()C")
if m_char.address_is_null then env.print_error("mchar not found")
var m_i = env.get_method_id(test_c, "getI", "()I")
if m_i.address_is_null then env.print_error ("mi not found")
var m_f = env.get_method_id(test_c, "getF", "()F")
if m_f.address_is_null then env.print_error("mf not found")
var m_test = env.get_method_id(test_c, "getTest", "()Ltest_jvm/Test2;")
if m_test.address_is_null then env.print_error("mtest not found")

# Get the Field ids
var f_bool =env.get_field_id(test_c, "bool", "Z")
if f_bool.address_is_null then env.print_error("fbool not found")
var f_char = env.get_field_id(test_c, "c", "C")
if f_char.address_is_null then env.print_error("fchar not found")
var f_i =env.get_field_id(test_c, "i", "I")
if f_i.address_is_null then env.print_error("fi not found")
var f_f = env.get_field_id(test_c, "f", "F")
if f_f.address_is_null then env.print_error("ff not found")
var f_test = env.get_field_id(test_c, "test", "Ltest_jvm/TestJvm;")

# Instanciate
var test = env.new_object(test_c, f_init)
if test.address_is_null then env.print_error("object test not initialized")

# Retrieve field value with field ids
var v_bool = env.get_boolean_field(test, f_bool)
var v_char = env.get_char_field(test, f_char)
var v_i = env.get_int_field(test, f_i)
var v_f = env.get_float_field(test, f_f)
var v_test1 = env.get_object_field(test, f_test)

# Set the new values for the fields
env.set_boolean_field(test, f_bool, true)
env.set_char_field(test, f_char, 'D')
env.set_int_field(test, f_i, 10)
env.set_float_field(test, f_f, 15.5)
env.set_object_field(test, f_test, test)

# get the values using getter method
v_bool = env.call_boolean_method(test, m_bool, null)
v_char = env.call_char_method(test, m_char, null)
v_i = env.call_int_method(test, m_i, null)
v_f = env.call_float_method(test, m_f, null)
var v_test2 = env.call_object_method(test, m_test, null)

# assert the values of the fields
print v_bool
print v_char
print v_i
print v_f

jvm.destroy
