# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This module is used to manipulate android sensors
# The sensor support is implemented in android_app module, so the user can enable the type of sensor he wants to use.
# There is an example of how you can use the android sensors in nit/examples/mnit_ballz :
#
# ~~~~nitish
# #FIXME rewrite the example
# var app = new MyApp
# app.sensors_support_enabled = true
# app.accelerometer.enabled = true
# app.accelerometer.eventrate = 10000
# app.magnetic_field.enabled = true
# app.gyroscope.enabled = true
# app.light.enabled = true
# app.proximity.enabled = true
# app.main_loop
# ~~~~
#
# In this example, we enable the sensor support, then enable all types of sensors supported, before running the app.
# The result is you get all type of SensorEvent (ASensorAccelerometer, ASensorMagneticField ...) in the input method of your app
module sensors

import android
import mnit

in "C header" `{
	#include <jni.h>
	#include <android/sensor.h>
`}

extern class ASensorType `{int`}
	new accelerometer: ASensorType `{return ASENSOR_TYPE_ACCELEROMETER;`}
	fun is_accelerometer: Bool `{return recv == ASENSOR_TYPE_ACCELEROMETER;`}
	new magnetic_field: ASensorType `{return ASENSOR_TYPE_MAGNETIC_FIELD;`}
	fun is_magnetic_field: Bool `{return recv == ASENSOR_TYPE_MAGNETIC_FIELD;`}
	new gyroscope:ASensorType `{return ASENSOR_TYPE_GYROSCOPE;`}
	fun is_gyroscope: Bool `{ return recv == ASENSOR_TYPE_GYROSCOPE;`}
	new light: ASensorType `{return ASENSOR_TYPE_LIGHT;`}
	fun is_light: Bool `{return recv == ASENSOR_TYPE_LIGHT;`}
	new proximity: ASensorType `{return ASENSOR_TYPE_PROXIMITY;`}
	fun is_proximity:Bool `{return recv == ASENSOR_TYPE_PROXIMITY;`}
end

# Manages the sensors
extern class ASensorManager `{ASensorManager*`}

	new get_instance: ASensorManager `{return ASensorManager_getInstance();`}

	# Returns the list of available sensors
	fun get_sensor_list: Pointer `{
		ASensorList *list;
		ASensorManager_getSensorList(recv, list);
		return list;
	`}

	# Create a new sensor event queue and associate it with a looper
	fun create_event_queue(app: NativeAppGlue): ASensorEventQueue `{
		return ASensorManager_createEventQueue(recv, app->looper, LOOPER_ID_USER, NULL, NULL);
	`}

	# Returns the default sensor of the given type
	fun get_default_sensor(sensortype: ASensorType): ASensor `{
		return ASensorManager_getDefaultSensor(recv, sensortype);
	`}

	# Destroys the event queue and free all resources associated to it
	fun destroy_event_queue(queue: ASensorEventQueue) `{
		ASensorManager_destroyEventQueue(recv, queue);
	`}
end

# Manages the sensors events
extern class ASensorEventQueue `{ASensorEventQueue*`}

	# Enable the selected sensor, returns a negative value on error
	fun enable_sensor(sensor: ASensor): Int `{
		return ASensorEventQueue_enableSensor(recv, sensor);
	`}

	# Disable the selected sensor, returns a negative value on error
	fun disable_sensor(sensor: ASensor): Int `{
		return ASensorEventQueue_disableSensor(recv, sensor);
	`}

	# Set the delivery rate of events in microseconds for the given sensor
	fun set_event_rate(sensor: ASensor, usec: Int): Int `{
		return ASensorEventQueue_setEventRate(recv, sensor, usec);
	`}
	# Returns 1 if the queue has events, 0 if it does not have events,
	# and a negative value if there is an error
	fun has_events: Int `{
		return ASensorEventQueue_hasEvents(recv);
	`}

	# Returns the next available events from the queue.
	# Returns a negative value if no events are available or an error has occured
	# otherwise the number of events returned
	fun get_events(events: ASensorEvents, count: Int): Int `{
		return ASensorEventQueue_getEvents(recv, events, (size_t)count);
	`}
end

# Extern class referencing a ASensor
extern class ASensor `{ASensorRef`}

	new  `{return malloc(sizeof(ASensorRef));`}
	fun name: NativeString `{return (char*)ASensor_getName(recv);`}
	fun vendor: NativeString `{return (char*)ASensor_getVendor(recv);`}
	fun sensor_type: ASensorType `{return ASensor_getType(recv);`}
	fun resolution: Float `{return ASensor_getResolution(recv);`}
	fun min_delay: Int `{return ASensor_getMinDelay(recv);`}
