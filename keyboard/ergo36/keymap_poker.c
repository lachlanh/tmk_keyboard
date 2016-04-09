#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: qwerty */
	    KEYMAP(Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,  \
		   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,     \
		   Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,  \
		             FN0, FN1, FN2, FN3, FN4, FN5                ),
/* 1: numbers */
	    KEYMAP(1,   2,   3,   4,   5,   6,   7,   8,   9,   0,     \
		   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,  \
		   Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,  \
		             FN0, FN1, FN2, FN3, FN4, FN5                ),
/* 2: placeholder */
	    KEYMAP(1,   2,   3,   4,   5,   6,   7,   8,   9,   0,     \
		   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,  \
		   Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,  \
		             FN0, FN1, FN2, FN3, FN4, FN5                ),

/*
		   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
		   */
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_TAB),
    [1] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_BSPC),
    [2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [3] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),
    [4] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_SPC),
    [5] = ACTION_LAYER_TAP_KEY(2, KC_QUOT),
};
