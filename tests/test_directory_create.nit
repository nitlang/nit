# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

"out/test_directory_create.write/tmp_dir".mkdir
var f =  new FileWriter.open("out/test_directory_create.write/tmp_file")
f.write("test")
f.close
f =  new FileWriter.open("out/test_directory_create.write/tmp_dir/tmp_file_2")
f.write("other test")
f.close
