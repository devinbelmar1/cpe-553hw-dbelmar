#include <iostream>
#include "MoreMoreBitmap.hh"
#include <cstring>
using namespace std;

int main() {
    const char filename[]= "test.bmp";
    Bitmap b(320,200);
    b.line(0,0, 100,100, 0xFF0000);
    b.write(filename);
    b.load(filename);
    b.save(filename);
}
