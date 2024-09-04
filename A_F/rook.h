#pragma once
#include "pieces.h"

class rook : public pieces {
    public:
        rook(const string &,int,int);
        void move() override {}
};

rook::rook(const string & color,int x, int y) : pieces(color, x,y) {
    name = color + "r";
}