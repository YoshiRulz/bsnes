// from https://github.com/LIJI32/SameBoy/tree/v0.14.3/BootROMs

const uint8_t ICD::SGB1BootROM[256] = {
0x31,0xFE,0xFF,0x21,0x00,0x80,0x22,0xCB,0x6C,0x28,0xFB,0x3E,0x80,0xE0,0x26,0xE0,
0x11,0x3E,0xF3,0xE0,0x12,0xE0,0x25,0x3E,0x77,0xE0,0x24,0x3E,0x00,0xE0,0x47,0x11,
0x04,0x01,0x21,0x10,0x80,0x1A,0x47,0xCD,0xC9,0x00,0xCD,0xC9,0x00,0x13,0x7B,0xEE,
0x34,0x20,0xF2,0x11,0xEA,0x00,0x0E,0x08,0x1A,0x13,0x22,0x23,0x0D,0x20,0xF9,0x3E,
0x19,0xEA,0x10,0x99,0x21,0x2F,0x99,0x0E,0x0C,0x3D,0x28,0x08,0x32,0x0D,0x20,0xF9,
0x2E,0x0F,0x18,0xF5,0x3E,0x91,0xE0,0x40,0x3E,0xF1,0xE0,0x80,0x21,0x04,0x01,0xAF,
0x4F,0xAF,0xE2,0x3E,0x30,0xE2,0xF0,0x80,0xCD,0xB7,0x00,0xE5,0x06,0x0E,0x16,0x00,
0xCD,0xAD,0x00,0x82,0x57,0x05,0x20,0xF8,0xCD,0xB7,0x00,0xE1,0x06,0x0E,0xCD,0xAD,
0x00,0xCD,0xB7,0x00,0x05,0x20,0xF7,0x3E,0x20,0xE2,0x3E,0x30,0xE2,0xF0,0x80,0xC6,
0x02,0xE0,0x80,0x3E,0x58,0xBD,0x20,0xC9,0x0E,0x13,0x3E,0xC1,0xE2,0x0C,0x3E,0x07,
0xE2,0x3E,0xFC,0xE0,0x47,0x3E,0x01,0x21,0x60,0xC0,0xC3,0xFE,0x00,0x3E,0x4F,0xBD,
0x38,0x02,0x2A,0xC9,0x23,0xAF,0xC9,0x5F,0x16,0x08,0x3E,0x10,0xCB,0x1B,0x38,0x01,
0x87,0xE2,0x3E,0x30,0xE2,0x15,0xC8,0x18,0xF1,0x3E,0x04,0x0E,0x00,0xCB,0x20,0xF5,
0xCB,0x11,0xF1,0xCB,0x11,0x3D,0x20,0xF5,0x79,0x22,0x23,0x22,0x23,0xC9,0xE5,0x21,
0x0F,0xFF,0xCB,0x86,0xCB,0x46,0x28,0xFC,0xE1,0xC9,0x3C,0x42,0xB9,0xA5,0xB9,0xA5,
0x42,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x50,
};

const uint8_t ICD::SGB2BootROM[256] = {
0x31,0xFE,0xFF,0x21,0x00,0x80,0x22,0xCB,0x6C,0x28,0xFB,0x3E,0x80,0xE0,0x26,0xE0,
0x11,0x3E,0xF3,0xE0,0x12,0xE0,0x25,0x3E,0x77,0xE0,0x24,0x3E,0x00,0xE0,0x47,0x11,
0x04,0x01,0x21,0x10,0x80,0x1A,0x47,0xCD,0xC9,0x00,0xCD,0xC9,0x00,0x13,0x7B,0xEE,
0x34,0x20,0xF2,0x11,0xEA,0x00,0x0E,0x08,0x1A,0x13,0x22,0x23,0x0D,0x20,0xF9,0x3E,
0x19,0xEA,0x10,0x99,0x21,0x2F,0x99,0x0E,0x0C,0x3D,0x28,0x08,0x32,0x0D,0x20,0xF9,
0x2E,0x0F,0x18,0xF5,0x3E,0x91,0xE0,0x40,0x3E,0xF1,0xE0,0x80,0x21,0x04,0x01,0xAF,
0x4F,0xAF,0xE2,0x3E,0x30,0xE2,0xF0,0x80,0xCD,0xB7,0x00,0xE5,0x06,0x0E,0x16,0x00,
0xCD,0xAD,0x00,0x82,0x57,0x05,0x20,0xF8,0xCD,0xB7,0x00,0xE1,0x06,0x0E,0xCD,0xAD,
0x00,0xCD,0xB7,0x00,0x05,0x20,0xF7,0x3E,0x20,0xE2,0x3E,0x30,0xE2,0xF0,0x80,0xC6,
0x02,0xE0,0x80,0x3E,0x58,0xBD,0x20,0xC9,0x0E,0x13,0x3E,0xC1,0xE2,0x0C,0x3E,0x07,
0xE2,0x3E,0xFC,0xE0,0x47,0x3E,0xFF,0x21,0x60,0xC0,0xC3,0xFE,0x00,0x3E,0x4F,0xBD,
0x38,0x02,0x2A,0xC9,0x23,0xAF,0xC9,0x5F,0x16,0x08,0x3E,0x10,0xCB,0x1B,0x38,0x01,
0x87,0xE2,0x3E,0x30,0xE2,0x15,0xC8,0x18,0xF1,0x3E,0x04,0x0E,0x00,0xCB,0x20,0xF5,
0xCB,0x11,0xF1,0xCB,0x11,0x3D,0x20,0xF5,0x79,0x22,0x23,0x22,0x23,0xC9,0xE5,0x21,
0x0F,0xFF,0xCB,0x86,0xCB,0x46,0x28,0xFC,0xE1,0xC9,0x3C,0x42,0xB9,0xA5,0xB9,0xA5,
0x42,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x50,
};
