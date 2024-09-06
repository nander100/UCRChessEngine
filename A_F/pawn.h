#pragma once
#include "square.h"

class pawn : public square {
    public:
        pawn(const string &,int,int);
        void generatePossibleMoves() override;
};

void pawn::generatePossibleMoves() {
    
}

pawn::pawn(const string & color,int x, int y) : square() {
    name = color + "p";
}