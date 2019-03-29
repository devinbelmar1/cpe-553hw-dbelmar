#include <iostream>
#include <C:\Users\devin\Downloads\FLIF\FLIF-master\src\library\flif.h>
#include <iostream>
#include "Flifmap.hh"
#include <cstring>
using namespace std;

int main() {
    const char filename[]= "test.bmp";
    Bitmap b(320,200);
    b.line(0,0, 100,100, 0xFF0000);
    b.write(filename);
    b.load(filename);
    b.save(filename);
    Bitmap a(300, 200);
    a(&b);
}
