# This file is part of NIT ( http://www.nitlanguage.org ).
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

var ip = new IProcess("echo", "B hello world!")
ip.read_line.output
ip.wait

var op = new OProcess.init_("cat")
op.write("C hello world!\n")
op.close
op.wait

var iop = new IOProcess.init_("cat")
iop.write("D hello world!\n")
iop.read_line.output
iop.close
iop.wait

