_app.nit_ is a framework to create cross-platform applications

The framework provides services to manage common needs of modern mobile applications:

* Life-cycle
* User interface
* Persistence
* Package metadata
* Compilation and packaging

The features offered by _app.nit_ are common to all platforms, but
may not be available on all devices.

## Application Life-Cycle

The _app.nit_ application life-cycle is compatible with all target platforms.
It relies on the following sequence of events, represented here by their callback method name:

1. `on_create`: The application is being created.
   You should build the UI at this time.

2. `on_start`: The app is starting or restarting, background activities may

3. `on_resume`: The app enters the active state, it is in the foreground.

4. `on_pause`: The app leaves the active state and the foreground.
   It may still be visible in the background.
   It may then go back to `on_resume` or `on_stop`.

5. `on_stop`: The app is completely hidden.
   It may then be destroyed (`on_destroy`) or go back to `on_start`.

6. `on_destroy`: The app is being destroyed.

Life-cycle events related to saving and restoring the application state are provided by two special callback methods:

* `on_save_state`: The app may be destroyed soon, save its state for a future `on_restore_state`.
  More on how it can be done in the `app::data_store` section.

* `on_restore_state`: The app is launching, restore its state from a previous `on_save_state`.

These events are synchronized to the native platforms applications
The `App` instance is the first to be notified of these events.
Other UI elements, from the `ui` submodule, are notified of the same events using a simple depth first visit.
So all UI elements can react separately to live-cycle events.

## User Interface

The `app::ui` module defines an abstract API to build a portable graphical application.
The API is composed of interactive `Control`s, visible `View`s and an active `Window`.

Here is a subset of the most useful controls and views:

* The classic pushable `Button` with text (usually rectangular).

* `TextInput` is a field for the user to enter text.

* `HorizontalLayout` and `VerticalLayout` organize other controls in order.

Each control is notified of input events by callbacks to `on_event`.
All controls have observers that are also notified of the events.
So there is two ways  to customize the behavior on a given event:

* Create a subclass of the wanted `Control`, let's say `Button`, and specialize `on_event`.

* Add an observer to a `Button` instance, and implement `on_event` in the observer.

### Usage Example

The calculator example (at `../../examples/calculator/src/calculator.nit`) is a concrete,
simple and complete use of the _app.nit_ portable UI.

### Platform-specific UI

You can go beyond the portable UI API of _app.nit_ by using the natives services of a platform.

The suggested approach is to use platform specific modules to customize the application on a precise platform.
This module redefine `Window::on_start` to call the native language of the platform and setup a native UI.

_TODO complete description and add concrete examples_

## Persistent State with data\_store

_app.nit_ offers the submodule `app::data_store` to easily save the application state and user preferences.
The service is accessible by the method `App::data_store`. The `DataStore` itself defines 2 methods:

* `DataStore::[]=` saves and associates any serializable instances to a `String` key.
Pass `null` to clear the value associated to a key.

* `DataStore::[]` returns the object associated to a `String` key.
It returns `null` if nothing is associated to the key.

### Usage Example

~~~
import app::data_store

redef class App
	var user_name: String

	redef fun on_save_state
	do
		app.data_store["first run"] = false
		app.data_store["user name"] = user_name

		super # call `on_save_state` on all attached instances of `AppComponent`
	end

	redef fun on_restore_state
	do
		var first_run = app.data_store["first run"]
		if first_run != true then
			print "It's the first run of this application"
		end

		var user_name = app.data_store["user name"]
		if user_name isa String then
			self.user_name = user_name
		else self.user_name = "Undefined"

		super
	end
end
~~~

## Metadata annotations

The _app.nit_ framework defines three annotations to customize the application package.

* `app_name` takes a single argument, the visible name of the application.
  This name is used for launchers and window title.
  By default, the name of the target module.

* `app_namespace` specifies the full namespace (or package name) of the application package.
  This value usually identify the application uniquely on application stores.
  It should not change once the application has benn published.
  By default, the namespace is `org.nitlanguage.{module_name}`.

* `app_version` specifies the version of the application package.
  This annotation expects at least one argument, usually we use three version numbers:
  the major, minor and revision.
  The special function `git_revision` will use the prefix of the hash of the latest git commit.
  By default, the version is 0.1.

### Usage Example

~~~
module my_module is
    app_name "My App"
    app_namespace "org.example.my_app"
    app_version(1, 0, git_revision)
end
~~~

## Compiling and Packaging an Application

The Nit compiler detects the target platform from the importations and generates the appropriate application format and package.

Applications using only the portable services of _app.nit_ require some special care at compilation.
Such an application, let's say `calculator.nit`, does not depend on a specific platform and use the portable UI.
The target platform must be specifed to the compiler for it to produce the correct application package.
There is two main ways to achieve this goal:

* The the mixin option (`-m path`) loads an additionnal module before compiling.
  It can be used to load platform specific implementations of the _app.nit_ portable UI.

  ~~~
  # GNU/Linux version, using GTK
  nitc calculator.nit -m NIT_DIR/lib/linux/ui.nit

  # Android version
  nitc calculator.nit -m NIT_DIR/lib/android/ui/
  ~~~

* A common alternative for larger projects is to use platform specific modules.
  Continuing with the `calculator.nit` example, it can be accompagnied by the module `calculator_linux.nit`.
  This module imports both `calculator` and `linux::ui`, and can also use other GNU/Linux specific code.

  ~~~
  module calculator_linux

  import calculator
  import linux::ui
  ~~~
