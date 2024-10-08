# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Event-based interface to track the progression of an operation.
module progression

# An operation that is trackable using a `ProgressionListener`.
abstract class Trackable

	# Listen to the progression of the operation.
	var progression_listeners: SimpleCollection[ProgressionListener] =
			new Array[ProgressionListener]

	# Notice the registered `ProgessionListener` that the operation started.
	protected fun fire_started do
		for l in progression_listeners do
			l.started
			l.progressed(0)
		end
	end

	# Notice the registered `ProgessionListener` that the operation progressed.
	#
	# Parameter:
	#
	# * `done_part`: Indicates what is done.
	# * `total`: Indicates what need to be done, `done_part` included.
	protected fun fire_progressed(done_part: Int, total: Int) do
		for l in progression_listeners do
			l.progressed(done_part * l.progression_max / total)
		end
	end

	# Notice the registered `ProgessionListener` that the operation is done.
	protected fun fire_done do
		for l in progression_listeners do
			l.progressed(l.progression_max)
			l.done
		end
	end
end

# Listens to the progression of a possibly long-running operation.
interface ProgressionListener
	# The number that represents a completed operation.
	fun progression_max: Int do return 100

	# The operation started.
	fun started do end

	# The operation progressed.
	#
	# Parameter:
	#
	# * `progression`: Indicator of the progession, between `0` and
	# `progression_max`.
	fun progressed(progression: Int) do end

	# The operation is done.
	fun done do end
end