end

# NIT representation of an Android Sensor used in android_app to initialize sensors
class AndroidSensor

	var asensor = new ASensor is writable
	var enabled = false is writable
	var event_rate = 100000 is writable

	fun name: String do return asensor.name.to_s
	fun vendor: String do return asensor.vendor.to_s
	fun sensor_type: ASensorType do return asensor.sensor_type
	fun resolution: Float do return asensor.resolution
	fun min_delay: Int do return asensor.min_delay
end

# Extern class referencing a ASensorEvent
extern class ASensorEvent `{ASensorEvent*`}
		super SensorEvent

	fun version: Int `{return recv->version;`}
	fun sensor: ASensor `{return (ASensorRef)recv->sensor;`}
	fun sensor_type: ASensorType `{return recv->type;`}
	fun timestamp: Int `{return recv->timestamp;`}
end

extern class FullSensor `{ASensorEvent*`}
		super ASensorLight
		super ASensorProximity

	fun temperature: Float `{return recv->temperature;`}
	fun pressure: Float `{return recv->pressure;`}
	fun data: Pointer `{return recv->data;`}
	fun vector: ASensorVector `{return &(recv->vector);`}
	fun acceleration: ASensorVector `{return &(recv->acceleration);`}
	fun magnetic: ASensorVector `{return &(recv->magnetic);`}
end

# Extern class referencing a ASensorVector, attribute of ASensorRef
extern class ASensorVector `{ASensorVector*`}

	fun v: Pointer `{return recv->v;`}
	fun x: Float `{	return recv->x;`}
	fun y: Float `{return recv->y;`}
	fun z: Float `{return recv->z;`}
	fun azimuth: Float `{return recv->azimuth;`}
	fun pitch: Float `{return recv->pitch;`}
	fun roll: Float `{return recv->roll;`}
	fun status: Int `{return recv->status;`}
	fun reserved: Pointer `{return recv->reserved;`}
end

# Sensor event returned by the Accelerometer sensor
extern class ASensorAccelerometer `{ASensorEvent*`}
	super ASensorEvent

	fun x: Float `{return recv->acceleration.x;`}
	fun y: Float `{return recv->acceleration.y;`}
	fun z: Float `{return recv->acceleration.z;`}
end

# Sensor event returned by the Magnetic Field sensor
extern class ASensorMagneticField `{ASensorEvent*`}
	super ASensorEvent

	fun x: Float `{return recv->magnetic.x;`}
	fun y: Float `{return recv->magnetic.y;`}
	fun z: Float `{	return recv->magnetic.z;`}
end

# Sensor event returned by the gyroscope sensor
extern class ASensorGyroscope `{ASensorEvent*`}
	super ASensorEvent

	fun x: Float `{return recv->vector.x;`}
	fun y: Float `{return recv->vector.y;`}
	fun z: Float `{return recv->vector.y;`}
end

# Sensor event returned by the Light sensor
extern class ASensorLight `{ASensorEvent*`}
	super ASensorEvent

	fun light: Float `{return recv->light;`}
end

# sensor event returned by the Proximity Sensor
extern class ASensorProximity `{ASensorEvent*`}
	super ASensorEvent

	fun distance: Float `{return recv->distance;`}
end

# Array of SensorEvents
extern class ASensorEvents `{ASensorEvent*`}

	new (length: Int) `{return malloc(sizeof(ASensorEvent)*length);`}

	fun [](index: Int): ASensorEvent `{
		return recv+index;
	`}
end

