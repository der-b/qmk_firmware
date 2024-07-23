// Copyright 2024 Bernd Lehmann (@der-b)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include "quantum.h"

// pins for USB port selection
#define USB_SEL_0 GP16
#define USB_SEL_1 GP17

enum keyboard_keycodes {
  USB1 = QK_KB,
  USB2,
  USB3,
};
