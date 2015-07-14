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

# Services to manipulate `Date`, `Time` and `DateTime`
#
# The services are split in 2 classes:
#
# * `Date` handles the year, month and day parts of the date.
# * `Time` handles the time in hours, minutes and seconds.
#
# These are united in `DateTime` for a precise time in a precise day.
#
# ~~~
# var now = new Time.now
# var midnight = new Time(0, 0, 0)
# assert now > midnight
#
# var nine_thirty = new Time(9, 30, 0)
# var eleven_twenty = new Time(11, 20, 0)
# assert eleven_twenty > nine_thirty
#
# var pi_day = new Date(2015, 03, 14)
# var may_the_fourth = new Date(2015, 5, 4)
# assert pi_day < may_the_fourth
#
# var now_t = new DateTime.now
# var epoch = new DateTime(1970, 1, 1, 0, 0, 0)
# assert now_t > epoch
# ~~~
#
module date

# A time of the day, composed of an `hour`, a `minute` and a `second` count
class Time
	super Comparable
	redef type OTHER: Time

	# The hour part of this time, between 0 and 23
	var hour: Int

	# The minute within the hour, between 0 and 59
	var minute: Int

	# The second within the minute, between 0 and 59
	var second: Int

	# Get the current time of the day
	init now do
		var tm = new Tm.localtime
		init(tm.hour, tm.min, tm.sec)
	end

	# Get the difference between two times in second
	fun diff_time(other: Time): Int do
		return (hour * 3600 + minute * 60 + second) -
			(other.hour * 3600 + other.minute * 60 + other.second)
	end

	redef fun ==(d) do return d isa Time and time_eq(d)

	redef fun <(d) do return self.diff_time(d) < 0

	redef fun hash do return hour * 1024 + minute * 64 + second

	private fun time_eq(other: Time): Bool
	do
		return hour * 3600 + minute * 60 + second ==
			other.hour * 3600 + other.minute * 60 + other.second
	end
end

# A date, composed by a `year`, a `month` and a `day`
class Date
	super Comparable
	redef type OTHER: Date

	# Year, ex: 1989
	var year: Int

	# Month as an integer, `1` for January, `2` for February, etc.
	var month: Int

	# Day of the month
	var day: Int

	# UTC time zone
	#
	# FIXME this value is not yet applied
	var time_zone = "Z"

	# The date of this day
	init today do
		var tm = new Tm.localtime
		init(1900 + tm.year, tm.mon + 1, tm.mday)
	end

	# `self` formatted according to ISO 8601
	redef fun to_s do return "{year}-{month}-{day}"

	# Difference in days between `self` and `other`
	fun diff_days(other: Date): Int
	do
		var y_out = year - other.year
		y_out = y_out * 365
		var m_out = month - other.month
		m_out = m_out * 30 # FIXME
		return day - other.day + m_out + y_out
	end

	# Difference in months between `self` and `other`
	fun diff_months(other: Date): Int
	do
		var y_out = year - other.year
		y_out = y_out * 12
		return month - other.month + y_out
	end

	# Difference in years between `self` and `other`
	fun diff_years(other: Date): Int do return year - other.year

	redef fun ==(d) do return d isa Date and self.diff_days(d) == 0

	redef fun hash do return year + month * 1024 + day * 2048

	redef fun <(d) do return self.diff_days(d) < 0

	# Is `self` is between the years of `a` and `b`?
	private fun is_between_years(a, b: Date): Bool
	do
		return (a.year > year and b.year < year) or (b.year > year and a.year < year) or (a.year == year or b.year == year)
	end

	# Is `self` is between the months of `a` and `b`?
	private fun is_between_months(a, b: Date) : Bool
	do
		if not self.is_between_years(a,b) then return false
		return (a.month > month and b.month < month) or (b.month > month and a.month < month) or (a.month == month or b.month == month)
	end

	# Is `self` between `a` and `b`?
	redef fun is_between(a, b)
	do
		if not self.is_between_months(a, b) then return false
		return (a.day > day and b.day < day) or (b.day > day and a.day < day) or (a.day == day or b.day == day)
	end
end

# A `Time` in a `Date`
class DateTime
	super Date
	super Time
	redef type OTHER: DateTime
	autoinit year, month, day, hour, minute, second

	# Get the current `DateTime`
	init now
	do
		super
		today
	end

	redef fun ==(other) do return other isa DateTime and diff_days(other) == 0 and time_eq(other)

	redef fun to_s do return "{super} {hour}:{minute}:{second}{time_zone}"
end
