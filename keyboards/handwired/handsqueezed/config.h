#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jamie
#define PRODUCT         UN 3480
#define DESCRIPTION     💣

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D3, D2, F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { C6, D7, B6, B7, D6, C7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW
#define DEBOUNCING_DELAY 5

#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN D3
#define RGBLIGHT_TIMER
#define RGBLED_NUM 11

#define OUTPUT_DEFAULT OUTPUT_AUTO

#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif
