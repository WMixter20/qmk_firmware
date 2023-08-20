// Copyright 2023 WMixter (@WMixter)
// SPDX-License-Identifier: GPL-2.0-or-later
//========================================================================================

#pragma once

#define EE_HANDS

#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define SELECT_SOFT_SERIAL_SPEED 1

#define SPLIT_LAYER_STATE_ENABLE //Allows Layer State to be the same on each side
#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 5
#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5
 

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODERS_PAD_A_RIGHT {  } //SO ENCODER AND TRACKBALL DON"T GET CONFUSED
#define ENCODERS_PAD_B_RIGHT {  } //
#define ENCODER_RESOLUTIONS_RIGHT {  }

// Mouse Configuration
#define SPLIT_POINTING_ENABLE //Allows for Pointing device to data be sent to master side
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN_RIGHT { B6 }
#define PMW33XX_SPI_DIVISOR 64

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200
#define CHARYBDIS_DRAGSCROLL_DPI 200

//#define CHARYBDIS_POINTER_ACCELERATION_ENABLE
//#define MOUSE_SLOPE 1500
//#define DPI_OPTS { 400, 1600 }

#define POINTING_DEVICE_DEBUG

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 5


//========================================================================================
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

