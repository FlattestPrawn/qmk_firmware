# rules.mk

# Enable split keyboard functionality
SPLIT_KEYBOARD = yes

# Set the communication driver to serial
# Basically whether I am using GPIO pins for serial communication or Serial IO pins.
# GPIO pins have more flexible usage and is what I used.
SPLIT_COM_DRIVER = pio

# enable via remapping
VIA_ENABLE = yes
