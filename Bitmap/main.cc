#include "Bitmap.hh"

int main() {
	Bitmap b; // static sized bitmap 300x200
	//https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
	b.line(0,0, 200,100, 0xFF0000); // Bresenham's algorithm
	b.rect(50,0,100,50, 0x00FF00); // draw a green rectangle top-left=(50,0) w=100, h=50
	b.write("test.bmp");
}
	
