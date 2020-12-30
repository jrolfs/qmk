/* Copyright 2019 Brandon Schlack
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "brandonschlack.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│! 1│@ 2│# 3│$ 4│% 5│^ 6│& 7│* 8│( 9│) 0│_ -│+ =│| \│ ⌫ │ ` │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │Tab  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│ | \ │ + │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │Caps  │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│" '│   Enter│ - │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │Shift   │ Z │ X │ C │ V │ B │ N │ M │< ,│> .│? /│ Shift│ ↑ │ ⍉ │
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│ ⌥  │ ⌘  │  Space   │ Fn │ Space  │Cmd│ ⌥ │Fn2│ ← │ ↓ │ → │
 * └────┴────┴────┴──────────┴────┴────────┴───┴───┴───┴───┴───┴───┘
 */
[_BASE] = LAYOUT_all(
  KC_GESC, KC_1,    KC_2,    KC_3, KC_4,   KC_5, KC_6,   KC_7, KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC, KC_GRV,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E, KC_R,   KC_T, KC_Y,   KC_U, KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, /**/     KC_BSLS, KC_VOLU, \
  CTL_ESC, /**/     KC_A,    KC_S, KC_D,   KC_F, KC_G,   KC_H, KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  /**/     KC_VOLD, \
  KC_LSFT, XXXXXXX, KC_Z,    KC_X, KC_C,   KC_V, KC_B,   KC_N, KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, /**/     KC_UP,   KC_MUTE, \
  KC_LCTL, KC_LOPT, KC_LCMD, /**/  KC_SPC, /**/  FN_LYR, /**/  KC_SPC, /**/     KC_RCMD, KC_ROPT, FN2_LYR, KC_LEFT, KC_DOWN, KC_RGHT),

/* Function Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │MKE│ F1│ F2│ F3│ F4│ F5│ F6│ F7│ F8│ F9│F10│F11│F12│LHP│Del│SLP│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │RMod │RH+│RS+│RV+│RST│   │   │   │   │   │F13│F14│F15│ MSN │ » │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │RH-│RS-│RV-│   │   │   │   │KMP│   │   │   │ Adjust │ « │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │RTg│RLy│RTh│VRN│   │   │   │Prv│Nxt│Ply│      │ ⇞ │ ▸ │
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │          │ Fn │ Space  │Cmd│ ⌥ │ ? │Hme│ ⇟ │End│
 * └────┴────┴────┴──────────┴────┴────────┴───┴───┴───┴───┴───┴───┘
 */
[_FN1] = LAYOUT_all(
  QM_MAKE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  MC_LHPD, KC_DEL,  MC_SLPD, \
  RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RESET,   _______, _______, _______, _______, _______, KC_F13,  KC_F14,  KC_F15,  /**/     MC_MSSN, KC_MNXT, \
  _______, /**/     RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, QM_KYMP, _______, _______, _______, TG_ADJT, /**/     KC_MPRV, \
  _______, XXXXXXX, RGB_TOG, RGB_LYR, RGB_THM, QM_VRSN, _______, _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, _______, /**/     KC_PGUP, KC_MPLY, \
  _______, _______, _______, /**/     XXXXXXX, /**/     _______, /**/     XXXXXXX, /**/     _______, _______, XXXXXXX, KC_HOME, KC_PGDN, KC_END),

/* Function Layer 2
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │ ☀ │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │ ☼ │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴─┬─┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │          │    │        │   │   │FN2│   │   │   │
 * └────┴────┴────┴──────────┴────┴────────┴───┴───┴───┴───┴───┴───┘
 */
[_FN2] = LAYOUT_all(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/     _______, KC_BRMU, \
  _______, /**/     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/     KC_BRMD, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /**/     _______, _______, \
  _______, _______, _______, /**/     _______, /**/     _______, /**/     _______, /**/     _______, _______, _______, _______, _______, _______),


/* Adjust Layer Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │     │   │   │EEP│RST│   │   │   │   │   │   │   │   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │ Adjust │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
 * │    │    │    │                        │    │    │ │   │   │   │
 * └────┴────┴────┴────────────────────────┴────┴────┴─┴───┴───┴───┘
 */
[_ADJUST] = LAYOUT_all(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, EEP_RST, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          TG_ADJT,          XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,          XXXXXXX, XXXXXXX, \
  _______, _______, _______,                   XXXXXXX, XXXXXXX, XXXXXXX,                   _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
};

/* Blank Template
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
 * │    │    │    │                        │    │    │ │   │   │   │
 * └────┴────┴────┴────────────────────────┴────┴────┴─┴───┴───┴───┘
 */
/*
[_BLANK] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, \
  _______, _______, _______,                   _______,                            _______, _______,                   _______, _______, _______),
};
*/

const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 12, HSV_CYAN}
);

const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 12, HSV_PURPLE}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer1_layer,
    my_layer2_layer
);

void keyboard_post_init_keymap(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_keymap(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    return state;
}
