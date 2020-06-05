#include "shapeoperations.h"

void plot_line(int32_t a_x1, int32_t a_y1, int32_t a_x2, int32_t a_y2)
{
    
}

void plot_rectangle(int32_t a_left, int32_t a_top, int32_t a_width, int32_t a_height, uint16_t a_colour)
{
    for (int32_t y = 0; y < a_height; ++y)
    {
        for (int32_t x = 0; x < a_width; ++x)
        {
            plot_pixel(a_left + x, a_top + y, a_colour);
        }
    }
}