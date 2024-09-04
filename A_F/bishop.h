#pragma once
#include "pieces.h"

class bishop : public pieces {
    public:
        bishop(const string &,int,int);
        void move() override {}
};

bishop::bishop(const string & color,int x, int y) : pieces(color, x,y) {
    name = color + "b";
}