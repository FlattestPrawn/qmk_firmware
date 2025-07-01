# rules.mk

# Set the communication driver to serial
# Basically whether I am using GPIO pins for serial communication or Serial IO pins.
# GPIO pins have more flexible usage and is what I used.
#PLIT_COM_DRIVER = pio



# Enable the main Serial Communication feature
#SERIAL_ENABLE = yes

# enable via remapping
VIA_ENABLE = yes
ENCODER_MAP_ENABLE = yes

# Enable Debugging, already present in keyboard.json
# CONSOLE_ENABLE = yes

ENCODER_ENABLE = yes
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor
