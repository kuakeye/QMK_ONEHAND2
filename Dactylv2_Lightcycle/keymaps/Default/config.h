#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C
#define MOUSEKEY_INTERVAL 16

#define MOUSEKEY_DELAY 0

#define MOUSEKEY_TIME_TO_MAX 60

#define MOUSEKEY_MAX_SPEED 7

#define MOUSEKEY_WHEEL_DELAY 0

/* Select hand configuration */

#define MASTER_LEFT
// #define _MASTER_RIGHT
 // #define EE_HANDS

#define TAPPING_TERM 150

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 8
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define PERMISSIVE_HOLD


#endif
