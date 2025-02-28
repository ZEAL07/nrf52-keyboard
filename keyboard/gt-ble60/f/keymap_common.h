/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* 
 * @brief 按键阵列
 * 第一组为实际布局
 * 第二组为按键实际矩阵
 */
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_NO,    KC_NO,    KC_##K45, KC_NO,    KC_NO,    KC_NO,    KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D }  \
}

#define KEYMAP_ROT( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K4C, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K4B, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
	K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, \
	K40, K41, K42, K45, K47, K48, K49, K4A,  \
	R0P, R0N, K4D\
) { \
	{ K00,    K01,    K02,    K03,    K04,    K05,    K06,    K07,    K08,    K09,    K0A,    K0B,    K0C,    KC_NO }, \
	{ K10,    K11,    K12,    K13,    K14,    K15,    K16,    K17,    K18,    K19,    K1A,    K1B,    K1C,    KC_NO }, \
	{ K20,    K21,    K22,    K23,    K24,    K25,    K26,    K27,    K28,    K29,    K2A,    K2B,    K2C,    KC_NO }, \
	{ K30,    KC_NO,  K32,    K33,    K34,    K35,    K36,    K37,    K38,    K39,    K3A,    K3B,    K3C,    KC_NO }, \
	{ K40,    K41,    K42,    R0P,    R0N,    K45,    KC_NO,  K47,    K48,    K49,    K4A,    K4B,    K4C,    K4D }  \
}
