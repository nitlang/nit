Portable calculator built using _app.nit_

# Project structure

* `calculator_logic` defines `CalculatorContext` with all the business logic of a calculator.
  It takes as input operations and numbers, and outputs the text to display.
* `calculator` implements the portable graphical interface using the _app.nit_ framework
* `scientific_calculator` refines `calculator` to add scientific operations.
* `android_calculator` refines `calculator` to get a nicer aesthetic on Android.
* `ios_calculator` refines `calculator` to get a nicer aesthetic on iOS.
* `calculator_test` test `CalculatorContext` as a black box.

# Compilation

* Compile and run on the desktop (GNU/Linux and OS X) with:

	~~~raw
	make
	bin/calculator
	~~~

* Compile for Android and install on a device or emulator with:

	~~~raw
	make bin/android.apk
	adb install -r bin/calculator.apk
	~~~

* Compile for iOS and run on the simulator with:

	~~~raw
	make bin/android.app
	ios-sim launch bin/calculator.app
	~~~

# Screenshots

![Scientific calculator on Linux with GTK+](doc/linux-scientific.png)

![Scientific calculator on Android](doc/android-scientific.png)

![Scientific calculator on iOS](doc/ios-scientific.png)
