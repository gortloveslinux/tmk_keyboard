#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,     9,      0,    MINS,EQL, BSPC, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,     O,      P,    LBRC,RBRC,BSLS, \
           FN0, A,   S,   D,   F,   G,   H,   J,   K,     L,      SCLN, QUOT,     ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,  DOT,    SLSH,          RSFT,  \
           LCTL,LGUI,LALT,     SPACE,      DEL,                 RALT,RGUI,RCTL),

    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,    F9,     F10,  F11, F12, TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,INSERT,PGDOWN, PGUP, HOME,END, TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,  RIGHT,  TRNS, TRNS,     TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,  VOLU,   TRNS,           TRNS, \
           TRNS,TRNS,TRNS,     TRNS,     TRNS,                 TRNS, TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
};
