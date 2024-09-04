#pragma once
#include "pieces.h"

class bishop : public pieces {
    public:
        bishop(const string &);
};

bishop::bishop(const string & color) : pieces(color) {
    name = color + "b";
}