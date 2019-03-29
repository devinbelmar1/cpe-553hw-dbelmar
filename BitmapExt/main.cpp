#include <iostream>
#include <fstream>
#include <cstdint>
#include "C:\\Users\\devin\\CLionProjects\\ReferenceFilesExt\\Bitmap.cc"
#include "C:\\Users\\devin\\CLionProjects\\ReferenceFilesExt\\Bitmap.hh"

int main() {
	Bitmap b(320,200);
	b.line(0,0, 100,100, 0xFF0000);
	b.write("C:\\Users\\devin\\CLionProjects\\ReferenceFilesExt\\test.bmp");
}
