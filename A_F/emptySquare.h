#pragma once
#include "square.h"

class emptySquare : public square {
    public:
        emptySquare(const string &,int,int);
        void move() override { cout << "this is a empty square " << endl;}
        vector< pair<int,int> >& generateLegalMoves() override { }
};

emptySquare::emptySquare(const string & color,int x, int y) : square() {

}