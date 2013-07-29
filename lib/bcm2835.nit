# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Services to control the bcm2835 chipset as used in the Raspberry Pi
# model B revision 1 Uses the C library by Mike McCauley from
# http://www.airspayce.com/mikem/bcm2835/
module bcm2835

import gpio

in "C Header" `{
	#include <bcm2835.h>
`}

redef class Object
	protected fun bcm2835_init: Bool `{ return bcm2835_init(); `}
	protected fun bcm2835_close `{ bcm2835_close(); `}
	protected fun bcm2835_debug=(v: Bool) `{ bcm2835_set_debug(v); `}
end

extern class RPiPin `{ RPiGPIOPin `}
	super Pin

	new p1_03 `{ return RPI_GPIO_P1_03; `}

	new p1_05 `{ return RPI_GPIO_P1_05; `}
	new p1_07 `{ return RPI_GPIO_P1_07; `}

	new p1_11 `{ return RPI_GPIO_P1_11; `}
	new p1_12 `{ return RPI_GPIO_P1_12; `}
	new p1_13 `{ return RPI_GPIO_P1_13; `}

	new p1_15 `{ return RPI_GPIO_P1_15; `}
	new p1_16 `{ return RPI_GPIO_P1_16; `}

	new p1_18 `{ return RPI_GPIO_P1_18; `}
	new p1_19 `{ return RPI_GPIO_P1_19; `}

	new p1_21 `{ return RPI_GPIO_P1_21; `}
	new p1_22 `{ return RPI_GPIO_P1_22; `}
	new p1_23 `{ return RPI_GPIO_P1_23; `}
	new p1_24 `{ return RPI_GPIO_P1_24; `}

	new p1_26 `{ return RPI_GPIO_P1_26; `}

	# Select mode: input, output or alts
	fun fsel=(mode: FunctionSelect) `{ bcm2835_gpio_fsel(recv, mode); `}

	# Set output
	redef fun write(high) `{ bcm2835_gpio_write(recv, high? HIGH: LOW); `}

	# Set pull up mode
	fun pud=(pud: PUDControl) `{ bcm2835_gpio_set_pud(recv, pud); `}

	# Falling edge detect
	# Do not use on raspbian, it is bugged!
	fun fen `{ bcm2835_gpio_fen(recv); `}
	fun clr_fen `{ bcm2835_gpio_clr_fen(recv); `}

	# Raising edge detect
	# Do not use on raspbian, it is bugged!
	fun ren `{ bcm2835_gpio_ren(recv); `}
	fun clr_ren `{ bcm2835_gpio_clr_ren(recv); `}

	# High edge detect
	# Do not use on raspbian, it is bugged!
	fun hen `{ bcm2835_gpio_hen(recv); `}
	fun clr_hen `{ bcm2835_gpio_clr_hen(recv); `}

	# Low edge detect
	# Do not use on raspbian, it is bugged!
	fun len `{ bcm2835_gpio_len(recv); `}
	fun clr_len `{ bcm2835_gpio_clr_len(recv); `}

	fun set_eds `{ bcm2835_gpio_set_eds(recv); `}
	fun eds: Bool `{ return bcm2835_gpio_eds(recv); `}

	# Return input on pin, true for high and false for low
	fun lev: Bool `{ return bcm2835_gpio_lev(recv); `}
end

extern class FunctionSelect `{ bcm2835FunctionSelect `}
	# Input function
	new inpt `{ return BCM2835_GPIO_FSEL_INPT; `}

	# Output function
	new outp `{ return BCM2835_GPIO_FSEL_OUTP; `}

	new alt0 `{ return BCM2835_GPIO_FSEL_ALT0; `}
	new alt1 `{ return BCM2835_GPIO_FSEL_ALT1; `}
	new alt2 `{ return BCM2835_GPIO_FSEL_ALT2; `}
	new alt3 `{ return BCM2835_GPIO_FSEL_ALT3; `}
	new alt4 `{ return BCM2835_GPIO_FSEL_ALT4; `}
	new alt5 `{ return BCM2835_GPIO_FSEL_ALT5; `}
	new mask `{ return BCM2835_GPIO_FSEL_MASK; `}
end

extern class PUDControl `{ bcm2835PUDControl `}
	new off `{ return BCM2835_GPIO_PUD_OFF; `}
	new down `{ return BCM2835_GPIO_PUD_DOWN; `}
	new up `{ return BCM2835_GPIO_PUD_UP; `}
end

redef universal Int
	fun bcm2835_delay `{ bcm2835_delay(recv); `}
	fun bcm2835_delay_micros `{ bcm2835_delayMicroseconds(recv); `}
end
