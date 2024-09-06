#pragma once
#include "square.h"

class emptySquare : public square {
    public:
        emptySquare(const string &,int,int);
        void generatePossibleMoves() override { }
};

emptySquare::emptySquare(const string & color,int x, int y) : square() {

}