/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#pragma once

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// Configure the global tapping term (default: 200ms)
#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 300

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#ifdef QUICK_TAP_TERM
#undef QUICK_TAP_TERM
#endif
#define QUICK_TAP_TERM 0

// Disable permissive h hold.
#ifdef PERMISSIVE_HOLD
#undef PERMISSIVE_HOLD
#endif

// Disable hold on other key press.
#ifdef HOLD_ON_OTHER_KEY_PRESS
#undef HOLD_ON_OTHER_KEY_PRESS
#endif

// Disable tapping force hold (it interferes with One Shot Tap Toggle).
#ifdef TAPPING_FORCE_HOLD
#undef TAPPING_FORCE_HOLD
#endif

#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 3000  /* Time (in ms) before the one shot key is released */

//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10

#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
