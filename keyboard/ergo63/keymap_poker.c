#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: qwerty */
	    KEYMAP(ESC, 1,   2,   3,   4,   5,        6,   7,   8,   9,   0,   GRV,  \
		   TAB, Q,   W,   F,   P,   G,        J,   L,   U,   Y,   SCLN,BSLS, \
		   BSPC,A,   R,   S,   T,   D,   LSFT,H,   N,   E,   I,   O,   QUOT, \
		   LSFT,Z,   X,   C,   V,   B,   LGUI,K,   M, COMM,  DOT, SLSH,LBRC,  \
		   LCTL,LALT,FN0, MINS,EQL, BSPC,ENT, SPC, LEFT,DOWN,UP,  RGHT,RBRC ),
/* 1: numbers */
	    KEYMAP(DEL, F1,  F2,  F3,  F4,  F5,       F6,  F7,  F8,  F9,  F10, F11,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS, F12, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,BTN1,TRNS,TRNS,MS_L, MS_D, MS_U, MS_R, TRNS ),

	    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS ),

	    
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_F6),
    [1] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_BSPC),
    [2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),
    [3] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_ENT),
    [4] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_SPC),
    [5] = ACTION_LAYER_TAP_KEY(2, KC_QUOT),

    [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_Z),
    [7] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_X),
    [8] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_DOT),
    [9] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SLSH),

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
	    
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM),
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),
};
