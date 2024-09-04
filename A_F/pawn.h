#pragma once
#include "pieces.h"

class pawn : public pieces {
    public:
        pawn(const string &,int,int);
        void move() override {}
};

pawn::pawn(const string & color,int x, int y) : pieces(color, x, y) {
    name = color + "p";
}