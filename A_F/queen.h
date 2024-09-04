#pragma once
#include "pieces.h"

class queen : public pieces {
    public:
        queen(const string &, int, int);
        void move() override {}
};

queen::queen(const string & color,int x, int y) : pieces(color, x,y) {
    name = color + "q";
}