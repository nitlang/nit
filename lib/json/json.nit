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

# Offers two APIs to manipulate read Json strings.
#
# The `dynamic` module provides a simple interface to get information
# from a Json document. You must be careful as all services are provided on
# each nodes and a wrongful use can `abort`.
#
# The `static` module converts a Json string to a nullable Nit object. The object
# must then be type checked before it can be used.
module json

import static
import dynamic
