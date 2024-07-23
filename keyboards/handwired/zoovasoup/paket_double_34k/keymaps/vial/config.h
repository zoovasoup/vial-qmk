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

/*vial settings*/
#define VIAL_KEYBOARD_UID {0xCE, 0x0B, 0x5E, 0xE2, 0x40, 0x60, 0x17, 0xC8}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Define options
/*#define TAPPING_TERM 135*/
/*#define PERMISSIVE_HOLD*/
#define EE_HANDS

/*#define USE_I2C*/

/* Use serial communication */
#define USE_SERIAL
#define SOFT_ SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 1
