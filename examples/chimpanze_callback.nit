module chimpanze_callback
import prim_monkey_callback

class Chimpanze
	super MonkeyActionCallable

	fun create
	do
		var monkey = new Monkey
		print "Hum, I'm sleeping ..."
		# Invoking method which will take some time to compute, and 
		# will be back in wokeUp method with information.
		# - Callback method defined in MonkeyActionCallable Interface
		monkey.wokeUpAction(self, "Hey, I'm awake.")
	end

	# Inherit callback method, defined by MonkeyActionCallable interface
	# - Back of wokeUpAction method 
	redef fun wokeUp( sender:Monkey, message:Object )
	do
		print sender
		print message
	end
end

var m = new Chimpanze
m.create
