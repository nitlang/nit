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

# Register, update and discard events in a timeline.
#
# A queue of event is used to register objects associated with a start time and
# a duration and to return them when they are active.
#
# The main class is `EventQueue`. It controls a timeline and register events.
# Event can be any kind of object, usually specific time-related domain objects should be used.
#
# The auxiliary class `EventInfo` registers and control information about each event.
# It can also be used for fluent programming and create new events relatively to existing ones.
#
# ## Basic usage
#
# The event queue is created empty, and can handle any kind of data.
#
# ~~~
# var eq = new EventQueue[String]
# ~~~
#
# To register an event, add it with a start time and a duration.
# Note that the time is relative to the current time frame in the queue.
#
# ~~~
# eq.add("1..2", 1.0, 1.0)
# eq.add("2..10", 2.0, 8.0)
# ~~~
#
# To register instantaneous event, use a 0.0 duration (or no duration)
#
# ~~~
# eq.add("1.5", 1.5)
# ~~~
#
# To get active events, use `update` with a time difference.
# This returns a sequence of currently active events.
#
# ~~~
# var es = eq.update(1.0) # What is active after 1 unit of time?
# assert es.length == 1 # only "1..2" is active
# ~~~
#
# Each `update` increments the time frame of the queue and returns an updated information about active events.
#
# ~~~
# es = eq.update(1.0) # What is active after an other unit of time?
# assert eq.time == 2.0
#
# assert es.length == 3 # there is now 3 active events
# ~~~
#
# Results of the `update` method contains a lot of information.
#
# Obviously the original events:
#
# ~~~
# assert es[0].event == "1..2"
# assert es[1].event == "1.5"
# assert es[2].event == "2..10"
# ~~~
#
# The time since the begin of the event:
#
# ~~~
# assert es[0].time == 1.0 # Started 1 unit of time ago
# assert es[1].time == 0.5
# assert es[2].time == 0.0 # Started just now
# ~~~
#
# The completion ratio of the event until its termination:
#
# ~~~
# assert es[0].completion == 1.0 # has just finished
# assert es[1].completion == inf # completion ratio does not make sense for instant events
# assert es[2].completion == 0.0 # has just started
# ~~~
#
# And a lot of other things, just look at `EventInfo`.
#
# ## Expiration and control
#
# When `update` returns events, `occurrences` count the number of time an
# event is returned by update. It can be used for instance to see if it
# is the first time that a specific event is active.
#
# ~~~
# assert es[0].occurrences == 2 # it is the second time we see it
# assert es[1].occurrences == 1 # instant one
# assert es[2].occurrences == 1 # first time we see it
# ~~~
#
# The duration is used to automatically manage the expiration of the event.
#
# Note that if a event expires during an `update`, then it is still returned by the function.
# This is the way to handle instant events and newly expired events.
#
# To distinguish them `has_expired` can be used.
#
# ~~~
# assert es[0].has_expired == true  # just finished
# assert es[1].has_expired == true  # instant one
# assert es[2].has_expired == false # sill active
# ~~~
#
# On the next `update`, the already expired events are not returned again.
#
# ~~~
# es = eq.update(1.0) # What is active after an other unit of time?
# assert eq.time == 3.0
# assert es.length == 1
# assert es.first.event == "2..10" # No more "1..2" or "1.5"
# ~~~
#
# The `expire` method can force the expiration of an event.
#
# ~~~
# es.first.expire
# es = eq.update(1.0)
# assert es.is_empty # Sorry, "2..10" was expired
# ~~~
#
# ## Fluent programming
#
# The `add` method (and its derivates) returns a `EventInfo` object that can be used to have
# information about the newly registered event but also to chain the creation of time-related events.
#
# For instance, the following example registers 4 events, each one relative to the previous one:
#
# ~~~
# eq = new EventQueue[String]
# eq.add("e1", 10.0, 5.0).
#    add_after("e2", 2.0, 5.0).
#    add_sync("e3", 2.0, 5.0).
#    add_before("e4", 2.0, 5.0)
# ~~~
#
# This can be decomposed as:
#
# ~~~
# eq = new EventQueue[String]
# var e1 = eq.add("e1", 10.0, 5.0)
# assert e1.start == 10.0 # First event starts at 10
#
# var e2 = e1.add_after("e2", 2.0, 5.0) # starts 2 units of time after the end of e1
# assert e2.start == 17.0 # So starts at 10 + 5 + 2
#
# var e3 = e2.add_sync("e3", 2.0, 5.0) # starts 2 units of time after the begin of e2
# assert e3.start == 19.0 # So starts at 17 + 2
#
# var e4 = e3.add_before("e4", 2.0, 5.0) # ends 2 units of time before the start of e3
# assert e4.start == 12.0 # So starts at 19 - 2 - 5
# ~~~
module event_queue

