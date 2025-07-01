# rules.mk

# Set the communication driver to serial
# Basically whether I am using GPIO pins for serial communication or Serial IO pins.
# GPIO pins have more flexible usage and is what I used.
#SPLIT_COM_DRIVER = pio SEEMS WRONG

# Enable the main Serial Communication feature
SERIAL_ENABLE = yes
# Enable the hardware serial driver for split communication
SERIAL_DRIVER = vendor

# enable via remapping
VIA_ENABLE = yes
ENCODER_MAP_ENABLE = yes

