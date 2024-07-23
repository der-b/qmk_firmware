// Copyright 2024 Bernd Lehmann (@der-b)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "rev2.h"

void keyboard_pre_init_kb(void) {
    gpio_set_pin_output(USB_SEL_0);
    gpio_set_pin_output(USB_SEL_1);

    // set default port
    gpio_write_pin_high(USB_SEL_0);
    gpio_write_pin_high(USB_SEL_1);
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case USB1:
            gpio_write_pin_high(USB_SEL_0);
            gpio_write_pin_low(USB_SEL_1);
            return false;
        case USB2:
            gpio_write_pin_low(USB_SEL_0);
            gpio_write_pin_high(USB_SEL_1);
            return false;
        case USB3:
            gpio_write_pin_high(USB_SEL_0);
            gpio_write_pin_high(USB_SEL_1);
            return false;
    }
    return true;
}
