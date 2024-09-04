#pragma once
#include "pieces.h"

class pawn : public pieces {
    public:
        pawn(const string &);
};

pawn::pawn(const string & color) : pieces(color) {
    name = color + "p";
}