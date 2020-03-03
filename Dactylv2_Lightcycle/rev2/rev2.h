
#define REV2_H

#include "../Dactyl.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)



#define KEYMAP( \
   L00, L01, L02, L03, L04, L05,        R00, R01, R02, R03, R04, R05, \
   L10, L11, L12, L13, L14, L15,        R10, R11, R12, R13, R14, R15, \
   L20, L21, L22, L23, L24, L25,        R20, R21, R22, R23, R24, R25, \
   L30, L31, L32, L33, L34,                 R31, R32, R33, R34, R35, \
   L40, L41, L42, L43,                       R42, R43, R44, R45, \
   L50, L51,                                           R54, R55  \
   )\
   { \
   { L00,   L01,   L02,   L03,   L04,   L05 }, \
   { L10,   L11,   L12,   L13,   L14,   L15 }, \
   { L20,   L21,   L22,   L23,   L24,   L25 }, \
   { L30,   L31,   L32,   L33,   L34,   L01 }, \
   { L40,   L41,   L42,   L43,   KC_1, KC_2 }, \
   { L50,   L51,   KC_3,  KC_4, KC_5, KC_6 },  \
      { L50,   L51,   KC_3, KC_4, KC_5, KC_6 },  \
      { R05, R04, R03, R02, R01, R00 }, \
      { R15, R14, R13, R12, R11, R10 }, \
      { R25, R24, R23, R22, R21, R20 }, \
      { R35, R34, R33, R32, R31, KC_7 }, \
      { R42, R43, R44, R45, KC_8, KC_9 }, \
      { R54, R55, KC_A, KC_B, KC_C, KC_D }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }  \
   }

/*

#define KEYMAP( \
   L00, L01, L02, L03, L04, L05,        R00, R01, R02, R03, R04, R05, \
   L10, L11, L12, L13, L14, L15,        R10, R11, R12, R13, R14, R15, \
   L20, L21, L22, L23, L24, L25,        R20, R21, R22, R23, R24, R25, \
   L30, L31, L32, L33, L34,                 R31, R32, R33, R34, R35, \
   L40, L41, L42, L43,                       R42, R43, R44, R45, \
   L50, L51,                                           R54, R55  \
   )\
   { \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }, \
      { KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6 }  \
   }

*/

/*#define KEYMAP( \
	L00, L01, L02, L03, L04, L05,			 R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15,			 R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,			 R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34,			 		  R31, R32, R33, R34, R35, \
	L40, L41, L42, L43, 			 				   R42, R43, R44, R45, \
	L50, L51,							                         R54, R55  \
	)\
	{ \
	{ L00,   L01,   L02,   L03,   L04,   L05 }, \
	{ L10,   L11,   L12,   L13,   L14,   L15 }, \
	{ L20,   L21,   L22,   L23,   L24,   L25 }, \
	{ L30,   L31,   L32,   L33,   L34,   KC_NO }, \
	{ L40,   L41,   L42,   L43,   KC_NO, KC_NO }, \
	{ L50,   L51,   KC_NO, KC_NO, KC_NO, KC_NO },  \
		{ R05, R04, R03, R02, R01, R00 }, \
		{ R15, R14, R13, R12, R11, R10 }, \
		{ R25, R24, R23, R22, R21, R20 }, \
		{ R35, R34, R33, R32, R31, KC_NO }, \
		{ R45, R44, R43, R42, KC_NO, KC_NO }, \
		{ R55, R54, KC_NO, KC_NO, KC_NO, KC_NO } \
	}*/
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define KEYMAP( \
	L00, L01, L02, L03, L04, L05,			 R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15,			 R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,			 R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34,			 		  R31, R32, R33, R34, R35, \
	L40, L41, L42, L43, 			 				   R42, R43, R44, R45, \
	L50, L51,							                         R54, R55  \
	)\
	{ \
	{ L00,   L01,   L02,   L03,   L04,   L05 }, \
	{ L10,   L11,   L12,   L13,   L14,   L15 }, \
	{ L20,   L21,   L22,   L23,   L24,   L25 }, \
	{ L30,   L31,   L32,   L33,   L34,   KC_NO }, \
	{ L40,   L41,   L42,   L43,   KC_NO, KC_NO }, \
	{ L50,   L51,   KC_NO, KC_NO, KC_NO, KC_NO },  \
		{ R05, R04, R03, R02, R01, R00 }, \
		{ R15, R14, R13, R12, R11, R10 }, \
		{ R25, R24, R23, R22, R21, R20 }, \
		{ R35, R34, R33, R32, R31, KC_NO }, \
		{ R45, R44, R43, R42, KC_NO, KC_NO }, \
		{ R55, R54, KC_NO, KC_NO, KC_NO, KC_NO } \
	}

#endif
