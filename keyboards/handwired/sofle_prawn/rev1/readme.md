# handwired/sofle_prawn/rev1

![handwired/sofle_prawn/rev1](https://imgur.com/a/OKmcNza)

My personal budget, handwired, Sofle build. This is a work in progress. Handwired, 3D printed case and plate, hardware source from Amazon.com.

Sofle is 6×4+5 keys column-staggered split keyboard. Based on Lily58, Corne and Helix keyboards.
For details about the keyboard design, refer to Josef's blog: [Sofle Keyboard - a split keyboard based on Lily58 and Crkbd](https://josef-adamcik.cz/electronics/let-me-introduce-you-sofle-keyboard-split-keyboard-based-on-lily58.html)

* Keyboard Maintainer: [Vincent Su](https://github.com/FlattestPrawn)
* Hardware Supported: Waveshare RP2040
* Hardware Availability: [Amazon](https://www.amazon.com/gp/product/B0BZ8D7Y42)

Setup build environment:
    
    https://docs.qmk.fm/newbs_getting_started
        Things I ran into:
            using wsl compiled way faster than qmk msys, but was not able to connect to my rp2040 to flash the firmware
            qmk setup complained about repository not being connected to official qmk_firmware
                fixed by running 'git remote add upstream https://github.com/qmk/qmk_firmware'
                then 'git remote set-url --push upstream no_push'
            I set qmk home using 'qmk setup -H <qmk_folder>' so when I run qmk commands I was getting errors when assuming my filepath needed to start at the folder I was in. When home folder is set, I was able to just run commands exactly as shown below
        

Compile firmware (Not sure if this step is needed since it compiles it when it flashes anyways):
    
    qmk compile -kb handwired/sofle_prawn/rev1 -km via

Flash each half of the keyboard:

    Left half:
        qmk flash -kb handwired/sofle_prawn/rev1 -km via -bl uf2-split-left
        plug usb cable into left half while holding down on the top left key
        let it run
    Right half:
        qmk flash -kb handwired/sofle_prawn/rev1 -km via -bl uf2-split-right
        plug usb cable into left half while holding down on the top left key
        let it run



See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
