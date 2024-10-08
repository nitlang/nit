# This file is part of NIT ( https://nitlanguage.org ).
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

# Supporting services for the FFI with Java and to access Java libraries
#
# This modules relies on `Sys::jvm`, `Sys::jni_env` and
# `Sys::create_default_jvm` to get a handle on a JVM. You can adapt the
# behavior of the FFI and services in this module by redefing
# `Sys::create_default_jvm` and supply your own JVM object. You can manage
# multiple java thread by switching the current environment in a redef
# of `Sys::jni_env`, and multiple JVM using `Sys::jvm`.
#
# See also, the module `jvm` to control the JVM instances and access JNI functions.
# You can use it to further customize the behavior of your code.
module java

import ffi_support
import collections
