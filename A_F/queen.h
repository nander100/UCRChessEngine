#pragma once
#include "square.h"

class queen : public square {
    public:
        queen(const string &,int,int);
        void generatePossibleMoves() override;
};

void queen::generatePossibleMoves() {
    
}

queen::queen(const string & color,int x, int y) : square() {
    name = color + "q";
}