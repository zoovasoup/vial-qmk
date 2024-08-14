// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Ent│
      *               └───┤Tab│   │Spc├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT (
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        LSFT_T(KC_A),     LCTL_T(KC_R),   LGUI_T(KC_S),    LALT_T(KC_T),    KC_G,   KC_M,    RALT_T(KC_N),    RGUI_T(KC_E),    RCTL_T(KC_I),    RSFT_T(KC_O),
        KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                           LT3(KC_BSPC), LT1(KC_TAB),           LT2(KC_SPC),  LT3(KC_ENT)
    ),
    [1] = LAYOUT (
        LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_QUOTE,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESCAPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_CAPS_LOCK,
        KC_TRNS, KC_TRNS, KC_DELETE, KC_TRNS
    ),
    [2] = LAYOUT (
        KC_BTN3, KC_BTN2, KC_MS_U, KC_BTN1, KC_MUTE, KC_TRNS, KC_VOLD, KC_VOLU, KC_LBRC, KC_RBRC,
        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS, KC_TRNS,
        0x7c79, KC_BTN1, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT (
        KC_GRAVE, KC_1, KC_2, KC_3, KC_MINUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_ESCAPE, KC_4, KC_5, KC_6, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_DOT, KC_7, KC_8, KC_9, KC_EQUAL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [4] = LAYOUT (
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
