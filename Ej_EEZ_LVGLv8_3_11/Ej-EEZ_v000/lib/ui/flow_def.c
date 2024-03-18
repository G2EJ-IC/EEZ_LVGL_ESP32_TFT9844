#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[369] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0xC0, 0x04, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0xE0, 0x01, 0x40, 0x01, 0x01, 0x28,
    0x00, 0x13, 0x02, 0x1C, 0x00, 0x00, 0x10, 0x00, 0x13, 0x1C, 0x10, 0x00, 0x26, 0x50, 0x04, 0x2C,
    0x00, 0x11, 0x0C, 0x06, 0x00, 0x73, 0xFF, 0xFF, 0x10, 0x00, 0x00, 0x00, 0x34, 0x20, 0x00, 0x00,
    0x08, 0x00, 0x6F, 0x12, 0x00, 0x00, 0x00, 0x30, 0x00, 0x01, 0x00, 0x0F, 0xD0, 0x64, 0x65, 0x66,
    0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0x48, 0x10, 0x00, 0xF0, 0x05, 0x00, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00,
    0x00, 0xF0, 0x68, 0x00, 0xF6, 0x1E, 0x01, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x44, 0x01, 0x00,
    0x00, 0x60, 0x01, 0x00, 0x00, 0x7C, 0x01, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0xB4, 0x01, 0x00,
    0x00, 0xD0, 0x01, 0x00, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x24, 0x02, 0x00,
    0x00, 0x20, 0x4E, 0x60, 0x00, 0x10, 0x02, 0x88, 0x00, 0x16, 0x02, 0x10, 0x00, 0x2E, 0xFF, 0xFF,
    0x20, 0x00, 0x1B, 0x18, 0x20, 0x00, 0x1B, 0x21, 0x20, 0x00, 0x00, 0x05, 0x00, 0x13, 0x01, 0x08,
    0x00, 0x00, 0x20, 0x00, 0x1B, 0x22, 0x20, 0x00, 0x2F, 0xEC, 0x01, 0x40, 0x00, 0x0B, 0x22, 0xD4,
    0x01, 0x40, 0x00, 0x2F, 0xD4, 0x01, 0x40, 0x00, 0x03, 0x2F, 0xC0, 0x01, 0xA0, 0x00, 0x0B, 0x1F,
    0xA8, 0x60, 0x00, 0x0C, 0x13, 0x90, 0x60, 0x00, 0x1F, 0x90, 0x60, 0x00, 0x04, 0x1B, 0x7C, 0x40,
    0x00, 0x0C, 0x20, 0x00, 0x1F, 0x64, 0x60, 0x00, 0x0C, 0x13, 0x4C, 0x60, 0x00, 0x1F, 0x4C, 0x60,
    0x00, 0x04, 0x1F, 0x38, 0xC0, 0x00, 0x0C, 0x1B, 0x20, 0x20, 0x00, 0x1B, 0x23, 0x20, 0x00, 0x1F,
    0x08, 0x40, 0x00, 0x0C, 0x2F, 0xF0, 0x00, 0xC0, 0x00, 0x0B, 0x2F, 0xD8, 0x00, 0xC0, 0x00, 0x0B,
    0x13, 0xC0, 0xC0, 0x02, 0x1F, 0xC0, 0x40, 0x00, 0x04, 0x1B, 0xAC, 0x40, 0x00, 0x2F, 0xA4, 0x00,
    0x04, 0x00, 0x07, 0x2E, 0xAC, 0x00, 0x04, 0x00, 0x1F, 0xB4, 0x04, 0x00, 0x08, 0x1F, 0xBC, 0x04,
    0x00, 0x08, 0x1F, 0xC4, 0x04, 0x00, 0x20, 0x13, 0xCC, 0x04, 0x00, 0x2F, 0x00, 0xE0, 0x04, 0x00,
    0x04, 0x08, 0x01, 0x00, 0x0F, 0x1C, 0x00, 0x19, 0x0F, 0x24, 0x00, 0x3D, 0x0F, 0x3C, 0x00, 0x18,
    0x10, 0x0C, 0x84, 0x03, 0x0F, 0x20, 0x04, 0x04, 0x07, 0x1B, 0x02, 0x50, 0x00, 0x00, 0x00, 0x00,
    0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};

