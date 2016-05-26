intrude import pthreads
import concurrent_collections

# Removed the proxy class, the generated class adds `async_` methods
# and modify the base method so it's synchronous (join on future)

abstract class Actor
end

abstract class Message
	type E: Actor

	fun invoke(actor: E) is abstract
end

# MailBox for an actor
class Mailbox[E]
	super ConcurrentList[E]

	private var cond = new NativePthreadCond

	redef fun push(e) do 
		mutex.lock
		real_collection.push(e)
		self.cond.signal
		mutex.unlock
	end

	redef fun shift do
		mutex.lock
		if self.is_empty then self.cond.wait(mutex.native.as(not null))
		var r = real_collection.shift
		mutex.unlock
		return r
	end

end

# A Promise
class Future[E]
	# Value returned by
	var value: nullable E = null

	private var mutex = new Mutex
	private var cond: nullable NativePthreadCond = null

	private var is_done = false

	# rbheibvhe
	fun set_value(value: E) do
		mutex.lock
		is_done = true
		self.value = value
		var cond = self.cond
		if cond != null then cond.signal
		mutex.unlock
	end

	# Return immediatly if the task terminated, or block waiting for `self` to terminate
	fun join: E do
		mutex.lock
		if not is_done then
			var cond = new NativePthreadCond
			self.cond = cond
			cond.wait(mutex.native.as(not null))
		end
		mutex.unlock
		return value
	end
end

class ActorAMessage
	super Message
	redef type E: ActorA
end

class FooMessage
	super ActorAMessage
	redef fun invoke(actor) do actor.foo
end

class BarMessage
	super ActorAMessage
	
	var i: Int

	var ret = new Future[Int]

	redef fun invoke(actor) do ret.set_value(actor.bar(i))
end

# Original A
#class A
#	fun foo do print "foo"
#	fun bar(i: Int): Int do return i
#end

# After generation A
class A
	var a: ActorA is noinit
	
	init do
		a = new ActorA
		a.start
		super
	end

	# procedures are always asynchronous
	fun foo do
		var message = new FooMessage
		a.mailbox.push(message)
		a.cond.signal
	end

	# Synchronous call
	fun bar(i: Int): Int do
		var message = new BarMessage(i)
		a.mailbox.push(message)
		a.cond.signal
		return message.ret.join
	end

	# asynchronous version of `bar`, returns a future
	fun async_bar(i: Int): Future[Int] do
		var message = new BarMessage(i)
		a.mailbox.push(message)
		a.cond.signal
		return message.ret
	end
end

class ActorA
	super Actor
	super Thread
       
	# Messages for this actor
        var mailbox = new Mailbox[Message]
        private var mutex = new Mutex
        private var cond = new NativePthreadCond

	redef fun main do loop mailbox.shift.invoke(self)
	
	# actual implementation
	fun foo do
		print "foo"
	end

	# Intern recursive version
	private fun bar(i: Int): Int do return i
end

var a = new A
a.foo
print a.bar(10)
