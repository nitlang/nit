INKSCAPE_DIR ?= $(shell nitls -pP inkscape_tools)

src/gamnit_touch_gamepad.nit: art/virtual_gamepad.svg
	make -C ${INKSCAPE_DIR}
	${INKSCAPE_DIR}/bin/svg_to_png_and_nit -g --src virtual_gamepad_spritesheet.nit --scale 2.0 art/virtual_gamepad.svg
	sed 's/Virtual_GamepadImages/VirtualGamepadSpritesheet/' -i virtual_gamepad_spritesheet.nit
