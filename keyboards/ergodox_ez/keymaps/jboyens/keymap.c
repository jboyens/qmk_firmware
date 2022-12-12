#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

enum layers {
  BASE,
  SYMB,
  MDIA,
  QWTY,
};

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[0] = LAYOUT_ergodox_pretty(
           KC_EQUAL,      KC_1,     KC_2,    KC_3,      KC_4,                   KC_5, KC_LEFT,      KC_RIGHT , KC_6             , KC_7    , KC_8   , KC_9       , KC_0       , KC_MINUS,
       LT(1,KC_TAB),  KC_QUOTE, KC_COMMA,  KC_DOT,      KC_P,                   KC_Y,   TG(1),      TG(2)    , KC_F             , KC_G    , KC_C   , KC_R       , KC_L       , KC_SLASH,
             KC_ESC,      KC_A,     KC_O,    KC_E,      KC_U,                   KC_I,                          KC_D             , KC_H    , KC_T   , KC_N       , KC_S       , KC_ENTER,
            KC_LSPO,   KC_SCLN,     KC_Q,    KC_J,      KC_K,                   KC_X, KC_HYPR,      KC_MEH   , KC_B             , KC_M    , KC_W   , KC_V       , KC_Z       , KC_RSPC ,
     LT(1,KC_GRAVE),  KC_QUOTE,  KC_LALT, KC_LEFT,  KC_RIGHT,                                                                     KC_UP   , KC_DOWN, KC_LBRC    , KC_RBRC    , MO(1)   ,

                                                              LALT_T(KC_APPLICATION), KC_HOME,      KC_PGUP  , KC_ESCAPE,
                                                                                       KC_END,      KC_PGDN,
                                                     KC_BSPC,                KC_LCTL, KC_LGUI,      MO(1)    , KC_LALT          , KC_SPACE
),

[1] = LAYOUT_ergodox_pretty(
KC_ESCAPE,   KC_F1,   KC_F2,       KC_F3,       KC_F4,    KC_F5, _______,      _______, KC_F6  , KC_F7  , KC_F8 , KC_F9, KC_F10   , KC_F11   ,
  _______, KC_EXLM,   KC_AT,     KC_LCBR,     KC_RCBR,  KC_PIPE, _______,      TG(3)  , KC_UP  , KC_7   , KC_8  , KC_9 , KC_ASTR  , KC_BSLS,
  _______, KC_HASH,  KC_DLR,     KC_LPRN,     KC_RPRN, KC_GRAVE,                        KC_DOWN, KC_4   , KC_5  , KC_6 , _______  , _______  ,
  _______, KC_PERC, KC_CIRC,     KC_LBRC,     KC_RBRC,  KC_TILD, _______,      _______, KC_AMPR, KC_1   , KC_2  , KC_3 , KC_BSLS  , _______  ,
  QK_BOOT, _______, _______,     _______,     _______,                                           _______, KC_DOT, KC_0 , KC_EQUAL , _______  ,

                                                        _______, _______,      _______, _______,
                                                                 _______,      _______,
                                            KC_DELETE,  _______, _______,      _______, _______, _______
),

[2] = LAYOUT_ergodox_pretty(
_______, _______,    _______,   _______,  _______,  _______, _______,      _______, _______, _______,    _______,    _______,     _______, _______,
_______, _______,    _______,   KC_UP,    _______,  _______, _______,      _______, _______, _______,    KC_MS_UP,   _______,     _______, _______,
_______, _______,    KC_LEFT,   KC_DOWN,  KC_RIGHT, _______,                        _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, KC_MPLY,
_______, _______,    _______,   KC_MPRV,  KC_MNXT,  _______, _______,      _______, _______, _______,    _______,    _______,     _______, _______,
_______, _______,    KC_MUTE,   KC_VOLD,  KC_VOLU,                                           KC_MS_BTN1, KC_MS_BTN2, _______,     _______, _______,

                                                       _______, _______,      _______, _______,
                                                                _______,      _______,
                                              _______, _______, _______,      _______, _______, KC_WBAK
),

[3] = LAYOUT_ergodox_pretty(
             KC_EQL,        KC_1,          KC_2,    KC_3,      KC_4,          KC_5, KC_LEFT,      KC_RGHT, KC_6         , KC_7    , KC_8   , KC_9   , KC_0   , KC_MINS  ,
             KC_TAB,        KC_Q,          KC_W,    KC_E,      KC_R,          KC_T,   TO(0),      TO(0)  , KC_Y         , KC_U    , KC_I   , KC_O   , KC_P   , KC_SLASH ,
             KC_ESC,        KC_A,          KC_S,    KC_D,      KC_F,          KC_G,                        KC_H         , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_ENTER ,
            KC_LSFT, CTL_T(KC_Z),          KC_X,    KC_C,      KC_V,          KC_B, KC_HYPR,      KC_MEH , KC_N         , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT  ,
    LT(SYMB,KC_GRV),     KC_QUOT, LALT(KC_LSFT), KC_LEFT,   KC_RGHT,                                                      KC_UP   , KC_DOWN, KC_LBRC, KC_RBRC, MO(SYMB) ,

                                                                     ALT_T(KC_APP), KC_HOME,      KC_PGUP, CTL_T(KC_ESC),
                                                                                     KC_END,      KC_PGDN,
                                                          KC_BSPC, LCTL_T(KC_NO), KC_LGUI,      MO(1)  , KC_LALT      , KC_SPACE
)
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

/* qk_tap_dance_action_t tap_dance_actions[] = {}; */

layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
    case 0:
      break;
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
