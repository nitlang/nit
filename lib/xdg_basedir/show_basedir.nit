# This file is part of NIT ( https://nitlanguage.org ).
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

# Prints the local base directories as per the XDG Base Directory specification
module show_basedir

import xdg_basedir

print "Data home: {xdg_basedir.data_home}"
print "Config home: {xdg_basedir.config_home}"
print "Cache home: {xdg_basedir.cache_home}"
print "Data dirs: {xdg_basedir.data_dirs.join(", ")}"
print "Searchable data dirs: {xdg_basedir.searchable_data_dirs.join(", ")}"
print "Config dirs: {xdg_basedir.config_dirs.join(", ")}"
print "Searchable config dirs: {xdg_basedir.searchable_config_dirs.join(", ")}"
