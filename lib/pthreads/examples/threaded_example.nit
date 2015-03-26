# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# test for threaded annotation
module threaded_example

import pthreads

# the "is threaded" annotation makes this fun run on an other thread
fun foo is threaded do
	sys.nanosleep(1,0)
	print "threaded"
end

foo
print "main"
sys.nanosleep(2,0)
