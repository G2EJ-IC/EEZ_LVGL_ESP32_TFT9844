#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[727] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0xE0, 0x0C, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0xE0, 0x01, 0x40, 0x01, 0x01, 0x28,
    0x00, 0x13, 0x02, 0x1C, 0x00, 0x53, 0x04, 0x00, 0x00, 0x00, 0x1C, 0x10, 0x00, 0x26, 0x70, 0x0C,
    0x2C, 0x00, 0x11, 0x18, 0x06, 0x00, 0x20, 0xFF, 0xFF, 0x1C, 0x00, 0xD3, 0x40, 0x00, 0x00, 0x00,
    0x64, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0xAC, 0x2C, 0x00, 0x00, 0x08, 0x00, 0x6F, 0x2F,
    0x00, 0x00, 0x00, 0xA8, 0x00, 0x01, 0x00, 0x87, 0xF0, 0x96, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C,
    0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42, 0xBC, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0xF4, 0x00,
    0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x2C, 0x01, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x64, 0x01,
    0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x9C, 0x01, 0x00, 0x00, 0xB8, 0x01, 0x00, 0x00, 0xD4, 0x01,
    0x00, 0x00, 0xF0, 0x01, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x44, 0x02,
    0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x7C, 0x02, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0xB4, 0x02,
    0x00, 0x00, 0xD0, 0x02, 0x00, 0x00, 0xEC, 0x02, 0x00, 0x00, 0x08, 0x03, 0x00, 0x00, 0x24, 0x03,
    0x00, 0x00, 0x40, 0x03, 0x00, 0x00, 0x5C, 0x03, 0x00, 0x00, 0x78, 0x03, 0x00, 0x00, 0x94, 0x03,
    0x00, 0x00, 0xB0, 0x03, 0x00, 0x00, 0xCC, 0x03, 0x00, 0x00, 0xE8, 0x03, 0x00, 0x00, 0x04, 0x04,
    0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x3C, 0x04, 0x00, 0x00, 0x58, 0x04, 0x00, 0x00, 0x74, 0x04,
    0x00, 0x00, 0x90, 0x04, 0x00, 0x00, 0xAC, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00, 0xE4, 0x81,
    0x01, 0xF6, 0x12, 0x05, 0x00, 0x00, 0x1C, 0x05, 0x00, 0x00, 0x38, 0x05, 0x00, 0x00, 0x54, 0x05,
    0x00, 0x00, 0x70, 0x05, 0x00, 0x00, 0x8C, 0x05, 0x00, 0x00, 0xA8, 0x05, 0x00, 0x00, 0xC4, 0x05,
    0x00, 0x00, 0x20, 0x4E, 0xD4, 0x00, 0x66, 0x03, 0x00, 0x00, 0x00, 0xD0, 0x05, 0x10, 0x00, 0x5B,
    0xFF, 0xFF, 0x00, 0x00, 0x21, 0x20, 0x00, 0x1B, 0xBC, 0x20, 0x00, 0x1B, 0x22, 0x20, 0x00, 0x1B,
    0xA8, 0x20, 0x00, 0x1B, 0x23, 0x20, 0x00, 0x1B, 0x94, 0x20, 0x00, 0x1B, 0x24, 0x20, 0x00, 0x1B,
    0x80, 0x20, 0x00, 0x1B, 0x25, 0x20, 0x00, 0x62, 0x6C, 0x05, 0x00, 0x00, 0x01, 0x00, 0xC8, 0x00,
    0x00, 0x20, 0x00, 0x1B, 0x26, 0x20, 0x00, 0x1B, 0x5C, 0x40, 0x00, 0x0C, 0x20, 0x00, 0x1F, 0x48,
    0x60, 0x00, 0x0C, 0x13, 0x34, 0x60, 0x00, 0x1F, 0x38, 0x60, 0x00, 0x04, 0x1F, 0x24, 0xC0, 0x00,
    0x0C, 0x1B, 0x10, 0x20, 0x00, 0x1B, 0x27, 0x20, 0x00, 0x2F, 0xFC, 0x04, 0x80, 0x00, 0x0B, 0x22,
    0xE8, 0x04, 0x80, 0x00, 0x2F, 0xEC, 0x04, 0x80, 0x00, 0x03, 0x1B, 0xD8, 0x40, 0x00, 0x1B, 0x28,
    0x20, 0x00, 0x2F, 0xC4, 0x04, 0xA0, 0x01, 0x0B, 0x2F, 0xB0, 0x04, 0xA0, 0x01, 0x0B, 0x2F, 0x9C,
    0x04, 0xE0, 0x00, 0x0B, 0x1F, 0x88, 0xC0, 0x00, 0x0C, 0x13, 0x74, 0xC0, 0x00, 0x1F, 0x78, 0xC0,
    0x00, 0x04, 0x1F, 0x64, 0x40, 0x00, 0x0C, 0x13, 0x50, 0x40, 0x00, 0x1F, 0x54, 0x40, 0x00, 0x04,
    0x1F, 0x40, 0x40, 0x00, 0x0C, 0x1F, 0x2C, 0xC0, 0x00, 0x0C, 0x2F, 0x18, 0x04, 0x20, 0x02, 0x0B,
    0x1F, 0x04, 0x20, 0x00, 0x0C, 0x2F, 0xF0, 0x03, 0x20, 0x00, 0x0B, 0x1F, 0xDC, 0x20, 0x00, 0x0C,
    0x1F, 0xC8, 0x20, 0x00, 0x0C, 0x1F, 0xB4, 0x20, 0x00, 0x0C, 0x1F, 0xA0, 0x20, 0x00, 0x0C, 0x1F,
    0x8C, 0x20, 0x00, 0x0C, 0x2F, 0x78, 0x03, 0x40, 0x01, 0x0B, 0x22, 0x64, 0x03, 0x80, 0x01, 0x2F,
    0x68, 0x03, 0x40, 0x00, 0x03, 0x2F, 0x54, 0x03, 0x80, 0x02, 0x0B, 0x2F, 0x40, 0x03, 0x80, 0x02,
    0x0B, 0x2F, 0x2C, 0x03, 0x80, 0x02, 0x0B, 0x2F, 0x18, 0x03, 0xC0, 0x01, 0x0B, 0x1F, 0x04, 0xC0,
    0x00, 0x0C, 0x22, 0xF0, 0x02, 0xC0, 0x00, 0x2F, 0xF4, 0x02, 0xC0, 0x00, 0x03, 0x2F, 0xE0, 0x02,
    0x40, 0x00, 0x0B, 0x13, 0xCC, 0x40, 0x00, 0x1F, 0xD0, 0x40, 0x00, 0x04, 0x1F, 0xBC, 0x40, 0x00,
    0x0C, 0x2F, 0xA8, 0x02, 0xC0, 0x00, 0x0B, 0x1F, 0x94, 0x40, 0x00, 0x0C, 0x13, 0x80, 0x80, 0x00,
    0x1F, 0x84, 0x80, 0x00, 0x04, 0x2F, 0x70, 0x02, 0x80, 0x01, 0x0B, 0x1B, 0x5C, 0x20, 0x00, 0x2F,
    0x58, 0x02, 0x04, 0x00, 0x37, 0x1F, 0x60, 0x04, 0x00, 0x14, 0x1F, 0x68, 0x04, 0x00, 0x20, 0x1F,
    0x70, 0x04, 0x00, 0x38, 0x1F, 0x78, 0x04, 0x00, 0x08, 0x1F, 0x80, 0x04, 0x00, 0x80, 0x1F, 0x88,
    0x04, 0x00, 0x38, 0x1F, 0x90, 0x04, 0x00, 0x08, 0x1F, 0x98, 0x04, 0x00, 0x20, 0x1F, 0xA0, 0x04,
    0x00, 0x04, 0x2F, 0x00, 0xE0, 0x04, 0x00, 0x34, 0x08, 0x01, 0x00, 0x0F, 0x30, 0x00, 0x41, 0x0F,
    0x3C, 0x00, 0x35, 0x0F, 0x54, 0x00, 0x29, 0x0E, 0x78, 0x00, 0x0F, 0x04, 0x00, 0x77, 0x0F, 0x14,
    0x01, 0xA1, 0x0F, 0x3C, 0x00, 0x10, 0x15, 0x0C, 0x68, 0x0C, 0x0E, 0x01, 0x00, 0x16, 0x01, 0x0B,
    0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};
