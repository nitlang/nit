# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>
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

Txtmark.class: txtmark-0.11.jar
	javac -cp txtmark-0.11.jar Txtmark.java

txtmark-0.11.jar:
	wget -O txtmark-0.11.jar http://search.maven.org/remotecontent?filepath=com/github/rjeschke/txtmark/0.11/txtmark-0.11.jar

test: Txtmark.class
	java -cp .:txtmark-0.11.jar Txtmark ../../benches/hello.md 5

clean:
	rm -rf txtmark-0.11.jar Txtmark.class
