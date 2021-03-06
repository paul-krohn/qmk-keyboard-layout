/* Copyright 2017 benlyall, MechMerlin
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

/* This is the default ANSI layout provided by the KBP V60 Type R
* as depicted in their manual and on the stock keycaps.
*/
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap 0: Default Layer (Qwerty)
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space              |Fn0 |Gui |App|Ctrl|
   * `-----------------------------------------------------------'
   */
  [0] = LAYOUT_60_ansi(
	       KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
	       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
	       MT(MOD_LCTL, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  \
	       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,   \
	       MO(1), KC_LALT, KC_LGUI,          KC_SPC,                                      KC_RGUI,  KC_RALT,   MO(2),      MO(1)),

  /* Keymap 1: FN Layer
   * ,-----------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
   * |-----------------------------------------------------------|
   * |     |   |Up |   |   |   |   |   |Prt|Scl|Pau|Up|   | Ins  |
   * |-----------------------------------------------------------|
   * |      |Lft|Dwn|Rig|   |   |   |   |Hme|PgU|Lef|Rig|        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |VolD|VolU|Mut|End|PgD|Dwn|        |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  [1] = LAYOUT_60_ansi(
        KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL, \
        KC_TRNS,   KC_HOME,  KC_UP,    KC_PGUP,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, KC_PSCR, KC_SLCK, KC_MEDIA_PLAY_PAUSE, KC_UP,    KC_TRNS,          KC_INS, \
        KC_TRNS,   KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT,          KC_TRNS,          \
        KC_TRNS,   KC_END,   KC_TRNS,  KC_PGDN,  KC_TRNS,  KC_VOLD,   KC_VOLU, KC_MUTE, KC_END,  KC_PGDN,  KC_DOWN,           KC_TRNS,  \
        KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,                                                           KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS),
  /* third layer is for "Mac" keys and window manager keys; see README.md for details */
    [2] = LAYOUT_60_ansi(
         /* There are a few keys that can be made more Mac-like: brightness up/down (f1/f2), media pervious (f7), play/pause (f8), and media next (f9)
            as well as volume controns mute (f10), down (f11) and up (f12). mission control (f3) and launchpad (f4) appear un-mappable, and the keyboard
            brightness keys not pointful on an unlit keyboard. */
         KC_TRNS,  KC_BRMD, KC_BRMU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_POWER, \
         KC_TRNS,  KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_KP_SLASH, KC_KP_ASTERISK, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_TRNS,  KC_KP_MINUS, KC_KP_PLUS, KC_KP_ENTER, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_TRNS,  KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_KP_DOT, KC_KP_EQUAL, KC_KP_COMMA, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

void led_set_user(uint8_t usb_led) {

}
