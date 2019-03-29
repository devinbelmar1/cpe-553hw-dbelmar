//#ifndef BITMAP_HH__
//#define BITMAP_HH__
#pragma once

class Bitmap {
private:
	int pixels[200][300]; // 200 rows of 300 each
public:
	Bitmap();
	void line(int x, int y, int w, int h, uint32_t color);
	void write(string filename);
};
//#endif

