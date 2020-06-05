#include "pixeloperations.h"

uint16_t set_colour(colour_t colour)
{
    uint8_t mask = 0x1F;
	return (colour.a_r & mask) | (colour.a_g & mask) << 5 | (colour.a_b & mask) << 10;
}

void plot_pixel(int32_t a_x, int32_t a_y, uint16_t a_colour)
{
    SCREENBUFFER[a_x + a_y*SCREEN_W] = a_colour;
}

