// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <ddk/device.h>

__BEGIN_CDECLS;

mx_status_t usb_control(mx_device_t* device, uint8_t request_type, uint8_t request,
                               uint16_t value, uint16_t index, void* data, size_t length);

mx_status_t usb_get_descriptor(mx_device_t* device, uint8_t request_type, uint16_t type,
                               uint16_t index, void* data, size_t length);

mx_status_t usb_get_status(mx_device_t* device, uint8_t request_type, uint16_t index,
                          void* data, size_t length);

mx_status_t usb_set_configuration(mx_device_t* device, int config);

mx_status_t usb_set_feature(mx_device_t* device, uint8_t request_type, int feature, int index);

mx_status_t usb_clear_feature(mx_device_t* device, uint8_t request_type, int feature, int index);

__END_CDECLS;
