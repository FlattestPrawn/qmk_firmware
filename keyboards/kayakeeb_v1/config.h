// config.h

#pragma once

// --- USB Handedness Detection ---

#define SPLIT_USB_DETECT

// --- Serial Communication Pin Configuration (Full-Duplex) ---
// Define the specific GPIO pins on your RP2040 for communication.
// The TX of one half must be wired to the RX of the other.
#define SERIAL_PIO_TX_PIN GP8
#define SERIAL_PIO_RX_PIN GP9

// --- Optional: Increase Communication Speed ---
// You can optionally increase the serial communication speed for lower latency.
// The default is generally sufficient, but for very fast typists or complex features,
// you might consider increasing it. Default: 250000
#define SERIAL_PIO_BAUD_RATE 350000
