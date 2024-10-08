# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import exec

var hw = new Process("echo", "A", "hello", "world!")
hw.wait
print hw.status

print ""

var ip = new ProcessReader("echo", "B hello world!")
ip.read_line.output
ip.eof.output
ip.wait
print ip.status

print ""

var op = new ProcessWriter.from_a("cat", null)
op.write("C hello world!\n")
op.close
op.wait
print op.status

print ""

var iop = new ProcessDuplex.from_a("cat", null)
iop.write("D hello world!\n")
iop.read_line.output
iop.close
iop.wait
print iop.status

print ""

var e1 = new Process("sh", "-c", "echo E; exit 1")
e1.wait
print e1.status

print ""

var ioperr = new ProcessDuplex.from_a("bad command", null)
ioperr.write("D hello world!\n")
ioperr.read_line.output
ioperr.close
ioperr.wait
print ioperr.status
