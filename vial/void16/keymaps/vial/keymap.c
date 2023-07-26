#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ BS│
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ESC│
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │TAB│
     * ├───┼───┼───┼───┤
     * │FN │ 0 │ . │RET│
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_ortho_4x4(
        DF(_BASE),DF(_FN1),DF(_FN2),DF(_FN3),
        KC_F13,   KC_F14,   KC_F15,    KC_F16,
        KC_F17,   KC_F18,   KC_F19,    KC_F20,
        KC_F21,   KC_F22,   KC_F23,    KC_F24
    ),

    [_FN1] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,    _______,
        LSFT(KC_F13),   LSFT(KC_F14),   LSFT(KC_F15),    LSFT(KC_F16),
        LSFT(KC_F17),   LSFT(KC_F18),   LSFT(KC_F19),    LSFT(KC_F20),
        LSFT(KC_F21),   LSFT(KC_F22),   LSFT(KC_F23),    LSFT(KC_F24)
    ),

    [_FN2] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,    _______,
        LCTL(KC_F13),   LCTL(KC_F14),   LCTL(KC_F15),    LCTL(KC_F16),
        LCTL(KC_F17),   LCTL(KC_F18),   LCTL(KC_F19),    LCTL(KC_F20),
        LCTL(KC_F21),   LCTL(KC_F22),   LCTL(KC_F23),    LCTL(KC_F24)
    ),

    [_FN3] = LAYOUT_ortho_4x4(
        _______,   _______,   _______,    _______,
        LALT(KC_F13),   LALT(KC_F14),   LALT(KC_F15),    LALT(KC_F16),
        LALT(KC_F17),   LALT(KC_F18),   LALT(KC_F19),    LALT(KC_F20),
        LALT(KC_F21),   LALT(KC_F22),   LALT(KC_F23),    LALT(KC_F24)
    )
};

/*
 * ROTARY ENCODER
 */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [_FN1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [_FN2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_FN3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
};
#endif
