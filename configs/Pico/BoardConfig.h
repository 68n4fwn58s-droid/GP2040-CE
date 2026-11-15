/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Pico"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_00 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_01 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_15 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_28 GpioAction::ASSIGNED_TO_ADDON

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define TURBO_ENABLED 1
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_TURBO
#define TURBO_LED_PIN 15

#define BOARD_LEDS_PIN 28
#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_FORMAT LED_FORMAT_GRB

#define LIGHT_DATA_NAME_DEFAULT "Standard"
#define LIGHT_DATA_SIZE_DEFAULT 12
#define LIGHT_DATA_DEFAULT \
0,  1, 2,  3, 5,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
1,  1, 4,  3, 3,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
2,  1, 6,  4, 4,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
3,  1, 7,  7, 2,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
4,  1, 8,  3, 10, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
5,  1, 10, 2, 11, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
6,  1, 12, 2, 12, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
7,  1, 14, 2, 13, LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
8,  1, 8,  5, 6,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
9,  1, 10, 4, 7,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
10, 1, 12, 4, 8,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO, \
11, 1, 14, 4, 9,  LightType::LightType_ActionButton, LightInputSource::LightInputSource_GPIO

// LED Profile 0
#define LEDS_PROFILE0_ENABLED 1
#define LEDS_PROFILE0_BASE_ANIMATION_INDEX AnimationNonPressedEffects::AnimationNonPressedEffects_EFFECT_RAINBOW_ROTATE
#define LEDS_PROFILE0_PRESSED_ANIMATION_INDEX AnimationPressedEffects::AnimationPressedEffects_PRESSEDEFFECT_STATIC_COLOR
#define LEDS_PROFILE0_STATIC_COLOR_PRESSED ColorIndexWhite

#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 0
#define I2C0_PIN_SCL 1

// 오른쪽 버튼 레이아웃을 보드 커스텀(B)으로 지정 (왼쪽 레버는 기존 스틱 유지)
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICK
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_BOARD_DEFINED_B

// 메이크스틱 배열: 1열(L1/L2) → 2열(□/×) → 3열(△/○) → 4열(R1/R2)
// 형식: {타입, {X좌표, Y좌표, 가로반지름, 세로반지름, 선두께, 채움, 버튼마스크, 모양}}
#define DEFAULT_BOARD_LAYOUT_B \
  { \
    {GP_ELEMENT_BTN_BUTTON, {54, 27, 6, 6, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {54, 41, 6, 6, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {68, 22, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {68, 36, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {82, 22, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {82, 36, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {96, 22, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {96, 36, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
  }
#endif