redef class App
	var accelerometer = new AndroidSensor
	var magnetic_field = new AndroidSensor
	var gyroscope = new AndroidSensor
	var light = new AndroidSensor
	var proximity = new AndroidSensor
	var sensormanager: ASensorManager
	var eventqueue: ASensorEventQueue
	var sensors_support_enabled = false is writable

	private fun extern_input_sensor_accelerometer(event: ASensorAccelerometer) do input(event)
	private fun extern_input_sensor_magnetic_field(event: ASensorMagneticField) do input(event)
	private fun extern_input_sensor_gyroscope(event: ASensorGyroscope) do input(event)
	private fun extern_input_sensor_light(event: ASensorLight) do input(event)
	private fun extern_input_sensor_proximity(event: ASensorProximity) do input(event)

	# Sensors support
	# The user decides which sensors he wants to use by setting them enabled
	private fun enable_sensors
	do
		if sensors_support_enabled then enable_sensors_management else return
		if accelerometer.enabled then enable_accelerometer
		if magnetic_field.enabled then enable_magnetic_field
		if gyroscope.enabled then enable_gyroscope
		if light.enabled then enable_light
		if proximity.enabled then enable_proximity
	end

	private fun enable_sensors_management
	do
		sensormanager = new ASensorManager.get_instance
		#eventqueue = sensormanager.create_event_queue(new NdkAndroidApp)
		eventqueue = initialize_event_queue(sensormanager, native_app_glue.looper)
	end

	# HACK: need a nit method to get mnit_java_app, then we can use the appropriate sensormanager.create_event_queue method to initialize the event queue
	private fun initialize_event_queue(sensormanager: ASensorManager, looper: ALooper): ASensorEventQueue `{
		return ASensorManager_createEventQueue(sensormanager, looper, LOOPER_ID_USER, NULL, NULL);
	`}

	private fun enable_accelerometer
	do
		accelerometer.asensor = sensormanager.get_default_sensor(new ASensorType.accelerometer)
		if accelerometer.asensor.address_is_null then 
				print "Accelerometer sensor unavailable" 
		else
				if eventqueue.enable_sensor(accelerometer.asensor) < 0 then print "Accelerometer enabling failed"
			eventqueue.set_event_rate(accelerometer.asensor, accelerometer.event_rate)
		end
	end

	private fun enable_magnetic_field
	do
		magnetic_field.asensor = sensormanager.get_default_sensor(new ASensorType.magnetic_field)
		if magnetic_field.asensor.address_is_null then
				print "Magnetic Field unavailable"
		else
			if eventqueue.enable_sensor(magnetic_field.asensor) < 0 then print "Magnetic Field enabling failed"
			eventqueue.set_event_rate(magnetic_field.asensor, magnetic_field.event_rate)
		end
	end

	private fun enable_gyroscope
	do
		gyroscope.asensor = sensormanager.get_default_sensor(new ASensorType.gyroscope)
		if gyroscope.asensor.address_is_null then
				print "Gyroscope sensor unavailable"
		else
			if eventqueue.enable_sensor(gyroscope.asensor) < 0 then print "Gyroscope enabling failed"
			eventqueue.set_event_rate(gyroscope.asensor, gyroscope.event_rate)
		end
	end

	private fun enable_light
	do
		light.asensor = sensormanager.get_default_sensor(new ASensorType.light)
		if light.asensor.address_is_null then
				print "Light sensor unavailable"
		else
			if eventqueue.enable_sensor(light.asensor) < 0 then print "Light enabling failed"
			eventqueue.set_event_rate(light.asensor, light.event_rate)
		end
	end

	private fun enable_proximity
	do
		proximity.asensor = sensormanager.get_default_sensor(new ASensorType.proximity)
		if proximity.asensor.address_is_null then 
				print "Proximity sensor unavailable"
		else
			if eventqueue.enable_sensor(proximity.asensor) < 0 then print "Proximity enabling failed"
			eventqueue.set_event_rate(light.asensor, light.event_rate)
		end
	end

	redef fun run
	do
		enable_sensors

		super
	end

	redef fun handle_looper_event(ident, event, data)
	do
		super
		handle_sensor_events(ident)
	end

	private fun handle_sensor_events(ident: Int) import extern_input_sensor_accelerometer, extern_input_sensor_magnetic_field, extern_input_sensor_gyroscope, extern_input_sensor_light, extern_input_sensor_proximity, eventqueue `{
		//If a sensor has data, process it
		if(ident == LOOPER_ID_USER) {
			//maybe add a boolean to the app to know if we want to use Sensor API or ASensorEvent directly ...
			ASensorEvent* events = malloc(sizeof(ASensorEvent)*10);
			int nbevents;
			ASensorEventQueue* queue = App_eventqueue(recv);
			while((nbevents = ASensorEventQueue_getEvents(queue, events, 10)) > 0) {
				int i;
				for(i = 0; i < nbevents; i++){
					ASensorEvent event = events[i];
					switch (event.type) {
						case ASENSOR_TYPE_ACCELEROMETER:
							App_extern_input_sensor_accelerometer(recv, &event);
							break;
						case ASENSOR_TYPE_MAGNETIC_FIELD:
							App_extern_input_sensor_magnetic_field(recv, &event);
							break;
						case ASENSOR_TYPE_GYROSCOPE:
							App_extern_input_sensor_gyroscope(recv, &event);
							break;
						case ASENSOR_TYPE_LIGHT:
							App_extern_input_sensor_light(recv, &event);
							break;
						case ASENSOR_TYPE_PROXIMITY:
							App_extern_input_sensor_proximity(recv, &event);
							break;
					}
				}
			}
		}
	`}
end
