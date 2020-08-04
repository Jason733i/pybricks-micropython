// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2020 The Pybricks Authors

#ifndef PYBRICKS_INCLUDED_PYBRICKS_COMMON_H
#define PYBRICKS_INCLUDED_PYBRICKS_COMMON_H

#include "py/mpconfig.h"

#if PYBRICKS_PY_COMMON

#include <pbio/control.h>
#include <pbio/servo.h>

#include "util_pb/pb_device.h"

#include "py/obj.h"

// pybricks._common.ColorLight()
const mp_obj_type_t pb_type_ColorLight;
mp_obj_t common_ColorLight_obj_make_new(pb_device_t *pbdev);

// pybricks._common.LightArray()
const mp_obj_type_t pb_type_LightArray;
mp_obj_t common_LightArray_obj_make_new(pb_device_t *pbdev, uint8_t light_mode, uint8_t number_of_lights);

// pybricks._common.KeyPad()
const mp_obj_module_t pb_module_buttons;

// pybricks._common.Battery()
const mp_obj_module_t pb_module_battery;

#endif // PYBRICKS_PY_COMMON

#endif // PYBRICKS_INCLUDED_PYBRICKS_COMMON_H