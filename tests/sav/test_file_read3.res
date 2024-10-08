# This file is part of NIT ( https://nitlanguage.org ).
true
#
true
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
true
#
true
# Licensed under the Apache License, Version 2.0 (the "License");
true
# you may not use this file except in compliance with the License.
true
# You may obtain a copy of the License at
true
#
true
#     http://www.apache.org/licenses/LICENSE-2.0
true
#
true
# Unless required by applicable law or agreed to in writing, software
true
# distributed under the License is distributed on an "AS IS" BASIS,
true
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
true
# See the License for the specific language governing permissions and
true
# limitations under the License.
true

true
var f = new FileReader.open("test_file_read.nit")
true
var s: String
true
while not f.eof do
true
    s = f.read_line
true
    printn(s)
true
    printn("\n")
true
end
true
f.close
true

true
f.reopen
true
printn(f.read(10))
true
printn("|")
true
printn(f.read_all)
true
---
true
# This file is part of NIT ( https://nitlanguage.org ).
true
# This file is part of NIT ( https://nitlanguage.org ).
true
true
#
true
#
true
true
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
true
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
true
true
#
true
#
true
true
# Licensed under the Apache License, Version 2.0 (the "License");
true
# Licensed under the Apache License, Version 2.0 (the "License");
true
true
# you may not use this file except in compliance with the License.
true
# you may not use this file except in compliance with the License.
true
true
# You may obtain a copy of the License at
true
# You may obtain a copy of the License at
true
true
#
true
#
true
true
#     http://www.apache.org/licenses/LICENSE-2.0
true
#     http://www.apache.org/licenses/LICENSE-2.0
true
true
#
true
#
true
true
# Unless required by applicable law or agreed to in writing, software
true
# Unless required by applicable law or agreed to in writing, software
true
true
# distributed under the License is distributed on an "AS IS" BASIS,
true
# distributed under the License is distributed on an "AS IS" BASIS,
true
true
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
true
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
true
true
# See the License for the specific language governing permissions and
true
# See the License for the specific language governing permissions and
true
true
# limitations under the License.
true
# limitations under the License.
true
true

true

true
true
var f = new FileReader.open("test_file_read.nit")
true
var f = new FileReader.open("test_file_read.nit")
true
true
var s: String
true
var s: String
true
true
while not f.eof do
true
while not f.eof do
true
true
    s = f.read_line
true
    s = f.read_line
true
true
    printn(s)
true
    printn(s)
true
true
    printn("\n")
true
    printn("\n")
true
true
end
true
end
true
true
f.close
true
f.close
true
true

true

true
true
f.reopen
true
f.reopen
true
true
printn(f.read(10))
true
printn(f.read(10))
true
true
printn("|")
true
printn("|")
true
true
printn(f.read_all)
true
printn(f.read_all)
true
---
# This file is part of NIT ( https://nitlanguage.org ).
# This file is part of NIT ( https://nitlanguage.org ).
#
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# You may obtain a copy of the License at
#
#
#     http://www.apache.org/licenses/LICENSE-2.0
#     http://www.apache.org/licenses/LICENSE-2.0
#
#
# Unless required by applicable law or agreed to in writing, software
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# See the License for the specific language governing permissions and
# limitations under the License.
# limitations under the License.


var f = new FileReader.open("test_file_read.nit")
var f = new FileReader.open("test_file_read.nit")
var s: String
var s: String
while not f.eof do
while not f.eof do
    s = f.read_line
    s = f.read_line
    printn(s)
    printn(s)
    printn("\n")
    printn("\n")
end
end
f.close
f.close


f.reopen
f.reopen
printn(f.read(10))
printn(f.read(10))
printn("|")
printn("|")
printn(f.read_all)
printn(f.read_all)
