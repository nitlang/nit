[34m# This file is part of NIT ( http://www.nitlanguage.org ).
[m[34m#
[m[34m# Copyright 2006-2008 Jean Privat <jean@pryen.org>
[m[34m#
[m[34m# Licensed under the Apache License, Version 2.0 (the "License");
[m[34m# you may not use this file except in compliance with the License.
[m[34m# You may obtain a copy of the License at
[m[34m#
[m[34m#     http://www.apache.org/licenses/LICENSE-2.0
[m[34m#
[m[34m# Unless required by applicable law or agreed to in writing, software
[m[34m# distributed under the License is distributed on an "AS IS" BASIS,
[m[34m# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
[m[34m# See the License for the specific language governing permissions and
[m[34m# limitations under the License.
[m
[33mimport[m [33mend[m

[33minterface[m [32mObject[m
[33mend[m

[33menum[m [32mBool[m
[33mend[m

[33menum[m [32mInt[m
	[33mfun[m output [33mis[m intern
[33mend[m

[33mclass[m [32mA[m
	[33minit[m [33mdo[m [31m5[m.output
	[33mfun[m run [33mdo[m [31m6[m.output
[33mend[m

[33mclass[m [32mB[m
	[33mvar[m val: [32mInt[m
	[33minit[m(v: [32mInt[m)
	[33mdo[m
		[31m7[m.output
		[33mself[m.val = v
	[33mend[m
	[33mfun[m run [33mdo[m val.output
[33mend[m

[33mclass[m [32mC[m
	[33mvar[m val1: [32mInt[m
	[33mvar[m val2: [32mInt[m = [31m10[m
[33mend[m

[33mfun[m foo [33mdo[m [31m2[m.output
[33mfun[m bar(i: [32mInt[m) [33mdo[m i.output
[33mfun[m baz: [32mInt[m [33mdo[m [33mreturn[m [31m4[m

[31m1[m.output
foo
bar([31m3[m)
baz.output

[33mvar[m a = [33mnew[m [32mA[m
a.run

[33mvar[m b = [33mnew[m [32mB[m([31m8[m)
b.run

[33mvar[m c = [33mnew[m [32mC[m([31m9[m)
c.val1.output
c.val2.output
