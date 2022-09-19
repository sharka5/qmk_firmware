/*
Copyright 2021 Dimitris Mantzouranis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE = 0,
    _FL,
    _CTRL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*				+--------------------------------------------------------------------------+-------------------+
				| ESC | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|DEL|HOME| END|PGUP|PGDN| RGB|
				+--------------------------------------------------------------------------+----|----|----|----+				
 				|  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP |NLCK|  / |  * |  - |
 				+--------------------------------------------------------------------------+----|----|----|----+
 				|  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  |  7 |  8 |  9 |    |
 				+--------------------------------------------------------------------------+----|----|----|  + +
 				| CAPSLCK |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  RETURN |  4 |  5 |  6 |    |
 				+--------------------------------------------------------------------------+----|----|----|----+
 				| LSHIFT   |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / | RSHIFT | UP |  1 |  2 |  3 |    |
 				+--------------------------------------------------------------------------+----|----|----| ENT+
 				|LCTRL| LGUI|  LALT|            SPACE            | RALT| FN|RCTRL| LFT| DWN| RGT|  0 |  . |    |
 				+--------------------------------------------------------------------------+-------------------+
*/ 				
    /*  Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16         17         18     */
    [_BASE] = { {   KC_ESC,    KC_F1,     KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_DEL,    KC_HOME,   KC_END,    KC_PGUP,   KC_PGDN,   RGB_MOD },
                {   KC_GRV,    KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PMNS },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_NO,     KC_P7,     KC_P8,     KC_P9,     KC_PPLS },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_P4,     KC_P5,     KC_P6,     KC_NO   },
                {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_P1,     KC_P2,     KC_P3,     KC_PENT },
                {  LM(_CTRL, MOD_LCTL),   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RALT,   MO(_FL),   KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT,   KC_P0,     KC_PDOT,   KC_NO   }
              },

/*				+--------------------------------------------------------------------------+-------------------+
				|     |SLCK|PAUS|    |BRLR|BRIN|MPRV| PLY|MNXT|MUTE|VLDN|VLUP|    |   |PSCR|    |    | SLP| TOG|
				+--------------------------------------------------------------------------+----|----|----|----+				
 				|     |    |    |    |    |    |    |    |    |    |    |    |    |        |    |    |    | HUE|
 				+--------------------------------------------------------------------------+----|----|----|----+
 				|       |    |    |    |    |    |    |    |    |    |    |    |    |      |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----| SPD+
 				|         |    |    |    |    |    |    |    |    |    |    |    |         |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----|----+
 				|          |    |    |    |    |    |    |    |    |    |    |        |    |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----| SAT+
 				|     | LALT|  LGUI|                             |     |   |     |    |    |    |    |    |    |
 				+--------------------------------------------------------------------------+-------------------+
*/ 				
    /*  Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16         17         18     */
    [_FL] =   { {     RESET,  KC_SLCK,  KC_PAUS,   KC_APP,  _______,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,   KC_MUTE,     KC_VOLD,   KC_VOLU,  _______,  KC_PSCR,  _______,  _______,  KC_SLEP,  RGB_TOG },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,    KC_NO,  _______,  _______,  _______,  RGB_HUI },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,    KC_NO,  _______,  _______,  _______,  RGB_SPI },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,    KC_NO,  _______,  _______,  _______,    KC_NO },
                {   _______,    KC_NO,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______,  _______,  _______,  _______,  RGB_SAI },
                {   _______,  KC_LALT,  KC_LGUI,    KC_NO,    KC_NO,    KC_NO,  _______,    KC_NO,    KC_NO,    KC_NO,   _______,     MO(_FL),   _______,  _______,  _______,  _______,  _______,  _______,    KC_NO }
              },  

