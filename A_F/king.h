#pragma once
#include "pieces.h"

class king : public pieces {
    public:
        king(const string &, int, int);
        void move() override {}
};

king::king(const string & color,int x, int y) : pieces(color, x,y) {
    name = color + "k";
}