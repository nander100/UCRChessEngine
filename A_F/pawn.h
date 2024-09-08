#pragma once
#include "square.h"

class pawn : public square {
    public:
        pawn(const string &,int,int);
        void generatePossibleMoves(const square * const board[8][8]) override;
};

void pawn::generatePossibleMoves(const square * const board[8][8]) {
    
}

pawn::pawn(const string & color,int x, int y) : square() {
    name = color + "p";
}