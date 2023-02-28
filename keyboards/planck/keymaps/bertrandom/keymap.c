#include "bertrandom.h"

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
      case KC_BERT_MACRO_1:
          if (record->event.pressed) {
          }
          break;
    }

    return process_record_secrets(keycode, record);
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_KB_MUTE, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_F17, KC_SECRET_1,
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_F18, KC_SECRET_2, 
    KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_F5, KC_F6, LSFT(LCMD(KC_F5)), LSFT(KC_F5), KC_SECRET_3, 
    KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R, KC_S, KC_F10, KC_F11, LSFT(KC_F11), LCTL(KC_F5), KC_F19)
};