#include "shapeoperations.h"
#include "math.h"

void plot_line(int32_t a_x1, int32_t a_y1, int32_t a_x2, int32_t a_y2, uint16_t a_colour)
{
    int32_t dx = abs(a_x2 - a_x1);
    int32_t sx = (a_x1 < a_x2) ? 1 : -1;
    int32_t dy = -abs(a_y2 - a_y1);
    int32_t sy = (a_y1 < a_y2) ? 1 : -1;
    int32_t err = dx + dy;
    while(true)
    {
        plot_pixel(a_x1, a_y1, a_colour);
        if (a_x1 == a_x2 && a_y1 == a_y2) break;
        int32_t e2 = 2 * err;
        if (e2 >= dy)
        {
            err += dy;
            a_x1 += sx;
        }
        if (e2 <= dx)
        {
            err += dx;
            a_y1 += sy;
        }
    }
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