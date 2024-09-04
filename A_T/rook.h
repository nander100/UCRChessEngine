#pragma once
#include "pieces.h"

class rook : public pieces {
    public:
        rook(const string &);
};

rook::rook(const string & color) : pieces(color) {
    name = color + "r";
}