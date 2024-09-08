#pragma once
#include "square.h"

class emptySquare : public square {
    public:
        emptySquare(const string &,int,int);
        void generatePossibleMoves(const square * const board[8][8]) override { }
};

emptySquare::emptySquare(const string & color,int x, int y) : square() {

}