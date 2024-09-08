#pragma once
#include "square.h"

class rook : public square {
    public:
        rook(const string &,int,int);
        void generatePossibleMoves(const square * const board[8][8]) override;
};

void rook::generatePossibleMoves(const square * const board[8][8]) {
    
}

rook::rook(const string & color,int x, int y) : square() {
    name = color + "r";
}