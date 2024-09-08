#pragma once
#include "square.h"

class bishop : public square {
    public:
        bishop(const string &,int,int);
        void generatePossibleMoves(const square * const board[8][8]) override;
};

void bishop::generatePossibleMoves(const square * const board[8][8]) {
    
}

bishop::bishop(const string & color,int x, int y) : square() {
    name = color + "b";
}