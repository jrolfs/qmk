#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jamie
#define PRODUCT         Hand Squeezed
#define DESCRIPTION     Handwired Planck Keyboard

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D6, B6, D7, D0, D2, B7, C6, D1 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define RGB_DI_PIN D3
#define RGBLIGHT_TIMER
#define RGBLED_NUM 11

#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif
