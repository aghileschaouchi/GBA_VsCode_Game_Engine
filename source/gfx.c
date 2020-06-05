#include "gfx.h"

void vsync()
{
    while (REG_VCOUNT >= SCREEN_H);
    while (REG_VCOUNT < SCREEN_H);
}