intrude import pthreads
import concurrent_collections
import actors

# trying with a proxy, and the actor get the reference to the base class
# to make the right calls via the messages

class ActorAMessage
	super Message
	redef type E: A
end

class FooMessage
	super ActorAMessage
	redef fun invoke(instance) do instance.foo
end

class BarMessage
	super ActorAMessage
	
	var i: Int

	var ret = new Future[Int]

	redef fun invoke(instance) do ret.set_value(instance.bar(i))
end

# Working class
class A 
	actor

	fun foo do
		print "foo"
	end

	# Synchronous call
	fun bar(i: Int): Int do return i
end

class ProxyA
	var a: ActorA is noinit

	init proxy(base: A) do 
		a = new ActorA(base)
		a.start
	end

	fun foo do
		var message = new FooMessage
		a.mailbox.push(message)
		a.cond.signal
	end

	fun bar(i: Int): Future[Int] do
		var message = new BarMessage(i)
		a.mailbox.push(message)
		a.cond.signal
		return message.ret
	end
end

class ActorA
	super Actor
	redef type E: A
end

# args are supposed to be the same as the init of `A`
fun async_A(i: Int): ProxyA do
	var base_class = new A
	return new ProxyA.proxy(base_class)
end

var a = async_A(10)
a.foo
print a.bar(10).join
