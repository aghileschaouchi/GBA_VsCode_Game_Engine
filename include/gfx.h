#ifndef GFX_H
#define GFX_H

#include "helper.h"
#include "registers.h"

#define REG_DISPCNT (*(vuint32_t*)(REG_BASE))

#define VIDEOMODE_0 0x0000 //sprite mode 0
#define VIDEOMODE_1 0x0001
#define VIDEOMODE_2 0x0002
#define VIDEOMODE_3 0x0003 
#define VIDEOMODE_4 0x0004
#define VIDEOMODE_5 0x0005

#define BGMODE_0 0x0000
#define BGMODE_1 0x0200
#define BGMODE_2 0x0400
#define BGMODE_3 0x0800

#define REG_VCOUNT (*(vuint16_t*)(REG_BASE + 0x06))

//testing vertical blank
extern void vsync();

#endif