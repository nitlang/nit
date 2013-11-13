# wiringPi nit wrapper

## Installation

You need to install the [wiringPi library](http://wiringpi.com/). Refer to [download and install](http://wiringpi.com/download-and-install/) manual.

## Compiling

Link to the library must be passed to nit compiler:

	nitc myprogram.nit --cc-lib-name wiringPi

## Usage

You first need to initialize the wiringPi library using a setup methods.

Setup methods are:

* `wiringPi_setup`: This initialises wiringPi and assumes that the calling program is going to be using the wiringPi pin numbering scheme;
* `wiringPi_setup_gpio`: Same as wiringPi_setup, however it allows the calling programs to use the Broadcom GPIO pin numbers directly with no re-mapping;
* `wiringPi_setup_phys`: Identical to wiringPi_setup, however it allows the calling programs to use the physical pin numbers on the P1 connector only;
* `wiringPi_setup_sys`: This initialises wiringPi but uses the /sys/class/gpio interface rather than accessing the hardware directly;

For example:

	# init wiringPi lib with gpio output
	wiringPi_set_gpio

Then you can refer to a GPIO Pin using its id:

	var pin = new RPIPin(23)

Before read or write a value on a pin you need to set its mode.

Modes are:

* INPUT
* OUTPUT
* PWM_OUTPUT
* GPIO_CLOCK

Note that only wiringPi pin 1 (BCM\_GPIO 18) supports PWM output and only wiringPi pin 7 (BCM\_GPIO 4) supports CLOCK output modes.

	pin.mode(new RPIPinMode.output_mode)

You can then `write` or `read` a value from the pin:

	pin.write(true)
	pin.read

## Copyrigth

The wiringPi library is released under [GNU LGPLv3](http://www.gnu.org/copyleft/lesser.html) licence.

