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

import signals
import realtime

var clock = new Clock
var p = new Process("sleep", "10")

# Send some signals
p.signal sigalarm
p.kill

# Wait for it to die
p.wait

# Let's be generous here, as long as it does not take 5 secs out of 10 it's OK
print clock.lapse < 5.0
