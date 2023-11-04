// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _COLMAK_DH,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLMAK_DH] = LAYOUT(
  //|-----------------------------------------------------------------------------------------|
         KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
         KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
                         KC_TAB,  KC_SPC,  KC_ESC,  KC_ENT, KC_RSFT, KC_BSPC
                    //|-----------------------------------------------------|
    )
};
