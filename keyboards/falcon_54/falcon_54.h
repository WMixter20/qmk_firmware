/* Copyright 2019 Evy Dekkers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
};

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
 
#define LAYOUT_split_5x6( \
        L05,   L04, L03,  L02,  L01,  L00,                 R00, R01, R02, R03, R04, R05, \
        L15,   L14, L13,  L12,  L11,  L10,                 R10, R11, R12, R13, R14, R15, \
        L25,   L24, L23,  L22,  L21,  L20,                 R20, R21, R22, R23, R24, R25, \
               L34, L33,  L32,  L31,  L30,  KB35,          R30, R31, R32, R33, R34,      \
                    LT43, LT42, LT41, LT40,          RT40, RT41, RT42, RT43                    \
    ) \
    { \
        { L00,   L01,   L02,  L03,  L04,   L05     }, \
        { L10,   L11,   L12,  L13,  L14,   L15     }, \
        { L20,   L21,   L22,  L23,  L24,   L25     }, \
        { L30,   L31,   L32,  L33,  L34,   KB35}, \
        { LT40,  LT41,  LT42, LT43, KC_NO, KC_NO   }, \
        { R00,   R01,   R02,  R03,  R04,   R05     }, \
        { R10,   R11,   R12,  R13,  R14,   R15     }, \
        { R20,   R21,   R22,  R23,  R24,   R25     }, \
        { R30,   R31,   R32,  R33,  R34,   KC_NO   }, \
        { RT40,  RT41,  RT42, RT43, KC_NO, KC_NO   }  \
    }

