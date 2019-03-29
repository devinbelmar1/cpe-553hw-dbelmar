//
// Created by devin on 3/28/2019.
//

#ifndef WHATS_A_FLIF_FLIFMAP_HH
#define WHATS_A_FLIF_FLIFMAP_HH
#pragma once
#include <string>
#include <stdint.h>

using namespace std;

class Bitmap {
private:
    uint32_t* pixels;
    int w;
    int h;
public:
    Bitmap(int width, int height);
    void line(int in1, int in2, int in3, int in4, uint32_t in5);
    void write(const char filename[]);
    void load(const char filename[]);
    void save(const char filename[]);
    ~Bitmap();
};


#endif //WHATS_A_FLIF_FLIFMAP_HH
