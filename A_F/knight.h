#pragma once
#include "pieces.h"

class knight : public pieces {
    public:
        knight(const string &, int , int);
        void move() override {}
};

knight::knight(const string & color,int x, int y) : pieces(color, x,y) {
    name = color + "n";
}