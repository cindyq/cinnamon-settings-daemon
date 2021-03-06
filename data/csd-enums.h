/*
 * Copyright © 2010 Bastien Nocera <hadess@hadess.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Authors:
 *	Bastien Nocera <hadess@hadess.net>
 */

#ifndef __csd_enums_h__
#define __csd_enums_h__

typedef enum
{
  CSD_FONT_ANTIALIASING_MODE_NONE,
  CSD_FONT_ANTIALIASING_MODE_GRAYSCALE,
  CSD_FONT_ANTIALIASING_MODE_RGBA
} CsdFontAntialiasingMode;

typedef enum
{
  CSD_FONT_HINTING_NONE,
  CSD_FONT_HINTING_SLIGHT,
  CSD_FONT_HINTING_MEDIUM,
  CSD_FONT_HINTING_FULL
} CsdFontHinting;

typedef enum
{
  CSD_FONT_RGBA_ORDER_RGBA,
  CSD_FONT_RGBA_ORDER_RGB,
  CSD_FONT_RGBA_ORDER_BGR,
  CSD_FONT_RGBA_ORDER_VRGB,
  CSD_FONT_RGBA_ORDER_VBGR
} CsdFontRgbaOrder;

typedef enum
{
  CSD_SMARTCARD_REMOVAL_ACTION_NONE,
  CSD_SMARTCARD_REMOVAL_ACTION_LOCK_SCREEN,
  CSD_SMARTCARD_REMOVAL_ACTION_FORCE_LOGOUT
} CsdSmartcardRemovalAction;

typedef enum
{
  CSD_TOUCHPAD_SCROLL_METHOD_DISABLED,
  CSD_TOUCHPAD_SCROLL_METHOD_EDGE_SCROLLING,
  CSD_TOUCHPAD_SCROLL_METHOD_TWO_FINGER_SCROLLING
} CsdTouchpadScrollMethod;

typedef enum
{
  CSD_BELL_MODE_ON,
  CSD_BELL_MODE_OFF,
  CSD_BELL_MODE_CUSTOM
} CsdBellMode;

typedef enum
{
  CSD_TOUCHPAD_HANDEDNESS_RIGHT,
  CSD_TOUCHPAD_HANDEDNESS_LEFT,
  CSD_TOUCHPAD_HANDEDNESS_MOUSE
} CsdTouchpadHandedness;

typedef enum
{
  CSD_XRANDR_BOOT_BEHAVIOUR_DO_NOTHING,
  CSD_XRANDR_BOOT_BEHAVIOUR_CLONE,
  CSD_XRANDR_BOOT_BEHAVIOUR_DOCK,
  CSD_XRANDR_BOOT_BEHAVIOUR_FOLLOW_LID
} CsdXrandrBootBehaviour;

typedef enum
{
  CSD_WACOM_ROTATION_NONE,
  CSD_WACOM_ROTATION_CW,
  CSD_WACOM_ROTATION_CCW,
  CSD_WACOM_ROTATION_HALF
} CsdWacomRotation;

typedef enum
{
  CSD_WACOM_ACTION_TYPE_NONE,
  CSD_WACOM_ACTION_TYPE_CUSTOM,
  CSD_WACOM_ACTION_TYPE_SWITCH_MONITOR,
  CSD_WACOM_ACTION_TYPE_HELP
} CsdWacomActionType;

typedef enum
{
  CSD_POWER_ACTION_BLANK,
  CSD_POWER_ACTION_SUSPEND,
  CSD_POWER_ACTION_SHUTDOWN,
  CSD_POWER_ACTION_HIBERNATE,
  CSD_POWER_ACTION_INTERACTIVE,
  CSD_POWER_ACTION_NOTHING
} CsdPowerActionType;

typedef enum
{
  CSD_UPDATE_TYPE_ALL,
  CSD_UPDATE_TYPE_SECURITY,
  CSD_UPDATE_TYPE_NONE
} CsdUpdateType;

typedef enum
{
  CSD_NUM_LOCK_STATE_UNKNOWN,
  CSD_NUM_LOCK_STATE_ON,
  CSD_NUM_LOCK_STATE_OFF
} CsdNumLockState;

typedef enum
{
  CSD_INPUT_SOURCES_SWITCHER_OFF,
  CSD_INPUT_SOURCES_SWITCHER_SHIFT_L,
  CSD_INPUT_SOURCES_SWITCHER_ALT_L,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_L,
  CSD_INPUT_SOURCES_SWITCHER_SHIFT_R,
  CSD_INPUT_SOURCES_SWITCHER_ALT_R,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_R,
  CSD_INPUT_SOURCES_SWITCHER_ALT_SHIFT_L,
  CSD_INPUT_SOURCES_SWITCHER_ALT_SHIFT_R,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_SHIFT_L,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_SHIFT_R,
  CSD_INPUT_SOURCES_SWITCHER_SHIFT_L_SHIFT_R,
  CSD_INPUT_SOURCES_SWITCHER_ALT_L_ALT_R,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_L_CTRL_R,
  CSD_INPUT_SOURCES_SWITCHER_ALT_SHIFT,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_SHIFT,
  CSD_INPUT_SOURCES_SWITCHER_ALT_CTRL,
  CSD_INPUT_SOURCES_SWITCHER_CAPS,
  CSD_INPUT_SOURCES_SWITCHER_SHIFT_CAPS,
  CSD_INPUT_SOURCES_SWITCHER_ALT_CAPS,
  CSD_INPUT_SOURCES_SWITCHER_CTRL_CAPS,
} CsdInputSourcesSwitcher;

#endif /* __csd_enums_h__ */
