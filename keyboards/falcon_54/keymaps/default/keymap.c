// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum wm_keycodes {
    KC_CLEAD = SAFE_RANGE,
};

enum combos {
    MAG_L,
    MAG_R,
    MAG_U,
    MAG_D,
    MAG_ENT,
};

const uint16_t PROGMEM mag_left_combo[] = {KC_CLEAD, KC_BSPC, COMBO_END};
const uint16_t PROGMEM mag_right_combo[] = {KC_CLEAD, KC_SPC, COMBO_END};
const uint16_t PROGMEM mag_up_combo[] = {KC_CLEAD, KC_RCMD, COMBO_END};
const uint16_t PROGMEM mag_down_combo[] = {KC_CLEAD, KC_LCMD, COMBO_END};
const uint16_t PROGMEM mag_ent_combo[] = {KC_CLEAD, KC_ENT, COMBO_END};

combo_t key_combos[] = {
    [MAG_L] = COMBO_ACTION(mag_left_combo),
    [MAG_R] = COMBO_ACTION(mag_right_combo),
    [MAG_U] = COMBO_ACTION(mag_up_combo),
    [MAG_D] = COMBO_ACTION(mag_down_combo),
    [MAG_ENT] = COMBO_ACTION(mag_ent_combo)
};

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    return mouse_report;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_split_5x6(
        KC_ESC,         KC_1,         KC_2,          KC_3,         KC_4,         KC_5,                                         KC_CLEAD,        KC_6,      KC_7,      KC_8,      KC_9,      KC_0,                           
        KC_TAB,         KC_Q,         KC_W,          KC_E,         KC_R,         KC_T,                                         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,      KC_P,                              
        KC_LSFT,        KC_A,         KC_S,          KC_D,         KC_F,         KC_G,                                         KC_H,         KC_J,         KC_K,         KC_L,         KC_SEMICOLON,      KC_QUOTE,                              
                        KC_Z,         KC_X,          KC_C,         KC_V,         KC_B,        KC_MUTE,                         KC_N,         KC_M,         KC_COMMA,     KC_DOT,       KC_SLASH,      
                                                     KC_LCTL,        KC_LALT,      KC_LCMD,      KC_SPC,            KC_BSPC,   KC_RCMD,       KC_ENT,       KC_NO

    ),

    [_FN1] = LAYOUT_split_5x6(
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                       KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                            
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_RIGHT,                                       KC_TRNS,      KC_1,      KC_2,      KC_3,      KC_TRNS,      KC_TRNS,                              
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_DOWN,      KC_TRNS,     KC_LEFT,                                       KC_TRNS,      KC_4,      KC_5,      KC_6,      KC_TRNS,      KC_TRNS,                              
                      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                         KC_TRNS,      KC_7,      KC_8,      KC_9,      KC_TRNS,      
                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,           KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS

    ),

    [_FN2] = LAYOUT_split_5x6(
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                            
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                              
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                              
                      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                       KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      
                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS

    )
};

/* ============================= COPY THIS FOR BUILDING LAYOUTS ===================
    [_FN2] = LAYOUT_split_5x6(
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                            
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                              
        KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                                     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                              
                      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,                       KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      
                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS

    )
*/


/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 * 
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {

      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }

  } 
  return false;
}

//===========COMBOS============================================

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case MAG_L:
      if (pressed) {
            SEND_STRING(SS_LCTL(SS_LOPT(SS_TAP(X_LEFT))));
      }
      break;
    case MAG_R:
      if (pressed) {
            SEND_STRING(SS_LCTL(SS_LOPT(SS_TAP(X_RIGHT))));
      }
      break;
    case MAG_U:
      if (pressed) {
            SEND_STRING(SS_LCTL(SS_LOPT(SS_TAP(X_UP))));
      }
      break;
    case MAG_D:
      if (pressed) {
            SEND_STRING(SS_LCTL(SS_LOPT(SS_TAP(X_DOWN))));
      }
      break;
    case MAG_ENT:
      if (pressed) {
            SEND_STRING(SS_LCTL(SS_LOPT(SS_TAP(X_ENTER))));
      }
      break;
  }
}
 
//SS_LCTL(SS_LOPT(SS_TAP(KC_LEFT))
/**************Prints Row and Column Poisiton in the Console AKA VERY USEFUL DEBUG
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}
*/