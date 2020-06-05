#ifndef HELPER_H
#define HELPER_H

#include "Intellisense.h"
#include <stdint.h>
#include <stdbool.h>

typedef volatile uint8_t    vuint8_t;
typedef volatile uint16_t   vuint16_t;
typedef volatile uint32_t   vuint32_t;
typedef volatile int8_t     vint8_t;
typedef volatile int16_t    vint16_t;
typedef volatile int32_t    vint32_t;

#define SCREENBUFFER ((vuint16_t*)(0x06000000))
#define SCREEN_W 240
#define SCREEN_H 160

typedef struct colour_t
{
    uint8_t a_r;
    uint8_t a_g;
    uint8_t a_b;
} colour_t;

#endif