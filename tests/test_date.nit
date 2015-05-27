# This file is part of NIT ( http://www.nitlanguage.org ).
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

import date

var test  = new DateTime(2014, 02, 09, 13, 50, 0)
var test2 = new DateTime(2014, 02, 09, 13, 51, 0)
var test3 = new Date(2014, 01, 12)

var res   = test.diff_months(test2)

var time_1 = new Time(12,12,12)
var time_2 = new Time.now

print "Time equals : {time_1 == time_2}"

print "ToString :" + test.to_s
print "Date diff : {res}"
print "Equals : {test == test2}"

print "Year On : {test3.is_between(test,test2)}"
print "Month On : {test3.is_between(test,test2)}"

print "Fun < : {test3 < test}"
print "Is between : {test3.is_between(test2,test)} (test3 (test2,test))"