/*				+--------------------------------------------------------------------------+-------------------+
				|     |    |    |    |    |    |    |    |    |    |    |    |    |   |    |    |    |    |    |
				+--------------------------------------------------------------------------+----|----|----|----+				
 				|     |    |    |    |    |    |    |    |    |    |    |    |    |        |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----|----+
 				|       |    |    |    |    |    |    |    |    |    |    |    |    |      |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----|    +
 				|         |    |    |    |    |    |    |    |    |    |    |    |         |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----|----+
 				|          |    |    |    |    |    |    |    |    |    |    |        |    |    |    |    |    |
 				+--------------------------------------------------------------------------+----|----|----|    +
 				|LCTRL|     |      |                             |     |   |     |    |    |    |    |    |    |
 				+--------------------------------------------------------------------------+-------------------+
*/ 				
    /*  Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16         17         18     */
    [_CTRL] = { {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______ },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,    KC_NO,  _______,  _______,  _______,  _______ },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,   _______,  _______,    KC_NO,  _______,  _______,  _______,  _______ },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,    KC_NO,  _______,  _______,  _______,    KC_NO },
                {   _______,    KC_NO,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,     _______,     KC_NO,  _______,  _______,  _______,  _______,  _______,  _______ },
                {   MOD_LCTL, _______,  _______,    KC_NO,    KC_NO,    KC_NO,  _______,    KC_NO,    KC_NO,    KC_NO,   _______,     MO(_FL),   _______,  _______,  _______,  _______,  _______,  _______,    KC_NO }
              }  

};
/*
void dip_switch_update_user(uint8_t index, bool active){
  switch(index){
    case 0:
      if(active){ //BT mode
// do stuff
      }
      else{ //Cable mode
// do stuff
      }
      break;
    case 1:
      if(active){ // Win/Android mode
// do stuff
      }
      else{ // Mac/iOS mode
// do stuff
      }
      break;
  }
}
*/
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
  //layer_state_set_user;
}

void suspend_power_down_user(void) {
    // code will run multiple times while keyboard is suspended
  rgb_matrix_disable_noeeprom();
}

void suspend_wakeup_init_user(void) {
    // code will run on keyboard wakeup
  rgb_matrix_enable_noeeprom();
}


//rgb_matrix_mode(RGB_MATRIX_CUSTOM_fn_layer); //user custom RGB matrix effects


// RGB changes depending on layer value (state)
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _FL: //this doesn't seem effiencent 
        rgb_matrix_set_color_all (0x00, 0x00, 0x00);  //sets all keys to black
        rgb_matrix_set_color (1, 0x99, 0xF5, 0xFF);   // Scroll lock
        rgb_matrix_set_color (2, 0x99, 0xF5, 0xFF);   // Pause
        rgb_matrix_set_color (5, 0x99, 0xF5, 0xFF);   // LED brightness decrease
        rgb_matrix_set_color (6, 0x99, 0xF5, 0xFF);   // LED brightness increase
        rgb_matrix_set_color (7, 0x99, 0xF5, 0xFF);   // Previous track
        rgb_matrix_set_color (8, 0x99, 0xF5, 0xFF);   // Play/Pause
        rgb_matrix_set_color (9, 0x99, 0xF5, 0xFF);   // Next track
        rgb_matrix_set_color (10, 0x99, 0xF5, 0xFF);   // Mute
        rgb_matrix_set_color (11, 0x99, 0xF5, 0xFF);   // Volume down
        rgb_matrix_set_color (12, 0x99, 0xF5, 0xFF);   // Volume up
        rgb_matrix_set_color (14, 0x99, 0xF5, 0xFF);   // Print Screen
        rgb_matrix_set_color (17, 0x99, 0xF5, 0xFF);   // Sleep
        rgb_matrix_set_color (18, 0x99, 0xF5, 0xFF);   // LED Backlight toggle
        rgb_matrix_set_color (36, 0x99, 0xF5, 0xFF);   // Hue increase (shift decrease)
        rgb_matrix_set_color (54, 0x99, 0xF5, 0xFF);   // Speed increase (shift decrease)
        rgb_matrix_set_color (87, 0x99, 0xF5, 0xFF);   // Saturaturation (shift decrease)
        break;
    case _CTRL:
        //rgb_matrix_set_color_all (0x7A, 0x00, 0xFF);    //rgb_purple
        rgb_matrix_set_color (59, 0x7A, 0x00, 0xFF);   // F
        rgb_matrix_set_color (56, 0x7A, 0x00, 0xFF);   // S
        rgb_matrix_set_color (57, 0x7A, 0x00, 0xFF);   // A
        rgb_matrix_set_color (72, 0x7A, 0x00, 0xFF);   // Z
        rgb_matrix_set_color (73, 0x7A, 0x00, 0xFF);   // X
        rgb_matrix_set_color (74, 0x7A, 0x00, 0xFF);   // C
        rgb_matrix_set_color (75, 0x7A, 0x00, 0xFF);   // V
        break;
    /*
    case _PLOVER:
        rgb_matrix_set_color_all (rgb_green);
        break;
    case _ADJUST:
        rgb_matrix_set_color_all (rgb_purple);
        break;
        */
    default: //  for any other layers, or the default layer
        rgb_matrix_set_color_all (0x00, 0xFF, 0x00);
        break;
    }
  return state;
}