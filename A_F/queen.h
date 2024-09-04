#pragma once
#include "pieces.h"

class queen : public pieces {
    public:
        queen(const string &);
};

queen::queen(const string & color) : pieces(color) {
    name = color + "q";
}