# Queuing and management of arbitrary events in a timeline
class EventQueue[E]
	# Comparator used by the queue
	private var event_comparator = new EventComparator

	# Efficient queue
	private var queue = new MinHeap[EventInfo[E]](event_comparator)

	# List of current active event
	private var actives = new Array[EventInfo[E]]

	# List of previously active event
	private var old_actives = new Array[EventInfo[E]]

	# Global time since the creation of the queue
	var time = 0.0

	# Nearest deadline, used to optimise queue access
	#
	# `inf` if no deadline is set
	private var next: Float = inf

	# Register an `event` in the queue to be active in `delay` units of time.
	#
	# If `duration` is given, this is duration after what the event is automatically discarded.
	# If `null`, 0.0 or not given, the event will be executed only once
	# Use `inf` for an event with an infinite duration.
	fun add(event: E, delay: Float, duration: nullable Float): EventInfo[E]
	do
		return add_at(event, time + delay, duration)
	end

	# Register an `event` in the queue executed at a specific time.
	fun add_at(event: E, start: Float, duration: nullable Float): EventInfo[E]
	do
		if start < next then next = start
		var ei = new EventInfo[E](event, self, start, duration or else 0.0)
		queue.add ei

		return ei
	end

	# Add a given amount of time and return all the events that were active during the delay.
	#
	# Note that events that expired during the delay are marked `has_expired` and are still returned.
	fun update(dt: Float): SequenceRead[EventInfo[E]]
	do
		var time = self.time
		time += dt
		self.time = time

		# Switch things
		var tmp = old_actives
		old_actives = actives
		actives = tmp

		# Discard dead events
		actives.clear
		for ei in old_actives do
			if not ei.has_expired then actives.add ei
		end

		# Start new events
		if time >= next then loop
			if queue.is_empty then
				next = inf
				break
			end
			var ei = queue.peek
			if ei.start > time then
				next = ei.start
				break
			end
			ei = queue.take
			if not ei.has_expired then
				actives.add ei
				ei.occurrences = 0
			end
		end

		if actives.is_empty then return actives

		# Update event information
		for ei in actives do ei.update(time, dt)

		return actives
	end
end

# Information and management about a registered event
#
# It allows to retrieve static and dynamic information about an event.
# It also allows to register other time-related events with a fluent programming way.
class EventInfo[E]
	# The registered event.
	var event: E

	# The associated event queue.
	#
	# It is used internally for fluent programming.
	var queue: EventQueue[E]

	# Absolute start time for the registered event in the event queue time frame.
	var start: Float

	# Registered duration.
	#
	# Events with a 0.0 duration are called *instant events*.
	var duration: Float

	# Time since the begin of the event, in units of time.
	var time: Float = nan

	# Time since the last update (or the begin of the event if smaller)
	#
	# Note that if the event has expired during the last time lapse,
	# then `dt` also counts the *expired* time between the expiration time
	# and the update time.
	var dt: Float = nan

	# Ratio of completion
	#
	# Usually between 0.0 and 1.
	# It might be > 1.0 if the event has expired during the last time lapse.
	var completion = 0.0

	# Number of times that an event was returned by `update`.
	#
	# If the event just started during the last update, 1 is returned.
	#
	# If the event was not returned by `update` yet, 0 is returned.
	var occurrences = 0

	# Has the event expired?
	#
	# Such an event will be not present in the next `update`.
	#
	# Note that an event can be `has_expired` and have `occurrences == 0` if it
	# is entirely included in the last time lapse.
	# It is especially the case for instant events.
	var has_expired = false

	## Fluent methods

	# Register an event that starts after the end of the current one.
	#
	# `delay` indicates the time between the end of the current event and the begin of the new one.
	# Use 0.0 if both events should be contiguous and not overlap.
	#
	# Returns the new event information that can be used in fluent programming.
	fun add_after(event: E, delay: Float, duration: nullable Float): EventInfo[E]
	do
		return queue.add_at(event, start + self.duration + delay, duration)
	end

	# Register an event that starts with the current one.
	#
	# `delay` indicates the time between the begin of the current event and the begin of the new one.
	# Use 0.0 if both events should start at the same time and overlaps.
	#
	# Returns the new event information that can be used in fluent programming.
	fun add_sync(event: E, delay: Float, duration: nullable Float): EventInfo[E]
	do
		return queue.add_at(event, start + delay, duration)
	end

	# Register an event that finishes before the begin of current one.
	#
	# `delay` indicates the time between the end of the new event and the begin of the current one.
	# Use 0.0 if both event should be contiguous and not overlap.
	#
	# Returns the new event information that can be used in fluent programming.
	fun add_before(event: E, delay: Float, duration: nullable Float): EventInfo[E]
	do
		duration = duration or else 0.0
		return queue.add_at(event, start - delay - duration, duration)
	end

	# Update attributes. Is called by `EventQueue::update`
	private fun update(queue_time, queue_dt: Float)
	do
		time = queue_time - start
		if time >= duration then expire
		dt = queue_dt.min(time)
		completion = time / duration
		occurrences += 1
	end

	# Force the event to expire.
	#
	# The event can be active of not.
	#
	# ~~~
	# var eq = new EventQueue[String]
	# var e1 = eq.add("active", 0.0, 10.0)
	# var e2 = eq.add("not active", 2.0, 10.0)
	# var es = eq.update(1.0)
	# assert es == [e1]
	# e1.expire
	# e2.expire
	# es = eq.update(2.0)
	# assert es.is_empty
	# ~~~
	#
	# Note that when an event is forced to expire,
	# it will not appears in the next `update`.
	fun expire do has_expired = true

	redef fun to_s do return "{event or else "null"}@{start}+{duration}"
end

private class EventComparator
	super Comparator
	redef type COMPARED: EventInfo[nullable Object]
	redef fun compare(a, b) do return a.start <=> b.start
end
