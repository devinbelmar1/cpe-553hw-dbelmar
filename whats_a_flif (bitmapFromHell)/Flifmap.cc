#include "Flifmap.hh"
#include <fstream>
#include <C:\Users\devin\Downloads\FLIF\FLIF-master\src\library\flif.h>
#include <iostream>
#include <stdint.h>
#include <string>



// use a pointer to initialize your image
// to all zeros
using namespace std;
Bitmap::Bitmap(int width, int height, string n) {
    pixels = new uint32_t[width * height];
    w = width;
    h = height;
    name = n;
}
Bitmap::~Bitmap() {
    delete [] pixels;
    cout << name << "\n";
}
void Bitmap::line(int in1, int in2, int in3, int in4, uint32_t in5){
    //(in1, in2) = top, left , in3 = w, in4 = h
    int dx = in3 - in1;
    int dy = in4 - in2;
    int D = 2*dy - dx;
    int y = in2;
    for (int x = in1; x < in3; x++){
        pixels[y * w + x] = in5;
        if (D > 0) {
            y = y + 1;
            D = D - (2 * dx);
        }
        D = D + 2*dy;
    }
}
void Bitmap::load (const char filename[]){
    ifstream inFile;
    inFile.open(filename);
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++) {
            while (inFile >> pixels[j *w + i]) {}
        }
    }
}

void Bitmap::save(const char filename[]) {
    write(filename);
}
void Bitmap::write(const char filename[]){
    ofstream myfile;
    myfile.open(filename);//(filename);
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++){
            if (pixels[j * w + i] == 0) myfile << 0;
            else {
                myfile << pixels[j * w + i] << ' ';
            }
        }
        myfile << endl;
    }
    myfile.close();
}
Bitmap::Bitmap(const Bitmap& og) : w(og.w), h(og.h){
    pixels = (new uint32_t[w*h]);
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++) {
            pixels[j * w + i] = og.pixels[j * w + i];
        }
    }
}
/*
//= operator that I cant figure out how to get working
Bitmap &operator =(const Bitmap& og) {
    pixels = (new uint32_t[w * h]);
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++) {
            pixels[j * w + i] = og.pixels[j * w + i];
        }
    }
    return //a Bitmap
}
*/