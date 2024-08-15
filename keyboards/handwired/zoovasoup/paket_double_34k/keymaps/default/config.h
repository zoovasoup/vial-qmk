/*
Copyright 2024 zoovasoup

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Define options
/*#define TAPPING_TERM 135*/
/*#define PERMISSIVE_HOLD*/
/*#define MASTER_LEFT*/
#define EE_HANDS

/*#define USE_I2C*/

/* Use serial communication */
#define USE_SERIAL
#define SOFT_ SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 1

/* zoovasoup preferenced setting */
/* ----------------------------- */

/* tap hold */
#define TAPPING_TERM 190
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

/* mouse setting */
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MOVE_DELTA 18
#define MOUSEKEY_MAX_SPEED 1
#define MOUSEKEY_TIME_TO_MAX 20
#define MOUSEKEY_WHEEL_DELAY 80
#define MOUSEKEY_WHEEL_INTERVAL 20
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_MAX_SPEED 2
#define MOUSEKEY_WHELL_TIME_TO_MAX 50
