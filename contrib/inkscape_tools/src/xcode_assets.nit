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

# Content of the file to describe iOS icons, usually at `AppIcon.appiconset/Contents.json`
fun appiconset_contents_json: String do return """
{
  "images" : [
    {
      "idiom" : "iphone",
      "size" : "29x29",
      "filename" : "29.png",
      "scale" : "1x"
    },
    {
      "idiom" : "iphone",
      "size" : "29x29",
      "filename" : "58.png",
      "scale" : "2x"
    },
    {
      "idiom" : "iphone",
      "size" : "29x29",
      "filename" : "87.png",
      "scale" : "3x"
    },
    {
      "idiom" : "iphone",
      "size" : "40x40",
      "filename" : "80.png",
      "scale" : "2x"
    },
    {
      "idiom" : "iphone",
      "size" : "40x40",
      "filename" : "120.png",
      "scale" : "3x"
    },
    {
      "idiom" : "iphone",
      "size" : "57x57",
      "filename" : "57.png",
      "scale" : "1x"
    },
    {
      "idiom" : "iphone",
      "size" : "57x57",
      "filename" : "114.png",
      "scale" : "2x"
    },
    {
      "idiom" : "iphone",
      "size" : "60x60",
      "filename" : "120.png",
      "scale" : "2x"
    },
    {
      "idiom" : "iphone",
      "size" : "60x60",
      "filename" : "180.png",
      "scale" : "3x"
    }
  ],
  "info" : {
    "version" : 1,
    "author" : "svg_to_icons"
  }
}"""
