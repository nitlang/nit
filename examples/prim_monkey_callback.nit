module prim_monkey_callback

in "C header" `{
	#include <stdio.h>
	#include <stdlib.h>

	typedef struct { 
		int id;
		int age;
	} CMonkey;

	typedef struct {
		MonkeyActionCallable toCall;
		Object message;
	} MonkeyAction;
`}

in "C body" `{
	// Method which reproduce a callback answer
	// Please note that a function pointer is only used to reproduce the callback
	void cbMonkey(CMonkey *mkey, void callbackFunc(CMonkey*, MonkeyAction*), MonkeyAction *data)
	{
		sleep(2);
		callbackFunc( mkey, data );
	}

	// Back of background treatment, will be redirected to callback function
	void nit_monkey_callback_func( CMonkey *mkey, MonkeyAction *data )
	{
		// To call a your method, the signature must be written like this :
		// <Interface Name>_<Method>...
		MonkeyActionCallable_wokeUp( data->toCall, mkey, data->message );
	}
`}

# Implementable interface to get callback in defined methods
interface MonkeyActionCallable
	fun wokeUp( sender:Monkey, message: Object) is abstract
end

# Defining my object type Monkey, which is, in a low level, a pointer to a C struct (CMonkey)
extern Monkey `{ CMonkey * `}
	
	new `{
		CMonkey *monkey = malloc( sizeof(CMonkey) );
		monkey->age = 10;
		monkey->id = 1;
		return monkey;
	`}
	
	# Object method which will get a callback in wokeUp method, defined in MonkeyActionCallable interface
	# Must be defined as Nit/C method because of C call inside
	fun wokeUpAction( toCall: MonkeyActionCallable, message: Object ) is extern import MonkeyActionCallable::wokeUp `{

		// Allocating memory to keep reference of received parameters :
		// - Object receiver
		// - Message 
		MonkeyAction *data = malloc( sizeof(MonkeyAction) );

		// Incrementing reference counter to prevent from releasing
		MonkeyActionCallable_incr_ref( toCall );
		Object_incr_ref( message );
		
		data->toCall = toCall;
		data->message = message;
		
		// Calling method which reproduce a callback by passing :
		// - Receiver
		// - Function pointer to object return method
		// - Datas
		cbMonkey( recv, &nit_monkey_callback_func, data );
	`}
end
