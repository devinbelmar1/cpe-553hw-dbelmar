#include <iostream>
#include <C:\Users\devin\Downloads\FLIF\FLIF-master\src\library\flif.h>
#include <iostream>
#include "Flifmap.hh"
#include <cstring>
using namespace std;

int main() {
    const char filename[]= "test.bmp";
    Bitmap b(320,200,"b");
    b.line(0,0, 100,100, 0xFF0000);
    b.write(filename);
    cout << "write" << "\n";
    b.load(filename);
    cout << "load" << "\n";
    b.save(filename);
    cout << "save" << "\n";
    Bitmap a = b;
    a.name = "a";
    cout << "a = ("<< a.w << "," << a.h << ")\n";
    cout << "b = ("<< b.w << "," << b.h << ")\n";
    cout << "copy\n";
    Bitmap c(420,300,"c");
    cout << "c = ("<< c.w << "," << c.h << ")\n";
    c = b;
    cout << "c = ("<< c.w << "," << c.h << ")\n";
    return 0;
}
