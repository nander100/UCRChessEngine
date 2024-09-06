#pragma once
#include "square.h"

class rook : public square {
    public:
        rook(const string &,int,int);
        void generatePossibleMoves() override;
};

void rook::generatePossibleMoves() {
    
}

rook::rook(const string & color,int x, int y) : square() {
    name = color + "r";
}