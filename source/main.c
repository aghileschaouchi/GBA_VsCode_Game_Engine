#include "pixeloperations.h"
#include "shapeoperations.h"
#include "gfx.h"

int main()
{
	//set GBA rendering context to MODE 3 Bitmap Rendering
	REG_DISPCNT = VIDEOMODE_3 | BGMODE_2;

	while(1){
		colour_t m_colour;
		m_colour.a_r = 0;
		m_colour.a_g = 0;
		m_colour.a_b = 255;
		plot_rectangle(20, 20, SCREEN_W - 40, SCREEN_H - 40, set_colour(m_colour));
	}
	return 0;
}