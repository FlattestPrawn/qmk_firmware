// config.h

#pragma once

//Store Handedness in RP2040 EEPROM
#define EE_HANDS

// --- Serial Communication Pin Configuration (Full-Duplex) ---
// Define the specific GPIO pins on your RP2040 for communication.
// The TX of one half must be wired to the RX of the other.
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP8
#define SERIAL_USART_RX_PIN GP9

// --- Optional: Increase Communication Speed ---
// You can optionally increase the serial communication speed for lower latency.
// The default is generally sufficient, but for very fast typists or complex features,
// you might consider increasing it. Default: 250000
#define SERIAL_PIO_BAUD_RATE 250000

// --- VIA/VIAL CONFIGURATION ---

// 1. Assign a unique Vendor ID and Product ID for your keyboard.
//    For a personal project, you can generate a random 32-bit number (8 hex characters)
//    for the Product ID. The Vendor ID (VID) can be a personal, unused one.
//    You can get one officially from pid.codes for open source projects.
#define VENDOR_ID    0x88AA //Random VID I chose
#define PRODUCT_ID   0xF8DE // Random PID I chose

// 2. Define the number of layers you want to be available in VIA.
//    This number MUST match the number of layers in your keymap.c file.
//    Let's assume you have 4 layers: BASE, LOWER, RAISE, ADJUST.
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// 3. (Optional but Recommended) Increase EEPROM size for RP2040
//    The RP2040 has plenty of flash storage that can be used to simulate EEPROM.
//    Increasing this gives VIA more space to store settings like custom lighting.
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095
