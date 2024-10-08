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


import filter_stream

var filename_1 = "out/test_filterstream_tmp1.write"
var filename_2 = "out/test_filterstream_tmp2.write"

var output_file_1 = new FileWriter.open(filename_1)
var output_file_2 = new FileWriter.open(filename_2)

var stream_demux = new StreamDemux(output_file_1, output_file_2)

stream_demux.write("Hello World !!\n")
stream_demux.close

var input_file_1 = new FileReader.open(filename_1)
var input_file_2 = new FileReader.open(filename_2)

var stream_cat = new StreamCat(input_file_1,input_file_2)

while not stream_cat.eof do
	print stream_cat.read_line
end

stream_cat.close
