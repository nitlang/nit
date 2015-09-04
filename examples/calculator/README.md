Portable calculator built using _app.nit_

# Project structure

* `calculator_logic` defines `CalculatorContext` with all the business logic of a calculator.
  It takes as input operations and numbers, and outputs the text to display.
* `calculator` implements the portable graphical interface using the _app.nit_ framework
* `calculator_test` test `CalculatorContext` as a black box.

# Usage

1. Compile with a call to `make`.
2. Run with either:
	1. The desktop version, `bin/calculator`.
	2. The Android version by install the APK at `bin/calculator.apk`.
