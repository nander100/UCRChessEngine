#pragma once
#include "square.h"

class bishop : public square {
    public:
        bishop(const string &,int,int);
        void generatePossibleMoves() override;
};

void bishop::generatePossibleMoves() {
    
}

bishop::bishop(const string & color,int x, int y) : square() {
    name = color + "b";
}