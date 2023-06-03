#ifndef CHIP8REGISTERS_h
#define CHIP8REGISTERS_h
#include "config.h"

struct chip8_registers{
    unsigned char V[CHIP_TOTAL_DATA_REGISTERS];
    unsigned short I;
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned short PC;
    unsigned char SP;
};
#endif