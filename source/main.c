#include "pixeloperations.h"
#include "shapeoperations.h"
#include "math.h"
#include "gfx.h"

int main()
{
	//set GBA rendering context to MODE 3 Bitmap Rendering
	REG_DISPCNT = VIDEOMODE_3 | BGMODE_2;

	while(1){
		colour_t m_colour;
		m_colour.a_r = (255 * (sign(-1) + 1)) / -2;
		m_colour.a_g = 0;
		m_colour.a_b = 0;
		plot_line(20, 20, 50, 50, set_colour(m_colour));
		plot_line(20, 20, 80, 20, set_colour(m_colour));
		plot_line(80, 20, 50, 50, set_colour(m_colour));
	}
	return 0;
}