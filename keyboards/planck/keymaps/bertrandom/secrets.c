#include "bertrandom.h"

#if (__has_include("secrets.h") && !defined(NO_SECRETS))
#include "secrets.h"
#else
static const char * const secrets[] = {
  "hunter2",
  "hunter3",
  "hunter4",
  "hunter5",
  "hunter6"
};
#endif

bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SECRET_1 ... KC_SECRET_5: // Secrets!  Externally defined strings, not stored in repo
      if (record->event.pressed) {
        send_string(secrets[keycode - KC_SECRET_1]);
      }
      return false;
      break;
  }
  return true;
}